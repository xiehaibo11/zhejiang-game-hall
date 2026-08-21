
/* lua_cocos2dx_audioengine_AudioEngine_getProfile(lua_State*) */

void lua_cocos2dx_audioengine_AudioEngine_getProfile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  AudioProfile *pAVar4;
  undefined8 uVar5;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"ccexp.AudioEngine:getProfile");
    if ((uVar3 & 1) != 0) {
      pAVar4 = (AudioProfile *)
               cocos2d::experimental::AudioEngine::getProfile((basic_string *)local_50);
      object_to_luaval<cocos2d::experimental::AudioProfile>(param_1,"ccexp.AudioProfile",pAVar4);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar5 = 1;
      goto LAB_009cdbe0;
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar3 = luaval_to_int32(param_1,2,(int *)local_50,"ccexp.AudioEngine:getProfile");
    if ((uVar3 & 1) != 0) {
      pAVar4 = (AudioProfile *)cocos2d::experimental::AudioEngine::getProfile((int)local_50[0]);
      object_to_luaval<cocos2d::experimental::AudioProfile>(param_1,"ccexp.AudioProfile",pAVar4);
      uVar5 = 1;
      goto LAB_009cdbe0;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "ccexp.AudioEngine:getProfile",iVar2 + -1,1);
  uVar5 = 0;
LAB_009cdbe0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

