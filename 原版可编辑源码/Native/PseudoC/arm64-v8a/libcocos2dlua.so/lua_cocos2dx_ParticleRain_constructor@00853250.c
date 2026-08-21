
/* lua_cocos2dx_ParticleRain_constructor(lua_State*) */

bool lua_cocos2dx_ParticleRain_constructor(lua_State *param_1)

{
  int iVar1;
  ParticleSystemQuad *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x600);
    cocos2d::ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170d3e8;
    *(undefined ***)(this + 0x300) = &PTR__ParticleRain_0170db00;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleRain_0170dac0;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.ParticleRain");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleRain:ParticleRain",iVar1,0);
  }
  return iVar1 == 0;
}

