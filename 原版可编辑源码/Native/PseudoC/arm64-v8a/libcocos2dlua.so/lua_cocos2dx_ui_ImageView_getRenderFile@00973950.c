
/* lua_cocos2dx_ui_ImageView_getRenderFile(lua_State*) */

void lua_cocos2dx_ui_ImageView_getRenderFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_68;
  void *local_58;
  byte local_50;
  void *local_40;
  
                    /* catch() { ... } // from try @ 00973850 with catch @ 00973958
                       catch() { ... } // from try @ 00973930 with catch @ 00973958 */
                    /* catch() { ... } // from try @ 009737a4 with catch @ 0097395c
                       catch() { ... } // from try @ 00973924 with catch @ 0097395c */
                    /* catch() { ... } // from try @ 009737f4 with catch @ 00973960
                       catch() { ... } // from try @ 009738d4 with catch @ 00973960 */
                    /* catch() { ... } // from try @ 00973760 with catch @ 00973964
                       catch() { ... } // from try @ 009738bc with catch @ 00973964 */
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
                    /* try { // try from 00973988 to 00a739bf has its CatchHandler @ 00973988
                       catch() { ... } // from try @ 00973988 with catch @ 00973988
                       catch() { ... } // from try @ 00973a04 with catch @ 00973988
                       catch() { ... } // from try @ 00973a80 with catch @ 00973988 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
                    /* try { // try from 009739c0 to 00a739d7 has its CatchHandler @ 00973a98 */
    cocos2d::ui::ImageView::getRenderFile();
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_68 & 1) != 0) {
                    /* try { // try from 009739dc to 00a73a03 has its CatchHandler @ 00973a94 */
      operator_delete(local_58);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ImageView:getRenderFile",iVar2 + -1,0);
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* try { // try from 00973a04 to 00a73a2b has its CatchHandler @ 00973988 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

