
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseAllEffects(lua_State*) */

bool lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseAllEffects(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 0090c500 with catch @ 0090c588 */
    (**(code **)(*plVar2 + 0x70))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:pauseAllEffects",iVar1,0);
  }
                    /* try { // try from 0090c5a4 to 00a0c5eb has its CatchHandler @ 0090c5a4
                       catch() { ... } // from try @ 0090c5a4 with catch @ 0090c5a4
                       catch() { ... } // from try @ 0090c618 with catch @ 0090c5a4 */
  return iVar1 == 0;
}

