
/* lua_cocos2dx_experimental_video_VideoPlayer_play(lua_State*) */

bool lua_cocos2dx_experimental_video_VideoPlayer_play(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* try { // try from 00963e00 to 00a63e33 has its CatchHandler @ 00963e84 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x6b8))(plVar2);
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 00963e34 to 00a63ecf has its CatchHandler @ 00963cfc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccexp.VideoPlayer:play",iVar1,0);
  }
  return iVar1 == 0;
}

