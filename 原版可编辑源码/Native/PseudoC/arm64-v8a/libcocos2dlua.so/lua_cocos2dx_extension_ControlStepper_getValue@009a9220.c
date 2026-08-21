
/* lua_cocos2dx_extension_ControlStepper_getValue(lua_State*) */

bool lua_cocos2dx_extension_ControlStepper_getValue(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x6d8))(plVar2);
    tolua_pushnumber(param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlStepper:getValue",iVar1,0);
  }
  return iVar1 == 0;
}

