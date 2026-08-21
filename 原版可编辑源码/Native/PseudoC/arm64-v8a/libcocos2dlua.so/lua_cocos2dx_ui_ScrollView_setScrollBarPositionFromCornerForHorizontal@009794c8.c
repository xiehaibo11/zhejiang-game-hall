
/* lua_cocos2dx_ui_ScrollView_setScrollBarPositionFromCornerForHorizontal(lua_State*) */

undefined4
lua_cocos2dx_ui_ScrollView_setScrollBarPositionFromCornerForHorizontal(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 009794d4 to 00a79507 has its CatchHandler @ 00979558 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00979508 to 00a795a3 has its CatchHandler @ 009793d0 */
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,
                           "ccui.ScrollView:setScrollBarPositionFromCornerForHorizontal");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ScrollView::setScrollBarPositionFromCornerForHorizontal(this,(Vec2 *)&local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00979588;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_setScrollBarPositionFromCornerForHorizontal\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 009794bc with catch @ 00979554 */
                    /* catch() { ... } // from try @ 009794d4 with catch @ 00979558 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:setScrollBarPositionFromCornerForHorizontal",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00979588:
                    /* catch() { ... } // from try @ 00979488 with catch @ 00979588 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009795a4 to 00a795f3 has its CatchHandler @ 009795a4
                       catch() { ... } // from try @ 009795a4 with catch @ 009795a4
                       catch() { ... } // from try @ 00979650 with catch @ 009795a4
                       catch() { ... } // from try @ 00979694 with catch @ 009795a4 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

