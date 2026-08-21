
/* lua_cocos2dx_ui_LayoutComponent_isPositionPercentXEnabled(lua_State*) */

bool lua_cocos2dx_ui_LayoutComponent_isPositionPercentXEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  LayoutComponent *this;
  
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::LayoutComponent::isPositionPercentXEnabled(this);
    tolua_pushboolean(param_1,uVar2 & 1);
                    /* catch() { ... } // from try @ 0099809c with catch @ 009981ac
                       catch() { ... } // from try @ 0099811c with catch @ 009981ac */
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:isPositionPercentXEnabled",iVar1,0);
  }
  return iVar1 == 0;
}

