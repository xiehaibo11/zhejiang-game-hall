
/* lua_cocos2dx_ActionManager_getNumberOfRunningActionsInTargetByTag(lua_State*) */

void lua_cocos2dx_ActionManager_getNumberOfRunningActionsInTargetByTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"cc.ActionManager:getNumberOfRunningActionsInTargetByTag")
      ;
    }
    else {
      uVar6 = tolua_tousertype(param_1,2,0);
      uVar5 = luaval_to_int32(param_1,3,&local_3c,
                              "cc.ActionManager:getNumberOfRunningActionsInTargetByTag");
      if ((uVar5 & 1) != 0) {
        uVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,uVar6,local_3c);
        tolua_pushnumber((double)uVar3,param_1);
        uVar6 = 1;
        goto LAB_0082e030;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ActionManager_getNumberOfRunningActionsInTargetByTag\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ActionManager:getNumberOfRunningActionsInTargetByTag",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_0082e030:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

