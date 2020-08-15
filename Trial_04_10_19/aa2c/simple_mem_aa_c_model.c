#include <pthread.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <simple_mem_aa_c_model_internal.h>
#include <simple_mem_aa_c_model.h>
FILE* simple_mem___report_log_file__ = NULL;
int simple_mem___trace_on__ = 0;
void simple_mem__set_trace_file(FILE* fp) {
simple_mem___report_log_file__ = fp;
}
bit_vector simple_mem__filter[4][4];
#define filter (simple_mem__filter)

bit_vector simple_mem__filter_start_addr;
#define filter_start_addr (simple_mem__filter_start_addr)

bit_vector simple_mem__ifmaps[4][4];
#define ifmaps (simple_mem__ifmaps)

bit_vector simple_mem__ifmaps2[4][4];
#define ifmaps2 (simple_mem__ifmaps2)

bit_vector simple_mem__last_value_J;
#define last_value_J (simple_mem__last_value_J)

bit_vector simple_mem__mem_array[12][8];
#define mem_array (simple_mem__mem_array)

bit_vector simple_mem__read_signal;
#define read_signal (simple_mem__read_signal)

bit_vector simple_mem__start_accelerator_col;
#define start_accelerator_col (simple_mem__start_accelerator_col)

bit_vector simple_mem__start_accelerator_row;
#define start_accelerator_row (simple_mem__start_accelerator_row)

bit_vector simple_mem__unused_const;
#define unused_const (simple_mem__unused_const)

bit_vector simple_mem__write_data_one;
#define write_data_one (simple_mem__write_data_one)

bit_vector simple_mem__write_data_zero;
#define write_data_zero (simple_mem__write_data_zero)

bit_vector simple_mem__write_signal;
#define write_signal (simple_mem__write_signal)

