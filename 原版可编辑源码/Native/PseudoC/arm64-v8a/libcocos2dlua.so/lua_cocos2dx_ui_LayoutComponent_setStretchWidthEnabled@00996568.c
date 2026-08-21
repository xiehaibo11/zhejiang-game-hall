
/* lua_cocos2dx_ui_LayoutComponent_setStretchWidthEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_LayoutComponent_setStretchWidthEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayoutComponent *this;
  ulong uVar3;
  undefined4 uVar4;
  bool abStack_3c [4];
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009964cc with catch @ 00996578
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0099658c to 00a9658f has its CatchHandler @ 009965bc */
                    /* try { // try from 00996590 to 00a965d3 has its CatchHandler @ 00996454 */
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,abStack_3c,"ccui.LayoutComponent:setStretchWidthEnabled");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::LayoutComponent::setStretchWidthEnabled(this,abStack_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00996624;
    }
    tolua_error(param_1,&DAT_012e0e73,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:setStretchWidthEnabled",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00996624:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

