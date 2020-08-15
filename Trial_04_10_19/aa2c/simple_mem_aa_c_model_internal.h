#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
// object initialization 

#define simple_mem__accMemAccessDaemon_inner_inarg_prep_macro__ 
#define simple_mem__accMemAccessDaemon_branch_block_stmt_81_c_export_decl_macro_ __declare_static_bit_vector(cmd_1,32);\
__declare_static_bit_vector(wdata1,16);\
__declare_static_bit_vector(row_index1,6);\
__declare_static_bit_vector(col_index1,5);\
__declare_static_bit_vector(rwbar1,1);\
__declare_static_bit_vector(rdata1,16);\


#define simple_mem__accMemAccessDaemon_merge_stmt_83_c_preamble_macro_ uint8_t merge_stmt_83_entry_flag;\
merge_stmt_83_entry_flag = do_while_entry_flag;\
goto merge_stmt_83_run;\
merge_stmt_83_run: ;\
;

#define simple_mem__accMemAccessDaemon_merge_stmt_83_c_postamble_macro_ merge_stmt_83_entry_flag = 0;

#define simple_mem__accMemAccessDaemon_assign_stmt_86_c_macro_ __declare_static_bit_vector(RPIPE_acc_mem_request_1_85,32);\
read_bit_vector_from_pipe("acc_mem_request_1",&(RPIPE_acc_mem_request_1_85));\
bit_vector_cast_to_bit_vector(0, &(cmd_1), &(RPIPE_acc_mem_request_1_85));\
;

#define simple_mem__accMemAccessDaemon_assign_stmt_90_c_macro_ __declare_static_bit_vector(slice_89,16);\
bit_vector_slice(&(cmd_1), &(slice_89), 16);\
bit_vector_cast_to_bit_vector(0, &(wdata1), &(slice_89));\
;

#define simple_mem__accMemAccessDaemon_assign_stmt_94_c_macro_ __declare_static_bit_vector(slice_93,6);\
bit_vector_slice(&(cmd_1), &(slice_93), 10);\
bit_vector_cast_to_bit_vector(0, &(row_index1), &(slice_93));\
;

#define simple_mem__accMemAccessDaemon_assign_stmt_98_c_macro_ __declare_static_bit_vector(slice_97,5);\
bit_vector_slice(&(cmd_1), &(slice_97), 5);\
bit_vector_cast_to_bit_vector(0, &(col_index1), &(slice_97));\
;

#define simple_mem__accMemAccessDaemon_assign_stmt_102_c_macro_ __declare_static_bit_vector(slice_101,1);\
bit_vector_slice(&(cmd_1), &(slice_101), 0);\
bit_vector_cast_to_bit_vector(0, &(rwbar1), &(slice_101));\
;

#define simple_mem__accMemAccessDaemon_call_stmt_108_c_macro_ _simple_mem_accessMem_( &(rwbar1),  &(row_index1),  &(col_index1),  &(wdata1), &(rdata1));\
;

#define simple_mem__accMemAccessDaemon_assign_stmt_111_c_macro_ write_bit_vector_to_pipe("acc_mem_response_1",&(rdata1));\
;
;

#define simple_mem__accMemAccessDaemon_branch_block_stmt_81_c_export_apply_macro_ ;

#define simple_mem__accMemAccessDaemon_inner_outarg_prep_macro__ ;

#define simple_mem__accMemAccessDaemon_outer_arg_decl_macro__ ;

#define simple_mem__accMemAccessDaemon_outer_op_xfer_macro__ ;

#define simple_mem__accelerator_inner_inarg_prep_macro__ 
#define simple_mem__accelerator_branch_block_stmt_1237_c_export_decl_macro_ __declare_static_bit_vector(iter,16);\
__declare_static_bit_vector(cmd,16);\
__declare_static_bit_vector(n_iter,16);\
__declare_static_bit_vector(initialized_filter,2);\
__declare_static_bit_vector(check_both,2);\


#define simple_mem__accelerator_merge_stmt_1238_c_preamble_macro_ uint8_t merge_stmt_1238_entry_flag;\
merge_stmt_1238_entry_flag = 1;\
uint8_t check_for_start_1237_flag = 0;\
goto merge_stmt_1238_run;\
check_for_start_1237: check_for_start_1237_flag = 1;\
goto merge_stmt_1238_run;\
merge_stmt_1238_run: ;\

#define simple_mem__accelerator_phi_stmt_1239_c_macro_ __declare_static_bit_vector(konst_1241,16);\
bit_vector_clear(&konst_1241);\
konst_1241.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_1242,16);\
bit_vector_clear(&type_cast_1242);\
type_cast_1242.val.byte_array[0] = 1;\
if(check_for_start_1237_flag) {\
bit_vector_cast_to_bit_vector(0, &(iter), &(n_iter));\
}\
else {\
__declare_static_bit_vector(konst_1241,16);\
bit_vector_clear(&konst_1241);\
konst_1241.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_1242,16);\
bit_vector_clear(&type_cast_1242);\
type_cast_1242.val.byte_array[0] = 1;\
bit_vector_clear(&konst_1241);\
konst_1241.val.byte_array[0] = 1;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1242), &(konst_1241));\
bit_vector_cast_to_bit_vector(0, &(iter), &(type_cast_1242));\
}\
;
;

#define simple_mem__accelerator_merge_stmt_1238_c_postamble_macro_ check_for_start_1237_flag = 0;\
merge_stmt_1238_entry_flag = 0;

#define simple_mem__accelerator_assign_stmt_1247_c_macro_ __declare_static_bit_vector(RPIPE_start_accelerator_1246,16);\
read_bit_vector_from_pipe("start_accelerator",&(RPIPE_start_accelerator_1246));\
bit_vector_cast_to_bit_vector(0, &(cmd), &(RPIPE_start_accelerator_1246));\
;

#define simple_mem__accelerator_assign_stmt_1256_c_macro_ __declare_static_bit_vector(konst_1254,16);\
bit_vector_clear(&konst_1254);\
konst_1254.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u16_u16_1255,16);\
bit_vector_clear(&konst_1254);\
konst_1254.val.byte_array[0] = 1;\
bit_vector_plus( &(iter), &(konst_1254), &(ADD_u16_u16_1255));\
bit_vector_cast_to_bit_vector(0, &(n_iter), &(ADD_u16_u16_1255));\
;

#define simple_mem__accelerator_call_stmt_1259_c_macro_ _simple_mem_initFilter_( &(filter_start_addr), &(initialized_filter));\
;

#define simple_mem__accelerator_assign_stmt_1263_c_macro_ __declare_static_bit_vector(type_cast_1262,2);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1262), &(initialized_filter));\
bit_vector_cast_to_bit_vector(0, &(check_both), &(type_cast_1262));\
;

#define simple_mem__accelerator_branch_block_stmt_1264_c_export_decl_macro_ 

#define simple_mem__accelerator_merge_stmt_1265_c_preamble_macro_ uint8_t merge_stmt_1265_entry_flag;\
merge_stmt_1265_entry_flag = 1;\
uint8_t check_for_filter_1264_flag = 0;\
goto merge_stmt_1265_run;\
check_for_filter_1264: check_for_filter_1264_flag = 1;\
goto merge_stmt_1265_run;\
merge_stmt_1265_run: ;\
;

#define simple_mem__accelerator_merge_stmt_1265_c_postamble_macro_ check_for_filter_1264_flag = 0;\
merge_stmt_1265_entry_flag = 0;

#define simple_mem__accelerator_branch_block_stmt_1270_c_export_decl_macro_ __declare_static_bit_vector(ele,7);\
__declare_static_bit_vector(J,5);\
__declare_static_bit_vector(I,6);\
__declare_static_bit_vector(col_to_be_replaced,2);\
__declare_static_bit_vector(I_1,6);\
__declare_static_bit_vector(initialized_ifmaps,2);\
__declare_static_bit_vector(n_ele,7);\
__declare_static_bit_vector(n_J,5);\
__declare_static_bit_vector(n_I,6);\
__declare_static_bit_vector(new_col_to_be_replaced,2);\
__declare_static_bit_vector(n_col_to_be_replaced,2);\
__declare_static_bit_vector(ofmap_pixel,16);\
__declare_static_bit_vector(checkIFour,1);\
__declare_static_bit_vector(ofmap_pixel2,16);\
__declare_static_bit_vector(I_1457_delayed_4_0,6);\
__declare_static_bit_vector(J_1458_delayed_4_0,5);\
__declare_static_bit_vector(r_data_sum_cal,16);\
__declare_static_bit_vector(checkIFour_1462_delayed_4_0,1);\
__declare_static_bit_vector(I_1_1464_delayed_4_0,6);\
__declare_static_bit_vector(J_1465_delayed_4_0,5);\
__declare_static_bit_vector(r_data_sum_cal2,16);\


#define simple_mem__accelerator_merge_stmt_1272_c_preamble_macro_ uint8_t merge_stmt_1272_entry_flag;\
merge_stmt_1272_entry_flag = do_while_entry_flag;\
goto merge_stmt_1272_run;\
merge_stmt_1272_run: ;\

#define simple_mem__accelerator_phi_stmt_1273_c_macro_ __declare_static_bit_vector(konst_1276,7);\
bit_vector_clear(&konst_1276);\
__declare_static_bit_vector(type_cast_1277,7);\
bit_vector_clear(&type_cast_1277);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(ele), &(n_ele));\
}\
else {\
__declare_static_bit_vector(konst_1276,7);\
bit_vector_clear(&konst_1276);\
__declare_static_bit_vector(type_cast_1277,7);\
bit_vector_clear(&type_cast_1277);\
bit_vector_clear(&konst_1276);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1277), &(konst_1276));\
bit_vector_cast_to_bit_vector(0, &(ele), &(type_cast_1277));\
}\
;

#define simple_mem__accelerator_phi_stmt_1279_c_macro_ __declare_static_bit_vector(konst_1281,5);\
bit_vector_clear(&konst_1281);\
__declare_static_bit_vector(type_cast_1282,5);\
bit_vector_clear(&type_cast_1282);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(n_J));\
}\
else {\
__declare_static_bit_vector(konst_1281,5);\
bit_vector_clear(&konst_1281);\
__declare_static_bit_vector(type_cast_1282,5);\
bit_vector_clear(&type_cast_1282);\
bit_vector_clear(&konst_1281);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1282), &(konst_1281));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_1282));\
}\
;

#define simple_mem__accelerator_phi_stmt_1284_c_macro_ __declare_static_bit_vector(konst_1286,6);\
bit_vector_clear(&konst_1286);\
__declare_static_bit_vector(type_cast_1287,6);\
bit_vector_clear(&type_cast_1287);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(n_I));\
}\
else {\
__declare_static_bit_vector(konst_1286,6);\
bit_vector_clear(&konst_1286);\
__declare_static_bit_vector(type_cast_1287,6);\
bit_vector_clear(&type_cast_1287);\
bit_vector_clear(&konst_1286);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1287), &(konst_1286));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_1287));\
}\
;

#define simple_mem__accelerator_phi_stmt_1289_c_macro_ __declare_static_bit_vector(konst_1291,2);\
bit_vector_clear(&konst_1291);\
konst_1291.val.byte_array[0] = 3;\
__declare_static_bit_vector(type_cast_1292,2);\
bit_vector_clear(&type_cast_1292);\
type_cast_1292.val.byte_array[0] = 3;\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced), &(n_col_to_be_replaced));\
}\
else {\
__declare_static_bit_vector(konst_1291,2);\
bit_vector_clear(&konst_1291);\
konst_1291.val.byte_array[0] = 3;\
__declare_static_bit_vector(type_cast_1292,2);\
bit_vector_clear(&type_cast_1292);\
type_cast_1292.val.byte_array[0] = 3;\
bit_vector_clear(&konst_1291);\
konst_1291.val.byte_array[0] = 3;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1292), &(konst_1291));\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced), &(type_cast_1292));\
}\
;
;

#define simple_mem__accelerator_merge_stmt_1272_c_postamble_macro_ merge_stmt_1272_entry_flag = 0;

#define simple_mem__accelerator_assign_stmt_1300_c_macro_ __declare_static_bit_vector(konst_1297,6);\
bit_vector_clear(&konst_1297);\
konst_1297.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u6_u6_1298,6);\
__declare_static_bit_vector(type_cast_1299,6);\
bit_vector_clear(&konst_1297);\
konst_1297.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_1297), &(ADD_u6_u6_1298));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1299), &(ADD_u6_u6_1298));\
bit_vector_cast_to_bit_vector(0, &(I_1), &(type_cast_1299));\
;

#define simple_mem__accelerator_call_stmt_1307_c_macro_ __declare_static_bit_vector(konst_1301,1);\
bit_vector_clear(&konst_1301);\
konst_1301.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_1302,1);\
bit_vector_clear(&type_cast_1302);\
type_cast_1302.val.byte_array[0] = 1;\
bit_vector_clear(&konst_1301);\
konst_1301.val.byte_array[0] = 1;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1302), &(konst_1301));\
_simple_mem_initIfMaps_( &(type_cast_1302),  &(I),  &(J),  &(col_to_be_replaced), &(initialized_ifmaps));\
;

#define simple_mem__accelerator_assign_stmt_1313_c_macro_ __declare_static_bit_vector(konst_1310,7);\
bit_vector_clear(&konst_1310);\
konst_1310.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u7_u7_1311,7);\
__declare_static_bit_vector(type_cast_1312,7);\
bit_vector_clear(&konst_1310);\
konst_1310.val.byte_array[0] = 1;\
bit_vector_plus( &(ele), &(konst_1310), &(ADD_u7_u7_1311));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1312), &(ADD_u7_u7_1311));\
bit_vector_cast_to_bit_vector(0, &(n_ele), &(type_cast_1312));\
;

#define simple_mem__accelerator_assign_stmt_1324_c_macro_ __declare_static_bit_vector(konst_1316,5);\
bit_vector_clear(&konst_1316);\
konst_1316.val.byte_array[0] = 4;\
__declare_static_bit_vector(ULT_u5_u1_1317,1);\
__declare_static_bit_vector(konst_1319,5);\
bit_vector_clear(&konst_1319);\
konst_1319.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_1320,5);\
__declare_static_bit_vector(konst_1321,5);\
bit_vector_clear(&konst_1321);\
__declare_static_bit_vector(type_cast_1322,5);\
bit_vector_clear(&type_cast_1322);\
__declare_static_bit_vector(MUX_1323,5);\
bit_vector_clear(&konst_1316);\
konst_1316.val.byte_array[0] = 4;\
bit_vector_less(0, &(J), &(konst_1316), &(ULT_u5_u1_1317));\
if (has_undefined_bit(&ULT_u5_u1_1317)) {fprintf(stderr, "Error: variable ULT_u5_u1_1317 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_1317));assert(0);} \
bit_vector_clear(&konst_1319);\
konst_1319.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_1319), &(ADD_u5_u5_1320));\
bit_vector_clear(&konst_1321);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1322), &(konst_1321));\
if(bit_vector_to_uint64(0, &ULT_u5_u1_1317)){\
bit_vector_cast_to_bit_vector(0, &(MUX_1323), &(ADD_u5_u5_1320));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_1323), &(type_cast_1322));\
}\
bit_vector_cast_to_bit_vector(0, &(n_J), &(MUX_1323));\
;

#define simple_mem__accelerator_assign_stmt_1335_c_macro_ __declare_static_bit_vector(konst_1327,5);\
bit_vector_clear(&konst_1327);\
konst_1327.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u5_u1_1328,1);\
__declare_static_bit_vector(konst_1330,6);\
bit_vector_clear(&konst_1330);\
konst_1330.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u6_u6_1331,6);\
__declare_static_bit_vector(type_cast_1332,6);\
__declare_static_bit_vector(MUX_1334,6);\
bit_vector_clear(&konst_1327);\
konst_1327.val.byte_array[0] = 4;\
bit_vector_equal(0, &(J), &(konst_1327), &(EQ_u5_u1_1328));\
if (has_undefined_bit(&EQ_u5_u1_1328)) {fprintf(stderr, "Error: variable EQ_u5_u1_1328 has undefined value (%s) at test point.\n", to_string(&EQ_u5_u1_1328));assert(0);} \
bit_vector_clear(&konst_1330);\
konst_1330.val.byte_array[0] = 2;\
bit_vector_plus( &(I), &(konst_1330), &(ADD_u6_u6_1331));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1332), &(ADD_u6_u6_1331));\
if(bit_vector_to_uint64(0, &EQ_u5_u1_1328)){\
bit_vector_cast_to_bit_vector(0, &(MUX_1334), &(type_cast_1332));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_1334), &(I));\
}\
bit_vector_cast_to_bit_vector(0, &(n_I), &(MUX_1334));\
;

