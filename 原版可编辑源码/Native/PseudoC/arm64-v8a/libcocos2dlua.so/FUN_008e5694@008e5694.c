
undefined8 FUN_008e5694(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GButton *this;
  ulong uVar3;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 008e55b8 with catch @ 008e56b8 */
  this = (GButton *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008e56d4 to 009e5757 has its CatchHandler @ 008e56d4
                       catch() { ... } // from try @ 008e56d4 with catch @ 008e56d4
                       catch() { ... } // from try @ 008e575c with catch @ 008e56d4 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GButton:setTitleFontSize");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GButton_setTitleFontSize\'",
                  0);
    }
    else {
      fairygui::GButton::setTitleFontSize(this,local_3c);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GButton:setTitleFontSize",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008e5758 to 009e575b has its CatchHandler @ 008e57e8 */
                    /* try { // try from 008e575c to 009e57fb has its CatchHandler @ 008e56d4 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

