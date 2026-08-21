
void FUN_0010e43c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    plVar1 = *(long **)(param_1 + 0x10);
    if (*(long **)(param_1 + 0x10) == (long *)0x0) {
      *(long *)(param_1 + 0x10) = param_2;
      return;
    }
    do {
      plVar2 = plVar1;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *plVar2 = param_2;
    *(long **)(param_2 + 8) = plVar2;
  }
  return;
}

