
undefined8 FUN_010a4550(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_4 + 0x24) >> 5 & 1) == 0) {
    uVar1 = FUN_010a6738(param_2,param_3,param_4);
    return uVar1;
  }
  return 1;
}

