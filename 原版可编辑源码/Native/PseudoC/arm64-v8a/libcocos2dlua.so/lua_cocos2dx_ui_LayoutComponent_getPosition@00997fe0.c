
/* lua_cocos2dx_ui_LayoutComponent_getPosition(lua_State*) */

bool lua_cocos2dx_ui_LayoutComponent_getPosition(lua_State *param_1)

{
  int iVar1;
  LayoutComponent *this;
  Vec2 *pVVar2;
  
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar2 = (Vec2 *)cocos2d::ui::LayoutComponent::getPosition(this);
                    /* try { // try from 00998044 to 00a9809b has its CatchHandler @ 00998044
                       catch() { ... } // from try @ 00998044 with catch @ 00998044
                       catch() { ... } // from try @ 009980ec with catch @ 00998044
                       catch() { ... } // from try @ 00998130 with catch @ 00998044 */
    vec2_to_luaval(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:getPosition",iVar1,0);
  }
  return iVar1 == 0;
}

