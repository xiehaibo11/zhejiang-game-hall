
/* lua_cocos2dx_audioengine_AudioEngine_setMaxAudioInstance(lua_State*) */

void lua_cocos2dx_audioengine_AudioEngine_setMaxAudioInstance(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_2c,"ccexp.AudioEngine:setMaxAudioInstance");
    if ((uVar4 & 1) != 0) {
      uVar3 = cocos2d::experimental::AudioEngine::setMaxAudioInstance(local_2c);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
      goto LAB_009ccb80;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_audioengine_AudioEngine_setMaxAudioInstance\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",&DAT_012eff26,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009ccb80:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

