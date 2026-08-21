
/* lua_cocos2dx_ui_TabHeader_setTitleFontName(lua_State*) */

bool lua_cocos2dx_ui_TabHeader_setTitleFontName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TabHeader *this;
  ulong uVar3;
  bool bVar4;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00999310 to 00a993ab has its CatchHandler @ 00999010 */
  this = (TabHeader *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.TabHeader:setTitleFontName");
                    /* catch() { ... } // from try @ 009992c4 with catch @ 0099935c */
    bVar4 = (uVar3 & 1) == 0;
    if (bVar4) {
                    /* try { // try from 009993ac to 00a993ff has its CatchHandler @ 009993ac
                       catch(type#1 @ 00000000) { ... } // from try @ 009993ac with catch @ 009993ac
                       catch(type#1 @ 00000000) { ... } // from try @ 00999498 with catch @ 009993ac
                       catch(type#1 @ 00000000) { ... } // from try @ 009994ec with catch @ 009993ac
                       catch(type#1 @ 00000000) { ... } // from try @ 00999560 with catch @ 009993ac
                        */
      tolua_error(param_1,&DAT_012e1f81,0);
    }
    else {
                    /* catch() { ... } // from try @ 009992dc with catch @ 00999360 */
      cocos2d::ui::TabHeader::setTitleFontName(this,(basic_string *)&local_50);
      lua_settop(param_1,1);
    }
    bVar4 = !bVar4;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* catch() { ... } // from try @ 00999290 with catch @ 00999390 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TabHeader:setTitleFontName",iVar2 + -1,1);
    bVar4 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

