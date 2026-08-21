
/* lua_cocos2dx_extension_PUParticleSystem3D_removeAllBehaviourTemplate(lua_State*) */

bool lua_cocos2dx_extension_PUParticleSystem3D_removeAllBehaviourTemplate(lua_State *param_1)

{
  int iVar1;
  PUParticleSystem3D *this;
  
  this = (PUParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::PUParticleSystem3D::removeAllBehaviourTemplate(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:removeAllBehaviourTemplate",iVar1,0);
  }
  return iVar1 == 0;
}

