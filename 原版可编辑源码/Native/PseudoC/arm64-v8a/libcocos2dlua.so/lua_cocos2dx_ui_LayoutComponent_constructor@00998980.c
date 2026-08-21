
/* lua_cocos2dx_ui_LayoutComponent_constructor(lua_State*) */

bool lua_cocos2dx_ui_LayoutComponent_constructor(lua_State *param_1)

{
  int iVar1;
  LayoutComponent *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
                    /* catch() { ... } // from try @ 009988fc with catch @ 00998998 */
  if (iVar1 == 0) {
    this = operator_new(0x90);
    cocos2d::ui::LayoutComponent::LayoutComponent(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccui.LayoutComponent");
  }
  else {
                    /* catch() { ... } // from try @ 009988ec with catch @ 009989b0 */
                    /* catch() { ... } // from try @ 009988d0 with catch @ 009989b4
                       catch() { ... } // from try @ 00998944 with catch @ 009989b4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:LayoutComponent",iVar1,0);
  }
  return iVar1 == 0;
}

