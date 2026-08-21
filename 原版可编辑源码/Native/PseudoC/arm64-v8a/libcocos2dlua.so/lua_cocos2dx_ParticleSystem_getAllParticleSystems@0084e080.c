
/* lua_cocos2dx_ParticleSystem_getAllParticleSystems(lua_State*) */

bool lua_cocos2dx_ParticleSystem_getAllParticleSystems(lua_State *param_1)

{
  int iVar1;
  Vector *pVVar2;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar2 = (Vector *)cocos2d::ParticleSystem::getAllParticleSystems();
    ccvector_to_luaval<cocos2d::ParticleSystem*>(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.ParticleSystem:getAllParticleSystems",iVar1,0);
  }
  return iVar1 == 0;
}

