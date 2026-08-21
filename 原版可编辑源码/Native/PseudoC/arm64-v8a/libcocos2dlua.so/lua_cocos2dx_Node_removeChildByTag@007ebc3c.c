
/* lua_cocos2dx_Node_removeChildByTag(lua_State*) */

undefined4 lua_cocos2dx_Node_removeChildByTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined4 uVar7;
  bool local_50 [4];
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar3 == (long *)0x0) {
    pcVar6 = "invalid \'cobj\' in function \'lua_cocos2dx_Node_removeChildByTag\'";
LAB_007ebd4c:
    tolua_error(param_1,pcVar6,0);
LAB_007ebd7c:
    uVar7 = 0;
  }
  else {
    iVar2 = lua_gettop(param_1);
    if (iVar2 == 3) {
      uVar4 = luaval_to_int32(param_1,2,&local_4c,"cc.Node:removeChildByTag");
      uVar5 = luaval_to_boolean(param_1,3,local_50,"cc.Node:removeChildByTag");
      if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_007ebd44:
        pcVar6 = "invalid arguments in function \'lua_cocos2dx_Node_removeChildByTag\'";
        goto LAB_007ebd4c;
      }
      (**(code **)(*plVar3 + 0x288))(plVar3,local_4c,local_50[0]);
    }
    else {
      if (iVar2 != 2) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "cc.Node:removeChildByTag",iVar2 + -1,1);
        goto LAB_007ebd7c;
      }
      uVar4 = luaval_to_int32(param_1,2,&local_4c,"cc.Node:removeChildByTag");
      if ((uVar4 & 1) == 0) goto LAB_007ebd44;
      (**(code **)(*plVar3 + 0x288))(plVar3,local_4c,1);
    }
    uVar7 = 1;
    lua_settop(param_1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

