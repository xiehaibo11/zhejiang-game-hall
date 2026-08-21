
/* lua_cocos2dx_ui_PageView_removePageAtIndex(lua_State*) */

undefined4 lua_cocos2dx_ui_PageView_removePageAtIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PageView *this;
  ulong uVar3;
  undefined4 uVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PageView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009853fc to 00a85403 has its CatchHandler @ 009854e4 */
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00985404 to 00a8552b has its CatchHandler @ 009851e0 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_ssize(param_1,2,&local_40,"ccui.PageView:removePageAtIndex");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::PageView::removePageAtIndex(this,local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00985484;
    }
    tolua_error(param_1,0x12dddfa,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dddda,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00985484:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

