
/* lua_cocos2dx_ParticleRain_create(lua_State*) */

undefined8 lua_cocos2dx_ParticleRain_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::ParticleRain::create();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "cc.ParticleRain");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.ParticleRain:create",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

