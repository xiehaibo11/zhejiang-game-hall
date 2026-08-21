
/* lua_cocos2dx_extension_ParticleSystem3D_removeAllAffector(lua_State*) */

bool lua_cocos2dx_extension_ParticleSystem3D_removeAllAffector(lua_State *param_1)

{
  int iVar1;
  ParticleSystem3D *this;
  
                    /* try { // try from 009b2078 to 00ab211f has its CatchHandler @ 009b2078
                       catch() { ... } // from try @ 009b2078 with catch @ 009b2078
                       catch() { ... } // from try @ 009b2130 with catch @ 009b2078
                       catch() { ... } // from try @ 009b2190 with catch @ 009b2078 */
  this = (ParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::ParticleSystem3D::removeAllAffector(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e8257,
               iVar1,0);
  }
  return iVar1 == 0;
}

