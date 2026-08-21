
/* lua_cocos2dx_3d_Terrain_initTextures(lua_State*) */

bool lua_cocos2dx_3d_Terrain_initTextures(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Terrain *this;
  
  this = (Terrain *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::Terrain::initTextures(this);
    tolua_pushboolean(param_1,uVar2 & 1);
                    /* try { // try from 00908960 to 00a08993 has its CatchHandler @ 00908a60 */
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:initTextures",iVar1,0);
  }
  return iVar1 == 0;
}

