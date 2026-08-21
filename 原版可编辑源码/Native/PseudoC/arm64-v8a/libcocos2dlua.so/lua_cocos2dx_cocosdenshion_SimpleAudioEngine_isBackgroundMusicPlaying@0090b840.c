
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_isBackgroundMusicPlaying(lua_State*) */

bool lua_cocos2dx_cocosdenshion_SimpleAudioEngine_isBackgroundMusicPlaying(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 0090b790 with catch @ 0090b858 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:isBackgroundMusicPlaying",iVar1,0);
                    /* catch() { ... } // from try @ 0090b718 with catch @ 0090b88c
                       catch() { ... } // from try @ 0090b77c with catch @ 0090b88c
                       catch() { ... } // from try @ 0090b7d4 with catch @ 0090b88c */
                    /* catch() { ... } // from try @ 0090b698 with catch @ 0090b890
                       catch() { ... } // from try @ 0090b748 with catch @ 0090b890 */
  }
  return iVar1 == 0;
}

