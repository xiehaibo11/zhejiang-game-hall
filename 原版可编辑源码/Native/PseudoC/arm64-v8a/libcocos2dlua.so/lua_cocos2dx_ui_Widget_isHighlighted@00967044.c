
/* lua_cocos2dx_ui_Widget_isHighlighted(lua_State*) */

bool lua_cocos2dx_ui_Widget_isHighlighted(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Widget *this;
  
                    /* try { // try from 0096704c to 00a6705f has its CatchHandler @ 009670e4 */
  this = (Widget *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00967064 to 00a67097 has its CatchHandler @ 009670e8 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00967098 to 00a67133 has its CatchHandler @ 00966f48 */
    uVar2 = cocos2d::ui::Widget::isHighlighted(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:isHighlighted",iVar1,0);
  }
  return iVar1 == 0;
}

