
/* lua_cocos2dx_ui_TabHeader_setTitleFontSize(lua_State*) */

undefined4 lua_cocos2dx_ui_TabHeader_setTitleFontSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TabHeader *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TabHeader *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.TabHeader:setTitleFontSize");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::TabHeader::setTitleFontSize(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009992c8;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_TabHeader_setTitleFontSize\'",0);
  }
  else {
                    /* try { // try from 00999290 to 00a992c3 has its CatchHandler @ 00999390 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e1ef6,
               iVar2 + -1,1);
  }
                    /* try { // try from 009992c4 to 00a992d7 has its CatchHandler @ 0099935c */
  uVar4 = 0;
LAB_009992c8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009992dc to 00a9930f has its CatchHandler @ 00999360 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

