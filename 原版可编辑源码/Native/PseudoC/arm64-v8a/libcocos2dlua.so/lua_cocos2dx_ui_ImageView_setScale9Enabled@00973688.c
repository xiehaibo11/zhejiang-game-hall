
/* lua_cocos2dx_ui_ImageView_setScale9Enabled(lua_State*) */

undefined4 lua_cocos2dx_ui_ImageView_setScale9Enabled(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = (bool)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
                    /* catch() { ... } // from try @ 00973638 with catch @ 009736d0 */
                    /* catch() { ... } // from try @ 00973650 with catch @ 009736d4 */
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"ccui.ImageView:setScale9Enabled");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::ImageView::setScale9Enabled(bVar2);
      uVar5 = 1;
                    /* catch() { ... } // from try @ 00973604 with catch @ 00973704 */
      lua_settop(param_1,1);
      goto LAB_00973744;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ImageView_setScale9Enabled\'",0);
  }
  else {
                    /* try { // try from 00973720 to 00a7375f has its CatchHandler @ 00973720
                       catch() { ... } // from try @ 00973720 with catch @ 00973720
                       catch() { ... } // from try @ 00973890 with catch @ 00973720
                       catch() { ... } // from try @ 00973938 with catch @ 00973720 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ImageView:setScale9Enabled",iVar3 + -1,1);
  }
  uVar5 = 0;
LAB_00973744:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00973760 to 00a7379b has its CatchHandler @ 00973964 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

