
undefined8 FUN_008ddc2c(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  GComponent *this;
  ulong uVar3;
  GObject *pGVar4;
  
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar3 & 1) != 0)) {
      pGVar4 = (GObject *)tolua_tousertype(param_1,2,0);
      uVar2 = fairygui::GComponent::isAncestorOf(this,pGVar4);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_isAncestorOf\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:isAncestorOf",iVar1 + -1,1);
  }
  return 0;
}

