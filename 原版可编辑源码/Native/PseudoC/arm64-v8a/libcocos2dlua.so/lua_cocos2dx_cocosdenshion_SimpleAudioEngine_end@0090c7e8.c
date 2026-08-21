
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_end(lua_State*) */

bool lua_cocos2dx_cocosdenshion_SimpleAudioEngine_end(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
                    /* catch() { ... } // from try @ 0090c75c with catch @ 0090c800 */
  if (iVar1 == 0) {
    CocosDenshion::SimpleAudioEngine::end();
    lua_settop(param_1,1);
  }
  else {
                    /* catch() { ... } // from try @ 0090c6e0 with catch @ 0090c804
                       catch() { ... } // from try @ 0090c7a8 with catch @ 0090c804 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.SimpleAudioEngine:end",iVar1,0);
                    /* try { // try from 0090c820 to 00a0c86f has its CatchHandler @ 0090c820
                       catch() { ... } // from try @ 0090c820 with catch @ 0090c820
                       catch() { ... } // from try @ 0090c8b8 with catch @ 0090c820
                       catch() { ... } // from try @ 0090c900 with catch @ 0090c820 */
  }
  return iVar1 == 0;
}

