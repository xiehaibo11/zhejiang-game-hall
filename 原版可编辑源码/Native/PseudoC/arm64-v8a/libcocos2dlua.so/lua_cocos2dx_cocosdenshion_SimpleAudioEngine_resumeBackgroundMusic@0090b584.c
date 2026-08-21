
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeBackgroundMusic(lua_State*) */

bool lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeBackgroundMusic(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
                    /* catch() { ... } // from try @ 0090b538 with catch @ 0090b5e8 */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:resumeBackgroundMusic",iVar1,0);
  }
  return iVar1 == 0;
}

