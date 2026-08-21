
/* lua_cocos2dx_studio_ActionTimeline_addFrameEndCallFunc(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionTimeline_addFrameEndCallFunc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  ulong local_d0 [2];
  void *local_c0;
  int local_b4;
  long alStack_b0 [4];
  long *local_90;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 3) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:addFrameEndCallFunc",iVar2 + -1,3);
    uVar7 = 0;
    goto LAB_00948218;
  }
  local_d0[1] = 0;
  local_c0 = (void *)0x0;
  local_d0[0] = 0;
  local_60 = (long *)0x0;
  uVar3 = luaval_to_int32(param_1,2,&local_b4,"ccs.ActionTimeline:addFrameEndCallFunc");
  uVar4 = luaval_to_std_string
                    (param_1,3,(basic_string *)local_d0,"ccs.ActionTimeline:addFrameEndCallFunc");
  if ((uVar3 & uVar4 & 1) == 0) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionTimeline_addFrameEndCallFunc\'"
                ,0);
    uVar7 = 0;
  }
  else {
    if (local_60 == (long *)0x0) {
      local_90 = (long *)0x0;
    }
    else if (alStack_80 == local_60) {
      local_90 = alStack_b0;
      (**(code **)(*local_60 + 0x18))(local_60,alStack_b0);
    }
    else {
      local_90 = (long *)(**(code **)(*local_60 + 0x10))();
    }
    (**(code **)(*plVar5 + 0x120))(plVar5,local_b4,local_d0,alStack_b0);
    if (alStack_b0 == local_90) {
      pcVar6 = *(code **)(*local_90 + 0x20);
LAB_009481c8:
      (*pcVar6)();
    }
    else if (local_90 != (long *)0x0) {
      pcVar6 = *(code **)(*local_90 + 0x28);
      goto LAB_009481c8;
    }
    uVar7 = 1;
    lua_settop(param_1,1);
  }
  if (alStack_80 == local_60) {
    pcVar6 = *(code **)(*local_60 + 0x20);
LAB_00948204:
    (*pcVar6)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar6 = *(code **)(*local_60 + 0x28);
    goto LAB_00948204;
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
LAB_00948218:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

