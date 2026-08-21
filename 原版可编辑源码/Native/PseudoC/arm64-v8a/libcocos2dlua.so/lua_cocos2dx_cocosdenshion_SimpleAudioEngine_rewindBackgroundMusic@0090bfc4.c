
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_rewindBackgroundMusic(lua_State*) */

bool lua_cocos2dx_cocosdenshion_SimpleAudioEngine_rewindBackgroundMusic(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 0090be44 with catch @ 0090c020
                       catch() { ... } // from try @ 0090bf68 with catch @ 0090c020 */
    (**(code **)(*plVar2 + 0x28))(plVar2);
    lua_settop(param_1,1);
  }
  else {
                    /* catch() { ... } // from try @ 0090bf1c with catch @ 0090bff4 */
                    /* catch() { ... } // from try @ 0090bea8 with catch @ 0090bff8 */
                    /* catch() { ... } // from try @ 0090be78 with catch @ 0090bffc */
                    /* catch() { ... } // from try @ 0090bee4 with catch @ 0090c000
                       catch() { ... } // from try @ 0090bf8c with catch @ 0090c000 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:rewindBackgroundMusic",iVar1,0);
  }
                    /* try { // try from 0090c03c to 00a0c0af has its CatchHandler @ 0090c03c
                       catch() { ... } // from try @ 0090c03c with catch @ 0090c03c
                       catch() { ... } // from try @ 0090c0f8 with catch @ 0090c03c
                       catch() { ... } // from try @ 0090c140 with catch @ 0090c03c */
  return iVar1 == 0;
}

