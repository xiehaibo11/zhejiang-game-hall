
/* lua_cocos2dx_ui_ScrollView_setTouchTotalTimeThreshold(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_setTouchTotalTimeThreshold(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 009799fc to 00a79a4f has its CatchHandler @ 009799fc
                       catch(type#1 @ 00000000) { ... } // from try @ 009799fc with catch @ 009799fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00979ae0 with catch @ 009799fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00979b34 with catch @ 009799fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00979ba8 with catch @ 009799fc
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.ScrollView:setTouchTotalTimeThreshold");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 00979a50 to 00a79a67 has its CatchHandler @ 00979b88 */
      cocos2d::ui::ScrollView::setTouchTotalTimeThreshold(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00979aac;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_setTouchTotalTimeThreshold\'"
                ,0);
  }
  else {
                    /* try { // try from 00979a8c to 00a79a8f has its CatchHandler @ 00979b90 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:setTouchTotalTimeThreshold",iVar2 + -1,1);
  }
                    /* try { // try from 00979aa8 to 00a79aaf has its CatchHandler @ 00979b88 */
  uVar4 = 0;
LAB_00979aac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00979ac0 to 00a79ac3 has its CatchHandler @ 00979b8c */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00979ad4 to 00a79adf has its CatchHandler @ 00979b88 */
  __stack_chk_fail();
}

