
/* lua_cocos2dx_ui_Button_getTitleText(lua_State*) */

void lua_cocos2dx_ui_Button_getTitleText(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 0096be00 to 00a6be33 has its CatchHandler @ 0096be84 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
    cocos2d::ui::Button::getTitleText();
    uVar1 = (ulong)(local_50[0] >> 1);
    pvVar3 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pvVar3 = local_40;
    }
                    /* catch() { ... } // from try @ 0096bde8 with catch @ 0096be80 */
                    /* catch() { ... } // from try @ 0096be00 with catch @ 0096be84 */
    lua_pushlstring(param_1,pvVar3,uVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar5 = 1;
  }
  else {
                    /* try { // try from 0096be34 to 00a6becf has its CatchHandler @ 0096bbf4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:getTitleText",iVar4 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* catch() { ... } // from try @ 0096bdb4 with catch @ 0096beb4 */
  return;
}

