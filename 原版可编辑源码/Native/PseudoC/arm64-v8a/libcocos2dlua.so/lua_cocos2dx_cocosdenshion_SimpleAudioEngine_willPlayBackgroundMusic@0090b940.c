
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_willPlayBackgroundMusic(lua_State*) */

bool lua_cocos2dx_cocosdenshion_SimpleAudioEngine_willPlayBackgroundMusic(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* catch() { ... } // from try @ 0090b914 with catch @ 0090b96c */
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 0090b980 to 00a0ba4f has its CatchHandler @ 0090b980
                       catch() { ... } // from try @ 0090b980 with catch @ 0090b980
                       catch() { ... } // from try @ 0090bad0 with catch @ 0090b980 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:willPlayBackgroundMusic",iVar1,0);
  }
  return iVar1 == 0;
}

