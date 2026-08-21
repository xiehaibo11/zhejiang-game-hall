
/* lua_cocos2dx_extension_PUParticleSystem3D_addObserver(lua_State*) */

undefined4 lua_cocos2dx_extension_PUParticleSystem3D_addObserver(lua_State *param_1)

{
  int iVar1;
  PUParticleSystem3D *this;
  ulong uVar2;
  PUObserver *pPVar3;
  
  this = (PUParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.PUObserver",0), (uVar2 & 1) != 0)) {
      pPVar3 = (PUObserver *)tolua_tousertype(param_1,2,0);
      cocos2d::PUParticleSystem3D::addObserver(this,pPVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_PUParticleSystem3D_addObserver\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:addObserver",iVar1 + -1,1);
  }
  return 0;
}

