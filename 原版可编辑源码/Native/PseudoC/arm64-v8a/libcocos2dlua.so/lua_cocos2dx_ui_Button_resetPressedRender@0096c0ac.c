
/* lua_cocos2dx_ui_Button_resetPressedRender(lua_State*) */

bool lua_cocos2dx_ui_Button_resetPressedRender(lua_State *param_1)

{
  int iVar1;
  Button *this;
  
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::ui::Button::resetPressedRender(this);
                    /* try { // try from 0096c110 to 00a6c143 has its CatchHandler @ 0096c210 */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d7e58,
               iVar1,0);
  }
  return iVar1 == 0;
}

