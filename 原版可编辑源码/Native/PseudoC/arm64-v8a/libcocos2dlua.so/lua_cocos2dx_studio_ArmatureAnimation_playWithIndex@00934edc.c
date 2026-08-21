
/* lua_cocos2dx_studio_ArmatureAnimation_playWithIndex(lua_State*) */

undefined4 lua_cocos2dx_studio_ArmatureAnimation_playWithIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined4 uVar9;
  int local_54;
  int local_50;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    uVar4 = luaval_to_int32(param_1,2,&local_4c,"ccs.ArmatureAnimation:playWithIndex");
    uVar5 = luaval_to_int32(param_1,3,&local_50,"ccs.ArmatureAnimation:playWithIndex");
    uVar6 = luaval_to_int32(param_1,4,&local_54,"ccs.ArmatureAnimation:playWithIndex");
    if ((((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0)) {
LAB_00935034:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ArmatureAnimation_playWithIndex\'"
                  ,0);
LAB_0093506c:
      uVar9 = 0;
      goto LAB_00935070;
    }
    pcVar8 = *(code **)(*plVar3 + 0xe0);
  }
  else {
    if (iVar2 == 3) {
      uVar4 = luaval_to_int32(param_1,2,&local_4c,"ccs.ArmatureAnimation:playWithIndex");
      uVar5 = luaval_to_int32(param_1,3,&local_50,"ccs.ArmatureAnimation:playWithIndex");
      if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) goto LAB_00935034;
      lVar7 = *plVar3;
    }
    else {
      if (iVar2 != 2) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "ccs.ArmatureAnimation:playWithIndex",iVar2 + -1,1);
        goto LAB_0093506c;
      }
      uVar4 = luaval_to_int32(param_1,2,&local_4c,"ccs.ArmatureAnimation:playWithIndex");
      if ((uVar4 & 1) == 0) goto LAB_00935034;
      lVar7 = *plVar3;
      local_50 = -1;
    }
    pcVar8 = *(code **)(lVar7 + 0xe0);
    local_54 = -1;
  }
  (*pcVar8)(plVar3,local_4c,local_50,local_54);
  uVar9 = 1;
  lua_settop(param_1,1);
LAB_00935070:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

