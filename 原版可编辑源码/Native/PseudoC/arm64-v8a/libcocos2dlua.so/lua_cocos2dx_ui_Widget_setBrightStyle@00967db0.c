
/* lua_cocos2dx_ui_Widget_setBrightStyle(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_setBrightStyle(lua_State *param_1)

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
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.Widget:setBrightStyle");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::Widget::setBrightStyle(pWVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00967e6c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Widget_setBrightStyle\'",0)
    ;
  }
  else {
                    /* try { // try from 00967e44 to 00a67e77 has its CatchHandler @ 00967f44 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:setBrightStyle",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00967e6c:
                    /* try { // try from 00967e78 to 00a67e8b has its CatchHandler @ 00967f10 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00967e90 to 00a67ec3 has its CatchHandler @ 00967f14 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

