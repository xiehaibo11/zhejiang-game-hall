
/* lua_cocos2dx_extension_ParticleSystem3D_setEmitter(lua_State*) */

undefined4 lua_cocos2dx_extension_ParticleSystem3D_setEmitter(lua_State *param_1)

{
  int iVar1;
  ParticleSystem3D *this;
  ulong uVar2;
  Particle3DEmitter *pPVar3;
  
  this = (ParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Particle3DEmitter",0), (uVar2 & 1) != 0)) {
      pPVar3 = (Particle3DEmitter *)tolua_tousertype(param_1,2,0);
      cocos2d::ParticleSystem3D::setEmitter(this,pPVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ParticleSystem3D_setEmitter\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleSystem3D:setEmitter",iVar1 + -1,1);
  }
  return 0;
}