#define simple_mem__accelerator_call_stmt_1339_c_macro_ _simple_mem_cal_col_to_be_replaced_( &(J),  &(col_to_be_replaced), &(new_col_to_be_replaced));\
;

#define simple_mem__accelerator_assign_stmt_1342_c_macro_ bit_vector_cast_to_bit_vector(0, &(n_col_to_be_replaced), &(new_col_to_be_replaced));\
;

#define simple_mem__accelerator_call_stmt_1347_c_macro_ _simple_mem_mainAcc_( &(I),  &(J),  &(col_to_be_replaced), &(ofmap_pixel));\
;

#define simple_mem__accelerator_assign_stmt_1357_c_macro_ __declare_static_bit_vector(konst_1350,6);\
bit_vector_clear(&konst_1350);\
konst_1350.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u6_u1_1351,1);\
__declare_static_bit_vector(konst_1352,1);\
bit_vector_clear(&konst_1352);\
konst_1352.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_1353,1);\
bit_vector_clear(&type_cast_1353);\
type_cast_1353.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_1354,1);\
bit_vector_clear(&konst_1354);\
__declare_static_bit_vector(type_cast_1355,1);\
bit_vector_clear(&type_cast_1355);\
__declare_static_bit_vector(MUX_1356,1);\
bit_vector_clear(&konst_1350);\
konst_1350.val.byte_array[0] = 4;\
bit_vector_equal(0, &(I), &(konst_1350), &(EQ_u6_u1_1351));\
if (has_undefined_bit(&EQ_u6_u1_1351)) {fprintf(stderr, "Error: variable EQ_u6_u1_1351 has undefined value (%s) at test point.\n", to_string(&EQ_u6_u1_1351));assert(0);} \
bit_vector_clear(&konst_1352);\
konst_1352.val.byte_array[0] = 1;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1353), &(konst_1352));\
bit_vector_clear(&konst_1354);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1355), &(konst_1354));\
if(bit_vector_to_uint64(0, &EQ_u6_u1_1351)){\
bit_vector_cast_to_bit_vector(0, &(MUX_1356), &(type_cast_1353));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_1356), &(type_cast_1355));\
}\
bit_vector_cast_to_bit_vector(0, &(checkIFour), &(MUX_1356));\
;

#define simple_mem__accelerator_call_stmt_1363_c_macro_ if (has_undefined_bit(&checkIFour)) {fprintf(stderr, "Error: variable checkIFour has undefined value (%s) at test point.\n", to_string(&checkIFour));assert(0);} \
if (!bit_vector_to_uint64(0, &checkIFour)) {\
_simple_mem_mainAcc2_( &(I_1),  &(J),  &(col_to_be_replaced), &(ofmap_pixel2));\
}\
;

#define simple_mem__accelerator_assign_stmt_1367_c_macro_ __declare_static_bit_vector(type_cast_1366,16);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1366), &(ele));\
write_bit_vector_to_pipe("read_sums",&(type_cast_1366));\
;

#define simple_mem__accelerator_assign_stmt_1370_c_macro_ bit_vector_cast_to_bit_vector(0, &(I_1457_delayed_4_0), &(I));\
;

#define simple_mem__accelerator_assign_stmt_1373_c_macro_ bit_vector_cast_to_bit_vector(0, &(J_1458_delayed_4_0), &(J));\
;

#define simple_mem__accelerator_call_stmt_1379_c_macro_ _simple_mem_accessMem_( &(write_signal),  &(I_1457_delayed_4_0),  &(J_1458_delayed_4_0),  &(ofmap_pixel), &(r_data_sum_cal));\
;

#define simple_mem__accelerator_assign_stmt_1382_c_macro_ bit_vector_cast_to_bit_vector(0, &(checkIFour_1462_delayed_4_0), &(checkIFour));\
;

#define simple_mem__accelerator_assign_stmt_1385_c_macro_ bit_vector_cast_to_bit_vector(0, &(I_1_1464_delayed_4_0), &(I_1));\
;

#define simple_mem__accelerator_assign_stmt_1388_c_macro_ bit_vector_cast_to_bit_vector(0, &(J_1465_delayed_4_0), &(J));\
;

#define simple_mem__accelerator_call_stmt_1395_c_macro_ if (has_undefined_bit(&checkIFour_1462_delayed_4_0)) {fprintf(stderr, "Error: variable checkIFour_1462_delayed_4_0 has undefined value (%s) at test point.\n", to_string(&checkIFour_1462_delayed_4_0));assert(0);} \
if (!bit_vector_to_uint64(0, &checkIFour_1462_delayed_4_0)) {\
_simple_mem_accessMem_( &(write_signal),  &(I_1_1464_delayed_4_0),  &(J_1465_delayed_4_0),  &(ofmap_pixel2), &(r_data_sum_cal2));\
}\
;
;

#define simple_mem__accelerator_branch_block_stmt_1270_c_export_apply_macro_ ;

#define simple_mem__accelerator_assign_stmt_1404_c_macro_ __declare_static_bit_vector(konst_1402,16);\
bit_vector_clear(&konst_1402);\
konst_1402.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_1403,16);\
bit_vector_clear(&type_cast_1403);\
type_cast_1403.val.byte_array[0] = 1;\
bit_vector_clear(&konst_1402);\
konst_1402.val.byte_array[0] = 1;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1403), &(konst_1402));\
write_bit_vector_to_pipe("accelerator_done",&(type_cast_1403));\
;
;

#define simple_mem__accelerator_branch_block_stmt_1264_c_export_apply_macro_ ;
;

#define simple_mem__accelerator_branch_block_stmt_1237_c_export_apply_macro_ ;

#define simple_mem__accelerator_inner_outarg_prep_macro__ ;

#define simple_mem__accelerator_outer_arg_decl_macro__ ;

#define simple_mem__accelerator_outer_op_xfer_macro__ ;

#define simple_mem__accessMem_inner_inarg_prep_macro__ __declare_static_bit_vector(read_write_bar_1,1);\
bit_vector_cast_to_bit_vector(0, &(read_write_bar_1), &((*__pread_write_bar_1)));\
__declare_static_bit_vector(row_index,6);\
bit_vector_cast_to_bit_vector(0, &(row_index), &((*__prow_index)));\
__declare_static_bit_vector(col_index,5);\
bit_vector_cast_to_bit_vector(0, &(col_index), &((*__pcol_index)));\
__declare_static_bit_vector(write_data_1,16);\
bit_vector_cast_to_bit_vector(0, &(write_data_1), &((*__pwrite_data_1)));\
__declare_static_bit_vector(read_data_1,16);\
__declare_static_bit_vector(t_read_data_11,16);\
__declare_static_bit_vector(read_write_bar_1_71_delayed_4_0,1);\

#define simple_mem__accessMem_assign_stmt_63_c_macro_ if (has_undefined_bit(&read_write_bar_1)) {fprintf(stderr, "Error: variable read_write_bar_1 has undefined value (%s) at test point.\n", to_string(&read_write_bar_1));assert(0);} \
if (bit_vector_to_uint64(0, &read_write_bar_1)) {\
bit_vector_cast_to_bit_vector(0, &(t_read_data_11), &((mem_array[bit_vector_to_uint64(0, &row_index)][bit_vector_to_uint64(0, &col_index)])));\
}
;

#define simple_mem__accessMem_assign_stmt_69_c_macro_ if (has_undefined_bit(&read_write_bar_1)) {fprintf(stderr, "Error: variable read_write_bar_1 has undefined value (%s) at test point.\n", to_string(&read_write_bar_1));assert(0);} \
if (!bit_vector_to_uint64(0, &read_write_bar_1)) {\
bit_vector_cast_to_bit_vector(0, &((mem_array[bit_vector_to_uint64(0, &row_index)][bit_vector_to_uint64(0, &col_index)])), &(write_data_1));\
}
;

#define simple_mem__accessMem_assign_stmt_72_c_macro_ bit_vector_cast_to_bit_vector(0, &(read_write_bar_1_71_delayed_4_0), &(read_write_bar_1));\
;

#define simple_mem__accessMem_assign_stmt_78_c_macro_ __declare_static_bit_vector(konst_76,16);\
bit_vector_clear(&konst_76);\
__declare_static_bit_vector(MUX_77,16);\
if (has_undefined_bit(&read_write_bar_1_71_delayed_4_0)) {fprintf(stderr, "Error: variable read_write_bar_1_71_delayed_4_0 has undefined value (%s) at test point.\n", to_string(&read_write_bar_1_71_delayed_4_0));assert(0);} \
bit_vector_clear(&konst_76);\
if(bit_vector_to_uint64(0, &read_write_bar_1_71_delayed_4_0)){\
bit_vector_cast_to_bit_vector(0, &(MUX_77), &(t_read_data_11));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_77), &(konst_76));\
}\
bit_vector_cast_to_bit_vector(0, &(read_data_1), &(MUX_77));\
;

#define simple_mem__accessMem_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pread_data_1)), &(read_data_1));\
;

#define simple_mem__cal_col_to_be_replaced_inner_inarg_prep_macro__ __declare_static_bit_vector(J,5);\
bit_vector_cast_to_bit_vector(0, &(J), &((*__pJ)));\
__declare_static_bit_vector(col_to_be_replaced,2);\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced), &((*__pcol_to_be_replaced)));\
__declare_static_bit_vector(new_col_to_be_replaced,2);\
__declare_static_bit_vector(col_to_be_replaced_3,2);\
bit_vector_clear(&col_to_be_replaced_3);\
col_to_be_replaced_3.val.byte_array[0] = 3;\
__declare_static_bit_vector(col_to_be_replaced_other,2);\
__declare_static_bit_vector(checkJZero,1);\

#define simple_mem__cal_col_to_be_replaced_assign_stmt_586_c_macro_ __declare_static_bit_vector(konst_584,2);\
bit_vector_clear(&konst_584);\
konst_584.val.byte_array[0] = 3;\
__declare_static_bit_vector(type_cast_585,2);\
bit_vector_clear(&type_cast_585);\
type_cast_585.val.byte_array[0] = 3;\
bit_vector_clear(&konst_584);\
konst_584.val.byte_array[0] = 3;\
bit_vector_bitcast_to_bit_vector( &(type_cast_585), &(konst_584));\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced_3), &(type_cast_585));\
;

#define simple_mem__cal_col_to_be_replaced_assign_stmt_598_c_macro_ __declare_static_bit_vector(konst_589,2);\
bit_vector_clear(&konst_589);\
konst_589.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_590,1);\
__declare_static_bit_vector(konst_591,2);\
bit_vector_clear(&konst_591);\
__declare_static_bit_vector(type_cast_592,2);\
bit_vector_clear(&type_cast_592);\
__declare_static_bit_vector(konst_594,2);\
bit_vector_clear(&konst_594);\
konst_594.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u2_u2_595,2);\
__declare_static_bit_vector(type_cast_596,2);\
__declare_static_bit_vector(MUX_597,2);\
bit_vector_clear(&konst_589);\
konst_589.val.byte_array[0] = 3;\
bit_vector_equal(0, &(col_to_be_replaced), &(konst_589), &(EQ_u2_u1_590));\
if (has_undefined_bit(&EQ_u2_u1_590)) {fprintf(stderr, "Error: variable EQ_u2_u1_590 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_590));assert(0);} \
bit_vector_clear(&konst_591);\
bit_vector_bitcast_to_bit_vector( &(type_cast_592), &(konst_591));\
bit_vector_clear(&konst_594);\
konst_594.val.byte_array[0] = 1;\
bit_vector_plus( &(col_to_be_replaced), &(konst_594), &(ADD_u2_u2_595));\
bit_vector_bitcast_to_bit_vector( &(type_cast_596), &(ADD_u2_u2_595));\
if(bit_vector_to_uint64(0, &EQ_u2_u1_590)){\
bit_vector_cast_to_bit_vector(0, &(MUX_597), &(type_cast_592));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_597), &(type_cast_596));\
}\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced_other), &(MUX_597));\
;

#define simple_mem__cal_col_to_be_replaced_assign_stmt_608_c_macro_ __declare_static_bit_vector(EQ_u5_u1_602,1);\
__declare_static_bit_vector(konst_603,1);\
bit_vector_clear(&konst_603);\
__declare_static_bit_vector(type_cast_604,1);\
bit_vector_clear(&type_cast_604);\
__declare_static_bit_vector(konst_605,1);\
bit_vector_clear(&konst_605);\
konst_605.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_606,1);\
bit_vector_clear(&type_cast_606);\
type_cast_606.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUX_607,1);\
bit_vector_equal(0, &(J), &(last_value_J), &(EQ_u5_u1_602));\
if (has_undefined_bit(&EQ_u5_u1_602)) {fprintf(stderr, "Error: variable EQ_u5_u1_602 has undefined value (%s) at test point.\n", to_string(&EQ_u5_u1_602));assert(0);} \
bit_vector_clear(&konst_603);\
bit_vector_bitcast_to_bit_vector( &(type_cast_604), &(konst_603));\
bit_vector_clear(&konst_605);\
konst_605.val.byte_array[0] = 1;\
bit_vector_bitcast_to_bit_vector( &(type_cast_606), &(konst_605));\
if(bit_vector_to_uint64(0, &EQ_u5_u1_602)){\
bit_vector_cast_to_bit_vector(0, &(MUX_607), &(type_cast_604));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_607), &(type_cast_606));\
}\
bit_vector_cast_to_bit_vector(0, &(checkJZero), &(MUX_607));\
;

#define simple_mem__cal_col_to_be_replaced_assign_stmt_614_c_macro_ __declare_static_bit_vector(MUX_613,2);\
if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if(bit_vector_to_uint64(0, &checkJZero)){\
bit_vector_cast_to_bit_vector(0, &(MUX_613), &(col_to_be_replaced_other));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_613), &(col_to_be_replaced_3));\
}\
bit_vector_cast_to_bit_vector(0, &(new_col_to_be_replaced), &(MUX_613));\
;

#define simple_mem__cal_col_to_be_replaced_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnew_col_to_be_replaced)), &(new_col_to_be_replaced));\
;

#define simple_mem__global_storage_initializer__inner_inarg_prep_macro__ 
#define simple_mem__global_storage_initializer__inner_outarg_prep_macro__ ;

#define simple_mem__global_storage_initializer__outer_arg_decl_macro__ ;

#define simple_mem__global_storage_initializer__outer_op_xfer_macro__ ;

#define simple_mem__initFilter_inner_inarg_prep_macro__ __declare_static_bit_vector(start_row_filter,6);\
bit_vector_cast_to_bit_vector(0, &(start_row_filter), &((*__pstart_row_filter)));\
__declare_static_bit_vector(filter_initialized,2);\

