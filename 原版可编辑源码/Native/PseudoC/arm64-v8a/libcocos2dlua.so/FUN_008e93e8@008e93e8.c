
undefined8 FUN_008e93e8(lua_State *param_1)

{
  int iVar1;
  GRoot *this;
  ulong uVar2;
  Window *pWVar3;
  
                    /* try { // try from 008e93fc to 009e949f has its CatchHandler @ 008e93fc
                       catch() { ... } // from try @ 008e93fc with catch @ 008e93fc
                       catch() { ... } // from try @ 008e94ac with catch @ 008e93fc */
  this = (GRoot *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.Window",0), (uVar2 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GRoot_bringToFront\'",0);
    }
    else {
      pWVar3 = (Window *)tolua_tousertype(param_1,2,0);
      fairygui::GRoot::bringToFront(this,pWVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRoot:bringToFront",iVar1 + -1,1);
  }
                    /* try { // try from 008e94a0 to 009e94ab has its CatchHandler @ 008e9528 */
                    /* try { // try from 008e94ac to 009e953b has its CatchHandler @ 008e93fc */
  return 0;
}

