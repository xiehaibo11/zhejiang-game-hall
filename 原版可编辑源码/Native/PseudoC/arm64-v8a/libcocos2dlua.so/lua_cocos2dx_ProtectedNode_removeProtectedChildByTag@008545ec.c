
/* lua_cocos2dx_ProtectedNode_removeProtectedChildByTag(lua_State*) */

undefined4 lua_cocos2dx_ProtectedNode_removeProtectedChildByTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  bool local_50 [4];
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar4 = luaval_to_int32(param_1,2,&local_4c,"cc.ProtectedNode:removeProtectedChildByTag");
    uVar5 = luaval_to_boolean(param_1,3,local_50,"cc.ProtectedNode:removeProtectedChildByTag");
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_008546e4:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ProtectedNode_removeProtectedChildByTag\'"
                  ,0);
      goto LAB_0085471c;
    }
    (**(code **)(*plVar3 + 0x558))(plVar3,local_4c,local_50[0]);
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.ProtectedNode:removeProtectedChildByTag",iVar2 + -1,1);
LAB_0085471c:
      uVar6 = 0;
      goto LAB_00854720;
    }
    uVar4 = luaval_to_int32(param_1,2,&local_4c,"cc.ProtectedNode:removeProtectedChildByTag");
    if ((uVar4 & 1) == 0) goto LAB_008546e4;
    (**(code **)(*plVar3 + 0x558))(plVar3,local_4c,1);
  }
  uVar6 = 1;
  lua_settop(param_1,1);
LAB_00854720:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

