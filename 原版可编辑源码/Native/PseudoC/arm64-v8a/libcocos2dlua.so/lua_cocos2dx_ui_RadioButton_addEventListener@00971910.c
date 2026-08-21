
/* lua_cocos2dx_ui_RadioButton_addEventListener(lua_State*) */

void lua_cocos2dx_ui_RadioButton_addEventListener(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RadioButton *this;
  undefined8 uVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RadioButton *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RadioButton:addEventListener",iVar2 + -1,1);
    uVar3 = 0;
    goto LAB_009719cc;
  }
  local_50 = (long *)0x0;
  cocos2d::ui::RadioButton::addEventListener(this,(function *)alStack_70);
  lua_settop(param_1,1);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_009719c4:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
                    /* try { // try from 0097198c to 00a71993 has its CatchHandler @ 009719d0 */
    pcVar4 = *(code **)(*local_50 + 0x28);
                    /* try { // try from 00971994 to 00a719eb has its CatchHandler @ 009718f0 */
    goto LAB_009719c4;
  }
  uVar3 = 1;
LAB_009719cc:
                    /* catch() { ... } // from try @ 0097198c with catch @ 009719d0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009719ec to 00a71a7f has its CatchHandler @ 009719ec
                       catch() { ... } // from try @ 009719ec with catch @ 009719ec
                       catch() { ... } // from try @ 00971a88 with catch @ 009719ec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

