
/* lua_cocos2dx_studio_SpriteDisplayData_create(lua_State*) */

undefined8 lua_cocos2dx_studio_SpriteDisplayData_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  SpriteDisplayData *this;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    this = operator_new(0x98,(nothrow_t *)&std::nothrow);
    if (this == (SpriteDisplayData *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      cocostudio::SpriteDisplayData::SpriteDisplayData(this);
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.SpriteDisplayData");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.SpriteDisplayData:create",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

