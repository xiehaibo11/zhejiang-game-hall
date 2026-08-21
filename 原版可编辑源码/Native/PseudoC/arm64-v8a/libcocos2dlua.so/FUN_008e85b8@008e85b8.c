
undefined8 FUN_008e85b8(lua_State *param_1)

{
  int iVar1;
  GRoot *this;
  ulong uVar2;
  GObject *pGVar3;
  
  this = (GRoot *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar2 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GRoot_hidePopup\'",0);
    }
    else {
      pGVar3 = (GObject *)tolua_tousertype(param_1,2,0);
      fairygui::GRoot::hidePopup(this,pGVar3);
    }
  }
  else if (iVar1 + -1 == 0) {
    fairygui::GRoot::hidePopup(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRoot:hidePopup",iVar1 + -1,0);
  }
  return 0;
}

