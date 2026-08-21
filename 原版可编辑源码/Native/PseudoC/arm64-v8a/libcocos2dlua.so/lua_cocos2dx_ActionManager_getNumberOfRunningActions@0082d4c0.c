
/* lua_cocos2dx_ActionManager_getNumberOfRunningActions(lua_State*) */

bool lua_cocos2dx_ActionManager_getNumberOfRunningActions(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
    tolua_pushnumber((double)lVar3,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ActionManager:getNumberOfRunningActions",iVar1,0);
  }
  return iVar1 == 0;
}

