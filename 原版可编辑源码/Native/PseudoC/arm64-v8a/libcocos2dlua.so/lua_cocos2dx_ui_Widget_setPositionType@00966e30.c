
/* lua_cocos2dx_ui_Widget_setPositionType(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_setPositionType(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Widget *pWVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pWVar3 = (Widget *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.Widget:setPositionType");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::Widget::setPositionType(pWVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
                    /* try { // try from 00966eb0 to 00a66efb has its CatchHandler @ 00966eb0
                       catch() { ... } // from try @ 00966eb0 with catch @ 00966eb0
                       catch() { ... } // from try @ 00966f00 with catch @ 00966eb0 */
      goto LAB_00966eec;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Widget_setPositionType\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&LAB_012d6874,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00966eec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00966efc to 00a66eff has its CatchHandler @ 00966f34 */
                    /* try { // try from 00966f00 to 00a66f47 has its CatchHandler @ 00966eb0 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

