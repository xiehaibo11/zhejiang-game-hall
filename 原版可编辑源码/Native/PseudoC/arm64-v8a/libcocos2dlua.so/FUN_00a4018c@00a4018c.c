
undefined8 FUN_00a4018c(long param_1,long *param_2)

{
  long *plVar1;
  
  if (param_2 != (long *)0x0) {
    for (plVar1 = (long *)*param_2; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
      if (*plVar1 == param_1) {
        FUN_00a4aa5c(param_2,plVar1,0);
        return 1;
      }
    }
  }
  return 0;
}

