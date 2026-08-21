
/* lua_cocos2dx_extension_PUParticleSystem3D_getDefaultHeight(lua_State*) */

bool lua_cocos2dx_extension_PUParticleSystem3D_getDefaultHeight(lua_State *param_1)

{
  int iVar1;
  PUParticleSystem3D *this;
  float fVar2;
  
  this = (PUParticleSystem3D *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009b4650 to 00ab465b has its CatchHandler @ 009b46cc */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::PUParticleSystem3D::getDefaultHeight(this);
    tolua_pushnumber((double)fVar2,param_1);
                    /* try { // try from 009b4694 to 00ab46ff has its CatchHandler @ 009b4620 */
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:getDefaultHeight",iVar1,0);
                    /* try { // try from 009b467c to 00ab4693 has its CatchHandler @ 009b46e0 */
  }
  return iVar1 == 0;
}

