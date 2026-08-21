
undefined8 FUN_008e5844(lua_State *param_1)

{
  int iVar1;
  GButton *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.GButton:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this != (GButton *)0x0) {
                    /* try { // try from 008e5898 to 009e58cb has its CatchHandler @ 008e5998 */
    fairygui::GButton::GButton(this);
    uVar2 = fairygui::GObject::init((GObject *)this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 008e58cc to 009e58df has its CatchHandler @ 008e5964 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"fairygui.GButton");
      return 1;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
                    /* try { // try from 008e58e4 to 009e5917 has its CatchHandler @ 008e5968 */
  lua_pushnil(param_1);
  return 1;
}

