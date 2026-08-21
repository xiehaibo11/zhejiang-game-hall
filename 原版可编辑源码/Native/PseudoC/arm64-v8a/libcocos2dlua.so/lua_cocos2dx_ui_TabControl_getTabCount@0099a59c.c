
/* lua_cocos2dx_ui_TabControl_getTabCount(lua_State*) */

bool lua_cocos2dx_ui_TabControl_getTabCount(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  TabControl *this;
  
  this = (TabControl *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::TabControl::getTabCount(this);
    tolua_pushnumber((double)uVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TabControl:getTabCount",iVar1,0);
  }
                    /* try { // try from 0099a60c to 00a9a63f has its CatchHandler @ 0099a70c */
  return iVar1 == 0;
}

