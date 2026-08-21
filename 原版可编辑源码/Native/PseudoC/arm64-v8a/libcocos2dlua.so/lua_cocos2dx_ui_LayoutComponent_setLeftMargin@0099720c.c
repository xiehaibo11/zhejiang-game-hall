
/* lua_cocos2dx_ui_LayoutComponent_setLeftMargin(lua_State*) */

undefined4 lua_cocos2dx_ui_LayoutComponent_setLeftMargin(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayoutComponent *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 00997218 to 00a972b3 has its CatchHandler @ 00996ea0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 009971cc with catch @ 00997264 */
                    /* catch() { ... } // from try @ 009971e4 with catch @ 00997268 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.LayoutComponent:setLeftMargin");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::LayoutComponent::setLeftMargin(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009972cc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_LayoutComponent_setLeftMargin\'",0)
    ;
  }
  else {
                    /* catch() { ... } // from try @ 00997198 with catch @ 00997298 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e13f9,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009972cc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

