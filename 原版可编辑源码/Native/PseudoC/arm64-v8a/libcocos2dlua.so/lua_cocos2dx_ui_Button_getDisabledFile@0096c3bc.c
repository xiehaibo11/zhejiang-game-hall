
/* lua_cocos2dx_ui_Button_getDisabledFile(lua_State*) */

void lua_cocos2dx_ui_Button_getDisabledFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_68;
  void *local_58;
  byte local_50;
  void *local_40;
  
                    /* try { // try from 0096c3c0 to 00a6c3db has its CatchHandler @ 0096c7cc */
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0096c3fc to 00a6c413 has its CatchHandler @ 0096c79c */
  if (iVar2 + -1 == 0) {
    cocos2d::ui::Button::getDisabledFile();
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
                    /* try { // try from 0096c450 to 00a6c46b has its CatchHandler @ 0096c7f0 */
    uVar3 = 1;
  }
  else {
                    /* try { // try from 0096c418 to 00a6c437 has its CatchHandler @ 0096c798 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:getDisabledFile",iVar2 + -1,0);
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

