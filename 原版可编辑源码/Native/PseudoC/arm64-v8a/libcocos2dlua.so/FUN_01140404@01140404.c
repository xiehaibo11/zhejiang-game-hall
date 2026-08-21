
undefined8 FUN_01140404(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == (uint *)0x0) {
    return 2;
  }
  lVar5 = (long)(int)param_1[2] + -1;
  if (*param_1 < 0xb) {
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + (int)param_1[6] * lVar5;
    param_1[6] = -param_1[6];
    return 0;
  }
  uVar1 = param_1[0xc];
  uVar2 = param_1[0xd];
  uVar3 = param_1[0xe];
  lVar4 = (lVar5 << 0x20) >> 0x21;
  param_1[0xc] = -uVar1;
  param_1[0xd] = -uVar2;
  param_1[0xe] = -uVar3;
  *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + (long)(int)uVar1 * (long)(int)lVar5;
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + (int)uVar2 * lVar4;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (int)uVar3 * lVar4;
  if (*(long *)(param_1 + 10) != 0) {
    *(long *)(param_1 + 10) = *(long *)(param_1 + 10) + (long)(int)param_1[0xf] * (long)(int)lVar5;
    param_1[0xf] = -param_1[0xf];
  }
  return 0;
}

