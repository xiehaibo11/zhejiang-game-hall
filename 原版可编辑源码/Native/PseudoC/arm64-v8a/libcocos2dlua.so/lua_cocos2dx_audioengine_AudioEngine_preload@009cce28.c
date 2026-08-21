
/* lua_cocos2dx_audioengine_AudioEngine_preload(lua_State*) */

void lua_cocos2dx_audioengine_AudioEngine_preload(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  ulong local_b8;
  undefined8 local_b0;
  void *local_a8;
  long alStack_a0 [4];
  long *local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  int iVar7;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"ccexp.AudioEngine:preload");
    if ((uVar3 & 1) == 0) {
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      goto LAB_009ccf40;
    }
    local_50 = (long *)0x0;
    cocos2d::experimental::AudioEngine::preload(&local_b8,alStack_70);
    if (alStack_70 == local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
LAB_009ccfa8:
      (*pcVar5)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar5 = *(code **)(*local_50 + 0x28);
      goto LAB_009ccfa8;
    }
    lua_settop(param_1,1);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
LAB_009ccfc8:
    uVar4 = 1;
  }
  else {
    if (iVar2 == 3) {
      local_b0 = 0;
      local_a8 = (void *)0x0;
      local_b8 = 0;
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_b8,"ccexp.AudioEngine:preload");
      if ((uVar3 & 1) == 0) {
        iVar7 = 2;
        iVar6 = 2;
      }
      else {
        local_50 = (long *)0x0;
        local_80 = (long *)0x0;
        cocos2d::experimental::AudioEngine::preload(&local_b8,alStack_a0);
        if (alStack_a0 == local_80) {
          pcVar5 = *(code **)(*local_80 + 0x20);
LAB_009ccf70:
          (*pcVar5)();
        }
        else if (local_80 != (long *)0x0) {
          pcVar5 = *(code **)(*local_80 + 0x28);
          goto LAB_009ccf70;
        }
        lua_settop(param_1,1);
        if (alStack_70 == local_50) {
          pcVar5 = *(code **)(*local_50 + 0x20);
LAB_009ccff8:
          (*pcVar5)();
        }
        else if (local_50 != (long *)0x0) {
          pcVar5 = *(code **)(*local_50 + 0x28);
          goto LAB_009ccff8;
        }
        iVar7 = 1;
        iVar6 = 1;
      }
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
        iVar6 = iVar7;
      }
      if (iVar6 != 2) goto LAB_009ccfc8;
    }
LAB_009ccf40:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",0x12f00ad,iVar2 + -1
               ,1);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

