
undefined8 FUN_008f64fc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollPane *this;
  ulong uVar3;
  ulong uVar4;
  bool local_54 [4];
  double local_50;
  long local_48;
  
                    /* try { // try from 008f6508 to 009f65a3 has its CatchHandler @ 008f635c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
                    /* catch() { ... } // from try @ 008f6488 with catch @ 008f6588 */
    uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:setPercY");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"fairygui.ScrollPane:setPercY");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
LAB_008f65cc:
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_ScrollPane_setPercY\'",0);
      goto LAB_008f6604;
    }
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.ScrollPane:setPercY",iVar2 + -1,1);
      goto LAB_008f6604;
    }
                    /* catch() { ... } // from try @ 008f64bc with catch @ 008f6554 */
                    /* catch() { ... } // from try @ 008f64d4 with catch @ 008f6558 */
    uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:setPercY");
    if ((uVar3 & 1) == 0) goto LAB_008f65cc;
    local_54[0] = false;
  }
  fairygui::ScrollPane::setPercY(this,(float)local_50,local_54[0]);
LAB_008f6604:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

