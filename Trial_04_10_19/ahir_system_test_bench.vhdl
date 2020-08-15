library std;
use std.standard.all;
library ieee;
use ieee.std_logic_1164.all;
library aHiR_ieee_proposed;
use aHiR_ieee_proposed.math_utility_pkg.all;
use aHiR_ieee_proposed.fixed_pkg.all;
use aHiR_ieee_proposed.float_pkg.all;
library ahir;
use ahir.memory_subsystem_package.all;
use ahir.types.all;
use ahir.subprograms.all;
use ahir.components.all;
use ahir.basecomponents.all;
use ahir.operatorpackage.all;
use ahir.floatoperatorpackage.all;
use ahir.utilities.all;
library GhdlLink;
use GhdlLink.LogUtilities.all;
library work;
use work.ahir_system_global_package.all;
library GhdlLink;
use GhdlLink.Utility_Package.all;
use GhdlLink.Vhpi_Foreign.all;
entity ahir_system_Test_Bench is -- 
  -- 
end entity;
architecture VhpiLink of ahir_system_Test_Bench is -- 
  component ahir_system is -- 
    port (-- 
      clk : in std_logic;
      reset : in std_logic;
      acc_mem_request_1_pipe_write_data: in std_logic_vector(31 downto 0);
      acc_mem_request_1_pipe_write_req : in std_logic_vector(0 downto 0);
      acc_mem_request_1_pipe_write_ack : out std_logic_vector(0 downto 0);
      acc_mem_response_1_pipe_read_data: out std_logic_vector(15 downto 0);
      acc_mem_response_1_pipe_read_req : in std_logic_vector(0 downto 0);
      acc_mem_response_1_pipe_read_ack : out std_logic_vector(0 downto 0);
      accelerator_done_pipe_read_data: out std_logic_vector(15 downto 0);
      accelerator_done_pipe_read_req : in std_logic_vector(0 downto 0);
      accelerator_done_pipe_read_ack : out std_logic_vector(0 downto 0);
      env_mem_request_1_pipe_write_data: in std_logic_vector(31 downto 0);
      env_mem_request_1_pipe_write_req : in std_logic_vector(0 downto 0);
      env_mem_request_1_pipe_write_ack : out std_logic_vector(0 downto 0);
      env_mem_request_2_pipe_write_data: in std_logic_vector(31 downto 0);
      env_mem_request_2_pipe_write_req : in std_logic_vector(0 downto 0);
      env_mem_request_2_pipe_write_ack : out std_logic_vector(0 downto 0);
      env_mem_response_1_pipe_read_data: out std_logic_vector(15 downto 0);
      env_mem_response_1_pipe_read_req : in std_logic_vector(0 downto 0);
      env_mem_response_1_pipe_read_ack : out std_logic_vector(0 downto 0);
      env_mem_response_2_pipe_read_data: out std_logic_vector(15 downto 0);
      env_mem_response_2_pipe_read_req : in std_logic_vector(0 downto 0);
      env_mem_response_2_pipe_read_ack : out std_logic_vector(0 downto 0);
      read_sums_pipe_read_data: out std_logic_vector(15 downto 0);
      read_sums_pipe_read_req : in std_logic_vector(0 downto 0);
      read_sums_pipe_read_ack : out std_logic_vector(0 downto 0);
      start_accelerator_pipe_write_data: in std_logic_vector(15 downto 0);
      start_accelerator_pipe_write_req : in std_logic_vector(0 downto 0);
      start_accelerator_pipe_write_ack : out std_logic_vector(0 downto 0)); -- 
    -- 
  end component;
  signal clk: std_logic := '0';
  signal reset: std_logic := '1';
  signal accMemAccessDaemon_tag_in: std_logic_vector(1 downto 0);
  signal accMemAccessDaemon_tag_out: std_logic_vector(1 downto 0);
  signal accMemAccessDaemon_start_req : std_logic := '0';
  signal accMemAccessDaemon_start_ack : std_logic := '0';
  signal accMemAccessDaemon_fin_req   : std_logic := '0';
  signal accMemAccessDaemon_fin_ack   : std_logic := '0';
  signal accelerator_tag_in: std_logic_vector(1 downto 0);
  signal accelerator_tag_out: std_logic_vector(1 downto 0);
  signal accelerator_start_req : std_logic := '0';
  signal accelerator_start_ack : std_logic := '0';
  signal accelerator_fin_req   : std_logic := '0';
  signal accelerator_fin_ack   : std_logic := '0';
  signal memAccessDaemon_tag_in: std_logic_vector(1 downto 0);
  signal memAccessDaemon_tag_out: std_logic_vector(1 downto 0);
  signal memAccessDaemon_start_req : std_logic := '0';
  signal memAccessDaemon_start_ack : std_logic := '0';
  signal memAccessDaemon_fin_req   : std_logic := '0';
  signal memAccessDaemon_fin_ack   : std_logic := '0';
  signal memAccessDaemon2_tag_in: std_logic_vector(1 downto 0);
  signal memAccessDaemon2_tag_out: std_logic_vector(1 downto 0);
  signal memAccessDaemon2_start_req : std_logic := '0';
  signal memAccessDaemon2_start_ack : std_logic := '0';
  signal memAccessDaemon2_fin_req   : std_logic := '0';
  signal memAccessDaemon2_fin_ack   : std_logic := '0';
  -- write to pipe acc_mem_request_1
  signal acc_mem_request_1_pipe_write_data: std_logic_vector(31 downto 0);
  signal acc_mem_request_1_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal acc_mem_request_1_pipe_write_ack : std_logic_vector(0 downto 0);
  -- read from pipe acc_mem_response_1
  signal acc_mem_response_1_pipe_read_data: std_logic_vector(15 downto 0);
  signal acc_mem_response_1_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal acc_mem_response_1_pipe_read_ack : std_logic_vector(0 downto 0);
  -- read from pipe accelerator_done
  signal accelerator_done_pipe_read_data: std_logic_vector(15 downto 0);
  signal accelerator_done_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal accelerator_done_pipe_read_ack : std_logic_vector(0 downto 0);
  -- write to pipe env_mem_request_1
  signal env_mem_request_1_pipe_write_data: std_logic_vector(31 downto 0);
  signal env_mem_request_1_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal env_mem_request_1_pipe_write_ack : std_logic_vector(0 downto 0);
  -- write to pipe env_mem_request_2
  signal env_mem_request_2_pipe_write_data: std_logic_vector(31 downto 0);
  signal env_mem_request_2_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal env_mem_request_2_pipe_write_ack : std_logic_vector(0 downto 0);
  -- read from pipe env_mem_response_1
  signal env_mem_response_1_pipe_read_data: std_logic_vector(15 downto 0);
  signal env_mem_response_1_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal env_mem_response_1_pipe_read_ack : std_logic_vector(0 downto 0);
  -- read from pipe env_mem_response_2
  signal env_mem_response_2_pipe_read_data: std_logic_vector(15 downto 0);
  signal env_mem_response_2_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal env_mem_response_2_pipe_read_ack : std_logic_vector(0 downto 0);
  -- read from pipe read_sums
  signal read_sums_pipe_read_data: std_logic_vector(15 downto 0);
  signal read_sums_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal read_sums_pipe_read_ack : std_logic_vector(0 downto 0);
  -- write to pipe start_accelerator
  signal start_accelerator_pipe_write_data: std_logic_vector(15 downto 0);
  signal start_accelerator_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal start_accelerator_pipe_write_ack : std_logic_vector(0 downto 0);
  -- 