#define simple_mem__initFilter_branch_block_stmt_120_c_export_decl_macro_ __declare_static_bit_vector(ele,5);\
__declare_static_bit_vector(J,5);\
__declare_static_bit_vector(I,6);\
__declare_static_bit_vector(n_ele,5);\
__declare_static_bit_vector(n_J,5);\
__declare_static_bit_vector(n_I,6);\
__declare_static_bit_vector(rdata,16);\
__declare_static_bit_vector(I_173_delayed_7_0,6);\
__declare_static_bit_vector(J_174_delayed_7_0,5);\


#define simple_mem__initFilter_merge_stmt_122_c_preamble_macro_ uint8_t merge_stmt_122_entry_flag;\
merge_stmt_122_entry_flag = do_while_entry_flag;\
goto merge_stmt_122_run;\
merge_stmt_122_run: ;\

#define simple_mem__initFilter_phi_stmt_123_c_macro_ __declare_static_bit_vector(konst_125,5);\
bit_vector_clear(&konst_125);\
__declare_static_bit_vector(type_cast_126,5);\
bit_vector_clear(&type_cast_126);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(ele), &(n_ele));\
}\
else {\
__declare_static_bit_vector(konst_125,5);\
bit_vector_clear(&konst_125);\
__declare_static_bit_vector(type_cast_126,5);\
bit_vector_clear(&type_cast_126);\
bit_vector_clear(&konst_125);\
bit_vector_bitcast_to_bit_vector( &(type_cast_126), &(konst_125));\
bit_vector_cast_to_bit_vector(0, &(ele), &(type_cast_126));\
}\
;

#define simple_mem__initFilter_phi_stmt_128_c_macro_ __declare_static_bit_vector(konst_130,5);\
bit_vector_clear(&konst_130);\
__declare_static_bit_vector(type_cast_131,5);\
bit_vector_clear(&type_cast_131);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(n_J));\
}\
else {\
__declare_static_bit_vector(konst_130,5);\
bit_vector_clear(&konst_130);\
__declare_static_bit_vector(type_cast_131,5);\
bit_vector_clear(&type_cast_131);\
bit_vector_clear(&konst_130);\
bit_vector_bitcast_to_bit_vector( &(type_cast_131), &(konst_130));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_131));\
}\
;

#define simple_mem__initFilter_phi_stmt_133_c_macro_ __declare_static_bit_vector(type_cast_136,6);\
bit_vector_clear(&type_cast_136);\
type_cast_136.val.byte_array[0] = 8;\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(n_I));\
}\
else {\
__declare_static_bit_vector(type_cast_136,6);\
bit_vector_clear(&type_cast_136);\
type_cast_136.val.byte_array[0] = 8;\
bit_vector_bitcast_to_bit_vector( &(type_cast_136), &(filter_start_addr));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_136));\
}\
;
;

#define simple_mem__initFilter_merge_stmt_122_c_postamble_macro_ merge_stmt_122_entry_flag = 0;

#define simple_mem__initFilter_assign_stmt_143_c_macro_ __declare_static_bit_vector(konst_141,5);\
bit_vector_clear(&konst_141);\
konst_141.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_142,5);\
bit_vector_clear(&konst_141);\
konst_141.val.byte_array[0] = 1;\
bit_vector_plus( &(ele), &(konst_141), &(ADD_u5_u5_142));\
bit_vector_cast_to_bit_vector(0, &(n_ele), &(ADD_u5_u5_142));\
;

#define simple_mem__initFilter_assign_stmt_154_c_macro_ __declare_static_bit_vector(konst_146,5);\
bit_vector_clear(&konst_146);\
konst_146.val.byte_array[0] = 2;\
__declare_static_bit_vector(ULE_u5_u1_147,1);\
__declare_static_bit_vector(konst_149,5);\
bit_vector_clear(&konst_149);\
konst_149.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_150,5);\
__declare_static_bit_vector(konst_151,5);\
bit_vector_clear(&konst_151);\
__declare_static_bit_vector(type_cast_152,5);\
bit_vector_clear(&type_cast_152);\
__declare_static_bit_vector(MUX_153,5);\
bit_vector_clear(&konst_146);\
konst_146.val.byte_array[0] = 2;\
bit_vector_less_equal(0, &(J), &(konst_146), &(ULE_u5_u1_147));\
if (has_undefined_bit(&ULE_u5_u1_147)) {fprintf(stderr, "Error: variable ULE_u5_u1_147 has undefined value (%s) at test point.\n", to_string(&ULE_u5_u1_147));assert(0);} \
bit_vector_clear(&konst_149);\
konst_149.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_149), &(ADD_u5_u5_150));\
bit_vector_clear(&konst_151);\
bit_vector_bitcast_to_bit_vector( &(type_cast_152), &(konst_151));\
if(bit_vector_to_uint64(0, &ULE_u5_u1_147)){\
bit_vector_cast_to_bit_vector(0, &(MUX_153), &(ADD_u5_u5_150));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_153), &(type_cast_152));\
}\
bit_vector_cast_to_bit_vector(0, &(n_J), &(MUX_153));\
;

#define simple_mem__initFilter_assign_stmt_165_c_macro_ __declare_static_bit_vector(konst_157,5);\
bit_vector_clear(&konst_157);\
konst_157.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u5_u1_158,1);\
__declare_static_bit_vector(konst_160,6);\
bit_vector_clear(&konst_160);\
konst_160.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u6_u6_161,6);\
__declare_static_bit_vector(type_cast_162,6);\
__declare_static_bit_vector(MUX_164,6);\
bit_vector_clear(&konst_157);\
konst_157.val.byte_array[0] = 3;\
bit_vector_equal(0, &(J), &(konst_157), &(EQ_u5_u1_158));\
if (has_undefined_bit(&EQ_u5_u1_158)) {fprintf(stderr, "Error: variable EQ_u5_u1_158 has undefined value (%s) at test point.\n", to_string(&EQ_u5_u1_158));assert(0);} \
bit_vector_clear(&konst_160);\
konst_160.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_160), &(ADD_u6_u6_161));\
bit_vector_bitcast_to_bit_vector( &(type_cast_162), &(ADD_u6_u6_161));\
if(bit_vector_to_uint64(0, &EQ_u5_u1_158)){\
bit_vector_cast_to_bit_vector(0, &(MUX_164), &(type_cast_162));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_164), &(I));\
}\
bit_vector_cast_to_bit_vector(0, &(n_I), &(MUX_164));\
;

#define simple_mem__initFilter_call_stmt_171_c_macro_ _simple_mem_accessMem_( &(read_signal),  &(I),  &(J),  &(write_data_zero), &(rdata));\
;

#define simple_mem__initFilter_assign_stmt_174_c_macro_ bit_vector_cast_to_bit_vector(0, &(I_173_delayed_7_0), &(I));\
;

#define simple_mem__initFilter_assign_stmt_177_c_macro_ bit_vector_cast_to_bit_vector(0, &(J_174_delayed_7_0), &(J));\
;

#define simple_mem__initFilter_assign_stmt_182_c_macro_ bit_vector_cast_to_bit_vector(0, &((filter[bit_vector_to_uint64(0, &I_173_delayed_7_0)][bit_vector_to_uint64(0, &J_174_delayed_7_0)])), &(rdata));\
;
;

#define simple_mem__initFilter_branch_block_stmt_120_c_export_apply_macro_ ;

#define simple_mem__initFilter_assign_stmt_191_c_macro_ __declare_static_bit_vector(konst_189,2);\
bit_vector_clear(&konst_189);\
konst_189.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_190,2);\
bit_vector_clear(&type_cast_190);\
type_cast_190.val.byte_array[0] = 1;\
bit_vector_clear(&konst_189);\
konst_189.val.byte_array[0] = 1;\
bit_vector_bitcast_to_bit_vector( &(type_cast_190), &(konst_189));\
bit_vector_cast_to_bit_vector(0, &(filter_initialized), &(type_cast_190));\
;

#define simple_mem__initFilter_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pfilter_initialized)), &(filter_initialized));\
;

#define simple_mem__initIfMaps_inner_inarg_prep_macro__ __declare_static_bit_vector(start,1);\
bit_vector_cast_to_bit_vector(0, &(start), &((*__pstart)));\
__declare_static_bit_vector(I,6);\
bit_vector_cast_to_bit_vector(0, &(I), &((*__pI)));\
__declare_static_bit_vector(J,5);\
bit_vector_cast_to_bit_vector(0, &(J), &((*__pJ)));\
__declare_static_bit_vector(col_to_be_replaced,2);\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced), &((*__pcol_to_be_replaced)));\
__declare_static_bit_vector(finished,2);\
__declare_static_bit_vector(checkJZero,1);\
__declare_static_bit_vector(rowI,6);\
__declare_static_bit_vector(rowI_1,6);\
__declare_static_bit_vector(rowI_2,6);\
__declare_static_bit_vector(rowI_3,6);\
__declare_static_bit_vector(rowI_4,6);\
__declare_static_bit_vector(col0,5);\
bit_vector_clear(&col0);\
__declare_static_bit_vector(col1,5);\
bit_vector_clear(&col1);\
col1.val.byte_array[0] = 1;\
__declare_static_bit_vector(col2,5);\
bit_vector_clear(&col2);\
col2.val.byte_array[0] = 2;\
__declare_static_bit_vector(rdata_I00,16);\
__declare_static_bit_vector(rdata_I01,16);\
__declare_static_bit_vector(rdata_I02,16);\
__declare_static_bit_vector(rdata_I10,16);\
__declare_static_bit_vector(rdata_I11,16);\
__declare_static_bit_vector(rdata_I12,16);\
__declare_static_bit_vector(rdata_I20,16);\
__declare_static_bit_vector(rdata_I21,16);\
__declare_static_bit_vector(rdata_I22,16);\
__declare_static_bit_vector(rdata_I30,16);\
__declare_static_bit_vector(rdata_I31,16);\
__declare_static_bit_vector(rdata_I32,16);\
__declare_static_bit_vector(rdata_I40,16);\
__declare_static_bit_vector(rdata_I41,16);\
__declare_static_bit_vector(rdata_I42,16);\
__declare_static_bit_vector(J_3,5);\
__declare_static_bit_vector(rdata_ifmap0,16);\
__declare_static_bit_vector(rdata_ifmap1,16);\
__declare_static_bit_vector(rdata_ifmap2,16);\
__declare_static_bit_vector(rdata_ifmap3,16);\
__declare_static_bit_vector(rdata_ifmap4,16);\

#define simple_mem__initIfMaps_assign_stmt_208_c_macro_ __declare_static_bit_vector(konst_201,5);\
bit_vector_clear(&konst_201);\
__declare_static_bit_vector(EQ_u5_u1_202,1);\
__declare_static_bit_vector(konst_203,1);\
bit_vector_clear(&konst_203);\
__declare_static_bit_vector(type_cast_204,1);\
bit_vector_clear(&type_cast_204);\
__declare_static_bit_vector(konst_205,1);\
bit_vector_clear(&konst_205);\
konst_205.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_206,1);\
bit_vector_clear(&type_cast_206);\
type_cast_206.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUX_207,1);\
bit_vector_clear(&konst_201);\
bit_vector_equal(0, &(J), &(konst_201), &(EQ_u5_u1_202));\
if (has_undefined_bit(&EQ_u5_u1_202)) {fprintf(stderr, "Error: variable EQ_u5_u1_202 has undefined value (%s) at test point.\n", to_string(&EQ_u5_u1_202));assert(0);} \
bit_vector_clear(&konst_203);\
bit_vector_bitcast_to_bit_vector( &(type_cast_204), &(konst_203));\
bit_vector_clear(&konst_205);\
konst_205.val.byte_array[0] = 1;\
bit_vector_bitcast_to_bit_vector( &(type_cast_206), &(konst_205));\
if(bit_vector_to_uint64(0, &EQ_u5_u1_202)){\
bit_vector_cast_to_bit_vector(0, &(MUX_207), &(type_cast_204));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_207), &(type_cast_206));\
}\
bit_vector_cast_to_bit_vector(0, &(checkJZero), &(MUX_207));\
;

#define simple_mem__initIfMaps_assign_stmt_212_c_macro_ __declare_static_bit_vector(type_cast_211,6);\
bit_vector_bitcast_to_bit_vector( &(type_cast_211), &(I));\
bit_vector_cast_to_bit_vector(0, &(rowI), &(type_cast_211));\
;

#define simple_mem__initIfMaps_assign_stmt_218_c_macro_ __declare_static_bit_vector(konst_215,6);\
bit_vector_clear(&konst_215);\
konst_215.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u6_u6_216,6);\
__declare_static_bit_vector(type_cast_217,6);\
bit_vector_clear(&konst_215);\
konst_215.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_215), &(ADD_u6_u6_216));\
bit_vector_bitcast_to_bit_vector( &(type_cast_217), &(ADD_u6_u6_216));\
bit_vector_cast_to_bit_vector(0, &(rowI_1), &(type_cast_217));\
;

#define simple_mem__initIfMaps_assign_stmt_224_c_macro_ __declare_static_bit_vector(konst_221,6);\
bit_vector_clear(&konst_221);\
konst_221.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u6_u6_222,6);\
__declare_static_bit_vector(type_cast_223,6);\
bit_vector_clear(&konst_221);\
konst_221.val.byte_array[0] = 2;\
bit_vector_plus( &(I), &(konst_221), &(ADD_u6_u6_222));\
bit_vector_bitcast_to_bit_vector( &(type_cast_223), &(ADD_u6_u6_222));\
bit_vector_cast_to_bit_vector(0, &(rowI_2), &(type_cast_223));\
;

#define simple_mem__initIfMaps_assign_stmt_230_c_macro_ __declare_static_bit_vector(konst_227,6);\
bit_vector_clear(&konst_227);\
konst_227.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u6_u6_228,6);\
__declare_static_bit_vector(type_cast_229,6);\
bit_vector_clear(&konst_227);\
konst_227.val.byte_array[0] = 3;\
bit_vector_plus( &(I), &(konst_227), &(ADD_u6_u6_228));\
bit_vector_bitcast_to_bit_vector( &(type_cast_229), &(ADD_u6_u6_228));\
bit_vector_cast_to_bit_vector(0, &(rowI_3), &(type_cast_229));\
;

#define simple_mem__initIfMaps_assign_stmt_236_c_macro_ __declare_static_bit_vector(konst_233,6);\
bit_vector_clear(&konst_233);\
konst_233.val.byte_array[0] = 4;\
__declare_static_bit_vector(ADD_u6_u6_234,6);\
__declare_static_bit_vector(type_cast_235,6);\
bit_vector_clear(&konst_233);\
konst_233.val.byte_array[0] = 4;\
bit_vector_plus( &(I), &(konst_233), &(ADD_u6_u6_234));\
bit_vector_bitcast_to_bit_vector( &(type_cast_235), &(ADD_u6_u6_234));\
bit_vector_cast_to_bit_vector(0, &(rowI_4), &(type_cast_235));\
;

#define simple_mem__initIfMaps_assign_stmt_240_c_macro_ __declare_static_bit_vector(konst_238,5);\
bit_vector_clear(&konst_238);\
__declare_static_bit_vector(type_cast_239,5);\
bit_vector_clear(&type_cast_239);\
bit_vector_clear(&konst_238);\
bit_vector_bitcast_to_bit_vector( &(type_cast_239), &(konst_238));\
bit_vector_cast_to_bit_vector(0, &(col0), &(type_cast_239));\
;

#define simple_mem__initIfMaps_assign_stmt_244_c_macro_ __declare_static_bit_vector(konst_242,5);\
bit_vector_clear(&konst_242);\
konst_242.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_243,5);\
bit_vector_clear(&type_cast_243);\
type_cast_243.val.byte_array[0] = 1;\
bit_vector_clear(&konst_242);\
konst_242.val.byte_array[0] = 1;\
bit_vector_bitcast_to_bit_vector( &(type_cast_243), &(konst_242));\
bit_vector_cast_to_bit_vector(0, &(col1), &(type_cast_243));\
;

