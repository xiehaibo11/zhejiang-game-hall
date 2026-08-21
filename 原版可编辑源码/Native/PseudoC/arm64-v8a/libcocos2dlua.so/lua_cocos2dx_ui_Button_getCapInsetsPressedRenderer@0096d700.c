
/* lua_cocos2dx_ui_Button_getCapInsetsPressedRenderer(lua_State*) */

bool lua_cocos2dx_ui_Button_getCapInsetsPressedRenderer(lua_State *param_1)

{
  int iVar1;
  Button *this;
  Rect *pRVar2;
  
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pRVar2 = (Rect *)cocos2d::ui::Button::getCapInsetsPressedRenderer(this);
    rect_to_luaval(param_1,pRVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d83c8,
               iVar1,0);
  }
  return iVar1 == 0;
}

