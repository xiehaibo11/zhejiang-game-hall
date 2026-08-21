
undefined8 FUN_008f6b70(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollPane *this;
  ulong uVar3;
  ulong uVar4;
  bool local_54 [4];
  double local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 008f6a90 with catch @ 008f6b74 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:setPosY");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"fairygui.ScrollPane:setPosY");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
LAB_008f6c40:
                    /* try { // try from 008f6c4c to 009f6c57 has its CatchHandler @ 008f6cf0 */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_ScrollPane_setPosY\'",0);
      goto LAB_008f6c78;
    }
  }
  else {
    if (iVar2 != 2) {
                    /* try { // try from 008f6c58 to 009f6c73 has its CatchHandler @ 008f6cf4 */
                    /* try { // try from 008f6c74 to 009f6d57 has its CatchHandler @ 008f6bd8 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.ScrollPane:setPosY",iVar2 + -1,1);
      goto LAB_008f6c78;
    }
    uVar3 = luaval_to_number(param_1,2,&local_50,"fairygui.ScrollPane:setPosY");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008f6c74 with catch @ 008f6bd8
                        */
    if ((uVar3 & 1) == 0) goto LAB_008f6c40;
    local_54[0] = false;
  }
  fairygui::ScrollPane::setPosY(this,(float)local_50,local_54[0]);
LAB_008f6c78:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