void simple_mem___init_aa_globals__() 
{
register_pipe("acc_mem_request_1", 2, 32, 0);\
register_pipe("acc_mem_request_2", 2, 32, 0);\
register_pipe("acc_mem_response_1", 2, 16, 0);\
register_pipe("acc_mem_response_2", 2, 16, 0);\
register_pipe("accelerator_done", 2, 16, 0);\
register_pipe("env_mem_request_1", 5, 32, 0);\
register_pipe("env_mem_request_2", 8, 32, 0);\
register_pipe("env_mem_response_1", 2, 16, 0);\
register_pipe("env_mem_response_2", 2, 16, 0);\
init_static_bit_vector(&(filter[0][0]), 16);\
init_static_bit_vector(&(filter[1][0]), 16);\
init_static_bit_vector(&(filter[2][0]), 16);\
init_static_bit_vector(&(filter[3][0]), 16);\
init_static_bit_vector(&(filter[0][1]), 16);\
init_static_bit_vector(&(filter[1][1]), 16);\
init_static_bit_vector(&(filter[2][1]), 16);\
init_static_bit_vector(&(filter[3][1]), 16);\
init_static_bit_vector(&(filter[0][2]), 16);\
init_static_bit_vector(&(filter[1][2]), 16);\
init_static_bit_vector(&(filter[2][2]), 16);\
init_static_bit_vector(&(filter[3][2]), 16);\
init_static_bit_vector(&(filter[0][3]), 16);\
init_static_bit_vector(&(filter[1][3]), 16);\
init_static_bit_vector(&(filter[2][3]), 16);\
init_static_bit_vector(&(filter[3][3]), 16);\
register_pipe("filter_fill_request", 2, 32, 0);\
register_pipe("filter_response", 2, 16, 0);\
init_static_bit_vector(&(filter_start_addr), 6);\
bit_vector_clear(&filter_start_addr);\
filter_start_addr.val.byte_array[0] = 8;\
init_static_bit_vector(&(ifmaps[0][0]), 16);\
init_static_bit_vector(&(ifmaps[1][0]), 16);\
init_static_bit_vector(&(ifmaps[2][0]), 16);\
init_static_bit_vector(&(ifmaps[3][0]), 16);\
init_static_bit_vector(&(ifmaps[0][1]), 16);\
init_static_bit_vector(&(ifmaps[1][1]), 16);\
init_static_bit_vector(&(ifmaps[2][1]), 16);\
init_static_bit_vector(&(ifmaps[3][1]), 16);\
init_static_bit_vector(&(ifmaps[0][2]), 16);\
init_static_bit_vector(&(ifmaps[1][2]), 16);\
init_static_bit_vector(&(ifmaps[2][2]), 16);\
init_static_bit_vector(&(ifmaps[3][2]), 16);\
init_static_bit_vector(&(ifmaps[0][3]), 16);\
init_static_bit_vector(&(ifmaps[1][3]), 16);\
init_static_bit_vector(&(ifmaps[2][3]), 16);\
init_static_bit_vector(&(ifmaps[3][3]), 16);\
init_static_bit_vector(&(ifmaps2[0][0]), 16);\
init_static_bit_vector(&(ifmaps2[1][0]), 16);\
init_static_bit_vector(&(ifmaps2[2][0]), 16);\
init_static_bit_vector(&(ifmaps2[3][0]), 16);\
init_static_bit_vector(&(ifmaps2[0][1]), 16);\
init_static_bit_vector(&(ifmaps2[1][1]), 16);\
init_static_bit_vector(&(ifmaps2[2][1]), 16);\
init_static_bit_vector(&(ifmaps2[3][1]), 16);\
init_static_bit_vector(&(ifmaps2[0][2]), 16);\
init_static_bit_vector(&(ifmaps2[1][2]), 16);\
init_static_bit_vector(&(ifmaps2[2][2]), 16);\
init_static_bit_vector(&(ifmaps2[3][2]), 16);\
init_static_bit_vector(&(ifmaps2[0][3]), 16);\
init_static_bit_vector(&(ifmaps2[1][3]), 16);\
init_static_bit_vector(&(ifmaps2[2][3]), 16);\
init_static_bit_vector(&(ifmaps2[3][3]), 16);\
init_static_bit_vector(&(last_value_J), 5);\
bit_vector_clear(&last_value_J);\
last_value_J.val.byte_array[0] = 4;\
init_static_bit_vector(&(mem_array[0][0]), 16);\
init_static_bit_vector(&(mem_array[1][0]), 16);\
init_static_bit_vector(&(mem_array[2][0]), 16);\
init_static_bit_vector(&(mem_array[3][0]), 16);\
init_static_bit_vector(&(mem_array[4][0]), 16);\
init_static_bit_vector(&(mem_array[5][0]), 16);\
init_static_bit_vector(&(mem_array[6][0]), 16);\
init_static_bit_vector(&(mem_array[7][0]), 16);\
init_static_bit_vector(&(mem_array[8][0]), 16);\
init_static_bit_vector(&(mem_array[9][0]), 16);\
init_static_bit_vector(&(mem_array[10][0]), 16);\
init_static_bit_vector(&(mem_array[11][0]), 16);\
init_static_bit_vector(&(mem_array[0][1]), 16);\
init_static_bit_vector(&(mem_array[1][1]), 16);\
init_static_bit_vector(&(mem_array[2][1]), 16);\
init_static_bit_vector(&(mem_array[3][1]), 16);\
init_static_bit_vector(&(mem_array[4][1]), 16);\
init_static_bit_vector(&(mem_array[5][1]), 16);\
init_static_bit_vector(&(mem_array[6][1]), 16);\
init_static_bit_vector(&(mem_array[7][1]), 16);\
init_static_bit_vector(&(mem_array[8][1]), 16);\
init_static_bit_vector(&(mem_array[9][1]), 16);\
init_static_bit_vector(&(mem_array[10][1]), 16);\
init_static_bit_vector(&(mem_array[11][1]), 16);\
init_static_bit_vector(&(mem_array[0][2]), 16);\
init_static_bit_vector(&(mem_array[1][2]), 16);\
init_static_bit_vector(&(mem_array[2][2]), 16);\
init_static_bit_vector(&(mem_array[3][2]), 16);\
init_static_bit_vector(&(mem_array[4][2]), 16);\
init_static_bit_vector(&(mem_array[5][2]), 16);\
init_static_bit_vector(&(mem_array[6][2]), 16);\
init_static_bit_vector(&(mem_array[7][2]), 16);\
init_static_bit_vector(&(mem_array[8][2]), 16);\
init_static_bit_vector(&(mem_array[9][2]), 16);\
init_static_bit_vector(&(mem_array[10][2]), 16);\
init_static_bit_vector(&(mem_array[11][2]), 16);\
init_static_bit_vector(&(mem_array[0][3]), 16);\
init_static_bit_vector(&(mem_array[1][3]), 16);\
init_static_bit_vector(&(mem_array[2][3]), 16);\
init_static_bit_vector(&(mem_array[3][3]), 16);\
init_static_bit_vector(&(mem_array[4][3]), 16);\
init_static_bit_vector(&(mem_array[5][3]), 16);\
init_static_bit_vector(&(mem_array[6][3]), 16);\
init_static_bit_vector(&(mem_array[7][3]), 16);\
init_static_bit_vector(&(mem_array[8][3]), 16);\
init_static_bit_vector(&(mem_array[9][3]), 16);\
init_static_bit_vector(&(mem_array[10][3]), 16);\
init_static_bit_vector(&(mem_array[11][3]), 16);\
init_static_bit_vector(&(mem_array[0][4]), 16);\
init_static_bit_vector(&(mem_array[1][4]), 16);\
init_static_bit_vector(&(mem_array[2][4]), 16);\
init_static_bit_vector(&(mem_array[3][4]), 16);\
init_static_bit_vector(&(mem_array[4][4]), 16);\
init_static_bit_vector(&(mem_array[5][4]), 16);\
init_static_bit_vector(&(mem_array[6][4]), 16);\
init_static_bit_vector(&(mem_array[7][4]), 16);\
init_static_bit_vector(&(mem_array[8][4]), 16);\
init_static_bit_vector(&(mem_array[9][4]), 16);\
init_static_bit_vector(&(mem_array[10][4]), 16);\
init_static_bit_vector(&(mem_array[11][4]), 16);\
init_static_bit_vector(&(mem_array[0][5]), 16);\
init_static_bit_vector(&(mem_array[1][5]), 16);\
init_static_bit_vector(&(mem_array[2][5]), 16);\
init_static_bit_vector(&(mem_array[3][5]), 16);\
init_static_bit_vector(&(mem_array[4][5]), 16);\
init_static_bit_vector(&(mem_array[5][5]), 16);\
init_static_bit_vector(&(mem_array[6][5]), 16);\
init_static_bit_vector(&(mem_array[7][5]), 16);\
init_static_bit_vector(&(mem_array[8][5]), 16);\
init_static_bit_vector(&(mem_array[9][5]), 16);\
init_static_bit_vector(&(mem_array[10][5]), 16);\
init_static_bit_vector(&(mem_array[11][5]), 16);\
init_static_bit_vector(&(mem_array[0][6]), 16);\
init_static_bit_vector(&(mem_array[1][6]), 16);\
init_static_bit_vector(&(mem_array[2][6]), 16);\
init_static_bit_vector(&(mem_array[3][6]), 16);\
init_static_bit_vector(&(mem_array[4][6]), 16);\
init_static_bit_vector(&(mem_array[5][6]), 16);\
init_static_bit_vector(&(mem_array[6][6]), 16);\
init_static_bit_vector(&(mem_array[7][6]), 16);\
init_static_bit_vector(&(mem_array[8][6]), 16);\
init_static_bit_vector(&(mem_array[9][6]), 16);\
init_static_bit_vector(&(mem_array[10][6]), 16);\
init_static_bit_vector(&(mem_array[11][6]), 16);\
init_static_bit_vector(&(mem_array[0][7]), 16);\
init_static_bit_vector(&(mem_array[1][7]), 16);\
init_static_bit_vector(&(mem_array[2][7]), 16);\
init_static_bit_vector(&(mem_array[3][7]), 16);\
init_static_bit_vector(&(mem_array[4][7]), 16);\
init_static_bit_vector(&(mem_array[5][7]), 16);\
init_static_bit_vector(&(mem_array[6][7]), 16);\
init_static_bit_vector(&(mem_array[7][7]), 16);\
init_static_bit_vector(&(mem_array[8][7]), 16);\
init_static_bit_vector(&(mem_array[9][7]), 16);\
init_static_bit_vector(&(mem_array[10][7]), 16);\
init_static_bit_vector(&(mem_array[11][7]), 16);\
init_static_bit_vector(&(read_signal), 1);\
bit_vector_clear(&read_signal);\
read_signal.val.byte_array[0] = 1;\
register_pipe("read_sums", 2, 16, 0);\
register_pipe("start_accelerator", 2, 16, 0);\
init_static_bit_vector(&(start_accelerator_col), 5);\
bit_vector_clear(&start_accelerator_col);\
start_accelerator_col.val.byte_array[0] = 5;\
init_static_bit_vector(&(start_accelerator_row), 6);\
bit_vector_clear(&start_accelerator_row);\
start_accelerator_row.val.byte_array[0] = 9;\
init_static_bit_vector(&(unused_const), 4);\
bit_vector_clear(&unused_const);\
init_static_bit_vector(&(write_data_one), 16);\
bit_vector_clear(&write_data_one);\
write_data_one.val.byte_array[0] = 1;\
init_static_bit_vector(&(write_data_zero), 16);\
bit_vector_clear(&write_data_zero);\
init_static_bit_vector(&(write_signal), 1);\
bit_vector_clear(&write_signal);\
}
void _simple_mem_accMemAccessDaemon_()
{
MUTEX_DECL(simple_mem__accMemAccessDaemon_series_block_stmt_80_c_mutex_);
MUTEX_LOCK(simple_mem__accMemAccessDaemon_series_block_stmt_80_c_mutex_);
simple_mem__accMemAccessDaemon_inner_inarg_prep_macro__; 
simple_mem__accMemAccessDaemon_branch_block_stmt_81_c_export_decl_macro_; 
{
{
// do-while:   file prog.linked.opt.aa, line 62
__declare_static_bit_vector(konst_113,1);\
bit_vector_clear(&konst_113);\
konst_113.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file prog.linked.opt.aa, line 64
simple_mem__accMemAccessDaemon_merge_stmt_83_c_preamble_macro_; 
simple_mem__accMemAccessDaemon_merge_stmt_83_c_postamble_macro_; 
// 			cmd_1 := acc_mem_request_1// bits of buffering = 32. 
simple_mem__accMemAccessDaemon_assign_stmt_86_c_macro_; 
// 			$volatile wdata1 := ( $slice cmd_1 31 16 ) 
simple_mem__accMemAccessDaemon_assign_stmt_90_c_macro_; 
// 			$volatile row_index1 := ( $slice cmd_1 15 10 ) 
simple_mem__accMemAccessDaemon_assign_stmt_94_c_macro_; 
// 			$volatile col_index1 := ( $slice cmd_1 9 5 ) 
simple_mem__accMemAccessDaemon_assign_stmt_98_c_macro_; 
// 			$volatile rwbar1 := ( $slice cmd_1 0 0 ) 
simple_mem__accMemAccessDaemon_assign_stmt_102_c_macro_; 
// 			$call accessMem (rwbar1 row_index1 col_index1 wdata1 ) (rdata1 ) 
simple_mem__accMemAccessDaemon_call_stmt_108_c_macro_; 
// 			acc_mem_response_1 := rdata1// bits of buffering = 16. 
simple_mem__accMemAccessDaemon_assign_stmt_111_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_113);\
konst_113.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_113)) break;
} 
}
simple_mem__accMemAccessDaemon_branch_block_stmt_81_c_export_apply_macro_;
}
simple_mem__accMemAccessDaemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_mem__accMemAccessDaemon_series_block_stmt_80_c_mutex_);
}
void simple_mem_accMemAccessDaemon()
{
simple_mem__accMemAccessDaemon_outer_arg_decl_macro__;
_simple_mem_accMemAccessDaemon_();
simple_mem__accMemAccessDaemon_outer_op_xfer_macro__;
}


