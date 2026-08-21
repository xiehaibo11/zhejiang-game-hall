
undefined8 FUN_008df274(lua_State *param_1)

{
  int iVar1;
  GComponent *this;
  ulong uVar2;
  GObject *pGVar3;
  
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar2 & 1) != 0)) {
      pGVar3 = (GObject *)tolua_tousertype(param_1,2,0);
      iVar1 = fairygui::GComponent::getChildIndex(this,pGVar3);
      tolua_pushnumber((double)iVar1,param_1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_getChildIndex\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:getChildIndex",iVar1 + -1,1);
  }
  return 0;
}

