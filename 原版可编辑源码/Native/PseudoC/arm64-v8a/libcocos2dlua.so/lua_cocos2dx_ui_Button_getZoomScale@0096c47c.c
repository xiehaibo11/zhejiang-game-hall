
/* lua_cocos2dx_ui_Button_getZoomScale(lua_State*) */

bool lua_cocos2dx_ui_Button_getZoomScale(lua_State *param_1)

{
  int iVar1;
  Button *this;
  float fVar2;
  
                    /* try { // try from 0096c48c to 00a6c4a7 has its CatchHandler @ 0096c7c8 */
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::Button::getZoomScale(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:getZoomScale",iVar1,0);
                    /* try { // try from 0096c4c8 to 00a6c4df has its CatchHandler @ 0096c794 */
  }
                    /* try { // try from 0096c4ec to 00a6c503 has its CatchHandler @ 0096c764 */
  return iVar1 == 0;
}

