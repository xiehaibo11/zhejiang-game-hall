
/* lua_cocos2dx_audioengine_AudioEngine_getDefaultProfile(lua_State*) */

bool lua_cocos2dx_audioengine_AudioEngine_getDefaultProfile(lua_State *param_1)

{
  int iVar1;
  AudioProfile *pAVar2;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pAVar2 = (AudioProfile *)cocos2d::experimental::AudioEngine::getDefaultProfile();
    object_to_luaval<cocos2d::experimental::AudioProfile>(param_1,"ccexp.AudioProfile",pAVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccexp.AudioEngine:getDefaultProfile",iVar1,0);
  }
  return iVar1 == 0;
}

