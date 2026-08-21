
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getBackgroundMusicVolume(lua_State*) */

bool lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getBackgroundMusicVolume(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0090b524 to 00a0b52b has its CatchHandler @ 0090b61c */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar3 = (float)(**(code **)(*plVar2 + 0x40))(plVar2);
    tolua_pushnumber((double)fVar3,param_1);
  }
  else {
                    /* try { // try from 0090b538 to 00a0b547 has its CatchHandler @ 0090b5e8 */
                    /* try { // try from 0090b548 to 00a0b577 has its CatchHandler @ 0090b3e8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:getBackgroundMusicVolume",iVar1,0);
  }
                    /* try { // try from 0090b578 to 00a0b57f has its CatchHandler @ 0090b61c */
                    /* try { // try from 0090b580 to 00a0b657 has its CatchHandler @ 0090b3e8 */
  return iVar1 == 0;
}