void _simple_mem_accelerator_()
{
MUTEX_DECL(simple_mem__accelerator_series_block_stmt_1236_c_mutex_);
MUTEX_LOCK(simple_mem__accelerator_series_block_stmt_1236_c_mutex_);
simple_mem__accelerator_inner_inarg_prep_macro__; 
simple_mem__accelerator_branch_block_stmt_1237_c_export_decl_macro_; 
{
// merge  file prog.linked.opt.aa, line 278
simple_mem__accelerator_merge_stmt_1238_c_preamble_macro_; 
// 			$phi iter := 			  ($bitcast ($uint<16>) 1  ) $on   $entry 			  n_iter $on   check_for_start 
 // type of target is $uint<16>
simple_mem__accelerator_phi_stmt_1239_c_macro_; 
simple_mem__accelerator_merge_stmt_1238_c_postamble_macro_; 
// 		$volatile cmd := start_accelerator
simple_mem__accelerator_assign_stmt_1247_c_macro_; 
// if statement :  file prog.linked.opt.aa, line 0
__declare_static_bit_vector(EQ_u16_u1_1251,1);\
bit_vector_equal(0, &(cmd), &(iter), &(EQ_u16_u1_1251));\
if (has_undefined_bit(&EQ_u16_u1_1251)) {fprintf(stderr, "Error: variable EQ_u16_u1_1251 has undefined value (%s) at test point.\n", to_string(&EQ_u16_u1_1251));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u16_u1_1251)) { 
// 			$volatile n_iter := (iter + 1 )
simple_mem__accelerator_assign_stmt_1256_c_macro_; 
// 			$call initFilter (filter_start_addr ) (initialized_filter ) 
simple_mem__accelerator_call_stmt_1259_c_macro_; 
// 			$volatile check_both := ($bitcast ($uint<2>) initialized_filter )
simple_mem__accelerator_assign_stmt_1263_c_macro_; 
simple_mem__accelerator_branch_block_stmt_1264_c_export_decl_macro_; 
{
// merge  file prog.linked.opt.aa, line 289
simple_mem__accelerator_merge_stmt_1265_c_preamble_macro_; 
simple_mem__accelerator_merge_stmt_1265_c_postamble_macro_; 
// if statement :  file prog.linked.opt.aa, line 0
__declare_static_bit_vector(konst_1268,2);\
bit_vector_clear(&konst_1268);\
konst_1268.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u2_u1_1269,1);\
bit_vector_clear(&konst_1268);\
konst_1268.val.byte_array[0] = 1;\
bit_vector_equal(0, &(check_both), &(konst_1268), &(EQ_u2_u1_1269));\
if (has_undefined_bit(&EQ_u2_u1_1269)) {fprintf(stderr, "Error: variable EQ_u2_u1_1269 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_1269));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_1269)) { 
simple_mem__accelerator_branch_block_stmt_1270_c_export_decl_macro_; 
{
{
// do-while:   file prog.linked.opt.aa, line 294
__declare_static_bit_vector(konst_1398,7);\
bit_vector_clear(&konst_1398);\
konst_1398.val.byte_array[0] = 14;\
__declare_static_bit_vector(ULT_u7_u1_1399,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file prog.linked.opt.aa, line 296
simple_mem__accelerator_merge_stmt_1272_c_preamble_macro_; 
// 					$phi ele := 					  ($bitcast ($uint<7>) 0  ) $on   $entry 					  n_ele $on   $loopback 
 // type of target is $uint<7>
simple_mem__accelerator_phi_stmt_1273_c_macro_; 
// 					$phi J := 					  ($bitcast ($uint<5>) 0  ) $on   $entry 					  n_J $on   $loopback 
 // type of target is $uint<5>
simple_mem__accelerator_phi_stmt_1279_c_macro_; 
// 					$phi I := 					  ($bitcast ($uint<6>) 0  ) $on   $entry 					  n_I $on   $loopback 
 // type of target is $uint<6>
simple_mem__accelerator_phi_stmt_1284_c_macro_; 
// 					$phi col_to_be_replaced := 					  ($bitcast ($uint<2>) 3  ) $on   $entry 					  n_col_to_be_replaced $on   $loopback 
 // type of target is $uint<2>
simple_mem__accelerator_phi_stmt_1289_c_macro_; 
simple_mem__accelerator_merge_stmt_1272_c_postamble_macro_; 
// 					$volatile I_1 := ($bitcast ($uint<6>) (I + 1 ) )
simple_mem__accelerator_assign_stmt_1300_c_macro_; 
// 					$call initIfMaps (($bitcast ($uint<1>) 1  ) I J col_to_be_replaced ) (initialized_ifmaps ) 
simple_mem__accelerator_call_stmt_1307_c_macro_; 
// 					$volatile n_ele := ($bitcast ($uint<7>) (ele + 1 ) )
simple_mem__accelerator_assign_stmt_1313_c_macro_; 
// 					$volatile n_J := ( $mux (J < 4 ) (J + 1 )  ($bitcast ($uint<5>) 0  ) ) 
simple_mem__accelerator_assign_stmt_1324_c_macro_; 
// 					$volatile n_I := ( $mux (J == 4 ) ($bitcast ($uint<6>) (I + 2 ) )  I ) 
simple_mem__accelerator_assign_stmt_1335_c_macro_; 
// 					$call cal_col_to_be_replaced (J col_to_be_replaced ) (new_col_to_be_replaced ) 
simple_mem__accelerator_call_stmt_1339_c_macro_; 
// 					$volatile n_col_to_be_replaced := new_col_to_be_replaced
simple_mem__accelerator_assign_stmt_1342_c_macro_; 
// 					$call mainAcc (I J col_to_be_replaced ) (ofmap_pixel ) 
simple_mem__accelerator_call_stmt_1347_c_macro_; 
// 					$volatile checkIFour := ( $mux (I == 4 ) ($bitcast ($uint<1>) 1  )  ($bitcast ($uint<1>) 0  ) ) 
simple_mem__accelerator_assign_stmt_1357_c_macro_; 
// 					$guard (~checkIFour) $call mainAcc2 (I_1 J col_to_be_replaced ) (ofmap_pixel2 ) 
simple_mem__accelerator_call_stmt_1363_c_macro_; 
// 					read_sums := ($bitcast ($uint<16>) ele )// bits of buffering = 16. 
simple_mem__accelerator_assign_stmt_1367_c_macro_; 
// 					I_1457_delayed_4_0 := I $buffering 4// bits of buffering = 24. 
simple_mem__accelerator_assign_stmt_1370_c_macro_; 
// 					J_1458_delayed_4_0 := J $buffering 4// bits of buffering = 20. 
simple_mem__accelerator_assign_stmt_1373_c_macro_; 
// 					$call accessMem (write_signal I_1457_delayed_4_0 J_1458_delayed_4_0 ofmap_pixel ) (r_data_sum_cal ) 
simple_mem__accelerator_call_stmt_1379_c_macro_; 
// 					checkIFour_1462_delayed_4_0 := checkIFour $buffering 4// bits of buffering = 4. 
simple_mem__accelerator_assign_stmt_1382_c_macro_; 
// 					I_1_1464_delayed_4_0 := I_1 $buffering 4// bits of buffering = 24. 
simple_mem__accelerator_assign_stmt_1385_c_macro_; 
// 					J_1465_delayed_4_0 := J $buffering 4// bits of buffering = 20. 
simple_mem__accelerator_assign_stmt_1388_c_macro_; 
// 					$guard (~checkIFour_1462_delayed_4_0) $call accessMem (write_signal I_1_1464_delayed_4_0 J_1465_delayed_4_0 ofmap_pixel2 ) (r_data_sum_cal2 ) 
simple_mem__accelerator_call_stmt_1395_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1398);\
konst_1398.val.byte_array[0] = 14;\
bit_vector_less(0, &(ele), &(konst_1398), &(ULT_u7_u1_1399));\
if (has_undefined_bit(&ULT_u7_u1_1399)) {fprintf(stderr, "Error: variable ULT_u7_u1_1399 has undefined value (%s) at test point.\n", to_string(&ULT_u7_u1_1399));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u7_u1_1399)) break;
} 
}
simple_mem__accelerator_branch_block_stmt_1270_c_export_apply_macro_;
}
// 				accelerator_done := ($bitcast ($uint<16>) 1  )// bits of buffering = 16. 
simple_mem__accelerator_assign_stmt_1404_c_macro_; 
/* 				$place[check_for_filter]
*/  goto check_for_filter_1264;
} 
else {
 ;
}
simple_mem__accelerator_branch_block_stmt_1264_c_export_apply_macro_;
}
/* 			$place[check_for_start]
*/  goto check_for_start_1237;
} 
else {
 ;
}
simple_mem__accelerator_branch_block_stmt_1237_c_export_apply_macro_;
}
simple_mem__accelerator_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_mem__accelerator_series_block_stmt_1236_c_mutex_);
}
void simple_mem_accelerator()
{
simple_mem__accelerator_outer_arg_decl_macro__;
_simple_mem_accelerator_();
simple_mem__accelerator_outer_op_xfer_macro__;
}


