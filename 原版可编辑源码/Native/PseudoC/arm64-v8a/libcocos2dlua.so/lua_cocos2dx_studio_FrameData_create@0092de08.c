
/* lua_cocos2dx_studio_FrameData_create(lua_State*) */

undefined8 lua_cocos2dx_studio_FrameData_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  FrameData *this;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
    if (this == (FrameData *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      cocostudio::FrameData::FrameData(this);
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.FrameData");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.FrameData:create",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

