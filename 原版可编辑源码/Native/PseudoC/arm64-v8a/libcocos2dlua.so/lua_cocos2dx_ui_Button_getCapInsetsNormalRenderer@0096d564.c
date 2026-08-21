
/* lua_cocos2dx_ui_Button_getCapInsetsNormalRenderer(lua_State*) */

bool lua_cocos2dx_ui_Button_getCapInsetsNormalRenderer(lua_State *param_1)

{
  int iVar1;
  Button *this;
  Rect *pRVar2;
  
                    /* try { // try from 0096d57c to 00a6d593 has its CatchHandler @ 0096d89c */
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 0096d5bc to 00a6d5ef has its CatchHandler @ 0096d864 */
    pRVar2 = (Rect *)cocos2d::ui::Button::getCapInsetsNormalRenderer(this);
    rect_to_luaval(param_1,pRVar2);
  }
  else {
                    /* try { // try from 0096d5a0 to 00a6d5b7 has its CatchHandler @ 0096d868 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:getCapInsetsNormalRenderer",iVar1,0);
  }
  return iVar1 == 0;
}

