
/* lua_cocos2dx_ui_LayoutComponent_getUsingPercentContentSize(lua_State*) */

bool lua_cocos2dx_ui_LayoutComponent_getUsingPercentContentSize(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  LayoutComponent *this;
  
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00997744 to 00a97753 has its CatchHandler @ 009977b8 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::LayoutComponent::getUsingPercentContentSize(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 00997754 to 00a977d3 has its CatchHandler @ 0099770c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e1621,
               iVar1,0);
  }
  return iVar1 == 0;
}

