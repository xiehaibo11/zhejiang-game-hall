
undefined8 FUN_008f63c4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollPane *this;
  ulong uVar3;
  ulong uVar4;
  bool local_54 [4];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:setPercX");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"fairygui.ScrollPane:setPercX");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
LAB_008f6494:
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_ScrollPane_setPercX\'",0);
      goto LAB_008f64cc;
    }
  }
  else {
    if (iVar2 != 2) {
                    /* try { // try from 008f64bc to 009f64cf has its CatchHandler @ 008f6554 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.ScrollPane:setPercX",iVar2 + -1,1);
      goto LAB_008f64cc;
    }
    uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:setPercX");
    if ((uVar3 & 1) == 0) goto LAB_008f6494;
    local_54[0] = false;
  }
                    /* try { // try from 008f6488 to 009f64bb has its CatchHandler @ 008f6588 */
  fairygui::ScrollPane::setPercX(this,(float)local_50,local_54[0]);
LAB_008f64cc:
                    /* try { // try from 008f64d4 to 009f6507 has its CatchHandler @ 008f6558 */
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

