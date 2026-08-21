
/* lua_cocos2dx_ui_ListView_setItemsMargin(lua_State*) */

undefined4 lua_cocos2dx_ui_ListView_setItemsMargin(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ListView *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0097cc88 to 00a7ccdf has its CatchHandler @ 0097cc88
                       catch() { ... } // from try @ 0097cc88 with catch @ 0097cc88
                       catch() { ... } // from try @ 0097cd30 with catch @ 0097cc88
                       catch() { ... } // from try @ 0097cd74 with catch @ 0097cc88 */
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.ListView:setItemsMargin");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ListView::setItemsMargin(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
                    /* try { // try from 0097cce0 to 00a7cd2f has its CatchHandler @ 0097cdf0 */
      goto LAB_0097cd1c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_ListView_setItemsMargin\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:setItemsMargin",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0097cd1c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0097cd30 to 00a7cd5f has its CatchHandler @ 0097cc88 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

