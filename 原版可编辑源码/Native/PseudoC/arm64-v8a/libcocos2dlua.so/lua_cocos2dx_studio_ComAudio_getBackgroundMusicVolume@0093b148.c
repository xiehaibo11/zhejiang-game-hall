
/* lua_cocos2dx_studio_ComAudio_getBackgroundMusicVolume(lua_State*) */

bool lua_cocos2dx_studio_ComAudio_getBackgroundMusicVolume(lua_State *param_1)

{
  int iVar1;
  float fVar2;
  
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocostudio::ComAudio::getBackgroundMusicVolume();
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012ccffc,
               iVar1,0);
  }
  return iVar1 == 0;
}

