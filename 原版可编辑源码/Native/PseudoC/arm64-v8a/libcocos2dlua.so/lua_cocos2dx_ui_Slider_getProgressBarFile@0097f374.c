
/* lua_cocos2dx_ui_Slider_getProgressBarFile(lua_State*) */

void lua_cocos2dx_ui_Slider_getProgressBarFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_68;
  void *local_58;
  byte local_50;
  void *local_40;
  
                    /* try { // try from 0097f374 to 00a7f3bb has its CatchHandler @ 0097f324 */
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0097f370 with catch @ 0097f3a8 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    cocos2d::ui::Slider::getProgressBarFile();
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 0097f3bc to 00a7f623 has its CatchHandler @ 0097f3bc
                       catch() { ... } // from try @ 0097f3bc with catch @ 0097f3bc
                       catch() { ... } // from try @ 0097f6a4 with catch @ 0097f3bc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dc3ba,
               iVar2 + -1,0);
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

