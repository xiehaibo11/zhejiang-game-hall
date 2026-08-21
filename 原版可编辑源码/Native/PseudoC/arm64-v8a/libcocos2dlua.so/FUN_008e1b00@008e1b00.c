
undefined8 FUN_008e1b00(lua_State *param_1)

{
  int iVar1;
  GList *this;
  ulong uVar2;
  GController *pGVar3;
  
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 008e1b54 to 009e1c9b has its CatchHandler @ 008e1b54
                       catch() { ... } // from try @ 008e1b54 with catch @ 008e1b54
                       catch() { ... } // from try @ 008e1d1c with catch @ 008e1b54 */
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GController",0), (uVar2 & 1) == 0)) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GList_setSelectionController\'",0);
    }
    else {
      pGVar3 = (GController *)tolua_tousertype(param_1,2,0);
      fairygui::GList::setSelectionController(this,pGVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:setSelectionController",iVar1 + -1,1);
  }
  return 0;
}

