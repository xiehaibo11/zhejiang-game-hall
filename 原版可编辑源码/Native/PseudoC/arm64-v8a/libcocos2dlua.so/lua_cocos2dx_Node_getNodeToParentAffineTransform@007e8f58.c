
/* lua_cocos2dx_Node_getNodeToParentAffineTransform(lua_State*) */

void lua_cocos2dx_Node_getNodeToParentAffineTransform(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  AffineTransform aAStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    (**(code **)(*plVar4 + 0x3f0))(aAStack_50,plVar4);
  }
  else {
    if ((((iVar2 != 2) || (param_1 == (lua_State *)0x0)) || (iVar3 = lua_gettop(param_1), iVar3 < 2)
        ) || (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) == 0)) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Node:getNodeToParentAffineTransform",iVar2 + -1,0);
      uVar6 = 0;
      goto LAB_007e904c;
    }
    uVar6 = tolua_tousertype(param_1,2,0);
    (**(code **)(*plVar4 + 0x400))(aAStack_50,plVar4,uVar6);
  }
  affinetransform_to_luaval(param_1,aAStack_50);
  uVar6 = 1;
LAB_007e904c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

