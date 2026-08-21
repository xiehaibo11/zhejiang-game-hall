
/* lua_cocos2dx_ui_Widget_getCustomSize(lua_State*) */

bool lua_cocos2dx_ui_Widget_getCustomSize(lua_State *param_1)

{
  int iVar1;
  Widget *this;
  Size *pSVar2;
  
  this = (Widget *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 0096657c to 00a665a3 has its CatchHandler @ 00966420 */
  if (iVar1 == 0) {
                    /* try { // try from 009665a4 to 00a665b7 has its CatchHandler @ 00966690 */
    pSVar2 = (Size *)cocos2d::ui::Widget::getCustomSize(this);
    size_to_luaval(param_1,pSVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:getCustomSize",iVar1,0);
  }
  return iVar1 == 0;
}

