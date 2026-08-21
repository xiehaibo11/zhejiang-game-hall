
long FUN_0010e350(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x10);
    while ((plVar2 != (long *)0x0 && (iVar1 = FUN_0010e398(plVar2[7],param_2), iVar1 != 0))) {
      plVar2 = (long *)*plVar2;
    }
  }
  return (long)plVar2;
}

