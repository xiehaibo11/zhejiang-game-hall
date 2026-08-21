
void lws_plat_insert_socket_into_fds(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_2 + 0x304);
  FUN_01057668(param_2,5);
  param_1 = param_1 + (ulong)bVar2 * 0x6f8;
  uVar1 = *(uint *)(param_1 + 0x7c8);
  *(uint *)(param_1 + 0x7c8) = uVar1 + 1;
  *(undefined2 *)(*(long *)(param_1 + 0xe0) + (ulong)uVar1 * 8 + 6) = 0;
  return;
}

