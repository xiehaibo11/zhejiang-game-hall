
undefined8 FUN_008dd080(lua_State *param_1)

{
  int iVar1;
  GObject *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
                    /* try { // try from 008dd0b4 to 009dd22f has its CatchHandler @ 008dd2d8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.GObject:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x1d8,(nothrow_t *)&std::nothrow);
  if (this != (GObject *)0x0) {
    fairygui::GObject::GObject(this);
    uVar2 = fairygui::GObject::init(this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"fairygui.GObject");
      return 1;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

