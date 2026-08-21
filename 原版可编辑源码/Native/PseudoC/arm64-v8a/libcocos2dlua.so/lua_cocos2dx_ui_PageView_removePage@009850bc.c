
/* lua_cocos2dx_ui_PageView_removePage(lua_State*) */

undefined4 lua_cocos2dx_ui_PageView_removePage(lua_State *param_1)

{
  int iVar1;
  PageView *this;
  ulong uVar2;
  Widget *pWVar3;
  
  this = (PageView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccui.Widget",0), (uVar2 & 1) != 0)) {
      pWVar3 = (Widget *)tolua_tousertype(param_1,2,0);
      cocos2d::ui::PageView::removePage(this,pWVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_PageView_removePage\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.PageView:removePage",iVar1 + -1,1);
  }
  return 0;
}

