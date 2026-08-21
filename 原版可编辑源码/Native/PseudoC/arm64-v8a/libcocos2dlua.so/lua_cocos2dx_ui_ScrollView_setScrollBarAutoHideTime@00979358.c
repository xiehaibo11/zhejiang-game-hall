
/* lua_cocos2dx_ui_ScrollView_setScrollBarAutoHideTime(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_setScrollBarAutoHideTime(lua_State *param_1)

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
                    /* try { // try from 00979384 to 00a79387 has its CatchHandler @ 009793bc */
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00979388 to 00a793cf has its CatchHandler @ 00979338 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.ScrollView:setScrollBarAutoHideTime");
    if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00979384 with catch @ 009793bc */
      cocos2d::ui::ScrollView::setScrollBarAutoHideTime(this,(float)local_40);
                    /* try { // try from 009793d0 to 00a79487 has its CatchHandler @ 009793d0
                       catch() { ... } // from try @ 009793d0 with catch @ 009793d0
                       catch() { ... } // from try @ 00979508 with catch @ 009793d0 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00979418;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_setScrollBarAutoHideTime\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012da8db,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00979418:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

