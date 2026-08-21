
undefined8 FUN_008e64fc(lua_State *param_1)

{
  int iVar1;
  GGroup *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.GGroup:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x208,(nothrow_t *)&std::nothrow);
  if (this != (GGroup *)0x0) {
    fairygui::GGroup::GGroup(this);
    uVar2 = fairygui::GObject::init((GObject *)this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"fairygui.GGroup");
      return 1;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

