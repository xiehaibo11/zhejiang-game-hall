
/* lua_cocos2dx_ui_Widget_setActionTag(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_setActionTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Widget *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
                    /* try { // try from 00967984 to 00a6799b has its CatchHandler @ 00967c58 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009679a8 to 00a679bf has its CatchHandler @ 00967c38 */
  this = (Widget *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009679cc to 00a679e3 has its CatchHandler @ 00967c18 */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccui.Widget:setActionTag");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Widget::setActionTag(this,local_3c);
                    /* try { // try from 009679f0 to 00a67a07 has its CatchHandler @ 00967bf8 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00967a3c;
    }
                    /* try { // try from 00967a30 to 00a67a6b has its CatchHandler @ 00967ba4 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Widget_setActionTag\'",0);
  }
  else {
                    /* try { // try from 00967a14 to 00a67a2b has its CatchHandler @ 00967ba8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:setActionTag",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00967a3c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

