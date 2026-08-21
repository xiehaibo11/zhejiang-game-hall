
/* lua_cocos2dx_Node_updateDisplayedColor(lua_State*) */

undefined4 lua_cocos2dx_Node_updateDisplayedColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color3B::Color3B(aCStack_40);
    uVar4 = luaval_to_color3b(param_1,2,aCStack_40,"cc.Node:updateDisplayedColor");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x4c8))(plVar3,aCStack_40);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_007ec040;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Node_updateDisplayedColor\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:updateDisplayedColor",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_007ec040:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

