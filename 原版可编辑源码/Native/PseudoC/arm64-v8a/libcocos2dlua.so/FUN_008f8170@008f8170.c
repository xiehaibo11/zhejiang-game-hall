
undefined8 FUN_008f8170(lua_State *param_1)

{
  int iVar1;
  GLabel *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
                    /* catch() { ... } // from try @ 008f8100 with catch @ 008f8198 */
                    /* catch() { ... } // from try @ 008f8118 with catch @ 008f819c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.GLabel:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x290,(nothrow_t *)&std::nothrow);
  if (this != (GLabel *)0x0) {
    fairygui::GLabel::GLabel(this);
                    /* catch() { ... } // from try @ 008f80cc with catch @ 008f81cc */
    uVar2 = fairygui::GObject::init((GObject *)this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"fairygui.GLabel");
      return 1;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

