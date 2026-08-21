
undefined8 FUN_008f4cb0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollPane *this;
  ulong uVar3;
  ulong uVar4;
  bool local_50 [4];
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008f4ce0 to 009f4d3b has its CatchHandler @ 008f4db0 */
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
                    /* try { // try from 008f4d3c to 009f4d63 has its CatchHandler @ 008f4c90 */
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"fairygui.ScrollPane:setPageY");
    uVar4 = luaval_to_boolean(param_1,3,local_50,"fairygui.ScrollPane:setPageY");
                    /* try { // try from 008f4d64 to 009f4d77 has its CatchHandler @ 008f4db0 */
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
                    /* try { // try from 008f4d78 to 009f4dc3 has its CatchHandler @ 008f4c90 */
      fairygui::ScrollPane::setPageY(this,local_4c,local_50[0]);
      goto LAB_008f4db8;
    }
  }
  else {
    if (iVar2 != 2) {
                    /* catch() { ... } // from try @ 008f4ce0 with catch @ 008f4db0
                       catch() { ... } // from try @ 008f4d64 with catch @ 008f4db0 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.ScrollPane:setPageY",iVar2 + -1,1);
      goto LAB_008f4db8;
    }
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"fairygui.ScrollPane:setPageY");
    if ((uVar3 & 1) != 0) {
      fairygui::ScrollPane::setPageY(this,local_4c,false);
      goto LAB_008f4db8;
    }
  }
  tolua_error(param_1,"invalid arguments in function \'lua_fairygui_ScrollPane_setPageY\'",0);
LAB_008f4db8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

