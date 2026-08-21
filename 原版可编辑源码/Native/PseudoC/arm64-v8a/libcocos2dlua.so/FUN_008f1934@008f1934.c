
undefined8 FUN_008f1934(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Window *this;
  ulong uVar3;
  int local_3c;
  long local_38;
  
                    /* try { // try from 008f193c to 009f196b has its CatchHandler @ 008f18ac */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Window *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008f196c to 009f197f has its CatchHandler @ 008f19c0 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.Window:showModalWait");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_Window_showModalWait\'",0);
    }
    else {
      fairygui::Window::showModalWait(this,local_3c);
    }
  }
  else if (iVar2 + -1 == 0) {
                    /* try { // try from 008f1980 to 009f19db has its CatchHandler @ 008f18ac */
    fairygui::Window::showModalWait(this,0);
  }
  else {
                    /* catch() { ... } // from try @ 008f18fc with catch @ 008f19c0
                       catch() { ... } // from try @ 008f196c with catch @ 008f19c0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Window:showModalWait",iVar2 + -1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

