
/* lua_cocos2dx_ui_Layout_getBackGroundColorOpacity(lua_State*) */

bool lua_cocos2dx_ui_Layout_getBackGroundColorOpacity(lua_State *param_1)

{
  byte bVar1;
  int iVar2;
  Layout *this;
  
                    /* try { // try from 0096a5ec to 00a6a5ff has its CatchHandler @ 0096a684 */
  this = (Layout *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0096a604 to 00a6a637 has its CatchHandler @ 0096a688 */
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    bVar1 = cocos2d::ui::Layout::getBackGroundColorOpacity(this);
    tolua_pushnumber((double)bVar1,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Layout:getBackGroundColorOpacity",iVar2,0);
                    /* try { // try from 0096a638 to 00a6a6d3 has its CatchHandler @ 0096a488 */
  }
  return iVar2 == 0;
}

