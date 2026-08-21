
/* lua_cocos2dx_ui_AbstractCheckButton_setZoomScale(lua_State*) */

undefined4 lua_cocos2dx_ui_AbstractCheckButton_setZoomScale(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  AbstractCheckButton *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009707ac to 00a707bf has its CatchHandler @ 00970800 */
  this = (AbstractCheckButton *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009707c0 to 00a7081b has its CatchHandler @ 009706f4 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.AbstractCheckButton:setZoomScale");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::AbstractCheckButton::setZoomScale(this,(float)local_40);
                    /* catch() { ... } // from try @ 00970744 with catch @ 00970800
                       catch() { ... } // from try @ 009707ac with catch @ 00970800 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0097084c;
    }
    tolua_error(param_1,&DAT_012d8cf7,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d8cd1,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0097084c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

