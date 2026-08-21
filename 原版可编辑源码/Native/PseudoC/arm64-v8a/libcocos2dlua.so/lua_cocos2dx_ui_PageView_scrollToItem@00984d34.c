
/* lua_cocos2dx_ui_PageView_scrollToItem(lua_State*) */

undefined4 lua_cocos2dx_ui_PageView_scrollToItem(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PageView *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00984d58 to 00a84d67 has its CatchHandler @ 00984dcc */
  this = (PageView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00984d68 to 00a84de7 has its CatchHandler @ 00984d20 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
                    /* try { // try from 00984de8 to 00a84e1f has its CatchHandler @ 00984de8
                       catch() { ... } // from try @ 00984de8 with catch @ 00984de8
                       catch() { ... } // from try @ 00984e30 with catch @ 00984de8 */
    uVar3 = luaval_to_ssize(param_1,2,&local_40,"ccui.PageView:scrollToItem");
    if ((uVar3 & 1) == 0) goto LAB_00984e10;
    cocos2d::ui::PageView::scrollToItem(this,local_40);
  }
  else {
    if (((iVar2 != 3) ||
        (uVar3 = luaval_to_ssize(param_1,2,&local_40,"ccui.PageView:scrollToItem"), (uVar3 & 1) == 0
        )) || (uVar3 = luaval_to_number(param_1,3,&local_48,"ccui.PageView:scrollToItem"),
              (uVar3 & 1) == 0)) {
LAB_00984e10:
                    /* try { // try from 00984e20 to 00a84e2f has its CatchHandler @ 00984e94 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.PageView:scrollToItem",iVar2 + -1,1);
                    /* try { // try from 00984e30 to 00a84eaf has its CatchHandler @ 00984de8 */
      uVar4 = 0;
      goto LAB_00984e34;
    }
                    /* catch() { ... } // from try @ 00984d58 with catch @ 00984dcc */
    cocos2d::ui::PageView::scrollToItem(this,local_40,(float)local_48);
  }
  uVar4 = 1;
  lua_settop(param_1,1);
LAB_00984e34:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

