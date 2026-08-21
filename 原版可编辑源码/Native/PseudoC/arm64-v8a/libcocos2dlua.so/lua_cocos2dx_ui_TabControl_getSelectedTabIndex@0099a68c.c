
/* lua_cocos2dx_ui_TabControl_getSelectedTabIndex(lua_State*) */

bool lua_cocos2dx_ui_TabControl_getSelectedTabIndex(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  TabControl *this;
  
                    /* try { // try from 0099a68c to 00a9a727 has its CatchHandler @ 0099a404 */
  this = (TabControl *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::ui::TabControl::getSelectedTabIndex(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TabControl:getSelectedTabIndex",iVar1,0);
                    /* catch() { ... } // from try @ 0099a640 with catch @ 0099a6d8 */
                    /* catch() { ... } // from try @ 0099a658 with catch @ 0099a6dc */
  }
  return iVar1 == 0;
}

