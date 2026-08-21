
/* lua_cocos2dx_experimental_video_VideoPlayer_isUserInputEnabled(lua_State*) */

bool lua_cocos2dx_experimental_video_VideoPlayer_isUserInputEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 00963de8 with catch @ 00963e80 */
                    /* catch() { ... } // from try @ 00963e00 with catch @ 00963e84 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x6e0))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* catch() { ... } // from try @ 00963db4 with catch @ 00963eb4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccexp.VideoPlayer:isUserInputEnabled",iVar1,0);
  }
  return iVar1 == 0;
}

