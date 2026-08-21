
/* lua_cocos2dx_ui_ScrollView_setInertiaScrollEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_setInertiaScrollEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009795f4 to 00a7964f has its CatchHandler @ 009796d4 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.ScrollView:setInertiaScrollEnabled");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ScrollView::setInertiaScrollEnabled(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00979670;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_setInertiaScrollEnabled\'"
                ,0);
  }
  else {
                    /* try { // try from 00979650 to 00a7967f has its CatchHandler @ 009795a4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:setInertiaScrollEnabled",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00979670:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00979680 to 00a79693 has its CatchHandler @ 009796d4 */
                    /* try { // try from 00979694 to 00a796ef has its CatchHandler @ 009795a4 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

