
/* lua_cocos2dx_ui_Text_setTouchScaleChangeEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_Text_setTouchScaleChangeEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Text *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
                    /* try { // try from 00974884 to 00a748b7 has its CatchHandler @ 00974908 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Text *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009748b8 to 00a74953 has its CatchHandler @ 009746d8 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.Text:setTouchScaleChangeEnabled");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Text::setTouchScaleChangeEnabled(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
                    /* catch() { ... } // from try @ 0097486c with catch @ 00974904 */
      goto LAB_00974940;
    }
                    /* catch() { ... } // from try @ 00974838 with catch @ 00974938 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Text_setTouchScaleChangeEnabled\'",
                0);
  }
  else {
                    /* catch() { ... } // from try @ 00974884 with catch @ 00974908 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Text:setTouchScaleChangeEnabled",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00974940:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

