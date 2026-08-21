
/* lua_cocos2dx_ui_Widget_isEnabled(lua_State*) */

bool lua_cocos2dx_ui_Widget_isEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Widget *this;
  
                    /* try { // try from 009674ac to 00a674df has its CatchHandler @ 009675ac */
  this = (Widget *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::Widget::isEnabled(this);
                    /* try { // try from 009674f8 to 00a6752b has its CatchHandler @ 0096757c */
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:isEnabled",iVar1,0);
                    /* try { // try from 009674e0 to 00a674f3 has its CatchHandler @ 00967578 */
  }
  return iVar1 == 0;
}

