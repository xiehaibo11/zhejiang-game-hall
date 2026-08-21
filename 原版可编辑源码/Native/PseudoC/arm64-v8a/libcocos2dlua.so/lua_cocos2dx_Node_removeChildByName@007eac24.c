
/* lua_cocos2dx_Node_removeChildByName(lua_State*) */

undefined8 lua_cocos2dx_Node_removeChildByName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  bool local_54 [4];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar5 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_removeChildByName\'",0);
    uVar7 = 0;
    goto LAB_007eadbc;
  }
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Node:removeChildByName");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"cc.Node:removeChildByName");
    if ((uVar3 & uVar4 & 1) != 0) {
      (**(code **)(*plVar5 + 0x290))(plVar5,&local_50,local_54[0]);
      lua_settop(param_1,1);
      goto LAB_007ead48;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Node_removeChildByName\'",0);
LAB_007eada8:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Node:removeChildByName",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_007eadbc;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Node:removeChildByName");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Node_removeChildByName\'",0)
      ;
      goto LAB_007eada8;
    }
    (**(code **)(*plVar5 + 0x290))(plVar5,&local_50,1);
    lua_settop(param_1,1);
LAB_007ead48:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_007eadbc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

