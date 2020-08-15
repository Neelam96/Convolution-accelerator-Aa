

#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>

#ifdef AA2C
#include "simple_mem_aa_c_model.h"
#else
#include "vhdlCStubs.h"
#endif


#define ORDER_X 12
#define ORDER_Y 8
#define OF_MAPX_DIM 5
#define OF_MAPY_DIM 5

#define env_done_row 11//62
#define env_done_col 7//31
// #define start_accelerator_row 9
// #define start_accelerator_col 5
// #define acc_done_row 63
// #define acc_done_col 31


void Exit(int sig)
{
	fprintf(stderr, "## Break! ##\n");
	exit(0);
}



void initial(){
	
	uint32_t X[ORDER_X][ORDER_Y];
	uint32_t i;
	uint32_t one = 1;
	uint32_t two =2;
	uint32_t idx;
	uint32_t idx2=0;
	//uint32_t filter[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	uint32_t filter[4][4]={{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};

	uint32_t data =0;
		
		for(idx = 0; idx < ORDER_X-4; idx++)
		{
			for(idx2 = 0; idx2 < ORDER_Y; idx2++){
			
			uint32_t row = (idx<<10);
			uint32_t col = (idx2<<5);
	 		uint32_t rwbar = 0;
	 		uint32_t data_to_be_written = idx2<<16;
			X[idx][idx2] = row|col|rwbar|data_to_be_written ;
			write_uint32("env_mem_request_1", X[idx][idx2]);

			
			rwbar = 1;
			X[idx][idx2] = row|col|rwbar ;
			write_uint32("env_mem_request_1", X[idx][idx2]);

			}
			
			
			
			
		}

		for (idx = ORDER_X-4; idx < ORDER_X;idx++){
			for(idx2 = 0;idx2 < ORDER_Y; idx2++){
				uint32_t row = (idx<<10);
				uint32_t col = (idx2<<5);
				uint32_t rwbar =0 ;
				uint32_t data_to_be_written;
				if(idx2<4){
				data_to_be_written = (filter[idx-ORDER_X+4][idx2])<<16;
				}
				else{
					data_to_be_written = two<<16;
				}

				X[idx][idx2] = row|col|rwbar|data_to_be_written ;
				write_uint32("env_mem_request_1", X[idx][idx2]);
				//printf("Written ele write req: %x\n",X[idx]); *
			
				rwbar = 1;
				X[idx][idx2] = row|col|rwbar ;
				write_uint32("env_mem_request_1", X[idx][idx2]);
				//printf("Written ele read req: %x\n",X[idx]); *
			}
		}
		
		uint32_t row = (env_done_row)<<10;
		uint32_t col = (env_done_col<<5);
		uint32_t rwbar =0;
		data= (one)<<16;
		uint32_t env_done = row| col | rwbar | data;

		write_uint32("env_mem_request_1",env_done);
		printf("Wrote done by env\n");
		

		printf("Memory initialized\n");
}

void receive_env_mem_response(){

			int idx=0;		
		for(idx=0;idx<=2*ORDER_X*ORDER_Y;idx++){
			printf("Read ele: %d\n",read_uint16("env_mem_response_1"));
		}
		printf("All elemnts received to mem from env\n" );
}



// Since blocking pipes are used so, we can read forever

void write_done_single_request(){
	uint32_t row = (env_done_row)<<10;
	uint32_t col =(env_done_col<<5);
	uint32_t rwbar =1;
	uint32_t check_request = row | col | rwbar;
	write_uint32("acc_mem_request_1",check_request);
	printf("Wrote check request by acc\n");
}

void check_done_single_request(){
	printf("inside check_done_single_request\n");
	uint16_t response = read_uint16("acc_mem_response_1");
	printf("Receive response from mem sent via acc %d\n",response);
	uint16_t response_wait=0;
	uint16_t one = 1;
	if(response!=one){
		while(response_wait!=one){
			 response_wait = read_uint16("acc_mem_response_1");
			printf("Receive response from mem sent via acc %d\n",response_wait);
			
		}
	}
}

void write_acc_requests(){
	uint32_t X[ORDER_X][ORDER_Y];
	uint32_t i;

	uint32_t idx;
	uint32_t idx2=0;
	
	
	
		
		for(idx = 0; idx < ORDER_X; idx++)
		{

			for(idx2 =0; idx2 < ORDER_Y; idx2++){
			uint32_t row = (idx<<10);
			uint32_t col = (idx2<<5);
			uint32_t rwbar = 1;
			X[idx][idx2] = row|col|rwbar ;
			write_uint32("acc_mem_request_1", X[idx][idx2]);
			//printf("Written ele read req: %x\n",X[idx][idx2]); *
		}
		
		}


		printf("All read request for acc_mem 1 written\n");
}



