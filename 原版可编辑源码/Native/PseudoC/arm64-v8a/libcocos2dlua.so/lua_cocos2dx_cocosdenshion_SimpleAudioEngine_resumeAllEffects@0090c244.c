
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeAllEffects(lua_State*) */

bool lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeAllEffects(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* try { // try from 0090c258 to 00a0c26f has its CatchHandler @ 0090c494 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x80))(plVar2);
                    /* try { // try from 0090c2ac to 00a0c2c7 has its CatchHandler @ 0090c4a0 */
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 0090c278 to 00a0c29b has its CatchHandler @ 0090c490 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:resumeAllEffects",iVar1,0);
  }
  return iVar1 == 0;
}

