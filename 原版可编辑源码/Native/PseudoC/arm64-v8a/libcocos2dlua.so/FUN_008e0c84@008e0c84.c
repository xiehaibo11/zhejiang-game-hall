
undefined8 FUN_008e0c84(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GScrollBar *this;
  ulong uVar3;
  double local_40;
  long local_38;
  
                    /* try { // try from 008e0c88 to 009e0ce7 has its CatchHandler @ 008e0c88
                       catch() { ... } // from try @ 008e0c88 with catch @ 008e0c88
                       catch() { ... } // from try @ 008e0cec with catch @ 008e0c88 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GScrollBar *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"fairygui.GScrollBar:setScrollPerc");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GScrollBar_setScrollPerc\'",
                  0);
    }
    else {
                    /* try { // try from 008e0ce8 to 009e0ceb has its CatchHandler @ 008e0d68 */
                    /* try { // try from 008e0cec to 009e0d7b has its CatchHandler @ 008e0c88 */
      fairygui::GScrollBar::setScrollPerc(this,(float)local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GScrollBar:setScrollPerc",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

