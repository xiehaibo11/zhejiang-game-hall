
/* lua_cocos2dx_ParticleSnow_constructor(lua_State*) */

bool lua_cocos2dx_ParticleSnow_constructor(lua_State *param_1)

{
  int iVar1;
  ParticleSystemQuad *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x600);
    cocos2d::ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170cc88;
    *(undefined ***)(this + 0x300) = &PTR__ParticleSnow_0170d3a0;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleSnow_0170d360;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.ParticleSnow");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleSnow:ParticleSnow",iVar1,0);
  }
  return iVar1 == 0;
}

