
/* lua_cocos2dx_ActionManager_getNumberOfRunningActionsInTarget(lua_State*) */

undefined8 lua_cocos2dx_ActionManager_getNumberOfRunningActionsInTarget(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      lVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar4);
      tolua_pushnumber((double)lVar5,param_1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ActionManager_getNumberOfRunningActionsInTarget\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ActionManager:getNumberOfRunningActionsInTarget",iVar1 + -1,1);
  }
  return 0;
}

