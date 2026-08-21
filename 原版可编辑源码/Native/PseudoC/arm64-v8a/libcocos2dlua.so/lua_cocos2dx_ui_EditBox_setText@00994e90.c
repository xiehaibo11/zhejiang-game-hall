
/* lua_cocos2dx_ui_EditBox_setText(lua_State*) */

undefined4 lua_cocos2dx_ui_EditBox_setText(lua_State *param_1)

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
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.EditBox:setText");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,&DAT_012e0c1f,0);
      uVar5 = 0;
    }
    else {
                    /* try { // try from 00994f04 to 00a9501b has its CatchHandler @ 00994f04
                       catch() { ... } // from try @ 00994f04 with catch @ 00994f04
                       catch() { ... } // from try @ 0099509c with catch @ 00994f04 */
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pcVar1 = local_40;
      }
      cocos2d::ui::EditBox::setText(this,pcVar1);
      uVar5 = 1;
      lua_settop(param_1,1);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:setText",iVar3 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