void _simple_mem_accessMem_(bit_vector* __pread_write_bar_1, bit_vector* __prow_index, bit_vector* __pcol_index, bit_vector* __pwrite_data_1, bit_vector*  __pread_data_1)
{
MUTEX_DECL(simple_mem__accessMem_series_block_stmt_52_c_mutex_);
MUTEX_LOCK(simple_mem__accessMem_series_block_stmt_52_c_mutex_);
simple_mem__accessMem_inner_inarg_prep_macro__; 
// 	$guard (read_write_bar_1) t_read_data_11 := mem_array[row_index][col_index]// bits of buffering = 16. 
simple_mem__accessMem_assign_stmt_63_c_macro_; 
// 	$guard (~read_write_bar_1) mem_array[row_index][col_index] := write_data_1// bits of buffering = 16. 
simple_mem__accessMem_assign_stmt_69_c_macro_; 
// 	read_write_bar_1_71_delayed_4_0 := read_write_bar_1 $buffering 4// bits of buffering = 4. 
simple_mem__accessMem_assign_stmt_72_c_macro_; 
// 	read_data_1 := ( $mux read_write_bar_1_71_delayed_4_0 t_read_data_11  0  ) // bits of buffering = 16. 
simple_mem__accessMem_assign_stmt_78_c_macro_; 
simple_mem__accessMem_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_mem__accessMem_series_block_stmt_52_c_mutex_);
}
void _simple_mem_cal_col_to_be_replaced_(bit_vector* __pJ, bit_vector* __pcol_to_be_replaced, bit_vector*  __pnew_col_to_be_replaced)
{
MUTEX_DECL(simple_mem__cal_col_to_be_replaced_series_block_stmt_579_c_mutex_);
MUTEX_LOCK(simple_mem__cal_col_to_be_replaced_series_block_stmt_579_c_mutex_);
simple_mem__cal_col_to_be_replaced_inner_inarg_prep_macro__; 
// 	col_to_be_replaced_3 := ($bitcast ($uint<2>) 3  )// bits of buffering = 2. 
simple_mem__cal_col_to_be_replaced_assign_stmt_586_c_macro_; 
// 	col_to_be_replaced_other := ( $mux (col_to_be_replaced == 3 ) ($bitcast ($uint<2>) 0  )  ($bitcast ($uint<2>) (col_to_be_replaced + 1 ) ) ) // bits of buffering = 2. 
simple_mem__cal_col_to_be_replaced_assign_stmt_598_c_macro_; 
// 	$volatile checkJZero := ( $mux (J == last_value_J) ($bitcast ($uint<1>) 0  )  ($bitcast ($uint<1>) 1  ) ) 
simple_mem__cal_col_to_be_replaced_assign_stmt_608_c_macro_; 
// 	new_col_to_be_replaced := ( $mux checkJZero col_to_be_replaced_other  col_to_be_replaced_3 ) // bits of buffering = 2. 
simple_mem__cal_col_to_be_replaced_assign_stmt_614_c_macro_; 
simple_mem__cal_col_to_be_replaced_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_mem__cal_col_to_be_replaced_series_block_stmt_579_c_mutex_);
}
void _simple_mem_global_storage_initializer__()
{
MUTEX_DECL(simple_mem__global_storage_initializer__series_block_stmt_1412_c_mutex_);
MUTEX_LOCK(simple_mem__global_storage_initializer__series_block_stmt_1412_c_mutex_);
simple_mem__global_storage_initializer__inner_inarg_prep_macro__; 
/* null */ ;
simple_mem__global_storage_initializer__inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_mem__global_storage_initializer__series_block_stmt_1412_c_mutex_);
}
void simple_mem_global_storage_initializer_()
{
simple_mem__global_storage_initializer__outer_arg_decl_macro__;
_simple_mem_global_storage_initializer__();
simple_mem__global_storage_initializer__outer_op_xfer_macro__;
}


