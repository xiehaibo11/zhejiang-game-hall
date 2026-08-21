
void lws_plat_delete_socket_from_fds(long param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x304);
  FUN_01057668(param_2,0xb);
  param_1 = param_1 + (ulong)bVar1 * 0x6f8;
  *(int *)(param_1 + 0x7c8) = *(int *)(param_1 + 0x7c8) + -1;
  return;
}

