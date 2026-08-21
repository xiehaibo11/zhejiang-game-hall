
/* lua_cocos2dx_ui_Button_resetDisabledRender(lua_State*) */

bool lua_cocos2dx_ui_Button_resetDisabledRender(lua_State *param_1)

{
  int iVar1;
  Button *this;
  
                    /* try { // try from 0096c22c to 00a6c2bf has its CatchHandler @ 0096c22c
                       catch() { ... } // from try @ 0096c22c with catch @ 0096c22c
                       catch() { ... } // from try @ 0096c2c8 with catch @ 0096c22c */
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::ui::Button::resetDisabledRender(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d7edc,
               iVar1,0);
  }
  return iVar1 == 0;
}

