
/* lua_cocos2dx_extension_PUParticleSystem3D_getDefaultWidth(lua_State*) */

bool lua_cocos2dx_extension_PUParticleSystem3D_getDefaultWidth(lua_State *param_1)

{
  int iVar1;
  PUParticleSystem3D *this;
  float fVar2;
  
                    /* try { // try from 009b3c30 to 00ab3c9b has its CatchHandler @ 009b3bbc */
  this = (PUParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::PUParticleSystem3D::getDefaultWidth(this);
                    /* catch() { ... } // from try @ 009b3c18 with catch @ 009b3c7c */
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* catch() { ... } // from try @ 009b3bec with catch @ 009b3c68 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:getDefaultWidth",iVar1,0);
  }
  return iVar1 == 0;
}

