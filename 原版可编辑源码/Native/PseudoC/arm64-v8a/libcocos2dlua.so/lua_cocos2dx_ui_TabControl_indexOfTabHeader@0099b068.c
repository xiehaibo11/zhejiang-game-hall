
/* lua_cocos2dx_ui_TabControl_indexOfTabHeader(lua_State*) */

undefined8 lua_cocos2dx_ui_TabControl_indexOfTabHeader(lua_State *param_1)

{
  int iVar1;
  TabControl *this;
  ulong uVar2;
  TabHeader *pTVar3;
  
  this = (TabControl *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccui.TabHeader",0), (uVar2 & 1) != 0)) {
      pTVar3 = (TabHeader *)tolua_tousertype(param_1,2,0);
      iVar1 = cocos2d::ui::TabControl::indexOfTabHeader(this,pTVar3);
      tolua_pushnumber((double)iVar1,param_1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_TabControl_indexOfTabHeader\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e2587,
               iVar1 + -1,1);
  }
  return 0;
}

