
/* lua_cocos2dx_extension_PUParticleSystem3D_constructor(lua_State*) */

bool lua_cocos2dx_extension_PUParticleSystem3D_constructor(lua_State *param_1)

{
  int iVar1;
  PUParticleSystem3D *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x4d0);
    cocos2d::PUParticleSystem3D::PUParticleSystem3D(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.PUParticleSystem3D");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:PUParticleSystem3D",iVar1,0);
  }
  return iVar1 == 0;
}