#define simple_mem__initIfMaps_assign_stmt_248_c_macro_ __declare_static_bit_vector(konst_246,5);\
bit_vector_clear(&konst_246);\
konst_246.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_247,5);\
bit_vector_clear(&type_cast_247);\
type_cast_247.val.byte_array[0] = 2;\
bit_vector_clear(&konst_246);\
konst_246.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_247), &(konst_246));\
bit_vector_cast_to_bit_vector(0, &(col2), &(type_cast_247));\
;

#define simple_mem__initIfMaps_call_stmt_255_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI),  &(col0),  &(write_data_zero), &(rdata_I00));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_261_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_257,32);\
bit_vector_clear(&konst_257);\
__declare_static_bit_vector(konst_258,32);\
bit_vector_clear(&konst_258);\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_257)][bit_vector_to_uint64(0, &konst_258)])), &(rdata_I00));\
}
;

#define simple_mem__initIfMaps_call_stmt_268_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI),  &(col1),  &(write_data_zero), &(rdata_I01));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_274_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_270,32);\
bit_vector_clear(&konst_270);\
__declare_static_bit_vector(konst_271,32);\
bit_vector_clear(&konst_271);\
konst_271.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_270)][bit_vector_to_uint64(0, &konst_271)])), &(rdata_I01));\
}
;

#define simple_mem__initIfMaps_call_stmt_281_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI),  &(col2),  &(write_data_zero), &(rdata_I02));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_287_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_283,32);\
bit_vector_clear(&konst_283);\
__declare_static_bit_vector(konst_284,32);\
bit_vector_clear(&konst_284);\
konst_284.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_283)][bit_vector_to_uint64(0, &konst_284)])), &(rdata_I02));\
}
;

#define simple_mem__initIfMaps_call_stmt_294_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_1),  &(col0),  &(write_data_zero), &(rdata_I10));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_300_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_296,32);\
bit_vector_clear(&konst_296);\
konst_296.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_297,32);\
bit_vector_clear(&konst_297);\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_296)][bit_vector_to_uint64(0, &konst_297)])), &(rdata_I10));\
}
;

#define simple_mem__initIfMaps_assign_stmt_306_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_302,32);\
bit_vector_clear(&konst_302);\
__declare_static_bit_vector(konst_303,32);\
bit_vector_clear(&konst_303);\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_302)][bit_vector_to_uint64(0, &konst_303)])), &(rdata_I10));\
}
;

#define simple_mem__initIfMaps_call_stmt_313_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_1),  &(col1),  &(write_data_zero), &(rdata_I11));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_319_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_315,32);\
bit_vector_clear(&konst_315);\
konst_315.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_316,32);\
bit_vector_clear(&konst_316);\
konst_316.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_315)][bit_vector_to_uint64(0, &konst_316)])), &(rdata_I11));\
}
;

#define simple_mem__initIfMaps_assign_stmt_325_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_321,32);\
bit_vector_clear(&konst_321);\
__declare_static_bit_vector(konst_322,32);\
bit_vector_clear(&konst_322);\
konst_322.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_321)][bit_vector_to_uint64(0, &konst_322)])), &(rdata_I11));\
}
;

#define simple_mem__initIfMaps_call_stmt_332_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_1),  &(col2),  &(write_data_zero), &(rdata_I12));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_338_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_334,32);\
bit_vector_clear(&konst_334);\
konst_334.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_335,32);\
bit_vector_clear(&konst_335);\
konst_335.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_334)][bit_vector_to_uint64(0, &konst_335)])), &(rdata_I12));\
}
;

#define simple_mem__initIfMaps_assign_stmt_344_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_340,32);\
bit_vector_clear(&konst_340);\
__declare_static_bit_vector(konst_341,32);\
bit_vector_clear(&konst_341);\
konst_341.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_340)][bit_vector_to_uint64(0, &konst_341)])), &(rdata_I12));\
}
;

#define simple_mem__initIfMaps_call_stmt_351_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_2),  &(col0),  &(write_data_zero), &(rdata_I20));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_357_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_353,32);\
bit_vector_clear(&konst_353);\
konst_353.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_354,32);\
bit_vector_clear(&konst_354);\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_353)][bit_vector_to_uint64(0, &konst_354)])), &(rdata_I20));\
}
;

#define simple_mem__initIfMaps_assign_stmt_363_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_359,32);\
bit_vector_clear(&konst_359);\
konst_359.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_360,32);\
bit_vector_clear(&konst_360);\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_359)][bit_vector_to_uint64(0, &konst_360)])), &(rdata_I20));\
}
;

#define simple_mem__initIfMaps_call_stmt_370_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_2),  &(col1),  &(write_data_zero), &(rdata_I21));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_376_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_372,32);\
bit_vector_clear(&konst_372);\
konst_372.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_373,32);\
bit_vector_clear(&konst_373);\
konst_373.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_372)][bit_vector_to_uint64(0, &konst_373)])), &(rdata_I21));\
}
;

#define simple_mem__initIfMaps_assign_stmt_382_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_378,32);\
bit_vector_clear(&konst_378);\
konst_378.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_379,32);\
bit_vector_clear(&konst_379);\
konst_379.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_378)][bit_vector_to_uint64(0, &konst_379)])), &(rdata_I21));\
}
;

#define simple_mem__initIfMaps_call_stmt_389_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_2),  &(col2),  &(write_data_zero), &(rdata_I22));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_395_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_391,32);\
bit_vector_clear(&konst_391);\
konst_391.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_392,32);\
bit_vector_clear(&konst_392);\
konst_392.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_391)][bit_vector_to_uint64(0, &konst_392)])), &(rdata_I22));\
}
;

#define simple_mem__initIfMaps_assign_stmt_401_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_397,32);\
bit_vector_clear(&konst_397);\
konst_397.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_398,32);\
bit_vector_clear(&konst_398);\
konst_398.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_397)][bit_vector_to_uint64(0, &konst_398)])), &(rdata_I22));\
}
;

#define simple_mem__initIfMaps_call_stmt_408_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_3),  &(col0),  &(write_data_zero), &(rdata_I30));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_414_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_410,32);\
bit_vector_clear(&konst_410);\
konst_410.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_411,32);\
bit_vector_clear(&konst_411);\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_410)][bit_vector_to_uint64(0, &konst_411)])), &(rdata_I30));\
}
;

#define simple_mem__initIfMaps_assign_stmt_420_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_416,32);\
bit_vector_clear(&konst_416);\
konst_416.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_417,32);\
bit_vector_clear(&konst_417);\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_416)][bit_vector_to_uint64(0, &konst_417)])), &(rdata_I30));\
}
;

#define simple_mem__initIfMaps_call_stmt_427_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_3),  &(col1),  &(write_data_zero), &(rdata_I31));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_433_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_429,32);\
bit_vector_clear(&konst_429);\
konst_429.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_430,32);\
bit_vector_clear(&konst_430);\
konst_430.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_429)][bit_vector_to_uint64(0, &konst_430)])), &(rdata_I31));\
}
;

#define simple_mem__initIfMaps_assign_stmt_439_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_435,32);\
bit_vector_clear(&konst_435);\
konst_435.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_436,32);\
bit_vector_clear(&konst_436);\
konst_436.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_435)][bit_vector_to_uint64(0, &konst_436)])), &(rdata_I31));\
}
;

#define simple_mem__initIfMaps_call_stmt_446_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_3),  &(col2),  &(write_data_zero), &(rdata_I32));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_452_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_448,32);\
bit_vector_clear(&konst_448);\
konst_448.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_449,32);\
bit_vector_clear(&konst_449);\
konst_449.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_448)][bit_vector_to_uint64(0, &konst_449)])), &(rdata_I32));\
}
;

#define simple_mem__initIfMaps_assign_stmt_458_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_454,32);\
bit_vector_clear(&konst_454);\
konst_454.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_455,32);\
bit_vector_clear(&konst_455);\
konst_455.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_454)][bit_vector_to_uint64(0, &konst_455)])), &(rdata_I32));\
}
;

#define simple_mem__initIfMaps_call_stmt_465_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_4),  &(col0),  &(write_data_zero), &(rdata_I40));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_471_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_467,32);\
bit_vector_clear(&konst_467);\
konst_467.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_468,32);\
bit_vector_clear(&konst_468);\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_467)][bit_vector_to_uint64(0, &konst_468)])), &(rdata_I40));\
}
;

#define simple_mem__initIfMaps_call_stmt_478_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_4),  &(col1),  &(write_data_zero), &(rdata_I41));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_484_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_480,32);\
bit_vector_clear(&konst_480);\
konst_480.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_481,32);\
bit_vector_clear(&konst_481);\
konst_481.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_480)][bit_vector_to_uint64(0, &konst_481)])), &(rdata_I41));\
}
;

#define simple_mem__initIfMaps_call_stmt_491_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
_simple_mem_accessMem_( &(read_signal),  &(rowI_4),  &(col2),  &(write_data_zero), &(rdata_I42));\
}\
;

#define simple_mem__initIfMaps_assign_stmt_497_c_macro_ if (has_undefined_bit(&checkJZero)) {fprintf(stderr, "Error: variable checkJZero has undefined value (%s) at test point.\n", to_string(&checkJZero));assert(0);} \
if (!bit_vector_to_uint64(0, &checkJZero)) {\
__declare_static_bit_vector(konst_493,32);\
bit_vector_clear(&konst_493);\
konst_493.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_494,32);\
bit_vector_clear(&konst_494);\
konst_494.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_493)][bit_vector_to_uint64(0, &konst_494)])), &(rdata_I42));\
}
;

#define simple_mem__initIfMaps_assign_stmt_503_c_macro_ __declare_static_bit_vector(konst_500,5);\
bit_vector_clear(&konst_500);\
konst_500.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u5_u5_501,5);\
__declare_static_bit_vector(type_cast_502,5);\
bit_vector_clear(&konst_500);\
konst_500.val.byte_array[0] = 3;\
bit_vector_plus( &(J), &(konst_500), &(ADD_u5_u5_501));\
bit_vector_bitcast_to_bit_vector( &(type_cast_502), &(ADD_u5_u5_501));\
bit_vector_cast_to_bit_vector(0, &(J_3), &(type_cast_502));\
;

#define simple_mem__initIfMaps_call_stmt_509_c_macro_ _simple_mem_accessMem_( &(read_signal),  &(rowI),  &(J_3),  &(write_data_zero), &(rdata_ifmap0));\
;

#define simple_mem__initIfMaps_assign_stmt_514_c_macro_ __declare_static_bit_vector(konst_510,32);\
bit_vector_clear(&konst_510);\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_510)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &(rdata_ifmap0));\
;

#define simple_mem__initIfMaps_call_stmt_520_c_macro_ _simple_mem_accessMem_( &(read_signal),  &(rowI_1),  &(J_3),  &(write_data_zero), &(rdata_ifmap1));\
;

#define simple_mem__initIfMaps_assign_stmt_525_c_macro_ __declare_static_bit_vector(konst_521,32);\
bit_vector_clear(&konst_521);\
konst_521.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_521)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &(rdata_ifmap1));\
;

#define simple_mem__initIfMaps_assign_stmt_530_c_macro_ __declare_static_bit_vector(konst_526,32);\
bit_vector_clear(&konst_526);\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_526)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &(rdata_ifmap1));\
;

#define simple_mem__initIfMaps_call_stmt_536_c_macro_ _simple_mem_accessMem_( &(read_signal),  &(rowI_2),  &(J_3),  &(write_data_zero), &(rdata_ifmap2));\
;

#define simple_mem__initIfMaps_assign_stmt_541_c_macro_ __declare_static_bit_vector(konst_537,32);\
bit_vector_clear(&konst_537);\
konst_537.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_537)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &(rdata_ifmap2));\
;

#define simple_mem__initIfMaps_assign_stmt_546_c_macro_ __declare_static_bit_vector(konst_542,32);\
bit_vector_clear(&konst_542);\
konst_542.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_542)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &(rdata_ifmap2));\
;

#define simple_mem__initIfMaps_call_stmt_552_c_macro_ _simple_mem_accessMem_( &(read_signal),  &(rowI_3),  &(J_3),  &(write_data_zero), &(rdata_ifmap3));\
;

#define simple_mem__initIfMaps_assign_stmt_557_c_macro_ __declare_static_bit_vector(konst_553,32);\
bit_vector_clear(&konst_553);\
konst_553.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &((ifmaps[bit_vector_to_uint64(0, &konst_553)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &(rdata_ifmap3));\
;

#define simple_mem__initIfMaps_assign_stmt_562_c_macro_ __declare_static_bit_vector(konst_558,32);\
bit_vector_clear(&konst_558);\
konst_558.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_558)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &(rdata_ifmap3));\
;

#define simple_mem__initIfMaps_call_stmt_568_c_macro_ _simple_mem_accessMem_( &(read_signal),  &(rowI_4),  &(J_3),  &(write_data_zero), &(rdata_ifmap4));\
;

#define simple_mem__initIfMaps_assign_stmt_573_c_macro_ __declare_static_bit_vector(konst_569,32);\
bit_vector_clear(&konst_569);\
konst_569.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &((ifmaps2[bit_vector_to_uint64(0, &konst_569)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &(rdata_ifmap4));\
;

#define simple_mem__initIfMaps_assign_stmt_577_c_macro_ __declare_static_bit_vector(konst_575,2);\
bit_vector_clear(&konst_575);\
konst_575.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_576,2);\
bit_vector_clear(&type_cast_576);\
type_cast_576.val.byte_array[0] = 1;\
bit_vector_clear(&konst_575);\
konst_575.val.byte_array[0] = 1;\
bit_vector_bitcast_to_bit_vector( &(type_cast_576), &(konst_575));\
bit_vector_cast_to_bit_vector(0, &(finished), &(type_cast_576));\
;

#define simple_mem__initIfMaps_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pfinished)), &(finished));\
;

#define simple_mem__mainAcc_inner_inarg_prep_macro__ __declare_static_bit_vector(I,6);\
bit_vector_cast_to_bit_vector(0, &(I), &((*__pI)));\
__declare_static_bit_vector(J,5);\
bit_vector_cast_to_bit_vector(0, &(J), &((*__pJ)));\
__declare_static_bit_vector(col_to_be_replaced,2);\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced), &((*__pcol_to_be_replaced)));\
__declare_static_bit_vector(ofmap_pixel,16);\
__declare_static_bit_vector(zero,2);\
bit_vector_clear(&zero);\
__declare_static_bit_vector(one,2);\
bit_vector_clear(&one);\
one.val.byte_array[0] = 1;\
__declare_static_bit_vector(two,2);\
bit_vector_clear(&two);\
two.val.byte_array[0] = 2;\
__declare_static_bit_vector(three,2);\
bit_vector_clear(&three);\
three.val.byte_array[0] = 3;\
__declare_static_bit_vector(col_to_be_replaced_1,2);\
__declare_static_bit_vector(col_to_be_replaced_2,2);\
__declare_static_bit_vector(col_to_be_replaced_3,2);\
__declare_static_bit_vector(pp03,16);\
__declare_static_bit_vector(pp13,16);\
__declare_static_bit_vector(pp23,16);\
__declare_static_bit_vector(pp33,16);\
__declare_static_bit_vector(pp02,16);\
__declare_static_bit_vector(pp12,16);\
__declare_static_bit_vector(pp22,16);\
__declare_static_bit_vector(pp32,16);\
__declare_static_bit_vector(pp01,16);\
__declare_static_bit_vector(pp11,16);\
__declare_static_bit_vector(pp21,16);\
__declare_static_bit_vector(pp31,16);\
__declare_static_bit_vector(pp00,16);\
__declare_static_bit_vector(pp10,16);\
__declare_static_bit_vector(pp20,16);\
__declare_static_bit_vector(pp30,16);\
__declare_static_bit_vector(sum0,16);\
__declare_static_bit_vector(sum1,16);\
__declare_static_bit_vector(sum2,16);\
__declare_static_bit_vector(sum3,16);\
__declare_static_bit_vector(sum4,16);\
__declare_static_bit_vector(sum5,16);\
__declare_static_bit_vector(sum6,16);\
__declare_static_bit_vector(sum7,16);\
__declare_static_bit_vector(sum10,16);\
__declare_static_bit_vector(sum11,16);\
__declare_static_bit_vector(sum12,16);\
__declare_static_bit_vector(sum13,16);\
__declare_static_bit_vector(sum20,16);\
__declare_static_bit_vector(sum21,16);\

