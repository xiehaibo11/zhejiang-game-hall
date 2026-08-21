
/* lua_cocos2dx_ActionManager_removeAllActionsByTag(lua_State*) */

undefined4 lua_cocos2dx_ActionManager_removeAllActionsByTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.ActionManager:removeAllActionsByTag");
    if ((((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 2 < iVar2)) &&
        (uVar5 = luaval_is_usertype(param_1,3,"cc.Node",0), (uVar5 & 1) != 0)) &&
       (uVar6 = tolua_tousertype(param_1,3,0), (uVar4 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x38))(plVar3,local_3c,uVar6);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_0082dee0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ActionManager_removeAllActionsByTag\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ActionManager:removeAllActionsByTag",iVar2 + -1,2);
  }
  uVar7 = 0;
LAB_0082dee0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

