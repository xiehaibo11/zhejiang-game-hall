
/* lua_cocos2dx_ui_ScrollView_setInnerContainerPosition(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_setInnerContainerPosition(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 009789b4 to 00a789ff has its CatchHandler @ 009789b4
                       catch() { ... } // from try @ 009789b4 with catch @ 009789b4
                       catch() { ... } // from try @ 00978a04 with catch @ 009789b4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
                    /* try { // try from 00978a00 to 00a78a03 has its CatchHandler @ 00978a38 */
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"ccui.ScrollView:setInnerContainerPosition");
                    /* try { // try from 00978a04 to 00a78a4b has its CatchHandler @ 009789b4 */
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ScrollView::setInnerContainerPosition(this,(Vec2 *)&local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00978a60;
    }
                    /* try { // try from 00978a4c to 00a78bdb has its CatchHandler @ 00978a4c
                       catch() { ... } // from try @ 00978a4c with catch @ 00978a4c
                       catch() { ... } // from try @ 00978c5c with catch @ 00978a4c */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_setInnerContainerPosition\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 00978a00 with catch @ 00978a38 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:setInnerContainerPosition",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00978a60:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

