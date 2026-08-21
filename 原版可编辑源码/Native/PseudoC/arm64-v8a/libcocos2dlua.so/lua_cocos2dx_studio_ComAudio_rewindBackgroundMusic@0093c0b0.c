
/* lua_cocos2dx_studio_ComAudio_rewindBackgroundMusic(lua_State*) */

bool lua_cocos2dx_studio_ComAudio_rewindBackgroundMusic(lua_State *param_1)

{
  int iVar1;
  
                    /* try { // try from 0093c0b4 to 00a3c0df has its CatchHandler @ 0093bd84 */
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocostudio::ComAudio::rewindBackgroundMusic();
                    /* try { // try from 0093c110 to 00a3c123 has its CatchHandler @ 0093c1e8 */
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 0093c0e0 to 00a3c0f3 has its CatchHandler @ 0093c1e0 */
                    /* try { // try from 0093c0f8 to 00a3c10b has its CatchHandler @ 0093c1e4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ComAudio:rewindBackgroundMusic",iVar1,0);
  }
                    /* try { // try from 0093c128 to 00a3c13b has its CatchHandler @ 0093c1ec */
  return iVar1 == 0;
}

