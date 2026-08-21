
undefined8 FUN_008e5018(lua_State *param_1)

{
  int iVar1;
  GButton *this;
  ulong uVar2;
  GController *pGVar3;
  
  this = (GButton *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008e5038 to 009e503b has its CatchHandler @ 008e50c8 */
                    /* try { // try from 008e503c to 009e50db has its CatchHandler @ 008e4fd8 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GController",0), (uVar2 & 1) == 0)) {
                    /* catch() { ... } // from try @ 008e5038 with catch @ 008e50c8 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GButton_setRelatedController\'",0);
    }
    else {
      pGVar3 = (GController *)tolua_tousertype(param_1,2,0);
      fairygui::GButton::setRelatedController(this,pGVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GButton:setRelatedController",iVar1 + -1,1);
  }
                    /* try { // try from 008e50dc to 009e51db has its CatchHandler @ 008e50dc
                       catch() { ... } // from try @ 008e50dc with catch @ 008e50dc
                       catch() { ... } // from try @ 008e525c with catch @ 008e50dc */
  return 0;
}

