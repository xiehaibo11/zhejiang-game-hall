
/* lua_cocos2dx_ui_EditBox_setPlaceHolder(lua_State*) */

undefined4 lua_cocos2dx_ui_EditBox_setPlaceHolder(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  EditBox *this;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (EditBox *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
                    /* try { // try from 009948bc to 00a948ef has its CatchHandler @ 009949bc */
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.EditBox:setPlaceHolder");
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0099493c to 00a949d7 has its CatchHandler @ 00994774 */
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_EditBox_setPlaceHolder\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
      cocos2d::ui::EditBox::setPlaceHolder(this,pcVar1);
                    /* try { // try from 009948f0 to 00a94903 has its CatchHandler @ 00994988 */
      uVar5 = 1;
      lua_settop(param_1,1);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:setPlaceHolder",iVar3 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

