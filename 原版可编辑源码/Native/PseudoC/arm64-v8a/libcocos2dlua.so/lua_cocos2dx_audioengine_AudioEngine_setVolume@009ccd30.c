
/* lua_cocos2dx_audioengine_AudioEngine_setVolume(lua_State*) */

undefined4 lua_cocos2dx_audioengine_AudioEngine_setVolume(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccexp.AudioEngine:setVolume");
    uVar4 = luaval_to_number(param_1,3,&local_48,"ccexp.AudioEngine:setVolume");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      cocos2d::experimental::AudioEngine::setVolume(local_3c,(float)local_48);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009ccdfc;
    }
    tolua_error(param_1,&DAT_012f005e,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccexp.AudioEngine:setVolume",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_009ccdfc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

