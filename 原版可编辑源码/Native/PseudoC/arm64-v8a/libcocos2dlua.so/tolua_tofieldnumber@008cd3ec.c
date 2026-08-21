
undefined1  [16]
tolua_tofieldnumber(undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  
  uVar4 = param_1._8_8_;
  lua_pushnumber((double)param_4);
  lua_gettable(param_2,param_3);
  iVar1 = lua_type(param_2,0xffffffff);
  auVar2._8_8_ = uVar4;
  auVar2._0_8_ = param_1._0_8_;
  if (iVar1 != 0) {
    auVar2 = lua_tonumber(param_2,0xffffffff);
  }
  uVar4 = auVar2._8_8_;
  lua_settop(param_2,0xfffffffe);
  auVar3._8_8_ = uVar4;
  auVar3._0_8_ = auVar2._0_8_;
  return auVar3;
}

