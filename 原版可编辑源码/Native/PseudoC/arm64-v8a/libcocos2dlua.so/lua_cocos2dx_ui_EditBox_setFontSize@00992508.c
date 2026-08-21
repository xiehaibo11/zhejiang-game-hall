
/* lua_cocos2dx_ui_EditBox_setFontSize(lua_State*) */

undefined4 lua_cocos2dx_ui_EditBox_setFontSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  EditBox *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (EditBox *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccui.EditBox:setFontSize");
                    /* try { // try from 00992568 to 00a9259b has its CatchHandler @ 00992668 */
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::EditBox::setFontSize(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009925c4;
    }
                    /* try { // try from 009925b4 to 00a925e7 has its CatchHandler @ 00992638 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_EditBox_setFontSize\'",0);
  }
  else {
                    /* try { // try from 0099259c to 00a925af has its CatchHandler @ 00992634 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:setFontSize",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009925c4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009925e8 to 00a92683 has its CatchHandler @ 009923c0 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

