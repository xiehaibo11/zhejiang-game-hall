
/* lua_cocos2dx_ui_Slider_getZoomScale(lua_State*) */

bool lua_cocos2dx_ui_Slider_getZoomScale(lua_State *param_1)

{
  int iVar1;
  Slider *this;
  float fVar2;
  
  this = (Slider *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::Slider::getZoomScale(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 0097e974 to 00a7e9a7 has its CatchHandler @ 0097ea68 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:getZoomScale",iVar1,0);
  }
                    /* try { // try from 0097e9b0 to 00a7e9cb has its CatchHandler @ 0097ea64 */
  return iVar1 == 0;
}

