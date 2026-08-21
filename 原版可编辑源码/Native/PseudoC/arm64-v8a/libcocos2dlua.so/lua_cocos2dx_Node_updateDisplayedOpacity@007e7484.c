
/* lua_cocos2dx_Node_updateDisplayedOpacity(lua_State*) */

undefined4 lua_cocos2dx_Node_updateDisplayedOpacity(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined1 local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_uint16(param_1,2,(ushort *)local_3c,"cc.Node:updateDisplayedOpacity");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x498))(plVar3,local_3c[0]);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_007e7548;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Node_updateDisplayedOpacity\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:updateDisplayedOpacity",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_007e7548:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

