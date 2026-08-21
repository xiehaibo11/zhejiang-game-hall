
/* lua_cocos2dx_ui_Widget_isFocused(lua_State*) */

bool lua_cocos2dx_ui_Widget_isFocused(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Widget *this;
  
  this = (Widget *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0096752c to 00a675c7 has its CatchHandler @ 009673dc */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::Widget::isFocused(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:isFocused",iVar1,0);
  }
                    /* catch() { ... } // from try @ 009674e0 with catch @ 00967578 */
                    /* catch() { ... } // from try @ 009674f8 with catch @ 0096757c */
  return iVar1 == 0;
}

