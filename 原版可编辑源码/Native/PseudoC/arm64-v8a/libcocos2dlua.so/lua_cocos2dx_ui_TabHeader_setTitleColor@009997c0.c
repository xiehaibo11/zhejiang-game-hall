
/* lua_cocos2dx_ui_TabHeader_setTitleColor(lua_State*) */

undefined4 lua_cocos2dx_ui_TabHeader_setTitleColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Color4B *pCVar3;
  ulong uVar4;
  undefined4 uVar5;
  Color4B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009997e4 to 00a99833 has its CatchHandler @ 009997e4
                       catch() { ... } // from try @ 009997e4 with catch @ 009997e4
                       catch() { ... } // from try @ 0099987c with catch @ 009997e4
                       catch() { ... } // from try @ 009998fc with catch @ 009997e4 */
  pCVar3 = (Color4B *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color4B::Color4B(aCStack_40);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_40,"ccui.TabHeader:setTitleColor");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 00999834 to 00a9984b has its CatchHandler @ 00999914 */
      cocos2d::ui::TabHeader::setTitleColor(pCVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00999884;
    }
                    /* try { // try from 0099987c to 00a998a3 has its CatchHandler @ 009997e4 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_TabHeader_setTitleColor\'",
                0);
  }
  else {
                    /* try { // try from 00999850 to 00a9987b has its CatchHandler @ 00999910 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TabHeader:setTitleColor",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00999884:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009998a4 to 00a998b7 has its CatchHandler @ 00999914 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

