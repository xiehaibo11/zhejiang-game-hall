
/* lua_cocos2dx_experimental_video_VideoPlayer_isLooping(lua_State*) */

bool lua_cocos2dx_experimental_video_VideoPlayer_isLooping(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* try { // try from 00964790 to 00a647b7 has its CatchHandler @ 00964708 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x6d8))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 009647b8 to 00a647cb has its CatchHandler @ 00964804 */
                    /* try { // try from 009647cc to 00a64817 has its CatchHandler @ 00964708 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d5dfd,
               iVar1,0);
  }
                    /* catch() { ... } // from try @ 00964758 with catch @ 00964804
                       catch() { ... } // from try @ 009647b8 with catch @ 00964804 */
  return iVar1 == 0;
}

