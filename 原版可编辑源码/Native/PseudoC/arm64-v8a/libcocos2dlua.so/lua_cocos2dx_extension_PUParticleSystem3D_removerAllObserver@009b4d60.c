
/* lua_cocos2dx_extension_PUParticleSystem3D_removerAllObserver(lua_State*) */

bool lua_cocos2dx_extension_PUParticleSystem3D_removerAllObserver(lua_State *param_1)

{
  int iVar1;
  PUParticleSystem3D *this;
  
  this = (PUParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::PUParticleSystem3D::removerAllObserver(this);
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 009b4da4 to 00ab4dab has its CatchHandler @ 009b4ea0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:removerAllObserver",iVar1,0);
                    /* try { // try from 009b4dac to 00ab4dcf has its CatchHandler @ 009b4d3c */
  }
                    /* try { // try from 009b4dd0 to 00ab4ddb has its CatchHandler @ 009b4ea0 */
  return iVar1 == 0;
}

