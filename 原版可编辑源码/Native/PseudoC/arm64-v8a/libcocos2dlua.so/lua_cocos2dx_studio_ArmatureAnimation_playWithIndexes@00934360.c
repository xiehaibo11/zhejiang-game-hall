
/* lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes(lua_State*) */

undefined4 lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  bool local_68 [4];
  int local_64;
  void *local_60;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_60 = (void *)0x0;
    uVar3 = luaval_to_std_vector_int
                      (param_1,2,(vector *)&local_60,"ccs.ArmatureAnimation:playWithIndexes");
    uVar4 = luaval_to_int32(param_1,3,&local_64,"ccs.ArmatureAnimation:playWithIndexes");
    uVar5 = luaval_to_boolean(param_1,4,local_68,"ccs.ArmatureAnimation:playWithIndexes");
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      (**(code **)(*plVar6 + 0xf0))(plVar6,&local_60,local_64,local_68[0]);
      lua_settop(param_1,1);
      goto LAB_00934510;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes\'"
                ,0);
LAB_00934588:
    uVar8 = 0;
  }
  else {
    if (iVar2 == 3) {
      local_58 = (void *)0x0;
      uStack_50 = 0;
      local_60 = (void *)0x0;
      uVar3 = luaval_to_std_vector_int
                        (param_1,2,(vector *)&local_60,"ccs.ArmatureAnimation:playWithIndexes");
      uVar4 = luaval_to_int32(param_1,3,&local_64,"ccs.ArmatureAnimation:playWithIndexes");
      if ((uVar3 & uVar4 & 1) == 0) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes\'"
                    ,0);
        goto LAB_00934588;
      }
      (**(code **)(*plVar6 + 0xf0))(plVar6,&local_60,local_64,1);
      lua_settop(param_1,1);
    }
    else {
      if (iVar2 != 2) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "ccs.ArmatureAnimation:playWithIndexes",iVar2 + -1,1);
        uVar8 = 0;
        goto LAB_0093459c;
      }
      local_58 = (void *)0x0;
      uStack_50 = 0;
      local_60 = (void *)0x0;
      uVar7 = luaval_to_std_vector_int
                        (param_1,2,(vector *)&local_60,"ccs.ArmatureAnimation:playWithIndexes");
      if ((uVar7 & 1) == 0) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes\'"
                    ,0);
        goto LAB_00934588;
      }
      (**(code **)(*plVar6 + 0xf0))(plVar6,&local_60,0xffffffff,1);
      lua_settop(param_1,1);
    }
LAB_00934510:
    uVar8 = 1;
  }
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
LAB_0093459c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

