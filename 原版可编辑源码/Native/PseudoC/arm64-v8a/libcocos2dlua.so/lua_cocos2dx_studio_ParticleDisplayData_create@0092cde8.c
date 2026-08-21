
/* lua_cocos2dx_studio_ParticleDisplayData_create(lua_State*) */

undefined8 lua_cocos2dx_studio_ParticleDisplayData_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ParticleDisplayData *this;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    this = operator_new(0x40,(nothrow_t *)&std::nothrow);
    if (this == (ParticleDisplayData *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      cocostudio::ParticleDisplayData::ParticleDisplayData(this);
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.ParticleDisplayData");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.ParticleDisplayData:create",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

