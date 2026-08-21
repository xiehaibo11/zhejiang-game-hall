
/* lua_cocos2dx_ui_ScrollView_setScrollBarWidth(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_setScrollBarWidth(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0097a394 to 00a7a3ab has its CatchHandler @ 0097a454 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.ScrollView:setScrollBarWidth");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 0097a3b0 to 00a7a3c7 has its CatchHandler @ 0097a450 */
      cocos2d::ui::ScrollView::setScrollBarWidth(this,(float)local_40);
      uVar4 = 1;
                    /* try { // try from 0097a3c8 to 00a7a3fb has its CatchHandler @ 0097a344 */
      lua_settop(param_1,1);
      goto LAB_0097a408;
    }
                    /* try { // try from 0097a3fc to 00a7a40f has its CatchHandler @ 0097a454 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_setScrollBarWidth\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:setScrollBarWidth",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0097a408:
                    /* try { // try from 0097a410 to 00a7a46f has its CatchHandler @ 0097a344 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

