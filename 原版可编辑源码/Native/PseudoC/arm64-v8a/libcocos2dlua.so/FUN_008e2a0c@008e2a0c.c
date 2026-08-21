
undefined8 FUN_008e2a0c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool local_54 [4];
  bool local_50 [4];
  int local_4c;
  long local_48;
  
                    /* try { // try from 008e2a14 to 009e2a2f has its CatchHandler @ 008e2f7c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008e2a50 to 009e2a67 has its CatchHandler @ 008e2f48 */
  if (iVar2 == 4) {
                    /* try { // try from 008e2ae4 to 009e2afb has its CatchHandler @ 008e2edc */
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"fairygui.GList:scrollToView");
                    /* try { // try from 008e2b10 to 009e2b33 has its CatchHandler @ 008e2ed8 */
    uVar4 = luaval_to_boolean(param_1,3,local_50,"fairygui.GList:scrollToView");
    uVar5 = luaval_to_boolean(param_1,4,local_54,"fairygui.GList:scrollToView");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
                    /* try { // try from 008e2b4c to 009e2b67 has its CatchHandler @ 008e2f78 */
      fairygui::GList::scrollToView(this,local_4c,local_50[0],local_54[0]);
      goto LAB_008e2b8c;
    }
LAB_008e2b54:
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_scrollToView\'",0);
  }
  else {
    if (iVar2 == 3) {
      uVar3 = luaval_to_int32(param_1,2,&local_4c,"fairygui.GList:scrollToView");
                    /* try { // try from 008e2aac to 009e2ac3 has its CatchHandler @ 008e2ef4 */
      uVar4 = luaval_to_boolean(param_1,3,local_50,"fairygui.GList:scrollToView");
                    /* try { // try from 008e2ac8 to 009e2adf has its CatchHandler @ 008e2ee4 */
      if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) goto LAB_008e2b54;
    }
    else {
      if (iVar2 != 2) {
                    /* try { // try from 008e2b88 to 009e2b9f has its CatchHandler @ 008e2f44 */
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "fairygui.GList:scrollToView",iVar2 + -1,1);
        goto LAB_008e2b8c;
      }
                    /* try { // try from 008e2a6c to 009e2a83 has its CatchHandler @ 008e2f18 */
      uVar3 = luaval_to_int32(param_1,2,&local_4c,"fairygui.GList:scrollToView");
      if ((uVar3 & 1) == 0) goto LAB_008e2b54;
                    /* try { // try from 008e2a88 to 009e2aa7 has its CatchHandler @ 008e2f14 */
      local_50[0] = false;
    }
    fairygui::GList::scrollToView(this,local_4c,local_50[0],false);
  }
LAB_008e2b8c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 008e2ba4 to 009e2bbb has its CatchHandler @ 008e2f10 */
  return 0;
}

