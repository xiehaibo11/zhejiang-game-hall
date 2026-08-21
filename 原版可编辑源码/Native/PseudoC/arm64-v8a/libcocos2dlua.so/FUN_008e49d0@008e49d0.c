
undefined8 FUN_008e49d0(lua_State *param_1)

{
  int iVar1;
  GComboBox *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.GComboBox:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x310,(nothrow_t *)&std::nothrow);
  if (this != (GComboBox *)0x0) {
    fairygui::GComboBox::GComboBox(this);
    uVar2 = fairygui::GObject::init((GObject *)this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"fairygui.GComboBox");
      return 1;
    }
                    /* try { // try from 008e4a64 to 009e4aaf has its CatchHandler @ 008e4a64
                       catch() { ... } // from try @ 008e4a64 with catch @ 008e4a64
                       catch() { ... } // from try @ 008e4ab4 with catch @ 008e4a64 */
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

