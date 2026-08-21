
/* lua_cocos2dx_Node_setPosition(lua_State*) */

undefined8 lua_cocos2dx_Node_setPosition(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  double local_48;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar3 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_setPosition\'",0);
    uVar5 = 0;
    goto LAB_007e9a6c;
  }
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    local_40 = 0.0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"cc.Node:setPosition");
    if ((uVar4 & 1) == 0) goto LAB_007e9a48;
    (**(code **)(*plVar3 + 0x98))(plVar3,&local_40);
  }
  else {
    if (((iVar2 != 3) ||
        (uVar4 = luaval_to_number(param_1,2,&local_40,"cc.Node:setPosition"), (uVar4 & 1) == 0)) ||
       (uVar4 = luaval_to_number(param_1,3,&local_48,"cc.Node:setPosition"), (uVar4 & 1) == 0)) {
LAB_007e9a48:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Node:setPosition",iVar2 + -1,1);
      uVar5 = 0;
      goto LAB_007e9a6c;
    }
    (**(code **)(*plVar3 + 200))((float)local_40,(float)local_48,plVar3);
  }
  uVar5 = 1;
  lua_settop(param_1,1);
LAB_007e9a6c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

