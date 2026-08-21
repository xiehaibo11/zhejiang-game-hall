
undefined8 FUN_008dfe10(lua_State *param_1)

{
  int iVar1;
  GComponent *this;
  ulong uVar2;
  IHitTest *pIVar3;
  
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.IHitTest",0), (uVar2 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_setHitArea\'",0);
    }
    else {
                    /* try { // try from 008dfe78 to 009dff5f has its CatchHandler @ 008dfe78
                       catch() { ... } // from try @ 008dfe78 with catch @ 008dfe78
                       catch() { ... } // from try @ 008dffc4 with catch @ 008dfe78 */
      pIVar3 = (IHitTest *)tolua_tousertype(param_1,2,0);
      fairygui::GComponent::setHitArea(this,pIVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:setHitArea",iVar1 + -1,1);
  }
  return 0;
}

