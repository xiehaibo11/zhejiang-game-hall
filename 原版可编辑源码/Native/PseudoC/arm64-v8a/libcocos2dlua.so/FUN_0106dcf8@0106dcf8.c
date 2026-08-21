
undefined8 FUN_0106dcf8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  param_1[0x1c] = param_2;
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    uVar2 = (**(code **)(*(long *)(lVar1 + 0x360) + 0xd8))(lVar1,param_2,param_1 + 3);
    if ((int)uVar2 != 0) {
      param_1[0x1c] = 0xffffffff;
    }
  }
  else {
    FT_Select_Metrics();
    FUN_010768f4(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

