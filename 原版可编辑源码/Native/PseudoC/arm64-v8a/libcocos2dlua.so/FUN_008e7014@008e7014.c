
undefined8 FUN_008e7014(lua_State *param_1)

{
  int iVar1;
  GMovieClip *this;
  ulong uVar2;
  
                    /* try { // try from 008e7024 to 009e702f has its CatchHandler @ 008e7088 */
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
                    /* try { // try from 008e7030 to 009e70c3 has its CatchHandler @ 008e6f78 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.GMovieClip:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x1f0,(nothrow_t *)&std::nothrow);
  if (this != (GMovieClip *)0x0) {
    fairygui::GMovieClip::GMovieClip(this);
    uVar2 = fairygui::GObject::init((GObject *)this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 008e7024 with catch @ 008e7088 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"fairygui.GMovieClip");
      return 1;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

