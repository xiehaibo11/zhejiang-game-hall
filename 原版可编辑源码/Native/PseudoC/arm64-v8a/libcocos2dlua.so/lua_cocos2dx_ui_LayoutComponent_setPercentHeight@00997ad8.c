
/* lua_cocos2dx_ui_LayoutComponent_setPercentHeight(lua_State*) */

undefined4 lua_cocos2dx_ui_LayoutComponent_setPercentHeight(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayoutComponent *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00997a64 with catch @ 00997ad8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00997af4 to 00a97b2b has its CatchHandler @ 00997af4
                       catch() { ... } // from try @ 00997af4 with catch @ 00997af4
                       catch() { ... } // from try @ 00997b3c with catch @ 00997af4 */
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00997b2c to 00a97b3b has its CatchHandler @ 00997ba0 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.LayoutComponent:setPercentHeight");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 00997b3c to 00a97bbb has its CatchHandler @ 00997af4 */
      cocos2d::ui::LayoutComponent::setPercentHeight(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00997b98;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_LayoutComponent_setPercentHeight\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:setPercentHeight",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00997b98:
                    /* catch() { ... } // from try @ 00997b2c with catch @ 00997ba0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00997bbc to 00a97bf3 has its CatchHandler @ 00997bbc
                       catch() { ... } // from try @ 00997bbc with catch @ 00997bbc
                       catch() { ... } // from try @ 00997c04 with catch @ 00997bbc */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

