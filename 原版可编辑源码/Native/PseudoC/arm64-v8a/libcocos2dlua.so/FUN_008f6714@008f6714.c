
undefined8 FUN_008f6714(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollPane *this;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  bool local_54 [4];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:scrollRight");
                    /* try { // try from 008f67c8 to 009f67cb has its CatchHandler @ 008f6800 */
                    /* try { // try from 008f67cc to 009f6813 has its CatchHandler @ 008f677c */
    uVar4 = luaval_to_boolean(param_1,3,local_54,"fairygui.ScrollPane:scrollRight");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      fairygui::ScrollPane::scrollRight(this,(float)local_50,local_54[0]);
      goto LAB_008f6830;
    }
LAB_008f67fc:
                    /* catch() { ... } // from try @ 008f67c8 with catch @ 008f6800 */
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_ScrollPane_scrollRight\'",0);
  }
  else {
    if (iVar2 == 2) {
                    /* try { // try from 008f677c to 009f67c7 has its CatchHandler @ 008f677c
                       catch() { ... } // from try @ 008f677c with catch @ 008f677c
                       catch() { ... } // from try @ 008f67cc with catch @ 008f677c */
      uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:scrollRight");
      if ((uVar3 & 1) == 0) goto LAB_008f67fc;
      fVar5 = (float)local_50;
    }
    else {
      if (iVar2 + -1 != 0) {
                    /* try { // try from 008f6814 to 009f68fb has its CatchHandler @ 008f6814
                       catch() { ... } // from try @ 008f6814 with catch @ 008f6814
                       catch() { ... } // from try @ 008f697c with catch @ 008f6814 */
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "fairygui.ScrollPane:scrollRight",iVar2 + -1,0);
        goto LAB_008f6830;
      }
      fVar5 = 1.0;
    }
    fairygui::ScrollPane::scrollRight(this,fVar5,false);
  }
LAB_008f6830:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

