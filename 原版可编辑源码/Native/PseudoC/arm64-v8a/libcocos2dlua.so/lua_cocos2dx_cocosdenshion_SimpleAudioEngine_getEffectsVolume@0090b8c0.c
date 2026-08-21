
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getEffectsVolume(lua_State*) */

bool lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getEffectsVolume(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
                    /* try { // try from 0090b8c8 to 00a0b913 has its CatchHandler @ 0090b8c8
                       catch() { ... } // from try @ 0090b8c8 with catch @ 0090b8c8
                       catch() { ... } // from try @ 0090b918 with catch @ 0090b8c8 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 0090b914 to 00a0b917 has its CatchHandler @ 0090b96c */
                    /* try { // try from 0090b918 to 00a0b97f has its CatchHandler @ 0090b8c8 */
    fVar3 = (float)(**(code **)(*plVar2 + 0x50))(plVar2);
    tolua_pushnumber((double)fVar3,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:getEffectsVolume",iVar1,0);
  }
  return iVar1 == 0;
}

