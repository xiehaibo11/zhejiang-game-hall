
undefined8 spIntArray_contains(uint *param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  
  uVar1 = (ulong)*param_1;
  if (0 < (int)*param_1) {
    piVar2 = *(int **)(param_1 + 2);
    do {
      if (*piVar2 == param_2) {
        return 0xffffffff;
      }
      uVar1 = uVar1 - 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 != 0);
  }
  return 0;
}