void write_start_accelerator(){

	uint32_t row = env_done_row;
	uint32_t col = env_done_col;
	uint32_t rwbar = 1;
	uint32_t check_request = row | col | rwbar;
	write_uint32("acc_mem_request_1",check_request);
	uint16_t response = read_uint16("acc_mem_response_1");
	if(!response){
		write_uint32("acc_mem_request_1",check_request);
		response = read_uint16("acc_mem_response_1");
	}

	uint16_t start = 1;
	write_uint16("start_accelerator",start);
	printf("Started acclerator\n");

}
void read_ofmaps(){

	uint32_t idx;
	uint32_t idx2=0;

	// for(idx = 0; idx < OF_MAPX_DIM; idx++)
	// 	{

	// 		for(idx2 =0; idx2 < OF_MAPX_DIM; idx2++){
			
	// 		printf("Read sum :%d\n", read_uint16("read_sums") );
	// 				}
		
	// 	}

	for(idx = 0; idx < 3; idx++)
		{

			for(idx2 =0; idx2 < 5; idx2++){
			
			printf("Read sum :%d\n", read_uint16("read_sums") );
					}
		
		}
}


void receive(){

		int idx,idx2;
		uint16_t X[ORDER_X][ORDER_Y];

		for(idx=0;idx<ORDER_X;idx++){
			for(idx2=0;idx2<ORDER_Y;idx2++){
				X[idx][idx2]=read_uint16("acc_mem_response_1");
			//printf("Read ele: %d\n",read_uint16("acc_mem_response_1"));
		}
		}

		for(idx = 0; idx < ORDER_X; idx++){
		for(idx2 =0; idx2 < ORDER_Y; idx2++){
			
			printf("%d\t",X[idx][idx2] );
		}
		printf("\n");
	}

		printf("All elements in acc_mem_response_1 read \n");
}


void receive_accelerator_done(){
	uint isDone = read_uint16("accelerator_done");
	printf("Accelerator is done, read val: %d",isDone);

}



void write_env_request2(){
	uint32_t idx =0;
	uint32_t idx2 =0;
	uint32_t ofmap_x = OF_MAPX_DIM;
	uint32_t ofmap_y =OF_MAPY_DIM;

	for(idx = 0;idx < ofmap_x; idx++){
		for(idx2 =0;idx2 < ofmap_y ; idx2++){
			uint32_t row = (idx<<10);
			uint32_t col = (idx2<<5);
			uint32_t rwbar = 1;
			uint32_t data = row | col | rwbar;
			write_uint32("env_mem_request_2", data);
		}
	}
	printf("All environment requests written\n");
}
void receive_env_mem_response2(){
	uint32_t ofmap_x = OF_MAPX_DIM;
	uint32_t ofmap_y =OF_MAPY_DIM;
	uint32_t idx, idx2;
	printf("\n");
	for(idx = 0; idx < ofmap_x; idx++){
		for(idx2 =0; idx2 < ofmap_y; idx2++){
			uint16_t data =read_uint16("env_mem_response_2");
			printf("%d\t",data );
		}
		printf("\n");
	}
	printf("All environment responses read\n");
}



DEFINE_THREAD(initial)
DEFINE_THREAD(receive_env_mem_response)
DEFINE_THREAD(write_done_single_request)
DEFINE_THREAD(check_done_single_request)
DEFINE_THREAD(write_acc_requests)
DEFINE_THREAD(receive)

DEFINE_THREAD(write_start_accelerator)
DEFINE_THREAD(read_ofmaps)
DEFINE_THREAD(receive_accelerator_done)

DEFINE_THREAD(write_env_request2)
DEFINE_THREAD(receive_env_mem_response2)


int main(int argc, char* argv[])
{
	
	signal(SIGINT,  Exit);
  	signal(SIGTERM, Exit);
#ifdef AA2C
	init_pipe_handler();
	simple_mem_start_daemons (NULL, 0);
#endif



	PTHREAD_DECL(initial);
	PTHREAD_CREATE(initial);

	PTHREAD_DECL(receive_env_mem_response);
	PTHREAD_CREATE(receive_env_mem_response);

	PTHREAD_JOIN(initial);
	PTHREAD_JOIN(receive_env_mem_response);



	PTHREAD_DECL(write_done_single_request);
	PTHREAD_CREATE(write_done_single_request);

	PTHREAD_DECL(check_done_single_request);
	PTHREAD_CREATE(check_done_single_request);

	PTHREAD_JOIN(write_done_single_request);
	PTHREAD_JOIN(check_done_single_request);

	PTHREAD_DECL(write_acc_requests);
	PTHREAD_CREATE(write_acc_requests);

	PTHREAD_DECL(receive);
	PTHREAD_CREATE(receive);


	PTHREAD_JOIN(write_acc_requests);
	PTHREAD_JOIN(receive);



	 PTHREAD_DECL(write_start_accelerator);
	 PTHREAD_CREATE(write_start_accelerator);


	 PTHREAD_JOIN(write_start_accelerator);

	 PTHREAD_DECL(read_ofmaps);
	 PTHREAD_CREATE(read_ofmaps);

	PTHREAD_DECL(receive_accelerator_done);
	PTHREAD_CREATE(receive_accelerator_done);

	PTHREAD_JOIN(read_ofmaps);
	PTHREAD_JOIN(receive_accelerator_done);
	

	PTHREAD_DECL(write_env_request2);
	PTHREAD_CREATE(write_env_request2);

	PTHREAD_DECL(receive_env_mem_response2);
	PTHREAD_CREATE(receive_env_mem_response2);

	PTHREAD_JOIN(write_env_request2);
	PTHREAD_JOIN(receive_env_mem_response2);

#ifdef AA2C
	simple_mem_stop_daemons();
#endif





	return(0);
}