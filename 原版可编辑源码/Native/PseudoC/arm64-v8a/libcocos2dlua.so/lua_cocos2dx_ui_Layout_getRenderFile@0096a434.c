
/* lua_cocos2dx_ui_Layout_getRenderFile(lua_State*) */

void lua_cocos2dx_ui_Layout_getRenderFile(lua_State *param_1)

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
    cocos2d::ui::Layout::getRenderFile();
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 0096a488 to 00a6a5b7 has its CatchHandler @ 0096a488
                       catch() { ... } // from try @ 0096a488 with catch @ 0096a488
                       catch() { ... } // from try @ 0096a638 with catch @ 0096a488 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d7710,
               iVar2 + -1,0);
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

