
/* lua_cocos2dx_ui_LayoutComponent_setPercentOnlyEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_LayoutComponent_setPercentOnlyEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayoutComponent *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00997bf4 to 00a97c03 has its CatchHandler @ 00997c68 */
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00997c04 to 00a97c83 has its CatchHandler @ 00997bbc */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.LayoutComponent:setPercentOnlyEnabled");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::LayoutComponent::setPercentOnlyEnabled(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00997c80;
    }
                    /* catch() { ... } // from try @ 00997bf4 with catch @ 00997c68 */
    tolua_error(param_1,0x12e188f,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e1864,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00997c80:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