#define simple_mem__mainAcc_assign_stmt_624_c_macro_ __declare_static_bit_vector(konst_622,2);\
bit_vector_clear(&konst_622);\
__declare_static_bit_vector(type_cast_623,2);\
bit_vector_clear(&type_cast_623);\
bit_vector_clear(&konst_622);\
bit_vector_bitcast_to_bit_vector( &(type_cast_623), &(konst_622));\
bit_vector_cast_to_bit_vector(0, &(zero), &(type_cast_623));\
;

#define simple_mem__mainAcc_assign_stmt_628_c_macro_ __declare_static_bit_vector(konst_626,2);\
bit_vector_clear(&konst_626);\
konst_626.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_627,2);\
bit_vector_clear(&type_cast_627);\
type_cast_627.val.byte_array[0] = 1;\
bit_vector_clear(&konst_626);\
konst_626.val.byte_array[0] = 1;\
bit_vector_bitcast_to_bit_vector( &(type_cast_627), &(konst_626));\
bit_vector_cast_to_bit_vector(0, &(one), &(type_cast_627));\
;

#define simple_mem__mainAcc_assign_stmt_632_c_macro_ __declare_static_bit_vector(konst_630,2);\
bit_vector_clear(&konst_630);\
konst_630.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_631,2);\
bit_vector_clear(&type_cast_631);\
type_cast_631.val.byte_array[0] = 2;\
bit_vector_clear(&konst_630);\
konst_630.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_631), &(konst_630));\
bit_vector_cast_to_bit_vector(0, &(two), &(type_cast_631));\
;

#define simple_mem__mainAcc_assign_stmt_636_c_macro_ __declare_static_bit_vector(konst_634,2);\
bit_vector_clear(&konst_634);\
konst_634.val.byte_array[0] = 3;\
__declare_static_bit_vector(type_cast_635,2);\
bit_vector_clear(&type_cast_635);\
type_cast_635.val.byte_array[0] = 3;\
bit_vector_clear(&konst_634);\
konst_634.val.byte_array[0] = 3;\
bit_vector_bitcast_to_bit_vector( &(type_cast_635), &(konst_634));\
bit_vector_cast_to_bit_vector(0, &(three), &(type_cast_635));\
;

#define simple_mem__mainAcc_assign_stmt_648_c_macro_ __declare_static_bit_vector(konst_639,2);\
bit_vector_clear(&konst_639);\
__declare_static_bit_vector(EQ_u2_u1_640,1);\
__declare_static_bit_vector(konst_641,2);\
bit_vector_clear(&konst_641);\
konst_641.val.byte_array[0] = 3;\
__declare_static_bit_vector(type_cast_642,2);\
bit_vector_clear(&type_cast_642);\
type_cast_642.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_644,2);\
bit_vector_clear(&konst_644);\
konst_644.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u2_u2_645,2);\
__declare_static_bit_vector(type_cast_646,2);\
__declare_static_bit_vector(MUX_647,2);\
bit_vector_clear(&konst_639);\
bit_vector_equal(0, &(col_to_be_replaced), &(konst_639), &(EQ_u2_u1_640));\
if (has_undefined_bit(&EQ_u2_u1_640)) {fprintf(stderr, "Error: variable EQ_u2_u1_640 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_640));assert(0);} \
bit_vector_clear(&konst_641);\
konst_641.val.byte_array[0] = 3;\
bit_vector_bitcast_to_bit_vector( &(type_cast_642), &(konst_641));\
bit_vector_clear(&konst_644);\
konst_644.val.byte_array[0] = 1;\
bit_vector_minus( &(col_to_be_replaced), &(konst_644), &(SUB_u2_u2_645));\
bit_vector_bitcast_to_bit_vector( &(type_cast_646), &(SUB_u2_u2_645));\
if(bit_vector_to_uint64(0, &EQ_u2_u1_640)){\
bit_vector_cast_to_bit_vector(0, &(MUX_647), &(type_cast_642));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_647), &(type_cast_646));\
}\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced_1), &(MUX_647));\
;

#define simple_mem__mainAcc_assign_stmt_662_c_macro_ __declare_static_bit_vector(konst_651,2);\
bit_vector_clear(&konst_651);\
konst_651.val.byte_array[0] = 2;\
__declare_static_bit_vector(UGE_u2_u1_652,1);\
__declare_static_bit_vector(konst_654,2);\
bit_vector_clear(&konst_654);\
konst_654.val.byte_array[0] = 2;\
__declare_static_bit_vector(SUB_u2_u2_655,2);\
__declare_static_bit_vector(type_cast_656,2);\
__declare_static_bit_vector(konst_658,2);\
bit_vector_clear(&konst_658);\
konst_658.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u2_u2_659,2);\
__declare_static_bit_vector(type_cast_660,2);\
__declare_static_bit_vector(MUX_661,2);\
bit_vector_clear(&konst_651);\
konst_651.val.byte_array[0] = 2;\
bit_vector_greater_equal(0, &(col_to_be_replaced), &(konst_651), &(UGE_u2_u1_652));\
if (has_undefined_bit(&UGE_u2_u1_652)) {fprintf(stderr, "Error: variable UGE_u2_u1_652 has undefined value (%s) at test point.\n", to_string(&UGE_u2_u1_652));assert(0);} \
bit_vector_clear(&konst_654);\
konst_654.val.byte_array[0] = 2;\
bit_vector_minus( &(col_to_be_replaced), &(konst_654), &(SUB_u2_u2_655));\
bit_vector_bitcast_to_bit_vector( &(type_cast_656), &(SUB_u2_u2_655));\
bit_vector_clear(&konst_658);\
konst_658.val.byte_array[0] = 2;\
bit_vector_plus( &(col_to_be_replaced), &(konst_658), &(ADD_u2_u2_659));\
bit_vector_bitcast_to_bit_vector( &(type_cast_660), &(ADD_u2_u2_659));\
if(bit_vector_to_uint64(0, &UGE_u2_u1_652)){\
bit_vector_cast_to_bit_vector(0, &(MUX_661), &(type_cast_656));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_661), &(type_cast_660));\
}\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced_2), &(MUX_661));\
;

#define simple_mem__mainAcc_assign_stmt_674_c_macro_ __declare_static_bit_vector(konst_665,2);\
bit_vector_clear(&konst_665);\
konst_665.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_666,1);\
__declare_static_bit_vector(konst_667,2);\
bit_vector_clear(&konst_667);\
__declare_static_bit_vector(type_cast_668,2);\
bit_vector_clear(&type_cast_668);\
__declare_static_bit_vector(konst_670,2);\
bit_vector_clear(&konst_670);\
konst_670.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u2_u2_671,2);\
__declare_static_bit_vector(type_cast_672,2);\
__declare_static_bit_vector(MUX_673,2);\
bit_vector_clear(&konst_665);\
konst_665.val.byte_array[0] = 3;\
bit_vector_equal(0, &(col_to_be_replaced), &(konst_665), &(EQ_u2_u1_666));\
if (has_undefined_bit(&EQ_u2_u1_666)) {fprintf(stderr, "Error: variable EQ_u2_u1_666 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_666));assert(0);} \
bit_vector_clear(&konst_667);\
bit_vector_bitcast_to_bit_vector( &(type_cast_668), &(konst_667));\
bit_vector_clear(&konst_670);\
konst_670.val.byte_array[0] = 1;\
bit_vector_plus( &(col_to_be_replaced), &(konst_670), &(ADD_u2_u2_671));\
bit_vector_bitcast_to_bit_vector( &(type_cast_672), &(ADD_u2_u2_671));\
if(bit_vector_to_uint64(0, &EQ_u2_u1_666)){\
bit_vector_cast_to_bit_vector(0, &(MUX_673), &(type_cast_668));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_673), &(type_cast_672));\
}\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced_3), &(MUX_673));\
;

#define simple_mem__mainAcc_assign_stmt_684_c_macro_ __declare_static_bit_vector(konst_676,32);\
bit_vector_clear(&konst_676);\
__declare_static_bit_vector(MUL_u16_u16_682,16);\
__declare_static_bit_vector(type_cast_683,16);\
bit_vector_clear(&konst_676);\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_676)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &((filter[bit_vector_to_uint64(0, &zero)][bit_vector_to_uint64(0, &three)])), &(MUL_u16_u16_682));\
bit_vector_bitcast_to_bit_vector( &(type_cast_683), &(MUL_u16_u16_682));\
bit_vector_cast_to_bit_vector(0, &(pp03), &(type_cast_683));\
;

#define simple_mem__mainAcc_assign_stmt_694_c_macro_ __declare_static_bit_vector(konst_686,32);\
bit_vector_clear(&konst_686);\
konst_686.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUL_u16_u16_692,16);\
__declare_static_bit_vector(type_cast_693,16);\
bit_vector_clear(&konst_686);\
konst_686.val.byte_array[0] = 1;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_686)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &((filter[bit_vector_to_uint64(0, &one)][bit_vector_to_uint64(0, &three)])), &(MUL_u16_u16_692));\
bit_vector_bitcast_to_bit_vector( &(type_cast_693), &(MUL_u16_u16_692));\
bit_vector_cast_to_bit_vector(0, &(pp13), &(type_cast_693));\
;

#define simple_mem__mainAcc_assign_stmt_704_c_macro_ __declare_static_bit_vector(konst_696,32);\
bit_vector_clear(&konst_696);\
konst_696.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUL_u16_u16_702,16);\
__declare_static_bit_vector(type_cast_703,16);\
bit_vector_clear(&konst_696);\
konst_696.val.byte_array[0] = 2;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_696)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &((filter[bit_vector_to_uint64(0, &two)][bit_vector_to_uint64(0, &three)])), &(MUL_u16_u16_702));\
bit_vector_bitcast_to_bit_vector( &(type_cast_703), &(MUL_u16_u16_702));\
bit_vector_cast_to_bit_vector(0, &(pp23), &(type_cast_703));\
;

#define simple_mem__mainAcc_assign_stmt_714_c_macro_ __declare_static_bit_vector(konst_706,32);\
bit_vector_clear(&konst_706);\
konst_706.val.byte_array[0] = 3;\
__declare_static_bit_vector(MUL_u16_u16_712,16);\
__declare_static_bit_vector(type_cast_713,16);\
bit_vector_clear(&konst_706);\
konst_706.val.byte_array[0] = 3;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_706)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &((filter[bit_vector_to_uint64(0, &three)][bit_vector_to_uint64(0, &three)])), &(MUL_u16_u16_712));\
bit_vector_bitcast_to_bit_vector( &(type_cast_713), &(MUL_u16_u16_712));\
bit_vector_cast_to_bit_vector(0, &(pp33), &(type_cast_713));\
;

#define simple_mem__mainAcc_assign_stmt_724_c_macro_ __declare_static_bit_vector(konst_716,32);\
bit_vector_clear(&konst_716);\
__declare_static_bit_vector(MUL_u16_u16_722,16);\
__declare_static_bit_vector(type_cast_723,16);\
bit_vector_clear(&konst_716);\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_716)][bit_vector_to_uint64(0, &col_to_be_replaced_1)])), &((filter[bit_vector_to_uint64(0, &zero)][bit_vector_to_uint64(0, &two)])), &(MUL_u16_u16_722));\
bit_vector_bitcast_to_bit_vector( &(type_cast_723), &(MUL_u16_u16_722));\
bit_vector_cast_to_bit_vector(0, &(pp02), &(type_cast_723));\
;

#define simple_mem__mainAcc_assign_stmt_734_c_macro_ __declare_static_bit_vector(konst_726,32);\
bit_vector_clear(&konst_726);\
konst_726.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUL_u16_u16_732,16);\
__declare_static_bit_vector(type_cast_733,16);\
bit_vector_clear(&konst_726);\
konst_726.val.byte_array[0] = 1;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_726)][bit_vector_to_uint64(0, &col_to_be_replaced_1)])), &((filter[bit_vector_to_uint64(0, &one)][bit_vector_to_uint64(0, &two)])), &(MUL_u16_u16_732));\
bit_vector_bitcast_to_bit_vector( &(type_cast_733), &(MUL_u16_u16_732));\
bit_vector_cast_to_bit_vector(0, &(pp12), &(type_cast_733));\
;

#define simple_mem__mainAcc_assign_stmt_744_c_macro_ __declare_static_bit_vector(konst_736,32);\
bit_vector_clear(&konst_736);\
konst_736.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUL_u16_u16_742,16);\
__declare_static_bit_vector(type_cast_743,16);\
bit_vector_clear(&konst_736);\
konst_736.val.byte_array[0] = 2;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_736)][bit_vector_to_uint64(0, &col_to_be_replaced_1)])), &((filter[bit_vector_to_uint64(0, &two)][bit_vector_to_uint64(0, &two)])), &(MUL_u16_u16_742));\
bit_vector_bitcast_to_bit_vector( &(type_cast_743), &(MUL_u16_u16_742));\
bit_vector_cast_to_bit_vector(0, &(pp22), &(type_cast_743));\
;

#define simple_mem__mainAcc_assign_stmt_754_c_macro_ __declare_static_bit_vector(konst_746,32);\
bit_vector_clear(&konst_746);\
konst_746.val.byte_array[0] = 3;\
__declare_static_bit_vector(MUL_u16_u16_752,16);\
__declare_static_bit_vector(type_cast_753,16);\
bit_vector_clear(&konst_746);\
konst_746.val.byte_array[0] = 3;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_746)][bit_vector_to_uint64(0, &col_to_be_replaced_1)])), &((filter[bit_vector_to_uint64(0, &three)][bit_vector_to_uint64(0, &two)])), &(MUL_u16_u16_752));\
bit_vector_bitcast_to_bit_vector( &(type_cast_753), &(MUL_u16_u16_752));\
bit_vector_cast_to_bit_vector(0, &(pp32), &(type_cast_753));\
;

#define simple_mem__mainAcc_assign_stmt_764_c_macro_ __declare_static_bit_vector(konst_756,32);\
bit_vector_clear(&konst_756);\
__declare_static_bit_vector(MUL_u16_u16_762,16);\
__declare_static_bit_vector(type_cast_763,16);\
bit_vector_clear(&konst_756);\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_756)][bit_vector_to_uint64(0, &col_to_be_replaced_2)])), &((filter[bit_vector_to_uint64(0, &zero)][bit_vector_to_uint64(0, &one)])), &(MUL_u16_u16_762));\
bit_vector_bitcast_to_bit_vector( &(type_cast_763), &(MUL_u16_u16_762));\
bit_vector_cast_to_bit_vector(0, &(pp01), &(type_cast_763));\
;

#define simple_mem__mainAcc_assign_stmt_774_c_macro_ __declare_static_bit_vector(konst_766,32);\
bit_vector_clear(&konst_766);\
konst_766.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUL_u16_u16_772,16);\
__declare_static_bit_vector(type_cast_773,16);\
bit_vector_clear(&konst_766);\
konst_766.val.byte_array[0] = 1;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_766)][bit_vector_to_uint64(0, &col_to_be_replaced_2)])), &((filter[bit_vector_to_uint64(0, &one)][bit_vector_to_uint64(0, &one)])), &(MUL_u16_u16_772));\
bit_vector_bitcast_to_bit_vector( &(type_cast_773), &(MUL_u16_u16_772));\
bit_vector_cast_to_bit_vector(0, &(pp11), &(type_cast_773));\
;

