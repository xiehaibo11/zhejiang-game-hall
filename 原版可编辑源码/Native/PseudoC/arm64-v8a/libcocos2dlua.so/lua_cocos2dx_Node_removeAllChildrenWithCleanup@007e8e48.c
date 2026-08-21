
/* lua_cocos2dx_Node_removeAllChildrenWithCleanup(lua_State*) */

undefined8 lua_cocos2dx_Node_removeAllChildrenWithCleanup(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar3 == (long *)0x0) {
    tolua_error(param_1,
                "invalid \'cobj\' in function \'lua_cocos2dx_Node_removeAllChildrenWithCleanup\'",0)
    ;
    uVar5 = 0;
  }
  else {
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x298))(plVar3);
    }
    else {
      if ((iVar2 != 2) ||
         (uVar4 = luaval_to_boolean(param_1,2,local_3c,"cc.Node:removeAllChildrenWithCleanup"),
         (uVar4 & 1) == 0)) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "cc.Node:removeAllChildren",iVar2 + -1,0);
        uVar5 = 0;
        goto LAB_007e8f2c;
      }
      (**(code **)(*plVar3 + 0x2a0))(plVar3,local_3c[0]);
    }
    uVar5 = 1;
    lua_settop(param_1,1);
  }
LAB_007e8f2c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

