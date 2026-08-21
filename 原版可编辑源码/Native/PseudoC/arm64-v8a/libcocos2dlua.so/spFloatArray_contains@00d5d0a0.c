
undefined8 spFloatArray_contains(float param_1,uint *param_2)

{
  ulong uVar1;
  float *pfVar2;
  
  uVar1 = (ulong)*param_2;
  if (0 < (int)*param_2) {
    pfVar2 = *(float **)(param_2 + 2);
    do {
      if (*pfVar2 == param_1) {
        return 0xffffffff;
      }
      uVar1 = uVar1 - 1;
      pfVar2 = pfVar2 + 1;
    } while (uVar1 != 0);
  }
  return 0;
}

