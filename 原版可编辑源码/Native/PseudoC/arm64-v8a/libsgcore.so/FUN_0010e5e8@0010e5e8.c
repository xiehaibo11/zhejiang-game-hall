
long * FUN_0010e5e8(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  for (plVar1 = plVar3;
      (plVar2 = plVar1, 0 < param_2 && (plVar2 = (long *)0x0, plVar1 != (long *)0x0));
      plVar1 = (long *)*plVar1) {
    param_2 = param_2 + -1;
  }
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)plVar2[1];
    if (plVar1 != (long *)0x0) {
      *plVar1 = *plVar2;
    }
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
    }
    if (plVar2 == plVar3) {
      *(long *)(param_1 + 0x10) = *plVar3;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
  }
  return plVar2;
}