#define simple_mem__mainAcc_assign_stmt_784_c_macro_ __declare_static_bit_vector(konst_776,32);\
bit_vector_clear(&konst_776);\
konst_776.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUL_u16_u16_782,16);\
__declare_static_bit_vector(type_cast_783,16);\
bit_vector_clear(&konst_776);\
konst_776.val.byte_array[0] = 2;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_776)][bit_vector_to_uint64(0, &col_to_be_replaced_2)])), &((filter[bit_vector_to_uint64(0, &two)][bit_vector_to_uint64(0, &one)])), &(MUL_u16_u16_782));\
bit_vector_bitcast_to_bit_vector( &(type_cast_783), &(MUL_u16_u16_782));\
bit_vector_cast_to_bit_vector(0, &(pp21), &(type_cast_783));\
;

#define simple_mem__mainAcc_assign_stmt_794_c_macro_ __declare_static_bit_vector(konst_786,32);\
bit_vector_clear(&konst_786);\
konst_786.val.byte_array[0] = 3;\
__declare_static_bit_vector(MUL_u16_u16_792,16);\
__declare_static_bit_vector(type_cast_793,16);\
bit_vector_clear(&konst_786);\
konst_786.val.byte_array[0] = 3;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_786)][bit_vector_to_uint64(0, &col_to_be_replaced_2)])), &((filter[bit_vector_to_uint64(0, &three)][bit_vector_to_uint64(0, &one)])), &(MUL_u16_u16_792));\
bit_vector_bitcast_to_bit_vector( &(type_cast_793), &(MUL_u16_u16_792));\
bit_vector_cast_to_bit_vector(0, &(pp31), &(type_cast_793));\
;

#define simple_mem__mainAcc_assign_stmt_804_c_macro_ __declare_static_bit_vector(konst_796,32);\
bit_vector_clear(&konst_796);\
__declare_static_bit_vector(MUL_u16_u16_802,16);\
__declare_static_bit_vector(type_cast_803,16);\
bit_vector_clear(&konst_796);\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_796)][bit_vector_to_uint64(0, &col_to_be_replaced_3)])), &((filter[bit_vector_to_uint64(0, &zero)][bit_vector_to_uint64(0, &zero)])), &(MUL_u16_u16_802));\
bit_vector_bitcast_to_bit_vector( &(type_cast_803), &(MUL_u16_u16_802));\
bit_vector_cast_to_bit_vector(0, &(pp00), &(type_cast_803));\
;

#define simple_mem__mainAcc_assign_stmt_814_c_macro_ __declare_static_bit_vector(konst_806,32);\
bit_vector_clear(&konst_806);\
konst_806.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUL_u16_u16_812,16);\
__declare_static_bit_vector(type_cast_813,16);\
bit_vector_clear(&konst_806);\
konst_806.val.byte_array[0] = 1;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_806)][bit_vector_to_uint64(0, &col_to_be_replaced_3)])), &((filter[bit_vector_to_uint64(0, &one)][bit_vector_to_uint64(0, &zero)])), &(MUL_u16_u16_812));\
bit_vector_bitcast_to_bit_vector( &(type_cast_813), &(MUL_u16_u16_812));\
bit_vector_cast_to_bit_vector(0, &(pp10), &(type_cast_813));\
;

#define simple_mem__mainAcc_assign_stmt_824_c_macro_ __declare_static_bit_vector(konst_816,32);\
bit_vector_clear(&konst_816);\
konst_816.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUL_u16_u16_822,16);\
__declare_static_bit_vector(type_cast_823,16);\
bit_vector_clear(&konst_816);\
konst_816.val.byte_array[0] = 2;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_816)][bit_vector_to_uint64(0, &col_to_be_replaced_3)])), &((filter[bit_vector_to_uint64(0, &two)][bit_vector_to_uint64(0, &zero)])), &(MUL_u16_u16_822));\
bit_vector_bitcast_to_bit_vector( &(type_cast_823), &(MUL_u16_u16_822));\
bit_vector_cast_to_bit_vector(0, &(pp20), &(type_cast_823));\
;

#define simple_mem__mainAcc_assign_stmt_834_c_macro_ __declare_static_bit_vector(konst_826,32);\
bit_vector_clear(&konst_826);\
konst_826.val.byte_array[0] = 3;\
__declare_static_bit_vector(MUL_u16_u16_832,16);\
__declare_static_bit_vector(type_cast_833,16);\
bit_vector_clear(&konst_826);\
konst_826.val.byte_array[0] = 3;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_826)][bit_vector_to_uint64(0, &col_to_be_replaced_3)])), &((filter[bit_vector_to_uint64(0, &three)][bit_vector_to_uint64(0, &zero)])), &(MUL_u16_u16_832));\
bit_vector_bitcast_to_bit_vector( &(type_cast_833), &(MUL_u16_u16_832));\
bit_vector_cast_to_bit_vector(0, &(pp30), &(type_cast_833));\
;

#define simple_mem__mainAcc_assign_stmt_840_c_macro_ __declare_static_bit_vector(ADD_u16_u16_838,16);\
__declare_static_bit_vector(type_cast_839,16);\
bit_vector_plus( &(pp00), &(pp01), &(ADD_u16_u16_838));\
bit_vector_bitcast_to_bit_vector( &(type_cast_839), &(ADD_u16_u16_838));\
bit_vector_cast_to_bit_vector(0, &(sum0), &(type_cast_839));\
;

#define simple_mem__mainAcc_assign_stmt_846_c_macro_ __declare_static_bit_vector(ADD_u16_u16_844,16);\
__declare_static_bit_vector(type_cast_845,16);\
bit_vector_plus( &(pp02), &(pp03), &(ADD_u16_u16_844));\
bit_vector_bitcast_to_bit_vector( &(type_cast_845), &(ADD_u16_u16_844));\
bit_vector_cast_to_bit_vector(0, &(sum1), &(type_cast_845));\
;

#define simple_mem__mainAcc_assign_stmt_852_c_macro_ __declare_static_bit_vector(ADD_u16_u16_850,16);\
__declare_static_bit_vector(type_cast_851,16);\
bit_vector_plus( &(pp10), &(pp11), &(ADD_u16_u16_850));\
bit_vector_bitcast_to_bit_vector( &(type_cast_851), &(ADD_u16_u16_850));\
bit_vector_cast_to_bit_vector(0, &(sum2), &(type_cast_851));\
;

#define simple_mem__mainAcc_assign_stmt_858_c_macro_ __declare_static_bit_vector(ADD_u16_u16_856,16);\
__declare_static_bit_vector(type_cast_857,16);\
bit_vector_plus( &(pp12), &(pp13), &(ADD_u16_u16_856));\
bit_vector_bitcast_to_bit_vector( &(type_cast_857), &(ADD_u16_u16_856));\
bit_vector_cast_to_bit_vector(0, &(sum3), &(type_cast_857));\
;

#define simple_mem__mainAcc_assign_stmt_864_c_macro_ __declare_static_bit_vector(ADD_u16_u16_862,16);\
__declare_static_bit_vector(type_cast_863,16);\
bit_vector_plus( &(pp20), &(pp21), &(ADD_u16_u16_862));\
bit_vector_bitcast_to_bit_vector( &(type_cast_863), &(ADD_u16_u16_862));\
bit_vector_cast_to_bit_vector(0, &(sum4), &(type_cast_863));\
;

#define simple_mem__mainAcc_assign_stmt_870_c_macro_ __declare_static_bit_vector(ADD_u16_u16_868,16);\
__declare_static_bit_vector(type_cast_869,16);\
bit_vector_plus( &(pp22), &(pp23), &(ADD_u16_u16_868));\
bit_vector_bitcast_to_bit_vector( &(type_cast_869), &(ADD_u16_u16_868));\
bit_vector_cast_to_bit_vector(0, &(sum5), &(type_cast_869));\
;

#define simple_mem__mainAcc_assign_stmt_876_c_macro_ __declare_static_bit_vector(ADD_u16_u16_874,16);\
__declare_static_bit_vector(type_cast_875,16);\
bit_vector_plus( &(pp30), &(pp31), &(ADD_u16_u16_874));\
bit_vector_bitcast_to_bit_vector( &(type_cast_875), &(ADD_u16_u16_874));\
bit_vector_cast_to_bit_vector(0, &(sum6), &(type_cast_875));\
;

#define simple_mem__mainAcc_assign_stmt_882_c_macro_ __declare_static_bit_vector(ADD_u16_u16_880,16);\
__declare_static_bit_vector(type_cast_881,16);\
bit_vector_plus( &(pp32), &(pp33), &(ADD_u16_u16_880));\
bit_vector_bitcast_to_bit_vector( &(type_cast_881), &(ADD_u16_u16_880));\
bit_vector_cast_to_bit_vector(0, &(sum7), &(type_cast_881));\
;

#define simple_mem__mainAcc_assign_stmt_888_c_macro_ __declare_static_bit_vector(ADD_u16_u16_886,16);\
__declare_static_bit_vector(type_cast_887,16);\
bit_vector_plus( &(sum0), &(sum1), &(ADD_u16_u16_886));\
bit_vector_bitcast_to_bit_vector( &(type_cast_887), &(ADD_u16_u16_886));\
bit_vector_cast_to_bit_vector(0, &(sum10), &(type_cast_887));\
;

#define simple_mem__mainAcc_assign_stmt_894_c_macro_ __declare_static_bit_vector(ADD_u16_u16_892,16);\
__declare_static_bit_vector(type_cast_893,16);\
bit_vector_plus( &(sum2), &(sum3), &(ADD_u16_u16_892));\
bit_vector_bitcast_to_bit_vector( &(type_cast_893), &(ADD_u16_u16_892));\
bit_vector_cast_to_bit_vector(0, &(sum11), &(type_cast_893));\
;

#define simple_mem__mainAcc_assign_stmt_900_c_macro_ __declare_static_bit_vector(ADD_u16_u16_898,16);\
__declare_static_bit_vector(type_cast_899,16);\
bit_vector_plus( &(sum4), &(sum5), &(ADD_u16_u16_898));\
bit_vector_bitcast_to_bit_vector( &(type_cast_899), &(ADD_u16_u16_898));\
bit_vector_cast_to_bit_vector(0, &(sum12), &(type_cast_899));\
;

#define simple_mem__mainAcc_assign_stmt_906_c_macro_ __declare_static_bit_vector(ADD_u16_u16_904,16);\
__declare_static_bit_vector(type_cast_905,16);\
bit_vector_plus( &(sum6), &(sum7), &(ADD_u16_u16_904));\
bit_vector_bitcast_to_bit_vector( &(type_cast_905), &(ADD_u16_u16_904));\
bit_vector_cast_to_bit_vector(0, &(sum13), &(type_cast_905));\
;

#define simple_mem__mainAcc_assign_stmt_912_c_macro_ __declare_static_bit_vector(ADD_u16_u16_910,16);\
__declare_static_bit_vector(type_cast_911,16);\
bit_vector_plus( &(sum10), &(sum11), &(ADD_u16_u16_910));\
bit_vector_bitcast_to_bit_vector( &(type_cast_911), &(ADD_u16_u16_910));\
bit_vector_cast_to_bit_vector(0, &(sum20), &(type_cast_911));\
;

#define simple_mem__mainAcc_assign_stmt_918_c_macro_ __declare_static_bit_vector(ADD_u16_u16_916,16);\
__declare_static_bit_vector(type_cast_917,16);\
bit_vector_plus( &(sum12), &(sum13), &(ADD_u16_u16_916));\
bit_vector_bitcast_to_bit_vector( &(type_cast_917), &(ADD_u16_u16_916));\
bit_vector_cast_to_bit_vector(0, &(sum21), &(type_cast_917));\
;

#define simple_mem__mainAcc_assign_stmt_924_c_macro_ __declare_static_bit_vector(ADD_u16_u16_922,16);\
__declare_static_bit_vector(type_cast_923,16);\
bit_vector_plus( &(sum20), &(sum21), &(ADD_u16_u16_922));\
bit_vector_bitcast_to_bit_vector( &(type_cast_923), &(ADD_u16_u16_922));\
bit_vector_cast_to_bit_vector(0, &(ofmap_pixel), &(type_cast_923));\
;

#define simple_mem__mainAcc_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pofmap_pixel)), &(ofmap_pixel));\
;

#define simple_mem__mainAcc2_inner_inarg_prep_macro__ __declare_static_bit_vector(I,6);\
bit_vector_cast_to_bit_vector(0, &(I), &((*__pI)));\
__declare_static_bit_vector(J,5);\
bit_vector_cast_to_bit_vector(0, &(J), &((*__pJ)));\
__declare_static_bit_vector(col_to_be_replaced,2);\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced), &((*__pcol_to_be_replaced)));\
__declare_static_bit_vector(ofmap_pixel,16);\
__declare_static_bit_vector(zero,2);\
bit_vector_clear(&zero);\
__declare_static_bit_vector(one,2);\
bit_vector_clear(&one);\
one.val.byte_array[0] = 1;\
__declare_static_bit_vector(two,2);\
bit_vector_clear(&two);\
two.val.byte_array[0] = 2;\
__declare_static_bit_vector(three,2);\
bit_vector_clear(&three);\
three.val.byte_array[0] = 3;\
__declare_static_bit_vector(col_to_be_replaced_1,2);\
__declare_static_bit_vector(col_to_be_replaced_2,2);\
__declare_static_bit_vector(col_to_be_replaced_3,2);\
__declare_static_bit_vector(pp03,16);\
__declare_static_bit_vector(pp13,16);\
__declare_static_bit_vector(pp23,16);\
__declare_static_bit_vector(pp33,16);\
__declare_static_bit_vector(pp02,16);\
__declare_static_bit_vector(pp12,16);\
__declare_static_bit_vector(pp22,16);\
__declare_static_bit_vector(pp32,16);\
__declare_static_bit_vector(pp01,16);\
__declare_static_bit_vector(pp11,16);\
__declare_static_bit_vector(pp21,16);\
__declare_static_bit_vector(pp31,16);\
__declare_static_bit_vector(pp00,16);\
__declare_static_bit_vector(pp10,16);\
__declare_static_bit_vector(pp20,16);\
__declare_static_bit_vector(pp30,16);\
__declare_static_bit_vector(sum0,16);\
__declare_static_bit_vector(sum1,16);\
__declare_static_bit_vector(sum2,16);\
__declare_static_bit_vector(sum3,16);\
__declare_static_bit_vector(sum4,16);\
__declare_static_bit_vector(sum5,16);\
__declare_static_bit_vector(sum6,16);\
__declare_static_bit_vector(sum7,16);\
__declare_static_bit_vector(sum10,16);\
__declare_static_bit_vector(sum11,16);\
__declare_static_bit_vector(sum12,16);\
__declare_static_bit_vector(sum13,16);\
__declare_static_bit_vector(sum20,16);\
__declare_static_bit_vector(sum21,16);\

#define simple_mem__mainAcc2_assign_stmt_934_c_macro_ __declare_static_bit_vector(konst_932,2);\
bit_vector_clear(&konst_932);\
__declare_static_bit_vector(type_cast_933,2);\
bit_vector_clear(&type_cast_933);\
bit_vector_clear(&konst_932);\
bit_vector_bitcast_to_bit_vector( &(type_cast_933), &(konst_932));\
bit_vector_cast_to_bit_vector(0, &(zero), &(type_cast_933));\
;

#define simple_mem__mainAcc2_assign_stmt_938_c_macro_ __declare_static_bit_vector(konst_936,2);\
bit_vector_clear(&konst_936);\
konst_936.val.byte_array[0] = 1;\
__declare_static_bit_vector(type_cast_937,2);\
bit_vector_clear(&type_cast_937);\
type_cast_937.val.byte_array[0] = 1;\
bit_vector_clear(&konst_936);\
konst_936.val.byte_array[0] = 1;\
bit_vector_bitcast_to_bit_vector( &(type_cast_937), &(konst_936));\
bit_vector_cast_to_bit_vector(0, &(one), &(type_cast_937));\
;

