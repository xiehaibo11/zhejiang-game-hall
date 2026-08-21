
/* lua_cocos2dx_ui_LoadingBar_getRenderFile(lua_State*) */

void lua_cocos2dx_ui_LoadingBar_getRenderFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_68;
  void *local_58;
  byte local_50;
  void *local_40;
  
                    /* catch() { ... } // from try @ 009772b0 with catch @ 0097736c
                       catch() { ... } // from try @ 00977318 with catch @ 0097736c */
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00977388 to 00a773d7 has its CatchHandler @ 00977388
                       catch() { ... } // from try @ 00977388 with catch @ 00977388
                       catch() { ... } // from try @ 0097740c with catch @ 00977388
                       catch() { ... } // from try @ 00977454 with catch @ 00977388 */
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    cocos2d::ui::LoadingBar::getRenderFile();
                    /* try { // try from 009773d8 to 00a773ef has its CatchHandler @ 00977498 */
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
                    /* try { // try from 009773f4 to 00a7740b has its CatchHandler @ 00977494 */
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LoadingBar:getRenderFile",iVar2 + -1,0);
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* try { // try from 0097740c to 00a7743f has its CatchHandler @ 00977388 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

