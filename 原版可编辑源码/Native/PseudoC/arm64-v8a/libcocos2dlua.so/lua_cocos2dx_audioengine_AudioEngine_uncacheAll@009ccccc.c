
/* lua_cocos2dx_audioengine_AudioEngine_uncacheAll(lua_State*) */

bool lua_cocos2dx_audioengine_AudioEngine_uncacheAll(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::experimental::AudioEngine::uncacheAll();
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",0x12f0025,iVar1,0
              );
  }
  return iVar1 == 0;
}

