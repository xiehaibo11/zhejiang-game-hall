
/* lua_cocos2dx_ui_LayoutComponent_create(lua_State*) */

undefined8 lua_cocos2dx_ui_LayoutComponent_create(lua_State *param_1)

{
  int iVar1;
  LayoutComponent *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.LayoutComponent:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (LayoutComponent *)0x0) {
    cocos2d::ui::LayoutComponent::LayoutComponent(this);
    uVar2 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccui.LayoutComponent");
      return 1;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
                    /* try { // try from 00998880 to 00a988cf has its CatchHandler @ 00998880
                       catch() { ... } // from try @ 00998880 with catch @ 00998880
                       catch() { ... } // from try @ 00998908 with catch @ 00998880
                       catch() { ... } // from try @ 00998958 with catch @ 00998880 */
  return 1;
}

