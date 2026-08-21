
/* lua_cocos2dx_experimental_video_VideoPlayer_isKeepAspectRatioEnabled(lua_State*) */

bool lua_cocos2dx_experimental_video_VideoPlayer_isKeepAspectRatioEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* try { // try from 009645ac to 00a645bf has its CatchHandler @ 009645fc */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009645c0 to 00a6460f has its CatchHandler @ 009644fc */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 00964568 with catch @ 009645f8 */
    uVar2 = (**(code **)(*plVar3 + 0x6f0))(plVar3);
                    /* catch() { ... } // from try @ 0096454c with catch @ 009645fc
                       catch() { ... } // from try @ 009645ac with catch @ 009645fc */
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccexp.VideoPlayer:isKeepAspectRatioEnabled",iVar1,0);
  }
  return iVar1 == 0;
}

