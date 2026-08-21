
undefined8 FUN_00de0fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x350);
  uVar1 = (**(code **)(lVar2 + 0x38))();
  if ((int)uVar1 != 0) {
    (**(code **)(lVar2 + 0x50))(param_1,param_2,param_3);
    uVar1 = 1;
  }
  return uVar1;
}

