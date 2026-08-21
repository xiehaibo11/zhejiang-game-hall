
/* lua_cocos2dx_audioengine_AudioEngine_getMaxAudioInstance(lua_State*) */

bool lua_cocos2dx_audioengine_AudioEngine_getMaxAudioInstance(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)cocos2d::experimental::AudioEngine::_maxInstances,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",&DAT_012efe6f,
               iVar1,0);
  }
  return iVar1 == 0;
}

