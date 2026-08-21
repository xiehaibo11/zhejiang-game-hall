
/* lua_cocos2dx_ui_Layout_getBackGroundColor(lua_State*) */

bool lua_cocos2dx_ui_Layout_getBackGroundColor(lua_State *param_1)

{
  int iVar1;
  Layout *this;
  Color3B *pCVar2;
  
  this = (Layout *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0096abe0 to 00a6ac13 has its CatchHandler @ 0096ace0 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 0096ac14 to 00a6ac27 has its CatchHandler @ 0096acac */
    pCVar2 = (Color3B *)cocos2d::ui::Layout::getBackGroundColor(this);
    color3b_to_luaval(param_1,pCVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Layout:getBackGroundColor",iVar1,0);
  }
                    /* try { // try from 0096ac2c to 00a6ac5f has its CatchHandler @ 0096acb0 */
  return iVar1 == 0;
}

