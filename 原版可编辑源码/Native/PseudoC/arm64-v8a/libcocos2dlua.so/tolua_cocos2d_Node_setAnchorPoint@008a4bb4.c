
/* tolua_cocos2d_Node_setAnchorPoint(lua_State*) */

undefined4 tolua_cocos2d_Node_setAnchorPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  double *pdVar5;
  long lVar6;
  undefined4 uVar7;
  float local_50;
  float fStack_4c;
  double local_48;
  double local_40;
  long local_38;
  
  pdVar5 = (double *)&local_50;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar4 = luaval_to_number(param_1,2,&local_40,"cc.Node:setAnchorPoint");
    if (((uVar4 & 1) == 0) ||
       (uVar4 = luaval_to_number(param_1,3,&local_48,"cc.Node:setAnchorPoint"), (uVar4 & 1) == 0))
    goto LAB_008a4cc0;
    local_50 = (float)local_40;
    fStack_4c = (float)local_48;
    lVar6 = *plVar3;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Node:setAnchorPoint",iVar2 + -1,1);
LAB_008a4cc0:
      uVar7 = 0;
      goto LAB_008a4cc4;
    }
    local_40 = 0.0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"cc.Node:setAnchorPoint");
    uVar7 = 0;
    if ((uVar4 & 1) == 0) goto LAB_008a4cc4;
    lVar6 = *plVar3;
    pdVar5 = &local_40;
  }
  (**(code **)(lVar6 + 0x148))(plVar3,pdVar5);
  uVar7 = 1;
  lua_settop(param_1,1);
LAB_008a4cc4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