void _simple_mem_initFilter_(bit_vector* __pstart_row_filter, bit_vector*  __pfilter_initialized)
{
MUTEX_DECL(simple_mem__initFilter_series_block_stmt_116_c_mutex_);
MUTEX_LOCK(simple_mem__initFilter_series_block_stmt_116_c_mutex_);
simple_mem__initFilter_inner_inarg_prep_macro__; 
simple_mem__initFilter_branch_block_stmt_120_c_export_decl_macro_; 
{
{
// do-while:   file prog.linked.opt.aa, line 83
__declare_static_bit_vector(konst_185,5);\
bit_vector_clear(&konst_185);\
konst_185.val.byte_array[0] = 15;\
__declare_static_bit_vector(ULT_u5_u1_186,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file prog.linked.opt.aa, line 85
simple_mem__initFilter_merge_stmt_122_c_preamble_macro_; 
// 			$phi ele := 			  ($bitcast ($uint<5>) 0  ) $on   $entry 			  n_ele $on   $loopback 
 // type of target is $uint<5>
simple_mem__initFilter_phi_stmt_123_c_macro_; 
// 			$phi J := 			  ($bitcast ($uint<5>) 0  ) $on   $entry 			  n_J $on   $loopback 
 // type of target is $uint<5>
simple_mem__initFilter_phi_stmt_128_c_macro_; 
// 			$phi I := 			  ($bitcast ($uint<6>) filter_start_addr ) $on   $entry 			  n_I $on   $loopback 
 // type of target is $uint<6>
simple_mem__initFilter_phi_stmt_133_c_macro_; 
simple_mem__initFilter_merge_stmt_122_c_postamble_macro_; 
// 			$volatile n_ele := (ele + 1 )
simple_mem__initFilter_assign_stmt_143_c_macro_; 
// 			$volatile n_J := ( $mux (J <= 2 ) (J + 1 )  ($bitcast ($uint<5>) 0  ) ) 
simple_mem__initFilter_assign_stmt_154_c_macro_; 
// 			$volatile n_I := ( $mux (J == 3 ) ($bitcast ($uint<6>) (I + 1 ) )  I ) 
simple_mem__initFilter_assign_stmt_165_c_macro_; 
// 			$call accessMem (read_signal I J write_data_zero ) (rdata ) 
simple_mem__initFilter_call_stmt_171_c_macro_; 
// 			I_173_delayed_7_0 := I $buffering 7// bits of buffering = 42. 
simple_mem__initFilter_assign_stmt_174_c_macro_; 
// 			J_174_delayed_7_0 := J $buffering 7// bits of buffering = 35. 
simple_mem__initFilter_assign_stmt_177_c_macro_; 
// 			filter[I_173_delayed_7_0][J_174_delayed_7_0] := rdata// bits of buffering = 16. 
simple_mem__initFilter_assign_stmt_182_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_185);\
konst_185.val.byte_array[0] = 15;\
bit_vector_less(0, &(ele), &(konst_185), &(ULT_u5_u1_186));\
if (has_undefined_bit(&ULT_u5_u1_186)) {fprintf(stderr, "Error: variable ULT_u5_u1_186 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_186));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u5_u1_186)) break;
} 
}
simple_mem__initFilter_branch_block_stmt_120_c_export_apply_macro_;
}
// 	filter_initialized := ($bitcast ($uint<2>) 1  )// bits of buffering = 2. 
simple_mem__initFilter_assign_stmt_191_c_macro_; 
simple_mem__initFilter_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_mem__initFilter_series_block_stmt_116_c_mutex_);
}
void _simple_mem_initIfMaps_(bit_vector* __pstart, bit_vector* __pI, bit_vector* __pJ, bit_vector* __pcol_to_be_replaced, bit_vector*  __pfinished)
{
MUTEX_DECL(simple_mem__initIfMaps_series_block_stmt_193_c_mutex_);
MUTEX_LOCK(simple_mem__initIfMaps_series_block_stmt_193_c_mutex_);
simple_mem__initIfMaps_inner_inarg_prep_macro__; 
// 	$volatile checkJZero := ( $mux (J == 0 ) ($bitcast ($uint<1>) 0  )  ($bitcast ($uint<1>) 1  ) ) 
simple_mem__initIfMaps_assign_stmt_208_c_macro_; 
// 	rowI := ($bitcast ($uint<6>) I )// bits of buffering = 6. 
simple_mem__initIfMaps_assign_stmt_212_c_macro_; 
// 	rowI_1 := ($bitcast ($uint<6>) (I + 1 ) )// bits of buffering = 6. 
simple_mem__initIfMaps_assign_stmt_218_c_macro_; 
// 	rowI_2 := ($bitcast ($uint<6>) (I + 2 ) )// bits of buffering = 6. 
simple_mem__initIfMaps_assign_stmt_224_c_macro_; 
// 	rowI_3 := ($bitcast ($uint<6>) (I + 3 ) )// bits of buffering = 6. 
simple_mem__initIfMaps_assign_stmt_230_c_macro_; 
// 	rowI_4 := ($bitcast ($uint<6>) (I + 4 ) )// bits of buffering = 6. 
simple_mem__initIfMaps_assign_stmt_236_c_macro_; 
// 	col0 := ($bitcast ($uint<5>) 0  )// bits of buffering = 5. 
simple_mem__initIfMaps_assign_stmt_240_c_macro_; 
// 	col1 := ($bitcast ($uint<5>) 1  )// bits of buffering = 5. 
simple_mem__initIfMaps_assign_stmt_244_c_macro_; 
// 	col2 := ($bitcast ($uint<5>) 2  )// bits of buffering = 5. 
simple_mem__initIfMaps_assign_stmt_248_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI col0 write_data_zero ) (rdata_I00 ) 
simple_mem__initIfMaps_call_stmt_255_c_macro_; 
// 	$guard (~checkJZero) ifmaps[0 ][0 ] := rdata_I00// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_261_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI col1 write_data_zero ) (rdata_I01 ) 
simple_mem__initIfMaps_call_stmt_268_c_macro_; 
// 	$guard (~checkJZero) ifmaps[0 ][1 ] := rdata_I01// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_274_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI col2 write_data_zero ) (rdata_I02 ) 
simple_mem__initIfMaps_call_stmt_281_c_macro_; 
// 	$guard (~checkJZero) ifmaps[0 ][2 ] := rdata_I02// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_287_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_1 col0 write_data_zero ) (rdata_I10 ) 
simple_mem__initIfMaps_call_stmt_294_c_macro_; 
// 	$guard (~checkJZero) ifmaps[1 ][0 ] := rdata_I10// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_300_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[0 ][0 ] := rdata_I10// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_306_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_1 col1 write_data_zero ) (rdata_I11 ) 
simple_mem__initIfMaps_call_stmt_313_c_macro_; 
// 	$guard (~checkJZero) ifmaps[1 ][1 ] := rdata_I11// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_319_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[0 ][1 ] := rdata_I11// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_325_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_1 col2 write_data_zero ) (rdata_I12 ) 
simple_mem__initIfMaps_call_stmt_332_c_macro_; 
// 	$guard (~checkJZero) ifmaps[1 ][2 ] := rdata_I12// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_338_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[0 ][2 ] := rdata_I12// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_344_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_2 col0 write_data_zero ) (rdata_I20 ) 
simple_mem__initIfMaps_call_stmt_351_c_macro_; 
// 	$guard (~checkJZero) ifmaps[2 ][0 ] := rdata_I20// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_357_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[1 ][0 ] := rdata_I20// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_363_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_2 col1 write_data_zero ) (rdata_I21 ) 
simple_mem__initIfMaps_call_stmt_370_c_macro_; 
// 	$guard (~checkJZero) ifmaps[2 ][1 ] := rdata_I21// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_376_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[1 ][1 ] := rdata_I21// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_382_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_2 col2 write_data_zero ) (rdata_I22 ) 
simple_mem__initIfMaps_call_stmt_389_c_macro_; 
// 	$guard (~checkJZero) ifmaps[2 ][2 ] := rdata_I22// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_395_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[1 ][2 ] := rdata_I22// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_401_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_3 col0 write_data_zero ) (rdata_I30 ) 
simple_mem__initIfMaps_call_stmt_408_c_macro_; 
// 	$guard (~checkJZero) ifmaps[3 ][0 ] := rdata_I30// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_414_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[2 ][0 ] := rdata_I30// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_420_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_3 col1 write_data_zero ) (rdata_I31 ) 
simple_mem__initIfMaps_call_stmt_427_c_macro_; 
// 	$guard (~checkJZero) ifmaps[3 ][1 ] := rdata_I31// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_433_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[2 ][1 ] := rdata_I31// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_439_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_3 col2 write_data_zero ) (rdata_I32 ) 
simple_mem__initIfMaps_call_stmt_446_c_macro_; 
// 	$guard (~checkJZero) ifmaps[3 ][2 ] := rdata_I32// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_452_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[2 ][2 ] := rdata_I32// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_458_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_4 col0 write_data_zero ) (rdata_I40 ) 
simple_mem__initIfMaps_call_stmt_465_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[3 ][0 ] := rdata_I40// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_471_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_4 col1 write_data_zero ) (rdata_I41 ) 
simple_mem__initIfMaps_call_stmt_478_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[3 ][1 ] := rdata_I41// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_484_c_macro_; 
// 	$guard (~checkJZero) $call accessMem (read_signal rowI_4 col2 write_data_zero ) (rdata_I42 ) 
simple_mem__initIfMaps_call_stmt_491_c_macro_; 
// 	$guard (~checkJZero) ifmaps2[3 ][2 ] := rdata_I42// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_497_c_macro_; 
// 	J_3 := ($bitcast ($uint<5>) (J + 3 ) )// bits of buffering = 5. 
simple_mem__initIfMaps_assign_stmt_503_c_macro_; 
// 	$call accessMem (read_signal rowI J_3 write_data_zero ) (rdata_ifmap0 ) 
simple_mem__initIfMaps_call_stmt_509_c_macro_; 
// 	ifmaps[0 ][col_to_be_replaced] := rdata_ifmap0// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_514_c_macro_; 
// 	$call accessMem (read_signal rowI_1 J_3 write_data_zero ) (rdata_ifmap1 ) 
simple_mem__initIfMaps_call_stmt_520_c_macro_; 
// 	ifmaps[1 ][col_to_be_replaced] := rdata_ifmap1// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_525_c_macro_; 
// 	ifmaps2[0 ][col_to_be_replaced] := rdata_ifmap1// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_530_c_macro_; 
// 	$call accessMem (read_signal rowI_2 J_3 write_data_zero ) (rdata_ifmap2 ) 
simple_mem__initIfMaps_call_stmt_536_c_macro_; 
// 	ifmaps[2 ][col_to_be_replaced] := rdata_ifmap2// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_541_c_macro_; 
// 	ifmaps2[1 ][col_to_be_replaced] := rdata_ifmap2// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_546_c_macro_; 
// 	$call accessMem (read_signal rowI_3 J_3 write_data_zero ) (rdata_ifmap3 ) 
simple_mem__initIfMaps_call_stmt_552_c_macro_; 
// 	ifmaps[3 ][col_to_be_replaced] := rdata_ifmap3// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_557_c_macro_; 
// 	ifmaps2[2 ][col_to_be_replaced] := rdata_ifmap3// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_562_c_macro_; 
// 	$call accessMem (read_signal rowI_4 J_3 write_data_zero ) (rdata_ifmap4 ) 
simple_mem__initIfMaps_call_stmt_568_c_macro_; 
// 	ifmaps2[3 ][col_to_be_replaced] := rdata_ifmap4// bits of buffering = 16. 
simple_mem__initIfMaps_assign_stmt_573_c_macro_; 
// 	finished := ($bitcast ($uint<2>) 1  )// bits of buffering = 2. 
simple_mem__initIfMaps_assign_stmt_577_c_macro_; 
simple_mem__initIfMaps_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_mem__initIfMaps_series_block_stmt_193_c_mutex_);
}
void _simple_mem_mainAcc_(bit_vector* __pI, bit_vector* __pJ, bit_vector* __pcol_to_be_replaced, bit_vector*  __pofmap_pixel)
{
MUTEX_DECL(simple_mem__mainAcc_series_block_stmt_616_c_mutex_);
MUTEX_LOCK(simple_mem__mainAcc_series_block_stmt_616_c_mutex_);
simple_mem__mainAcc_inner_inarg_prep_macro__; 
// 	zero := ($bitcast ($uint<2>) 0  )// bits of buffering = 2. 
simple_mem__mainAcc_assign_stmt_624_c_macro_; 
// 	one := ($bitcast ($uint<2>) 1  )// bits of buffering = 2. 
simple_mem__mainAcc_assign_stmt_628_c_macro_; 
// 	two := ($bitcast ($uint<2>) 2  )// bits of buffering = 2. 
simple_mem__mainAcc_assign_stmt_632_c_macro_; 
// 	three := ($bitcast ($uint<2>) 3  )// bits of buffering = 2. 
simple_mem__mainAcc_assign_stmt_636_c_macro_; 
// 	col_to_be_replaced_1 := ( $mux (col_to_be_replaced == 0 ) ($bitcast ($uint<2>) 3  )  ($bitcast ($uint<2>) (col_to_be_replaced - 1 ) ) ) // bits of buffering = 2. 
simple_mem__mainAcc_assign_stmt_648_c_macro_; 
// 	col_to_be_replaced_2 := ( $mux (col_to_be_replaced >= 2 ) ($bitcast ($uint<2>) (col_to_be_replaced - 2 ) )  ($bitcast ($uint<2>) (col_to_be_replaced + 2 ) ) ) // bits of buffering = 2. 
simple_mem__mainAcc_assign_stmt_662_c_macro_; 
// 	col_to_be_replaced_3 := ( $mux (col_to_be_replaced == 3 ) ($bitcast ($uint<2>) 0  )  ($bitcast ($uint<2>) (col_to_be_replaced + 1 ) ) ) // bits of buffering = 2. 
simple_mem__mainAcc_assign_stmt_674_c_macro_; 
// 	pp03 := ($bitcast ($uint<16>) (ifmaps[0 ][col_to_be_replaced] * filter[zero][three]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_684_c_macro_; 
// 	pp13 := ($bitcast ($uint<16>) (ifmaps[1 ][col_to_be_replaced] * filter[one][three]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_694_c_macro_; 
// 	pp23 := ($bitcast ($uint<16>) (ifmaps[2 ][col_to_be_replaced] * filter[two][three]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_704_c_macro_; 
// 	pp33 := ($bitcast ($uint<16>) (ifmaps[3 ][col_to_be_replaced] * filter[three][three]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_714_c_macro_; 
// 	pp02 := ($bitcast ($uint<16>) (ifmaps[0 ][col_to_be_replaced_1] * filter[zero][two]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_724_c_macro_; 
// 	pp12 := ($bitcast ($uint<16>) (ifmaps[1 ][col_to_be_replaced_1] * filter[one][two]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_734_c_macro_; 
// 	pp22 := ($bitcast ($uint<16>) (ifmaps[2 ][col_to_be_replaced_1] * filter[two][two]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_744_c_macro_; 
// 	pp32 := ($bitcast ($uint<16>) (ifmaps[3 ][col_to_be_replaced_1] * filter[three][two]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_754_c_macro_; 
// 	pp01 := ($bitcast ($uint<16>) (ifmaps[0 ][col_to_be_replaced_2] * filter[zero][one]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_764_c_macro_; 
// 	pp11 := ($bitcast ($uint<16>) (ifmaps[1 ][col_to_be_replaced_2] * filter[one][one]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_774_c_macro_; 
// 	pp21 := ($bitcast ($uint<16>) (ifmaps[2 ][col_to_be_replaced_2] * filter[two][one]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_784_c_macro_; 
// 	pp31 := ($bitcast ($uint<16>) (ifmaps[3 ][col_to_be_replaced_2] * filter[three][one]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_794_c_macro_; 
// 	pp00 := ($bitcast ($uint<16>) (ifmaps[0 ][col_to_be_replaced_3] * filter[zero][zero]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_804_c_macro_; 
// 	pp10 := ($bitcast ($uint<16>) (ifmaps[1 ][col_to_be_replaced_3] * filter[one][zero]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_814_c_macro_; 
// 	pp20 := ($bitcast ($uint<16>) (ifmaps[2 ][col_to_be_replaced_3] * filter[two][zero]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_824_c_macro_; 
// 	pp30 := ($bitcast ($uint<16>) (ifmaps[3 ][col_to_be_replaced_3] * filter[three][zero]) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_834_c_macro_; 
// 	sum0 := ($bitcast ($uint<16>) (pp00 + pp01) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_840_c_macro_; 
// 	sum1 := ($bitcast ($uint<16>) (pp02 + pp03) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_846_c_macro_; 
// 	sum2 := ($bitcast ($uint<16>) (pp10 + pp11) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_852_c_macro_; 
// 	sum3 := ($bitcast ($uint<16>) (pp12 + pp13) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_858_c_macro_; 
// 	sum4 := ($bitcast ($uint<16>) (pp20 + pp21) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_864_c_macro_; 
// 	sum5 := ($bitcast ($uint<16>) (pp22 + pp23) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_870_c_macro_; 
// 	sum6 := ($bitcast ($uint<16>) (pp30 + pp31) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_876_c_macro_; 
// 	sum7 := ($bitcast ($uint<16>) (pp32 + pp33) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_882_c_macro_; 
// 	sum10 := ($bitcast ($uint<16>) (sum0 + sum1) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_888_c_macro_; 
// 	sum11 := ($bitcast ($uint<16>) (sum2 + sum3) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_894_c_macro_; 
// 	sum12 := ($bitcast ($uint<16>) (sum4 + sum5) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_900_c_macro_; 
// 	sum13 := ($bitcast ($uint<16>) (sum6 + sum7) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_906_c_macro_; 
// 	sum20 := ($bitcast ($uint<16>) (sum10 + sum11) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_912_c_macro_; 
// 	sum21 := ($bitcast ($uint<16>) (sum12 + sum13) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_918_c_macro_; 
// 	ofmap_pixel := ($bitcast ($uint<16>) (sum20 + sum21) )// bits of buffering = 16. 
simple_mem__mainAcc_assign_stmt_924_c_macro_; 
simple_mem__mainAcc_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_mem__mainAcc_series_block_stmt_616_c_mutex_);
}
void _simple_mem_mainAcc2_(bit_vector* __pI, bit_vector* __pJ, bit_vector* __pcol_to_be_replaced, bit_vector*  __pofmap_pixel)
{
MUTEX_DECL(simple_mem__mainAcc2_series_block_stmt_926_c_mutex_);
MUTEX_LOCK(simple_mem__mainAcc2_series_block_stmt_926_c_mutex_);
simple_mem__mainAcc2_inner_inarg_prep_macro__; 
// 	zero := ($bitcast ($uint<2>) 0  )// bits of buffering = 2. 
simple_mem__mainAcc2_assign_stmt_934_c_macro_; 
// 	one := ($bitcast ($uint<2>) 1  )// bits of buffering = 2. 
simple_mem__mainAcc2_assign_stmt_938_c_macro_; 
// 	two := ($bitcast ($uint<2>) 2  )// bits of buffering = 2. 
simple_mem__mainAcc2_assign_stmt_942_c_macro_; 
// 	three := ($bitcast ($uint<2>) 3  )// bits of buffering = 2. 
simple_mem__mainAcc2_assign_stmt_946_c_macro_; 
// 	col_to_be_replaced_1 := ( $mux (col_to_be_replaced == 0 ) ($bitcast ($uint<2>) 3  )  ($bitcast ($uint<2>) (col_to_be_replaced - 1 ) ) ) // bits of buffering = 2. 
simple_mem__mainAcc2_assign_stmt_958_c_macro_; 
// 	col_to_be_replaced_2 := ( $mux (col_to_be_replaced >= 2 ) ($bitcast ($uint<2>) (col_to_be_replaced - 2 ) )  ($bitcast ($uint<2>) (col_to_be_replaced + 2 ) ) ) // bits of buffering = 2. 
simple_mem__mainAcc2_assign_stmt_972_c_macro_; 
// 	col_to_be_replaced_3 := ( $mux (col_to_be_replaced == 3 ) ($bitcast ($uint<2>) 0  )  ($bitcast ($uint<2>) (col_to_be_replaced + 1 ) ) ) // bits of buffering = 2. 
simple_mem__mainAcc2_assign_stmt_984_c_macro_; 
// 	pp03 := ($bitcast ($uint<16>) (ifmaps2[0 ][col_to_be_replaced] * filter[zero][three]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_994_c_macro_; 
// 	pp13 := ($bitcast ($uint<16>) (ifmaps2[1 ][col_to_be_replaced] * filter[one][three]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1004_c_macro_; 
// 	pp23 := ($bitcast ($uint<16>) (ifmaps2[2 ][col_to_be_replaced] * filter[two][three]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1014_c_macro_; 
// 	pp33 := ($bitcast ($uint<16>) (ifmaps[3 ][col_to_be_replaced] * filter[three][three]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1024_c_macro_; 
// 	pp02 := ($bitcast ($uint<16>) (ifmaps2[0 ][col_to_be_replaced_1] * filter[zero][two]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1034_c_macro_; 
// 	pp12 := ($bitcast ($uint<16>) (ifmaps2[1 ][col_to_be_replaced_1] * filter[one][two]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1044_c_macro_; 
// 	pp22 := ($bitcast ($uint<16>) (ifmaps2[2 ][col_to_be_replaced_1] * filter[two][two]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1054_c_macro_; 
// 	pp32 := ($bitcast ($uint<16>) (ifmaps2[3 ][col_to_be_replaced_1] * filter[three][two]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1064_c_macro_; 
// 	pp01 := ($bitcast ($uint<16>) (ifmaps2[0 ][col_to_be_replaced_2] * filter[zero][one]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1074_c_macro_; 
// 	pp11 := ($bitcast ($uint<16>) (ifmaps2[1 ][col_to_be_replaced_2] * filter[one][one]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1084_c_macro_; 
// 	pp21 := ($bitcast ($uint<16>) (ifmaps2[2 ][col_to_be_replaced_2] * filter[two][one]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1094_c_macro_; 
// 	pp31 := ($bitcast ($uint<16>) (ifmaps2[3 ][col_to_be_replaced_2] * filter[three][one]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1104_c_macro_; 
// 	pp00 := ($bitcast ($uint<16>) (ifmaps2[0 ][col_to_be_replaced_3] * filter[zero][zero]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1114_c_macro_; 
// 	pp10 := ($bitcast ($uint<16>) (ifmaps2[1 ][col_to_be_replaced_3] * filter[one][zero]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1124_c_macro_; 
// 	pp20 := ($bitcast ($uint<16>) (ifmaps2[2 ][col_to_be_replaced_3] * filter[two][zero]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1134_c_macro_; 
// 	pp30 := ($bitcast ($uint<16>) (ifmaps2[3 ][col_to_be_replaced_3] * filter[three][zero]) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1144_c_macro_; 
// 	sum0 := ($bitcast ($uint<16>) (pp00 + pp01) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1150_c_macro_; 
// 	sum1 := ($bitcast ($uint<16>) (pp02 + pp03) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1156_c_macro_; 
// 	sum2 := ($bitcast ($uint<16>) (pp10 + pp11) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1162_c_macro_; 
// 	sum3 := ($bitcast ($uint<16>) (pp12 + pp13) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1168_c_macro_; 
// 	sum4 := ($bitcast ($uint<16>) (pp20 + pp21) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1174_c_macro_; 
// 	sum5 := ($bitcast ($uint<16>) (pp22 + pp23) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1180_c_macro_; 
// 	sum6 := ($bitcast ($uint<16>) (pp30 + pp31) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1186_c_macro_; 
// 	sum7 := ($bitcast ($uint<16>) (pp32 + pp33) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1192_c_macro_; 
// 	sum10 := ($bitcast ($uint<16>) (sum0 + sum1) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1198_c_macro_; 
// 	sum11 := ($bitcast ($uint<16>) (sum2 + sum3) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1204_c_macro_; 
// 	sum12 := ($bitcast ($uint<16>) (sum4 + sum5) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1210_c_macro_; 
// 	sum13 := ($bitcast ($uint<16>) (sum6 + sum7) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1216_c_macro_; 
// 	sum20 := ($bitcast ($uint<16>) (sum10 + sum11) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1222_c_macro_; 
// 	sum21 := ($bitcast ($uint<16>) (sum12 + sum13) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1228_c_macro_; 
// 	ofmap_pixel := ($bitcast ($uint<16>) (sum20 + sum21) )// bits of buffering = 16. 
simple_mem__mainAcc2_assign_stmt_1234_c_macro_; 
simple_mem__mainAcc2_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_mem__mainAcc2_series_block_stmt_926_c_mutex_);
}
void _simple_mem_memAccessDaemon_()
{
MUTEX_DECL(simple_mem__memAccessDaemon_series_block_stmt_1415_c_mutex_);
MUTEX_LOCK(simple_mem__memAccessDaemon_series_block_stmt_1415_c_mutex_);
simple_mem__memAccessDaemon_inner_inarg_prep_macro__; 
simple_mem__memAccessDaemon_branch_block_stmt_1416_c_export_decl_macro_; 
{
{
// do-while:   file prog.linked.opt.aa, line 348
__declare_static_bit_vector(konst_1448,1);\
bit_vector_clear(&konst_1448);\
konst_1448.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file prog.linked.opt.aa, line 350
simple_mem__memAccessDaemon_merge_stmt_1418_c_preamble_macro_; 
simple_mem__memAccessDaemon_merge_stmt_1418_c_postamble_macro_; 
// 			cmd_1 := env_mem_request_1// bits of buffering = 32. 
simple_mem__memAccessDaemon_assign_stmt_1421_c_macro_; 
// 			$volatile wdata1 := ( $slice cmd_1 31 16 ) 
simple_mem__memAccessDaemon_assign_stmt_1425_c_macro_; 
// 			$volatile row_index1 := ( $slice cmd_1 15 10 ) 
simple_mem__memAccessDaemon_assign_stmt_1429_c_macro_; 
// 			$volatile col_index1 := ( $slice cmd_1 9 5 ) 
simple_mem__memAccessDaemon_assign_stmt_1433_c_macro_; 
// 			$volatile rwbar1 := ( $slice cmd_1 0 0 ) 
simple_mem__memAccessDaemon_assign_stmt_1437_c_macro_; 
// 			$call accessMem (rwbar1 row_index1 col_index1 wdata1 ) (rdata1 ) 
simple_mem__memAccessDaemon_call_stmt_1443_c_macro_; 
// 			env_mem_response_1 := rdata1// bits of buffering = 16. 
simple_mem__memAccessDaemon_assign_stmt_1446_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1448);\
konst_1448.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1448)) break;
} 
}
simple_mem__memAccessDaemon_branch_block_stmt_1416_c_export_apply_macro_;
}
simple_mem__memAccessDaemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_mem__memAccessDaemon_series_block_stmt_1415_c_mutex_);
}
void simple_mem_memAccessDaemon()
{
simple_mem__memAccessDaemon_outer_arg_decl_macro__;
_simple_mem_memAccessDaemon_();
simple_mem__memAccessDaemon_outer_op_xfer_macro__;
}


