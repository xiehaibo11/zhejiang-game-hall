
/* lua_cocos2dx_ui_TextAtlas_getRenderFile(lua_State*) */

void lua_cocos2dx_ui_TextAtlas_getRenderFile(lua_State *param_1)

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
                    /* try { // try from 00976650 to 00a7669f has its CatchHandler @ 00976650
                       catch() { ... } // from try @ 00976650 with catch @ 00976650
                       catch() { ... } // from try @ 009766d4 with catch @ 00976650
                       catch() { ... } // from try @ 0097671c with catch @ 00976650 */
  lVar4 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
                    /* try { // try from 009766a0 to 00a766b7 has its CatchHandler @ 00976760 */
    cocos2d::ui::TextAtlas::getRenderFile();
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
                    /* try { // try from 009766bc to 00a766d3 has its CatchHandler @ 0097675c */
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d9d9f,
               iVar2 + -1,0);
    uVar3 = 0;
  }
                    /* try { // try from 009766d4 to 00a76707 has its CatchHandler @ 00976650 */
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

