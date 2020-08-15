-- VHDL global package produced by vc2vhdl from virtual circuit (vc) description 
library ieee;
use ieee.std_logic_1164.all;
package ahir_system_global_package is -- 
  constant filter_base_address : std_logic_vector(3 downto 0) := "0000";
  constant filter_start_addr : std_logic_vector(5 downto 0) := "001000";
  constant ifmaps2_base_address : std_logic_vector(3 downto 0) := "0000";
  constant ifmaps_base_address : std_logic_vector(3 downto 0) := "0000";
  constant last_value_J : std_logic_vector(4 downto 0) := "00100";
  constant mem_array_base_address : std_logic_vector(6 downto 0) := "0000000";
  constant read_signal : std_logic_vector(0 downto 0) := "1";
  constant start_accelerator_col : std_logic_vector(4 downto 0) := "00101";
  constant start_accelerator_row : std_logic_vector(5 downto 0) := "001001";
  constant unused_const : std_logic_vector(3 downto 0) := "0000";
  constant write_data_one : std_logic_vector(15 downto 0) := "0000000000000001";
  constant write_data_zero : std_logic_vector(15 downto 0) := "0000000000000000";
  constant write_signal : std_logic_vector(0 downto 0) := "0";
  -- 
end package ahir_system_global_package;
