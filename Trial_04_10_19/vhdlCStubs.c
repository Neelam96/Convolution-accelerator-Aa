#include <vhdlCStubs.h>
void accMemAccessDaemon()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call accMemAccessDaemon ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void accelerator()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call accelerator ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void global_storage_initializer_()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call global_storage_initializer_ ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void memAccessDaemon()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call memAccessDaemon ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void memAccessDaemon2()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call memAccessDaemon2 ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
