
/* lua_cocos2dx_experimental_video_VideoPlayer_isFullScreenEnabled(lua_State*) */

bool lua_cocos2dx_experimental_video_VideoPlayer_isFullScreenEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* try { // try from 00964708 to 00a64757 has its CatchHandler @ 00964708
                       catch() { ... } // from try @ 00964708 with catch @ 00964708
                       catch() { ... } // from try @ 00964790 with catch @ 00964708
                       catch() { ... } // from try @ 009647cc with catch @ 00964708 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x700))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccexp.VideoPlayer:isFullScreenEnabled",iVar1,0);
                    /* try { // try from 00964758 to 00a6478f has its CatchHandler @ 00964804 */
  }
  return iVar1 == 0;
}

