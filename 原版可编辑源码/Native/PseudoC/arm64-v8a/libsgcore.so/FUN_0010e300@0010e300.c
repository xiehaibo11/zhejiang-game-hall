
int FUN_0010e300(long param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    iVar1 = 0;
    do {
      plVar2 = (long *)*plVar2;
      iVar1 = iVar1 + 1;
    } while (plVar2 != (long *)0x0);
  }
  return iVar1;
}

