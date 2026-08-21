
/* lua_cocos2dx_studio_BoneData_create(lua_State*) */

undefined8 lua_cocos2dx_studio_BoneData_create(lua_State *param_1)

{
  int iVar1;
  BoneData *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.BoneData:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0xb8,(nothrow_t *)&std::nothrow);
  if (this != (BoneData *)0x0) {
    cocostudio::BoneData::BoneData(this);
    uVar2 = (**(code **)(*(long *)this + 0x30))(this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.BoneData");
      return 1;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

