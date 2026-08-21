
/* lua_dragonbones_Animation_reset(lua_State*) */

bool lua_dragonbones_Animation_reset(lua_State *param_1)

{
  int iVar1;
  Animation *this;
  
  this = (Animation *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00959bbc to 00a59bbf has its CatchHandler @ 00959bf4 */
                    /* try { // try from 00959bc0 to 00a59c07 has its CatchHandler @ 00959b70 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 00959bbc with catch @ 00959bf4 */
    dragonBones::Animation::reset(this);
                    /* try { // try from 00959c08 to 00a59ee7 has its CatchHandler @ 00959c08
                       catch() { ... } // from try @ 00959c08 with catch @ 00959c08
                       catch() { ... } // from try @ 00959f68 with catch @ 00959c08 */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Animation:reset",iVar1,0);
  }
  return iVar1 == 0;
}