#define simple_mem__mainAcc2_assign_stmt_942_c_macro_ __declare_static_bit_vector(konst_940,2);\
bit_vector_clear(&konst_940);\
konst_940.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_941,2);\
bit_vector_clear(&type_cast_941);\
type_cast_941.val.byte_array[0] = 2;\
bit_vector_clear(&konst_940);\
konst_940.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_941), &(konst_940));\
bit_vector_cast_to_bit_vector(0, &(two), &(type_cast_941));\
;

#define simple_mem__mainAcc2_assign_stmt_946_c_macro_ __declare_static_bit_vector(konst_944,2);\
bit_vector_clear(&konst_944);\
konst_944.val.byte_array[0] = 3;\
__declare_static_bit_vector(type_cast_945,2);\
bit_vector_clear(&type_cast_945);\
type_cast_945.val.byte_array[0] = 3;\
bit_vector_clear(&konst_944);\
konst_944.val.byte_array[0] = 3;\
bit_vector_bitcast_to_bit_vector( &(type_cast_945), &(konst_944));\
bit_vector_cast_to_bit_vector(0, &(three), &(type_cast_945));\
;

#define simple_mem__mainAcc2_assign_stmt_958_c_macro_ __declare_static_bit_vector(konst_949,2);\
bit_vector_clear(&konst_949);\
__declare_static_bit_vector(EQ_u2_u1_950,1);\
__declare_static_bit_vector(konst_951,2);\
bit_vector_clear(&konst_951);\
konst_951.val.byte_array[0] = 3;\
__declare_static_bit_vector(type_cast_952,2);\
bit_vector_clear(&type_cast_952);\
type_cast_952.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_954,2);\
bit_vector_clear(&konst_954);\
konst_954.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u2_u2_955,2);\
__declare_static_bit_vector(type_cast_956,2);\
__declare_static_bit_vector(MUX_957,2);\
bit_vector_clear(&konst_949);\
bit_vector_equal(0, &(col_to_be_replaced), &(konst_949), &(EQ_u2_u1_950));\
if (has_undefined_bit(&EQ_u2_u1_950)) {fprintf(stderr, "Error: variable EQ_u2_u1_950 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_950));assert(0);} \
bit_vector_clear(&konst_951);\
konst_951.val.byte_array[0] = 3;\
bit_vector_bitcast_to_bit_vector( &(type_cast_952), &(konst_951));\
bit_vector_clear(&konst_954);\
konst_954.val.byte_array[0] = 1;\
bit_vector_minus( &(col_to_be_replaced), &(konst_954), &(SUB_u2_u2_955));\
bit_vector_bitcast_to_bit_vector( &(type_cast_956), &(SUB_u2_u2_955));\
if(bit_vector_to_uint64(0, &EQ_u2_u1_950)){\
bit_vector_cast_to_bit_vector(0, &(MUX_957), &(type_cast_952));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_957), &(type_cast_956));\
}\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced_1), &(MUX_957));\
;

#define simple_mem__mainAcc2_assign_stmt_972_c_macro_ __declare_static_bit_vector(konst_961,2);\
bit_vector_clear(&konst_961);\
konst_961.val.byte_array[0] = 2;\
__declare_static_bit_vector(UGE_u2_u1_962,1);\
__declare_static_bit_vector(konst_964,2);\
bit_vector_clear(&konst_964);\
konst_964.val.byte_array[0] = 2;\
__declare_static_bit_vector(SUB_u2_u2_965,2);\
__declare_static_bit_vector(type_cast_966,2);\
__declare_static_bit_vector(konst_968,2);\
bit_vector_clear(&konst_968);\
konst_968.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u2_u2_969,2);\
__declare_static_bit_vector(type_cast_970,2);\
__declare_static_bit_vector(MUX_971,2);\
bit_vector_clear(&konst_961);\
konst_961.val.byte_array[0] = 2;\
bit_vector_greater_equal(0, &(col_to_be_replaced), &(konst_961), &(UGE_u2_u1_962));\
if (has_undefined_bit(&UGE_u2_u1_962)) {fprintf(stderr, "Error: variable UGE_u2_u1_962 has undefined value (%s) at test point.\n", to_string(&UGE_u2_u1_962));assert(0);} \
bit_vector_clear(&konst_964);\
konst_964.val.byte_array[0] = 2;\
bit_vector_minus( &(col_to_be_replaced), &(konst_964), &(SUB_u2_u2_965));\
bit_vector_bitcast_to_bit_vector( &(type_cast_966), &(SUB_u2_u2_965));\
bit_vector_clear(&konst_968);\
konst_968.val.byte_array[0] = 2;\
bit_vector_plus( &(col_to_be_replaced), &(konst_968), &(ADD_u2_u2_969));\
bit_vector_bitcast_to_bit_vector( &(type_cast_970), &(ADD_u2_u2_969));\
if(bit_vector_to_uint64(0, &UGE_u2_u1_962)){\
bit_vector_cast_to_bit_vector(0, &(MUX_971), &(type_cast_966));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_971), &(type_cast_970));\
}\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced_2), &(MUX_971));\
;

#define simple_mem__mainAcc2_assign_stmt_984_c_macro_ __declare_static_bit_vector(konst_975,2);\
bit_vector_clear(&konst_975);\
konst_975.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_976,1);\
__declare_static_bit_vector(konst_977,2);\
bit_vector_clear(&konst_977);\
__declare_static_bit_vector(type_cast_978,2);\
bit_vector_clear(&type_cast_978);\
__declare_static_bit_vector(konst_980,2);\
bit_vector_clear(&konst_980);\
konst_980.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u2_u2_981,2);\
__declare_static_bit_vector(type_cast_982,2);\
__declare_static_bit_vector(MUX_983,2);\
bit_vector_clear(&konst_975);\
konst_975.val.byte_array[0] = 3;\
bit_vector_equal(0, &(col_to_be_replaced), &(konst_975), &(EQ_u2_u1_976));\
if (has_undefined_bit(&EQ_u2_u1_976)) {fprintf(stderr, "Error: variable EQ_u2_u1_976 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_976));assert(0);} \
bit_vector_clear(&konst_977);\
bit_vector_bitcast_to_bit_vector( &(type_cast_978), &(konst_977));\
bit_vector_clear(&konst_980);\
konst_980.val.byte_array[0] = 1;\
bit_vector_plus( &(col_to_be_replaced), &(konst_980), &(ADD_u2_u2_981));\
bit_vector_bitcast_to_bit_vector( &(type_cast_982), &(ADD_u2_u2_981));\
if(bit_vector_to_uint64(0, &EQ_u2_u1_976)){\
bit_vector_cast_to_bit_vector(0, &(MUX_983), &(type_cast_978));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_983), &(type_cast_982));\
}\
bit_vector_cast_to_bit_vector(0, &(col_to_be_replaced_3), &(MUX_983));\
;

#define simple_mem__mainAcc2_assign_stmt_994_c_macro_ __declare_static_bit_vector(konst_986,32);\
bit_vector_clear(&konst_986);\
__declare_static_bit_vector(MUL_u16_u16_992,16);\
__declare_static_bit_vector(type_cast_993,16);\
bit_vector_clear(&konst_986);\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_986)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &((filter[bit_vector_to_uint64(0, &zero)][bit_vector_to_uint64(0, &three)])), &(MUL_u16_u16_992));\
bit_vector_bitcast_to_bit_vector( &(type_cast_993), &(MUL_u16_u16_992));\
bit_vector_cast_to_bit_vector(0, &(pp03), &(type_cast_993));\
;

#define simple_mem__mainAcc2_assign_stmt_1004_c_macro_ __declare_static_bit_vector(konst_996,32);\
bit_vector_clear(&konst_996);\
konst_996.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUL_u16_u16_1002,16);\
__declare_static_bit_vector(type_cast_1003,16);\
bit_vector_clear(&konst_996);\
konst_996.val.byte_array[0] = 1;\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_996)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &((filter[bit_vector_to_uint64(0, &one)][bit_vector_to_uint64(0, &three)])), &(MUL_u16_u16_1002));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1003), &(MUL_u16_u16_1002));\
bit_vector_cast_to_bit_vector(0, &(pp13), &(type_cast_1003));\
;

#define simple_mem__mainAcc2_assign_stmt_1014_c_macro_ __declare_static_bit_vector(konst_1006,32);\
bit_vector_clear(&konst_1006);\
konst_1006.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUL_u16_u16_1012,16);\
__declare_static_bit_vector(type_cast_1013,16);\
bit_vector_clear(&konst_1006);\
konst_1006.val.byte_array[0] = 2;\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1006)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &((filter[bit_vector_to_uint64(0, &two)][bit_vector_to_uint64(0, &three)])), &(MUL_u16_u16_1012));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1013), &(MUL_u16_u16_1012));\
bit_vector_cast_to_bit_vector(0, &(pp23), &(type_cast_1013));\
;

#define simple_mem__mainAcc2_assign_stmt_1024_c_macro_ __declare_static_bit_vector(konst_1016,32);\
bit_vector_clear(&konst_1016);\
konst_1016.val.byte_array[0] = 3;\
__declare_static_bit_vector(MUL_u16_u16_1022,16);\
__declare_static_bit_vector(type_cast_1023,16);\
bit_vector_clear(&konst_1016);\
konst_1016.val.byte_array[0] = 3;\
bit_vector_mul( &((ifmaps[bit_vector_to_uint64(0, &konst_1016)][bit_vector_to_uint64(0, &col_to_be_replaced)])), &((filter[bit_vector_to_uint64(0, &three)][bit_vector_to_uint64(0, &three)])), &(MUL_u16_u16_1022));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1023), &(MUL_u16_u16_1022));\
bit_vector_cast_to_bit_vector(0, &(pp33), &(type_cast_1023));\
;

#define simple_mem__mainAcc2_assign_stmt_1034_c_macro_ __declare_static_bit_vector(konst_1026,32);\
bit_vector_clear(&konst_1026);\
__declare_static_bit_vector(MUL_u16_u16_1032,16);\
__declare_static_bit_vector(type_cast_1033,16);\
bit_vector_clear(&konst_1026);\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1026)][bit_vector_to_uint64(0, &col_to_be_replaced_1)])), &((filter[bit_vector_to_uint64(0, &zero)][bit_vector_to_uint64(0, &two)])), &(MUL_u16_u16_1032));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1033), &(MUL_u16_u16_1032));\
bit_vector_cast_to_bit_vector(0, &(pp02), &(type_cast_1033));\
;

#define simple_mem__mainAcc2_assign_stmt_1044_c_macro_ __declare_static_bit_vector(konst_1036,32);\
bit_vector_clear(&konst_1036);\
konst_1036.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUL_u16_u16_1042,16);\
__declare_static_bit_vector(type_cast_1043,16);\
bit_vector_clear(&konst_1036);\
konst_1036.val.byte_array[0] = 1;\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1036)][bit_vector_to_uint64(0, &col_to_be_replaced_1)])), &((filter[bit_vector_to_uint64(0, &one)][bit_vector_to_uint64(0, &two)])), &(MUL_u16_u16_1042));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1043), &(MUL_u16_u16_1042));\
bit_vector_cast_to_bit_vector(0, &(pp12), &(type_cast_1043));\
;

#define simple_mem__mainAcc2_assign_stmt_1054_c_macro_ __declare_static_bit_vector(konst_1046,32);\
bit_vector_clear(&konst_1046);\
konst_1046.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUL_u16_u16_1052,16);\
__declare_static_bit_vector(type_cast_1053,16);\
bit_vector_clear(&konst_1046);\
konst_1046.val.byte_array[0] = 2;\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1046)][bit_vector_to_uint64(0, &col_to_be_replaced_1)])), &((filter[bit_vector_to_uint64(0, &two)][bit_vector_to_uint64(0, &two)])), &(MUL_u16_u16_1052));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1053), &(MUL_u16_u16_1052));\
bit_vector_cast_to_bit_vector(0, &(pp22), &(type_cast_1053));\
;

#define simple_mem__mainAcc2_assign_stmt_1064_c_macro_ __declare_static_bit_vector(konst_1056,32);\
bit_vector_clear(&konst_1056);\
konst_1056.val.byte_array[0] = 3;\
__declare_static_bit_vector(MUL_u16_u16_1062,16);\
__declare_static_bit_vector(type_cast_1063,16);\
bit_vector_clear(&konst_1056);\
konst_1056.val.byte_array[0] = 3;\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1056)][bit_vector_to_uint64(0, &col_to_be_replaced_1)])), &((filter[bit_vector_to_uint64(0, &three)][bit_vector_to_uint64(0, &two)])), &(MUL_u16_u16_1062));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1063), &(MUL_u16_u16_1062));\
bit_vector_cast_to_bit_vector(0, &(pp32), &(type_cast_1063));\
;

#define simple_mem__mainAcc2_assign_stmt_1074_c_macro_ __declare_static_bit_vector(konst_1066,32);\
bit_vector_clear(&konst_1066);\
__declare_static_bit_vector(MUL_u16_u16_1072,16);\
__declare_static_bit_vector(type_cast_1073,16);\
bit_vector_clear(&konst_1066);\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1066)][bit_vector_to_uint64(0, &col_to_be_replaced_2)])), &((filter[bit_vector_to_uint64(0, &zero)][bit_vector_to_uint64(0, &one)])), &(MUL_u16_u16_1072));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1073), &(MUL_u16_u16_1072));\
bit_vector_cast_to_bit_vector(0, &(pp01), &(type_cast_1073));\
;

#define simple_mem__mainAcc2_assign_stmt_1084_c_macro_ __declare_static_bit_vector(konst_1076,32);\
bit_vector_clear(&konst_1076);\
konst_1076.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUL_u16_u16_1082,16);\
__declare_static_bit_vector(type_cast_1083,16);\
bit_vector_clear(&konst_1076);\
konst_1076.val.byte_array[0] = 1;\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1076)][bit_vector_to_uint64(0, &col_to_be_replaced_2)])), &((filter[bit_vector_to_uint64(0, &one)][bit_vector_to_uint64(0, &one)])), &(MUL_u16_u16_1082));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1083), &(MUL_u16_u16_1082));\
bit_vector_cast_to_bit_vector(0, &(pp11), &(type_cast_1083));\
;

#define simple_mem__mainAcc2_assign_stmt_1094_c_macro_ __declare_static_bit_vector(konst_1086,32);\
bit_vector_clear(&konst_1086);\
konst_1086.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUL_u16_u16_1092,16);\
__declare_static_bit_vector(type_cast_1093,16);\
bit_vector_clear(&konst_1086);\
konst_1086.val.byte_array[0] = 2;\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1086)][bit_vector_to_uint64(0, &col_to_be_replaced_2)])), &((filter[bit_vector_to_uint64(0, &two)][bit_vector_to_uint64(0, &one)])), &(MUL_u16_u16_1092));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1093), &(MUL_u16_u16_1092));\
bit_vector_cast_to_bit_vector(0, &(pp21), &(type_cast_1093));\
;

#define simple_mem__mainAcc2_assign_stmt_1104_c_macro_ __declare_static_bit_vector(konst_1096,32);\
bit_vector_clear(&konst_1096);\
konst_1096.val.byte_array[0] = 3;\
__declare_static_bit_vector(MUL_u16_u16_1102,16);\
__declare_static_bit_vector(type_cast_1103,16);\
bit_vector_clear(&konst_1096);\
konst_1096.val.byte_array[0] = 3;\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1096)][bit_vector_to_uint64(0, &col_to_be_replaced_2)])), &((filter[bit_vector_to_uint64(0, &three)][bit_vector_to_uint64(0, &one)])), &(MUL_u16_u16_1102));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1103), &(MUL_u16_u16_1102));\
bit_vector_cast_to_bit_vector(0, &(pp31), &(type_cast_1103));\
;

