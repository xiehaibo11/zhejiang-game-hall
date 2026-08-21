
/* lua_cocos2dx_ProtectedNode_removeProtectedChild(lua_State*) */

undefined4 lua_cocos2dx_ProtectedNode_removeProtectedChild(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) == 0)) {
      luaval_to_boolean(param_1,3,local_3c,"cc.ProtectedNode:removeProtectedChild");
    }
    else {
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_boolean(param_1,3,local_3c,"cc.ProtectedNode:removeProtectedChild");
      if ((uVar4 & 1) != 0) {
        (**(code **)(*plVar3 + 0x550))(plVar3,uVar5,local_3c[0]);
        goto LAB_00854cd8;
      }
    }
LAB_00854d20:
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ProtectedNode_removeProtectedChild\'",
                0);
  }
  else {
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) != 0)) {
        uVar5 = tolua_tousertype(param_1,2,0);
        (**(code **)(*plVar3 + 0x550))(plVar3,uVar5,1);
LAB_00854cd8:
        uVar6 = 1;
        lua_settop(param_1,1);
        goto LAB_00854d38;
      }
      goto LAB_00854d20;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ProtectedNode:removeProtectedChild",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_00854d38:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

