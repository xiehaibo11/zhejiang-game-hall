
/* lua_cocos2dx_ui_CheckBox_addEventListener(lua_State*) */

void lua_cocos2dx_ui_CheckBox_addEventListener(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  CheckBox *this;
  undefined8 uVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* try { // try from 00970dd4 to 00a70de7 has its CatchHandler @ 00970e44 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (CheckBox *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.CheckBox:addEventListener",iVar2 + -1,1);
    uVar3 = 0;
    goto LAB_00970e88;
  }
  local_50 = (long *)0x0;
                    /* try { // try from 00970e24 to 00a70e2b has its CatchHandler @ 00970e40 */
  cocos2d::ui::CheckBox::addEventListener(this,(function *)alStack_70);
                    /* try { // try from 00970e2c to 00a70e5f has its CatchHandler @ 00970d14 */
  lua_settop(param_1,1);
                    /* catch() { ... } // from try @ 00970d80 with catch @ 00970e40
                       catch() { ... } // from try @ 00970e24 with catch @ 00970e40 */
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00970e80:
    (*pcVar4)();
  }
  else {
                    /* catch() { ... } // from try @ 00970d64 with catch @ 00970e44
                       catch() { ... } // from try @ 00970dd4 with catch @ 00970e44 */
    if (local_50 != (long *)0x0) {
      pcVar4 = *(code **)(*local_50 + 0x28);
      goto LAB_00970e80;
    }
  }
  uVar3 = 1;
LAB_00970e88:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

