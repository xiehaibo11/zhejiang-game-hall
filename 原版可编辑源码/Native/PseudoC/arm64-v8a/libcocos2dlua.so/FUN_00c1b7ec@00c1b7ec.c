
undefined8 FUN_00c1b7ec(double *param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = 0;
  uVar2 = (uint)*param_1;
  if ((uVar2 < 0x8000001) && (*param_1 == (double)(int)uVar2)) {
    lVar3 = 0;
    if (2 < (int)uVar2) {
      lVar3 = (ulong)((uint)LZCOUNT(uVar2 - 1) ^ 0x1f) << 2;
    }
    uVar1 = 1;
    *(int *)(param_2 + lVar3) = *(int *)(param_2 + lVar3) + 1;
  }
  return uVar1;
}

