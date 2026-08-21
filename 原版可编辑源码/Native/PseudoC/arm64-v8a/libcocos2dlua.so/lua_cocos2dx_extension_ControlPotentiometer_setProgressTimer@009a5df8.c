
/* lua_cocos2dx_extension_ControlPotentiometer_setProgressTimer(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlPotentiometer_setProgressTimer(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.ProgressTimer",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar2 + 0x6d0))(plVar2,uVar4);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,&DAT_012e57dc,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlPotentiometer:setProgressTimer",iVar1 + -1,1);
  }
  return 0;
}

