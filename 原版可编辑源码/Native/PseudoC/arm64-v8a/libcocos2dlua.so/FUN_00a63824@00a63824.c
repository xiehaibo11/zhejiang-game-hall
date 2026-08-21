
undefined8 FUN_00a63824(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    uVar1 = plVar2[2];
    *param_2 = plVar2[3];
    *param_1 = *plVar2;
    return uVar1;
  }
  return 0;
}

