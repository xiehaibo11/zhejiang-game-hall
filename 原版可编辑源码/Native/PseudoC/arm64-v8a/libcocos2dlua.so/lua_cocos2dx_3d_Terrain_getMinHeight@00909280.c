
/* lua_cocos2dx_3d_Terrain_getMinHeight(lua_State*) */

bool lua_cocos2dx_3d_Terrain_getMinHeight(lua_State *param_1)

{
  int iVar1;
  Terrain *this;
  float fVar2;
  
                    /* try { // try from 00909298 to 00a092cb has its CatchHandler @ 00909398 */
  this = (Terrain *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::Terrain::getMinHeight(this);
                    /* try { // try from 009092e4 to 00a09317 has its CatchHandler @ 00909368 */
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:getMinHeight",iVar1,0);
                    /* try { // try from 009092cc to 00a092df has its CatchHandler @ 00909364 */
  }
  return iVar1 == 0;
}

