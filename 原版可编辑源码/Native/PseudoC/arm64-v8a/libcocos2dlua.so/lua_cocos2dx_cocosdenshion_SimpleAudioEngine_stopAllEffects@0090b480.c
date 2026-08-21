
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopAllEffects(lua_State*) */

bool lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopAllEffects(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x90))(plVar2);
                    /* try { // try from 0090b4f0 to 00a0b503 has its CatchHandler @ 0090b620 */
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 0090b4c0 to 00a0b4c3 has its CatchHandler @ 0090b61c */
                    /* try { // try from 0090b4c4 to 00a0b4ef has its CatchHandler @ 0090b3e8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:stopAllEffects",iVar1,0);
  }
  return iVar1 == 0;
}

