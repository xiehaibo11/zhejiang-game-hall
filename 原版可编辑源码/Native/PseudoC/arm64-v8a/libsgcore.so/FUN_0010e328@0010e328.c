
void FUN_0010e328(long param_1,int param_2)

{
  long *plVar1;
  
  if (param_1 != 0) {
    for (plVar1 = *(long **)(param_1 + 0x10); (0 < param_2 && (plVar1 != (long *)0x0));
        plVar1 = (long *)*plVar1) {
      param_2 = param_2 + -1;
    }
  }
  return;
}

