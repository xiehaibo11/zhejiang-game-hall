
/* lua_cocos2dx_3d_Terrain_getMaxHeight(lua_State*) */

bool lua_cocos2dx_3d_Terrain_getMaxHeight(lua_State *param_1)

{
  int iVar1;
  Terrain *this;
  float fVar2;
  
  this = (Terrain *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00909318 to 00a093b3 has its CatchHandler @ 009091c8 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::Terrain::getMaxHeight(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:getMaxHeight",iVar1,0);
  }
                    /* catch() { ... } // from try @ 009092cc with catch @ 00909364 */
                    /* catch() { ... } // from try @ 009092e4 with catch @ 00909368 */
  return iVar1 == 0;
}

