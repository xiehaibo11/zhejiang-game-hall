
undefined8 spArrayShortArray_contains(uint *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (ulong)*param_1;
  if (0 < (int)*param_1) {
    plVar2 = *(long **)(param_1 + 2);
    do {
      if (*plVar2 == param_2) {
        return 0xffffffff;
      }
      uVar1 = uVar1 - 1;
      plVar2 = plVar2 + 1;
    } while (uVar1 != 0);
  }
  return 0;
}

