
/* lua_cocos2dx_ui_Widget_setLayoutParameter(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_setLayoutParameter(lua_State *param_1)

{
  int iVar1;
  Widget *this;
  ulong uVar2;
  LayoutParameter *pLVar3;
  
  this = (Widget *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 00967ec4 to 00a67f5f has its CatchHandler @ 00967d2c */
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccui.LayoutParameter",0), (uVar2 & 1) != 0)) {
      pLVar3 = (LayoutParameter *)tolua_tousertype(param_1,2,0);
                    /* catch() { ... } // from try @ 00967e78 with catch @ 00967f10 */
                    /* catch() { ... } // from try @ 00967e90 with catch @ 00967f14 */
      cocos2d::ui::Widget::setLayoutParameter(this,pLVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Widget_setLayoutParameter\'",0);
  }
  else {
                    /* catch() { ... } // from try @ 00967e44 with catch @ 00967f44 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:setLayoutParameter",iVar1 + -1,1);
  }
  return 0;
}

