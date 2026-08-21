
/* lua_cocos2dx_ui_AbstractCheckButton_getCrossDisabledFile(lua_State*) */

void lua_cocos2dx_ui_AbstractCheckButton_getCrossDisabledFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_68;
  void *local_58;
  byte local_50;
  void *local_40;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    cocos2d::ui::AbstractCheckButton::getCrossDisabledFile();
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
                    /* try { // try from 0096f0f4 to 00a6f107 has its CatchHandler @ 0096f18c */
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 0096f0c0 to 00a6f0f3 has its CatchHandler @ 0096f1c0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.AbstractCheckButton:getCrossDisabledFile",iVar2 + -1,0);
    uVar3 = 0;
  }
                    /* try { // try from 0096f10c to 00a6f13f has its CatchHandler @ 0096f190 */
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

