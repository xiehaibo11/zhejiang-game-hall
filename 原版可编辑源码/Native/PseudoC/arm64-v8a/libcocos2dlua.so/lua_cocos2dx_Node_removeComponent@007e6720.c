
/* lua_cocos2dx_Node_removeComponent(lua_State*) */

void lua_cocos2dx_Node_removeComponent(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar6 = luaval_is_usertype(param_1,2,"cc.Component",0), (uVar6 & 1) != 0)) {
      uVar7 = tolua_tousertype(param_1,2,0);
      uVar4 = (**(code **)(*plVar5 + 0x470))(plVar5,uVar7);
      tolua_pushboolean(param_1,uVar4 & 1);
      uVar7 = 1;
      goto LAB_007e6860;
    }
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"cc.Node:removeComponent");
    if ((uVar6 & 1) != 0) {
      uVar4 = (**(code **)(*plVar5 + 0x468))(plVar5,local_50);
      tolua_pushboolean(param_1,uVar4 & 1);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar7 = 1;
      goto LAB_007e6860;
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Node:removeComponent",iVar2 + -1,1);
  uVar7 = 0;
LAB_007e6860:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