void _simple_mem_memAccessDaemon2_()
{
MUTEX_DECL(simple_mem__memAccessDaemon2_series_block_stmt_1451_c_mutex_);
MUTEX_LOCK(simple_mem__memAccessDaemon2_series_block_stmt_1451_c_mutex_);
simple_mem__memAccessDaemon2_inner_inarg_prep_macro__; 
simple_mem__memAccessDaemon2_branch_block_stmt_1452_c_export_decl_macro_; 
{
{
// do-while:   file prog.linked.opt.aa, line 369
__declare_static_bit_vector(konst_1484,1);\
bit_vector_clear(&konst_1484);\
konst_1484.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file prog.linked.opt.aa, line 371
simple_mem__memAccessDaemon2_merge_stmt_1454_c_preamble_macro_; 
simple_mem__memAccessDaemon2_merge_stmt_1454_c_postamble_macro_; 
// 			cmd_2 := env_mem_request_2// bits of buffering = 32. 
simple_mem__memAccessDaemon2_assign_stmt_1457_c_macro_; 
// 			$volatile wdata2 := ( $slice cmd_2 31 16 ) 
simple_mem__memAccessDaemon2_assign_stmt_1461_c_macro_; 
// 			$volatile row_index2 := ( $slice cmd_2 15 10 ) 
simple_mem__memAccessDaemon2_assign_stmt_1465_c_macro_; 
// 			$volatile col_index2 := ( $slice cmd_2 9 5 ) 
simple_mem__memAccessDaemon2_assign_stmt_1469_c_macro_; 
// 			$volatile rwbar2 := ( $slice cmd_2 0 0 ) 
simple_mem__memAccessDaemon2_assign_stmt_1473_c_macro_; 
// 			$call accessMem (rwbar2 row_index2 col_index2 wdata2 ) (rdata2 ) 
simple_mem__memAccessDaemon2_call_stmt_1479_c_macro_; 
// 			env_mem_response_2 := rdata2// bits of buffering = 16. 
simple_mem__memAccessDaemon2_assign_stmt_1482_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1484);\
konst_1484.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1484)) break;
} 
}
simple_mem__memAccessDaemon2_branch_block_stmt_1452_c_export_apply_macro_;
}
simple_mem__memAccessDaemon2_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_mem__memAccessDaemon2_series_block_stmt_1451_c_mutex_);
}
void simple_mem_memAccessDaemon2()
{
simple_mem__memAccessDaemon2_outer_arg_decl_macro__;
_simple_mem_memAccessDaemon2_();
simple_mem__memAccessDaemon2_outer_op_xfer_macro__;
}


