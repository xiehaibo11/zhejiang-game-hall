
/* lua_cocos2dx_ui_RichText_setWrapMode(lua_State*) */

undefined4 lua_cocos2dx_ui_RichText_setWrapMode(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RichText *pRVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0098d5b4 to 00a8d5c7 has its CatchHandler @ 0098d64c */
  pRVar3 = (RichText *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0098d5cc to 00a8d5ff has its CatchHandler @ 0098d650 */
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.RichText:setWrapMode");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::RichText::setWrapMode(pRVar3,local_3c);
                    /* try { // try from 0098d600 to 00a8d69b has its CatchHandler @ 0098cee0 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0098d648;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_RichText_setWrapMode\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichText:setWrapMode",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0098d648:
                    /* catch() { ... } // from try @ 0098d5b4 with catch @ 0098d64c */
                    /* catch() { ... } // from try @ 0098d5cc with catch @ 0098d650 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

