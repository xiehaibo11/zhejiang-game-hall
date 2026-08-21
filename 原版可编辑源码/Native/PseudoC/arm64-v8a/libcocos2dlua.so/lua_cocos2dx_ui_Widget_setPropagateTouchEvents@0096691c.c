
/* lua_cocos2dx_ui_Widget_setPropagateTouchEvents(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_setPropagateTouchEvents(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Widget *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Widget *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.Widget:setPropagateTouchEvents");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Widget::setPropagateTouchEvents(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009669d8;
    }
                    /* try { // try from 009669c8 to 00a66a13 has its CatchHandler @ 009669c8
                       catch() { ... } // from try @ 009669c8 with catch @ 009669c8
                       catch() { ... } // from try @ 00966a18 with catch @ 009669c8 */
    tolua_error(param_1,&DAT_012d66a0,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:setPropagateTouchEvents",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009669d8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

