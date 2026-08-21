
/* lua_cocos2dx_extension_ParticleSystem3D_getParticleQuota(lua_State*) */

bool lua_cocos2dx_extension_ParticleSystem3D_getParticleQuota(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  ParticleSystem3D *this;
  
  this = (ParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ParticleSystem3D::getParticleQuota(this);
    tolua_pushnumber((double)uVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleSystem3D:getParticleQuota",iVar1,0);
  }
  return iVar1 == 0;
}

