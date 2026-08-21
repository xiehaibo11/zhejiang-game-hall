
/* lua_cocos2dx_audioengine_AudioEngine_pause(lua_State*) */

undefined4 lua_cocos2dx_audioengine_AudioEngine_pause(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccexp.AudioEngine:pause");
    if ((uVar3 & 1) != 0) {
      cocos2d::experimental::AudioEngine::pause(local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009cc924;
    }
    tolua_error(param_1,&DAT_012efe24,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccexp.AudioEngine:pause",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009cc924:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

