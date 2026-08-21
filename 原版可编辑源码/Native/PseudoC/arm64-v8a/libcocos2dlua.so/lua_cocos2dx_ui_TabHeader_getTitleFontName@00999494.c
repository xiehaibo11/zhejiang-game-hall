
/* lua_cocos2dx_ui_TabHeader_getTitleFontName(lua_State*) */

void lua_cocos2dx_ui_TabHeader_getTitleFontName(lua_State *param_1)

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
  
                    /* try { // try from 00999498 to 00a994bf has its CatchHandler @ 009993ac */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009994c0 to 00a994d3 has its CatchHandler @ 00999540 */
  tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 0) {
    cocos2d::ui::TabHeader::getTitleFontName();
    uVar1 = (ulong)(local_50[0] >> 1);
    pvVar3 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pvVar3 = local_40;
    }
    lua_pushlstring(param_1,pvVar3,uVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00999400 with catch @ 00999540
                       catch(type#1 @ 00000000) { ... } // from try @ 0099945c with catch @ 00999540
                       catch(type#1 @ 00000000) { ... } // from try @ 0099948c with catch @ 00999540
                       catch(type#1 @ 00000000) { ... } // from try @ 009994c0 with catch @ 00999540
                        */
    uVar5 = 1;
  }
  else {
                    /* try { // try from 009994e8 to 00a994eb has its CatchHandler @ 00999590 */
                    /* try { // try from 009994ec to 00a9955b has its CatchHandler @ 009993ac */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TabHeader:getTitleFontName",iVar4 + -1,0);
    uVar5 = 0;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00999478 with catch @ 00999544
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00999440 with catch @ 00999548
                        */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* try { // try from 0099955c to 00a9955f has its CatchHandler @ 0099958c */
                    /* try { // try from 00999560 to 00a995a3 has its CatchHandler @ 009993ac */
  return;
}

