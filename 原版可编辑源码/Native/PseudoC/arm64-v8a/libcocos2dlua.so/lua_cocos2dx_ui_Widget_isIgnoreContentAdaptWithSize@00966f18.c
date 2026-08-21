
/* lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize(lua_State*) */

bool lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Widget *this;
  
  this = (Widget *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 00966efc with catch @ 00966f34 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::Widget::isIgnoreContentAdaptWithSize(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 00966f48 to 00a67017 has its CatchHandler @ 00966f48
                       catch() { ... } // from try @ 00966f48 with catch @ 00966f48
                       catch() { ... } // from try @ 00967098 with catch @ 00966f48 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:isIgnoreContentAdaptWithSize",iVar1,0);
  }
  return iVar1 == 0;
}

