
bool FUN_00af1bcc(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  dtls1_set_message_header();
  *(int *)(param_1 + 0x88) = param_3 + 0xc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  iVar1 = dtls1_buffer_message(param_1,0);
  return iVar1 != 0;
}

