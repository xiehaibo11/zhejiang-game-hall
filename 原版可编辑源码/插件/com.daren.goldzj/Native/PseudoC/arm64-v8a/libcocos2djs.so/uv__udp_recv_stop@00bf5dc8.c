
undefined8 uv__udp_recv_stop(long param_1)

{
  uint uVar1;
  int iVar2;
  
  uv__io_stop(*(undefined8 *)(param_1 + 8),param_1 + 0x80,1);
  iVar2 = uv__io_active(param_1 + 0x80,4);
  if (((iVar2 == 0) && (uVar1 = *(uint *)(param_1 + 0x58), (uVar1 >> 0xe & 1) != 0)) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}

