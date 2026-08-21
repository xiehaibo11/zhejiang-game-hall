
undefined8 spUnsignedShortArray_contains(uint *param_1,short param_2)

{
  ulong uVar1;
  short *psVar2;
  
  uVar1 = (ulong)*param_1;
  if (0 < (int)*param_1) {
    psVar2 = *(short **)(param_1 + 2);
    do {
      if (*psVar2 == param_2) {
        return 0xffffffff;
      }
      uVar1 = uVar1 - 1;
      psVar2 = psVar2 + 1;
    } while (uVar1 != 0);
  }
  return 0;
}

