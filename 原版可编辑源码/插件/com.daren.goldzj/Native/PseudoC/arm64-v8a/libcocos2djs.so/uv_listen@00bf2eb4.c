
undefined8 uv_listen(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x10) == 7) {
    uVar2 = uv_pipe_listen();
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0xc) {
      return 0xffffffea;
    }
    uVar2 = uv_tcp_listen();
  }
  if ((((int)uVar2 == 0) && (uVar1 = *(uint *)(param_1 + 0x58), (uVar1 >> 0xe & 1) == 0)) &&
     (*(uint *)(param_1 + 0x58) = uVar1 | 0x4000, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
    return uVar2;
  }
  return uVar2;
}

