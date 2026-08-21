
/* lua_cocos2dx_ActionManager_getActionByTag(lua_State*) */

void lua_cocos2dx_ActionManager_getActionByTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.ActionManager:getActionByTag");
    if ((((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 2 < iVar2)) &&
        (uVar5 = luaval_is_usertype(param_1,3,"cc.Node",0), (uVar5 & 1) != 0)) &&
       (uVar6 = tolua_tousertype(param_1,3,0), (uVar4 & 1) != 0)) {
      pvVar7 = (void *)(**(code **)(*plVar3 + 0x48))(plVar3,local_3c,uVar6);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.Action");
        uVar6 = 1;
      }
      goto LAB_0082cf04;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ActionManager_getActionByTag\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ActionManager:getActionByTag",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_0082cf04:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

