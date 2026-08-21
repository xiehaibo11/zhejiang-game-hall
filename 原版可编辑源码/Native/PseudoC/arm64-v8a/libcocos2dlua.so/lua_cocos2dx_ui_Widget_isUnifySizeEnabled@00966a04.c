
/* lua_cocos2dx_ui_Widget_isUnifySizeEnabled(lua_State*) */

bool lua_cocos2dx_ui_Widget_isUnifySizeEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Widget *this;
  
                    /* try { // try from 00966a14 to 00a66a17 has its CatchHandler @ 00966a4c */
                    /* try { // try from 00966a18 to 00a66a5f has its CatchHandler @ 009669c8 */
  this = (Widget *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::Widget::isUnifySizeEnabled(this);
                    /* try { // try from 00966a60 to 00a66bbf has its CatchHandler @ 00966a60
                       catch() { ... } // from try @ 00966a60 with catch @ 00966a60
                       catch() { ... } // from try @ 00966c40 with catch @ 00966a60 */
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* catch() { ... } // from try @ 00966a14 with catch @ 00966a4c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:isUnifySizeEnabled",iVar1,0);
  }
  return iVar1 == 0;
}

