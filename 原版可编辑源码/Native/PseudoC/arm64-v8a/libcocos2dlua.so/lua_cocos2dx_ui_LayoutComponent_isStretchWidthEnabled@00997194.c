
/* lua_cocos2dx_ui_LayoutComponent_isStretchWidthEnabled(lua_State*) */

bool lua_cocos2dx_ui_LayoutComponent_isStretchWidthEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  LayoutComponent *this;
  
                    /* try { // try from 00997198 to 00a971cb has its CatchHandler @ 00997298 */
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::LayoutComponent::isStretchWidthEnabled(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 009971cc to 00a971df has its CatchHandler @ 00997264 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:isStretchWidthEnabled",iVar1,0);
                    /* try { // try from 009971e4 to 00a97217 has its CatchHandler @ 00997268 */
  }
  return iVar1 == 0;
}

