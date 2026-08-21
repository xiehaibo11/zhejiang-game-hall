
/* lua_cocos2dx_ui_Widget_setSwallowTouches(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_setSwallowTouches(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Widget *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
                    /* try { // try from 00966bf4 to 00a66c07 has its CatchHandler @ 00966c8c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00966c0c to 00a66c3f has its CatchHandler @ 00966c90 */
  this = (Widget *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.Widget:setSwallowTouches");
                    /* try { // try from 00966c40 to 00a66cdb has its CatchHandler @ 00966a60 */
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Widget::setSwallowTouches(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00966c9c;
    }
                    /* catch() { ... } // from try @ 00966bf4 with catch @ 00966c8c */
                    /* catch() { ... } // from try @ 00966c0c with catch @ 00966c90 */
    tolua_error(param_1,&DAT_012d67b0,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:setSwallowTouches",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00966c9c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00966bc0 with catch @ 00966cc0 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

