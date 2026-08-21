
/* tolua_cocos2d_Node_setContentSize(lua_State*) */

undefined4 tolua_cocos2d_Node_setContentSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  Size *pSVar5;
  long lVar6;
  undefined4 uVar7;
  Size aSStack_50 [8];
  double local_48;
  double dStack_40;
  long local_38;
  
  pSVar5 = aSStack_50;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar4 = luaval_to_number(param_1,2,&dStack_40,"cc.Node:setContentSize");
    if (((uVar4 & 1) != 0) &&
       (uVar4 = luaval_to_number(param_1,3,&local_48,"cc.Node:setContentSize"), (uVar4 & 1) != 0)) {
      cocos2d::Size::Size(aSStack_50,(float)dStack_40,(float)local_48);
      lVar6 = *plVar3;
LAB_008a4b44:
      (**(code **)(lVar6 + 0x160))(plVar3,pSVar5);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_008a4b88;
    }
  }
  else if (iVar2 == 2) {
    cocos2d::Size::Size((Size *)&dStack_40);
    uVar4 = luaval_to_size(param_1,2,(Size *)&dStack_40,"cc.Node:setContentSize");
    if ((uVar4 & 1) != 0) {
      lVar6 = *plVar3;
      pSVar5 = (Size *)&dStack_40;
      goto LAB_008a4b44;
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:setContentSize",iVar2 + -1,1);
  }
  uVar7 = 0;
LAB_008a4b88:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