#define simple_mem__mainAcc2_assign_stmt_1114_c_macro_ __declare_static_bit_vector(konst_1106,32);\
bit_vector_clear(&konst_1106);\
__declare_static_bit_vector(MUL_u16_u16_1112,16);\
__declare_static_bit_vector(type_cast_1113,16);\
bit_vector_clear(&konst_1106);\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1106)][bit_vector_to_uint64(0, &col_to_be_replaced_3)])), &((filter[bit_vector_to_uint64(0, &zero)][bit_vector_to_uint64(0, &zero)])), &(MUL_u16_u16_1112));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1113), &(MUL_u16_u16_1112));\
bit_vector_cast_to_bit_vector(0, &(pp00), &(type_cast_1113));\
;

#define simple_mem__mainAcc2_assign_stmt_1124_c_macro_ __declare_static_bit_vector(konst_1116,32);\
bit_vector_clear(&konst_1116);\
konst_1116.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUL_u16_u16_1122,16);\
__declare_static_bit_vector(type_cast_1123,16);\
bit_vector_clear(&konst_1116);\
konst_1116.val.byte_array[0] = 1;\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1116)][bit_vector_to_uint64(0, &col_to_be_replaced_3)])), &((filter[bit_vector_to_uint64(0, &one)][bit_vector_to_uint64(0, &zero)])), &(MUL_u16_u16_1122));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1123), &(MUL_u16_u16_1122));\
bit_vector_cast_to_bit_vector(0, &(pp10), &(type_cast_1123));\
;

#define simple_mem__mainAcc2_assign_stmt_1134_c_macro_ __declare_static_bit_vector(konst_1126,32);\
bit_vector_clear(&konst_1126);\
konst_1126.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUL_u16_u16_1132,16);\
__declare_static_bit_vector(type_cast_1133,16);\
bit_vector_clear(&konst_1126);\
konst_1126.val.byte_array[0] = 2;\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1126)][bit_vector_to_uint64(0, &col_to_be_replaced_3)])), &((filter[bit_vector_to_uint64(0, &two)][bit_vector_to_uint64(0, &zero)])), &(MUL_u16_u16_1132));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1133), &(MUL_u16_u16_1132));\
bit_vector_cast_to_bit_vector(0, &(pp20), &(type_cast_1133));\
;

#define simple_mem__mainAcc2_assign_stmt_1144_c_macro_ __declare_static_bit_vector(konst_1136,32);\
bit_vector_clear(&konst_1136);\
konst_1136.val.byte_array[0] = 3;\
__declare_static_bit_vector(MUL_u16_u16_1142,16);\
__declare_static_bit_vector(type_cast_1143,16);\
bit_vector_clear(&konst_1136);\
konst_1136.val.byte_array[0] = 3;\
bit_vector_mul( &((ifmaps2[bit_vector_to_uint64(0, &konst_1136)][bit_vector_to_uint64(0, &col_to_be_replaced_3)])), &((filter[bit_vector_to_uint64(0, &three)][bit_vector_to_uint64(0, &zero)])), &(MUL_u16_u16_1142));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1143), &(MUL_u16_u16_1142));\
bit_vector_cast_to_bit_vector(0, &(pp30), &(type_cast_1143));\
;

#define simple_mem__mainAcc2_assign_stmt_1150_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1148,16);\
__declare_static_bit_vector(type_cast_1149,16);\
bit_vector_plus( &(pp00), &(pp01), &(ADD_u16_u16_1148));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1149), &(ADD_u16_u16_1148));\
bit_vector_cast_to_bit_vector(0, &(sum0), &(type_cast_1149));\
;

#define simple_mem__mainAcc2_assign_stmt_1156_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1154,16);\
__declare_static_bit_vector(type_cast_1155,16);\
bit_vector_plus( &(pp02), &(pp03), &(ADD_u16_u16_1154));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1155), &(ADD_u16_u16_1154));\
bit_vector_cast_to_bit_vector(0, &(sum1), &(type_cast_1155));\
;

#define simple_mem__mainAcc2_assign_stmt_1162_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1160,16);\
__declare_static_bit_vector(type_cast_1161,16);\
bit_vector_plus( &(pp10), &(pp11), &(ADD_u16_u16_1160));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1161), &(ADD_u16_u16_1160));\
bit_vector_cast_to_bit_vector(0, &(sum2), &(type_cast_1161));\
;

#define simple_mem__mainAcc2_assign_stmt_1168_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1166,16);\
__declare_static_bit_vector(type_cast_1167,16);\
bit_vector_plus( &(pp12), &(pp13), &(ADD_u16_u16_1166));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1167), &(ADD_u16_u16_1166));\
bit_vector_cast_to_bit_vector(0, &(sum3), &(type_cast_1167));\
;

#define simple_mem__mainAcc2_assign_stmt_1174_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1172,16);\
__declare_static_bit_vector(type_cast_1173,16);\
bit_vector_plus( &(pp20), &(pp21), &(ADD_u16_u16_1172));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1173), &(ADD_u16_u16_1172));\
bit_vector_cast_to_bit_vector(0, &(sum4), &(type_cast_1173));\
;

#define simple_mem__mainAcc2_assign_stmt_1180_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1178,16);\
__declare_static_bit_vector(type_cast_1179,16);\
bit_vector_plus( &(pp22), &(pp23), &(ADD_u16_u16_1178));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1179), &(ADD_u16_u16_1178));\
bit_vector_cast_to_bit_vector(0, &(sum5), &(type_cast_1179));\
;

#define simple_mem__mainAcc2_assign_stmt_1186_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1184,16);\
__declare_static_bit_vector(type_cast_1185,16);\
bit_vector_plus( &(pp30), &(pp31), &(ADD_u16_u16_1184));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1185), &(ADD_u16_u16_1184));\
bit_vector_cast_to_bit_vector(0, &(sum6), &(type_cast_1185));\
;

#define simple_mem__mainAcc2_assign_stmt_1192_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1190,16);\
__declare_static_bit_vector(type_cast_1191,16);\
bit_vector_plus( &(pp32), &(pp33), &(ADD_u16_u16_1190));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1191), &(ADD_u16_u16_1190));\
bit_vector_cast_to_bit_vector(0, &(sum7), &(type_cast_1191));\
;

#define simple_mem__mainAcc2_assign_stmt_1198_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1196,16);\
__declare_static_bit_vector(type_cast_1197,16);\
bit_vector_plus( &(sum0), &(sum1), &(ADD_u16_u16_1196));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1197), &(ADD_u16_u16_1196));\
bit_vector_cast_to_bit_vector(0, &(sum10), &(type_cast_1197));\
;

#define simple_mem__mainAcc2_assign_stmt_1204_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1202,16);\
__declare_static_bit_vector(type_cast_1203,16);\
bit_vector_plus( &(sum2), &(sum3), &(ADD_u16_u16_1202));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1203), &(ADD_u16_u16_1202));\
bit_vector_cast_to_bit_vector(0, &(sum11), &(type_cast_1203));\
;

#define simple_mem__mainAcc2_assign_stmt_1210_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1208,16);\
__declare_static_bit_vector(type_cast_1209,16);\
bit_vector_plus( &(sum4), &(sum5), &(ADD_u16_u16_1208));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1209), &(ADD_u16_u16_1208));\
bit_vector_cast_to_bit_vector(0, &(sum12), &(type_cast_1209));\
;

#define simple_mem__mainAcc2_assign_stmt_1216_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1214,16);\
__declare_static_bit_vector(type_cast_1215,16);\
bit_vector_plus( &(sum6), &(sum7), &(ADD_u16_u16_1214));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1215), &(ADD_u16_u16_1214));\
bit_vector_cast_to_bit_vector(0, &(sum13), &(type_cast_1215));\
;

#define simple_mem__mainAcc2_assign_stmt_1222_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1220,16);\
__declare_static_bit_vector(type_cast_1221,16);\
bit_vector_plus( &(sum10), &(sum11), &(ADD_u16_u16_1220));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1221), &(ADD_u16_u16_1220));\
bit_vector_cast_to_bit_vector(0, &(sum20), &(type_cast_1221));\
;

#define simple_mem__mainAcc2_assign_stmt_1228_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1226,16);\
__declare_static_bit_vector(type_cast_1227,16);\
bit_vector_plus( &(sum12), &(sum13), &(ADD_u16_u16_1226));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1227), &(ADD_u16_u16_1226));\
bit_vector_cast_to_bit_vector(0, &(sum21), &(type_cast_1227));\
;

#define simple_mem__mainAcc2_assign_stmt_1234_c_macro_ __declare_static_bit_vector(ADD_u16_u16_1232,16);\
__declare_static_bit_vector(type_cast_1233,16);\
bit_vector_plus( &(sum20), &(sum21), &(ADD_u16_u16_1232));\
bit_vector_bitcast_to_bit_vector( &(type_cast_1233), &(ADD_u16_u16_1232));\
bit_vector_cast_to_bit_vector(0, &(ofmap_pixel), &(type_cast_1233));\
;

#define simple_mem__mainAcc2_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pofmap_pixel)), &(ofmap_pixel));\
;

#define simple_mem__memAccessDaemon_inner_inarg_prep_macro__ 
#define simple_mem__memAccessDaemon_branch_block_stmt_1416_c_export_decl_macro_ __declare_static_bit_vector(cmd_1,32);\
__declare_static_bit_vector(wdata1,16);\
__declare_static_bit_vector(row_index1,6);\
__declare_static_bit_vector(col_index1,5);\
__declare_static_bit_vector(rwbar1,1);\
__declare_static_bit_vector(rdata1,16);\


#define simple_mem__memAccessDaemon_merge_stmt_1418_c_preamble_macro_ uint8_t merge_stmt_1418_entry_flag;\
merge_stmt_1418_entry_flag = do_while_entry_flag;\
goto merge_stmt_1418_run;\
merge_stmt_1418_run: ;\
;

#define simple_mem__memAccessDaemon_merge_stmt_1418_c_postamble_macro_ merge_stmt_1418_entry_flag = 0;

#define simple_mem__memAccessDaemon_assign_stmt_1421_c_macro_ __declare_static_bit_vector(RPIPE_env_mem_request_1_1420,32);\
read_bit_vector_from_pipe("env_mem_request_1",&(RPIPE_env_mem_request_1_1420));\
bit_vector_cast_to_bit_vector(0, &(cmd_1), &(RPIPE_env_mem_request_1_1420));\
;

#define simple_mem__memAccessDaemon_assign_stmt_1425_c_macro_ __declare_static_bit_vector(slice_1424,16);\
bit_vector_slice(&(cmd_1), &(slice_1424), 16);\
bit_vector_cast_to_bit_vector(0, &(wdata1), &(slice_1424));\
;

#define simple_mem__memAccessDaemon_assign_stmt_1429_c_macro_ __declare_static_bit_vector(slice_1428,6);\
bit_vector_slice(&(cmd_1), &(slice_1428), 10);\
bit_vector_cast_to_bit_vector(0, &(row_index1), &(slice_1428));\
;

#define simple_mem__memAccessDaemon_assign_stmt_1433_c_macro_ __declare_static_bit_vector(slice_1432,5);\
bit_vector_slice(&(cmd_1), &(slice_1432), 5);\
bit_vector_cast_to_bit_vector(0, &(col_index1), &(slice_1432));\
;

#define simple_mem__memAccessDaemon_assign_stmt_1437_c_macro_ __declare_static_bit_vector(slice_1436,1);\
bit_vector_slice(&(cmd_1), &(slice_1436), 0);\
bit_vector_cast_to_bit_vector(0, &(rwbar1), &(slice_1436));\
;

#define simple_mem__memAccessDaemon_call_stmt_1443_c_macro_ _simple_mem_accessMem_( &(rwbar1),  &(row_index1),  &(col_index1),  &(wdata1), &(rdata1));\
;

#define simple_mem__memAccessDaemon_assign_stmt_1446_c_macro_ write_bit_vector_to_pipe("env_mem_response_1",&(rdata1));\
;
;

#define simple_mem__memAccessDaemon_branch_block_stmt_1416_c_export_apply_macro_ ;

#define simple_mem__memAccessDaemon_inner_outarg_prep_macro__ ;

#define simple_mem__memAccessDaemon_outer_arg_decl_macro__ ;

#define simple_mem__memAccessDaemon_outer_op_xfer_macro__ ;

#define simple_mem__memAccessDaemon2_inner_inarg_prep_macro__ 
#define simple_mem__memAccessDaemon2_branch_block_stmt_1452_c_export_decl_macro_ __declare_static_bit_vector(cmd_2,32);\
__declare_static_bit_vector(wdata2,16);\
__declare_static_bit_vector(row_index2,6);\
__declare_static_bit_vector(col_index2,5);\
__declare_static_bit_vector(rwbar2,1);\
__declare_static_bit_vector(rdata2,16);\


#define simple_mem__memAccessDaemon2_merge_stmt_1454_c_preamble_macro_ uint8_t merge_stmt_1454_entry_flag;\
merge_stmt_1454_entry_flag = do_while_entry_flag;\
goto merge_stmt_1454_run;\
merge_stmt_1454_run: ;\
;

#define simple_mem__memAccessDaemon2_merge_stmt_1454_c_postamble_macro_ merge_stmt_1454_entry_flag = 0;

#define simple_mem__memAccessDaemon2_assign_stmt_1457_c_macro_ __declare_static_bit_vector(RPIPE_env_mem_request_2_1456,32);\
read_bit_vector_from_pipe("env_mem_request_2",&(RPIPE_env_mem_request_2_1456));\
bit_vector_cast_to_bit_vector(0, &(cmd_2), &(RPIPE_env_mem_request_2_1456));\
;

#define simple_mem__memAccessDaemon2_assign_stmt_1461_c_macro_ __declare_static_bit_vector(slice_1460,16);\
bit_vector_slice(&(cmd_2), &(slice_1460), 16);\
bit_vector_cast_to_bit_vector(0, &(wdata2), &(slice_1460));\
;

#define simple_mem__memAccessDaemon2_assign_stmt_1465_c_macro_ __declare_static_bit_vector(slice_1464,6);\
bit_vector_slice(&(cmd_2), &(slice_1464), 10);\
bit_vector_cast_to_bit_vector(0, &(row_index2), &(slice_1464));\
;

#define simple_mem__memAccessDaemon2_assign_stmt_1469_c_macro_ __declare_static_bit_vector(slice_1468,5);\
bit_vector_slice(&(cmd_2), &(slice_1468), 5);\
bit_vector_cast_to_bit_vector(0, &(col_index2), &(slice_1468));\
;

#define simple_mem__memAccessDaemon2_assign_stmt_1473_c_macro_ __declare_static_bit_vector(slice_1472,1);\
bit_vector_slice(&(cmd_2), &(slice_1472), 0);\
bit_vector_cast_to_bit_vector(0, &(rwbar2), &(slice_1472));\
;

#define simple_mem__memAccessDaemon2_call_stmt_1479_c_macro_ _simple_mem_accessMem_( &(rwbar2),  &(row_index2),  &(col_index2),  &(wdata2), &(rdata2));\
;

#define simple_mem__memAccessDaemon2_assign_stmt_1482_c_macro_ write_bit_vector_to_pipe("env_mem_response_2",&(rdata2));\
;
;

#define simple_mem__memAccessDaemon2_branch_block_stmt_1452_c_export_apply_macro_ ;

#define simple_mem__memAccessDaemon2_inner_outarg_prep_macro__ ;

#define simple_mem__memAccessDaemon2_outer_arg_decl_macro__ ;

#define simple_mem__memAccessDaemon2_outer_op_xfer_macro__ ;
