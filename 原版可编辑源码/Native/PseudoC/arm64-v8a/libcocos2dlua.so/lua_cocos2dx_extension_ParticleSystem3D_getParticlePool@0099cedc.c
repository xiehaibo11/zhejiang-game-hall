
/* lua_cocos2dx_extension_ParticleSystem3D_getParticlePool(lua_State*) */

bool lua_cocos2dx_extension_ParticleSystem3D_getParticlePool(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushusertype(param_1,lVar2 + 0x330,"cc.ParticlePool",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e2c24,
               iVar1,0);
  }
  return iVar1 == 0;
}

