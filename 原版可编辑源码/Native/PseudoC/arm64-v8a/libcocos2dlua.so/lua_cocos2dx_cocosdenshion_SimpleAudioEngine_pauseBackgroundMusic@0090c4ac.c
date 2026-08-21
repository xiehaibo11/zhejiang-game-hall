
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseBackgroundMusic(lua_State*) */

bool lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseBackgroundMusic(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* try { // try from 0090c4c0 to 00a0c4ff has its CatchHandler @ 0090c4c0
                       catch() { ... } // from try @ 0090c4c0 with catch @ 0090c4c0
                       catch() { ... } // from try @ 0090c510 with catch @ 0090c4c0 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 0090c500 to 00a0c50f has its CatchHandler @ 0090c588 */
    (**(code **)(*plVar2 + 0x18))(plVar2);
                    /* try { // try from 0090c510 to 00a0c5a3 has its CatchHandler @ 0090c4c0 */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:pauseBackgroundMusic",iVar1,0);
  }
  return iVar1 == 0;
}