begin --
  -- clock/reset generation 
  clk <= not clk after 5 ns;
  -- assert reset for four clocks.
  process
  begin --
    Vhpi_Initialize;
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    reset <= '0';
    while true loop --
      wait until clk = '0';
      Vhpi_Listen;
      Vhpi_Send;
      --
    end loop;
    wait;
    --
  end process;
  -- connect all the top-level modules to Vhpi
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("acc_mem_request_1 req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      acc_mem_request_1_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("acc_mem_request_1 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,32);
      acc_mem_request_1_pipe_write_data <= Unpack_String(port_val_string,32);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("acc_mem_request_1 ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(acc_mem_request_1_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      wait until clk = '1';
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("acc_mem_response_1 req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      acc_mem_response_1_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("acc_mem_response_1 ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(acc_mem_response_1_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("acc_mem_response_1 0");
      port_val_string := Pack_SLV_To_Vhpi_String(acc_mem_response_1_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,16);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      wait until clk = '1';
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("accelerator_done req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      accelerator_done_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("accelerator_done ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(accelerator_done_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("accelerator_done 0");
      port_val_string := Pack_SLV_To_Vhpi_String(accelerator_done_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,16);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("env_mem_request_1 req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      env_mem_request_1_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("env_mem_request_1 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,32);
      env_mem_request_1_pipe_write_data <= Unpack_String(port_val_string,32);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("env_mem_request_1 ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(env_mem_request_1_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("env_mem_request_2 req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      env_mem_request_2_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("env_mem_request_2 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,32);
      env_mem_request_2_pipe_write_data <= Unpack_String(port_val_string,32);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("env_mem_request_2 ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(env_mem_request_2_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("env_mem_response_1 req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      env_mem_response_1_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("env_mem_response_1 ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(env_mem_response_1_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("env_mem_response_1 0");
      port_val_string := Pack_SLV_To_Vhpi_String(env_mem_response_1_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,16);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("env_mem_response_2 req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      env_mem_response_2_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("env_mem_response_2 ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(env_mem_response_2_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("env_mem_response_2 0");
      port_val_string := Pack_SLV_To_Vhpi_String(env_mem_response_2_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,16);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      wait until clk = '1';
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      wait until clk = '1';
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("read_sums req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      read_sums_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("read_sums ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(read_sums_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("read_sums 0");
      port_val_string := Pack_SLV_To_Vhpi_String(read_sums_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,16);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("start_accelerator req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      start_accelerator_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("start_accelerator 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,16);
      start_accelerator_pipe_write_data <= Unpack_String(port_val_string,16);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("start_accelerator ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(start_accelerator_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  ahir_system_instance: ahir_system -- 
    port map ( -- 
      clk => clk,
      reset => reset,
      acc_mem_request_1_pipe_write_data  => acc_mem_request_1_pipe_write_data, 
      acc_mem_request_1_pipe_write_req  => acc_mem_request_1_pipe_write_req, 
      acc_mem_request_1_pipe_write_ack  => acc_mem_request_1_pipe_write_ack,
      acc_mem_response_1_pipe_read_data  => acc_mem_response_1_pipe_read_data, 
      acc_mem_response_1_pipe_read_req  => acc_mem_response_1_pipe_read_req, 
      acc_mem_response_1_pipe_read_ack  => acc_mem_response_1_pipe_read_ack ,
      accelerator_done_pipe_read_data  => accelerator_done_pipe_read_data, 
      accelerator_done_pipe_read_req  => accelerator_done_pipe_read_req, 
      accelerator_done_pipe_read_ack  => accelerator_done_pipe_read_ack ,
      env_mem_request_1_pipe_write_data  => env_mem_request_1_pipe_write_data, 
      env_mem_request_1_pipe_write_req  => env_mem_request_1_pipe_write_req, 
      env_mem_request_1_pipe_write_ack  => env_mem_request_1_pipe_write_ack,
      env_mem_request_2_pipe_write_data  => env_mem_request_2_pipe_write_data, 
      env_mem_request_2_pipe_write_req  => env_mem_request_2_pipe_write_req, 
      env_mem_request_2_pipe_write_ack  => env_mem_request_2_pipe_write_ack,
      env_mem_response_1_pipe_read_data  => env_mem_response_1_pipe_read_data, 
      env_mem_response_1_pipe_read_req  => env_mem_response_1_pipe_read_req, 
      env_mem_response_1_pipe_read_ack  => env_mem_response_1_pipe_read_ack ,
      env_mem_response_2_pipe_read_data  => env_mem_response_2_pipe_read_data, 
      env_mem_response_2_pipe_read_req  => env_mem_response_2_pipe_read_req, 
      env_mem_response_2_pipe_read_ack  => env_mem_response_2_pipe_read_ack ,
      read_sums_pipe_read_data  => read_sums_pipe_read_data, 
      read_sums_pipe_read_req  => read_sums_pipe_read_req, 
      read_sums_pipe_read_ack  => read_sums_pipe_read_ack ,
      start_accelerator_pipe_write_data  => start_accelerator_pipe_write_data, 
      start_accelerator_pipe_write_req  => start_accelerator_pipe_write_req, 
      start_accelerator_pipe_write_ack  => start_accelerator_pipe_write_ack); -- 
  -- 
end VhpiLink;
