
undefined8 FUN_00e280c8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  param_1[0x1d] = param_2;
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    uVar2 = (**(code **)(*(long *)(lVar1 + 0x370) + 0xd8))(lVar1,param_2,param_1 + 3);
    if ((int)uVar2 != 0) {
      param_1[0x1d] = 0xffffffff;
    }
    return uVar2;
  }
  FUN_00e16df4();
  FUN_00e31ac4(param_1,0);
  return 0;
}

