
/* lua_cocos2dx_3d_Terrain_reload(lua_State*) */

bool lua_cocos2dx_3d_Terrain_reload(lua_State *param_1)

{
  int iVar1;
  Terrain *this;
  
                    /* catch() { ... } // from try @ 00908e60 with catch @ 00908ef8 */
                    /* catch() { ... } // from try @ 00908e78 with catch @ 00908efc */
  this = (Terrain *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::Terrain::reload(this);
    lua_settop(param_1,1);
  }
  else {
                    /* catch() { ... } // from try @ 00908e2c with catch @ 00908f2c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:reload",iVar1,0);
  }
  return iVar1 == 0;
}