DEFINE_THREAD(simple_mem_accMemAccessDaemon);
PTHREAD_DECL(simple_mem_accMemAccessDaemon);
DEFINE_THREAD(simple_mem_accelerator);
PTHREAD_DECL(simple_mem_accelerator);
DEFINE_THREAD(simple_mem_memAccessDaemon);
PTHREAD_DECL(simple_mem_memAccessDaemon);
DEFINE_THREAD(simple_mem_memAccessDaemon2);
PTHREAD_DECL(simple_mem_memAccessDaemon2);
void simple_mem_start_daemons(FILE* fp, int trace_on) {
simple_mem___report_log_file__ = fp;
simple_mem___trace_on__ = trace_on;
simple_mem___init_aa_globals__(); 
PTHREAD_CREATE(simple_mem_accMemAccessDaemon);
PTHREAD_CREATE(simple_mem_accelerator);
PTHREAD_CREATE(simple_mem_memAccessDaemon);
PTHREAD_CREATE(simple_mem_memAccessDaemon2);
}
void simple_mem_stop_daemons() {
PTHREAD_CANCEL(simple_mem_accMemAccessDaemon);
PTHREAD_CANCEL(simple_mem_accelerator);
PTHREAD_CANCEL(simple_mem_memAccessDaemon);
PTHREAD_CANCEL(simple_mem_memAccessDaemon2);
}
