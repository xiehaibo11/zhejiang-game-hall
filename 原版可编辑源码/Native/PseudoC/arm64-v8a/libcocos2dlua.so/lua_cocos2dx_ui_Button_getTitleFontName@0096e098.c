
/* lua_cocos2dx_ui_Button_getTitleFontName(lua_State*) */

void lua_cocos2dx_ui_Button_getTitleFontName(lua_State *param_1)

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
  
                    /* try { // try from 0096e0a4 to 00a6e13f has its CatchHandler @ 0096de34 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
    cocos2d::ui::Button::getTitleFontName();
    uVar1 = (ulong)(local_50[0] >> 1);
    pvVar3 = (void *)((ulong)local_50 | 1);
                    /* catch() { ... } // from try @ 0096e024 with catch @ 0096e124 */
    if ((local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pvVar3 = local_40;
    }
    lua_pushlstring(param_1,pvVar3,uVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar5 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 0096e058 with catch @ 0096e0f0 */
                    /* catch() { ... } // from try @ 0096e070 with catch @ 0096e0f4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:getTitleFontName",iVar4 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

