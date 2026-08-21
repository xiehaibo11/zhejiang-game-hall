
undefined8 FUN_00e3e1b0(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0x25;
  }
  if ((param_2 == (long *)0x0) || ((param_4 & 1) != 0)) {
    param_2 = (long *)0x0;
  }
  else if (*param_2 != *(long *)(param_1 + 8)) {
    return 0x23;
  }
  uVar1 = FUN_00e41f80(param_1,param_2);
  return uVar1;
}

