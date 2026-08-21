
undefined8 FUN_008b01a8(long param_1)

{
  int iVar1;
  Scheduler *this;
  double dVar2;
  
  if (param_1 != 0) {
    this = (Scheduler *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 1) {
      dVar2 = (double)tolua_tonumber(0,param_1,2);
      cocos2d::Scheduler::unscheduleScriptEntry(this,(int)dVar2);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Scheduler:unscheduleScriptEntry",iVar1 + -1,1);
    }
  }
  return 0;
}

