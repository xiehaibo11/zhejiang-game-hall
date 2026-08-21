
undefined1  [16] tolua_tonumber(undefined1 param_1 [16],undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  
  uVar4 = param_1._8_8_;
  auVar3._0_8_ = param_1._0_8_;
  iVar2 = lua_gettop();
  iVar1 = -param_3;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  if (iVar2 < iVar1) {
    auVar3._8_8_ = uVar4;
    return auVar3;
  }
  auVar3 = lua_tonumber(param_2,param_3);
  return auVar3;
}

