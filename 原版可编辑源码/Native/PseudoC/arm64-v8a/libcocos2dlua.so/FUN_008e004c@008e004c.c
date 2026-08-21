
undefined8 FUN_008e004c(lua_State *param_1)

{
  int iVar1;
  GComponent *this;
  ulong uVar2;
  GObject *pGVar3;
  
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* catch() { ... } // from try @ 008dffbc with catch @ 008e008c */
                    /* catch() { ... } // from try @ 008dff60 with catch @ 008e009c */
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar2 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_removeChild\'",0)
      ;
    }
    else {
      pGVar3 = (GObject *)tolua_tousertype(param_1,2,0);
      fairygui::GComponent::removeChild(this,pGVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:removeChild",iVar1 + -1,1);
  }
  return 0;
}

