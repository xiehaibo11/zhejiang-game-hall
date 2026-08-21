
undefined8 FUN_008e88e0(lua_State *param_1)

{
  int iVar1;
  GRoot *this;
  ulong uVar2;
  GObject *pGVar3;
  
  this = (GRoot *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar2 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GRoot_showTooltipsWin\'",0);
    }
    else {
      pGVar3 = (GObject *)tolua_tousertype(param_1,2,0);
      fairygui::GRoot::showTooltipsWin(this,pGVar3);
    }
  }
  else {
                    /* try { // try from 008e8964 to 009e896f has its CatchHandler @ 008e89c8 */
                    /* try { // try from 008e8970 to 009e8a03 has its CatchHandler @ 008e88b8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRoot:showTooltipsWin",iVar1 + -1,1);
  }
  return 0;
}

