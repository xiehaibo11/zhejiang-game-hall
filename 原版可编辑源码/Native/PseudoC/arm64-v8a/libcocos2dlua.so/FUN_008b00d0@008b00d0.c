
undefined8 FUN_008b00d0(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Scheduler *this;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = 0;
  if (param_1 != (lua_State *)0x0) {
    this = (Scheduler *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 3) {
      uVar2 = toluafix_ref_function(param_1,2,0);
      dVar4 = (double)tolua_tonumber(0,param_1,3);
      iVar1 = tolua_toboolean(param_1,4,0);
      uVar2 = cocos2d::Scheduler::scheduleScriptFunc(this,uVar2,(float)dVar4,iVar1 != 0);
      tolua_pushnumber((double)uVar2,param_1);
      uVar3 = 1;
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Scheduler:scheduleScriptFunc",iVar1 + -1,3);
      uVar3 = 0;
    }
  }
  return uVar3;
}

