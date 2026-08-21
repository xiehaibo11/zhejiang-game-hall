
/* lua_cocos2dx_ui_Button_resetNormalRender(lua_State*) */

bool lua_cocos2dx_ui_Button_resetNormalRender(lua_State *param_1)

{
  int iVar1;
  Button *this;
  
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::ui::Button::resetNormalRender(this);
    lua_settop(param_1,1);
  }
  else {
                    /* catch() { ... } // from try @ 0096c508 with catch @ 0096c760 */
                    /* catch() { ... } // from try @ 0096c4ec with catch @ 0096c764 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d800f,
               iVar1,0);
  }
                    /* catch() { ... } // from try @ 0096c4c8 with catch @ 0096c794 */
  return iVar1 == 0;
}

