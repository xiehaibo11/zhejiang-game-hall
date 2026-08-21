
/* lua_cocos2dx_ui_Slider_getMaxPercent(lua_State*) */

bool lua_cocos2dx_ui_Slider_getMaxPercent(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  Slider *this;
  
                    /* try { // try from 0097e268 to 00a7e27f has its CatchHandler @ 0097e34c */
  this = (Slider *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0097e284 to 00a7e293 has its CatchHandler @ 0097e348 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::ui::Slider::getMaxPercent(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
                    /* try { // try from 0097e294 to 00a7e29f has its CatchHandler @ 0097e330 */
                    /* try { // try from 0097e2a0 to 00a7e2db has its CatchHandler @ 0097e218 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:getMaxPercent",iVar1,0);
  }
  return iVar1 == 0;
}

