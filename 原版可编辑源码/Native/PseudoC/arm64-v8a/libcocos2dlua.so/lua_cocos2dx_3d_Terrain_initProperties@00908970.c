
/* lua_cocos2dx_3d_Terrain_initProperties(lua_State*) */

bool lua_cocos2dx_3d_Terrain_initProperties(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Terrain *this;
  
  this = (Terrain *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00908994 to 00a089a7 has its CatchHandler @ 00908a2c */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::Terrain::initProperties(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 009089ac to 00a089df has its CatchHandler @ 00908a30 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:initProperties",iVar1,0);
  }
                    /* try { // try from 009089e0 to 00a08a7b has its CatchHandler @ 00908890 */
  return iVar1 == 0;
}

