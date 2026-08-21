
/* lua_cocos2dx_audioengine_AudioEngine_getVolume(lua_State*) */

void lua_cocos2dx_audioengine_AudioEngine_getVolume(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_2c,"ccexp.AudioEngine:getVolume");
    if ((uVar3 & 1) != 0) {
      fVar5 = (float)cocos2d::experimental::AudioEngine::getVolume(local_2c);
      tolua_pushnumber((double)fVar5,param_1);
      uVar4 = 1;
      goto LAB_009cc684;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_audioengine_AudioEngine_getVolume\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccexp.AudioEngine:getVolume",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009cc684:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

