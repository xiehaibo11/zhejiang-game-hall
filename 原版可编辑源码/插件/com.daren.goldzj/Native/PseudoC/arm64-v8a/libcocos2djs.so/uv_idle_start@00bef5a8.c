
uint uv_idle_start(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 0xe & 1) == 0) {
    if (param_2 == 0) {
      return 0xffffffea;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x1a0);
    *(long *)(param_1 + 0x68) = lVar2;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 8) + 0x1a0;
    *(long *)(lVar2 + 8) = param_1 + 0x68;
    *(long *)(*(long *)(param_1 + 8) + 0x1a0) = param_1 + 0x68;
    *(long *)(param_1 + 0x60) = param_2;
    *(uint *)(param_1 + 0x58) = uVar1 | 0x4000;
    if ((uVar1 >> 0xd & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
      return uVar1 & 0x4000;
    }
  }
  return 0;
}

