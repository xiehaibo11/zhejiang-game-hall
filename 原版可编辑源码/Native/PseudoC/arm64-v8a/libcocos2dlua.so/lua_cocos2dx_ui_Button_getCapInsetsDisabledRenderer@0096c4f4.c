
/* lua_cocos2dx_ui_Button_getCapInsetsDisabledRenderer(lua_State*) */

bool lua_cocos2dx_ui_Button_getCapInsetsDisabledRenderer(lua_State *param_1)

{
  int iVar1;
  Button *this;
  Rect *pRVar2;
  
                    /* try { // try from 0096c508 to 00a6c52b has its CatchHandler @ 0096c760 */
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pRVar2 = (Rect *)cocos2d::ui::Button::getCapInsetsDisabledRenderer(this);
    rect_to_luaval(param_1,pRVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d7f6d,
               iVar1,0);
                    /* try { // try from 0096c544 to 00a6c55f has its CatchHandler @ 0096c7ec */
  }
  return iVar1 == 0;
}

