
/* lua_cocos2dx_ui_LayoutComponent_setPositionPercentX(lua_State*) */

undefined4 lua_cocos2dx_ui_LayoutComponent_setPositionPercentX(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayoutComponent *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 0099789c to 00a978d3 has its CatchHandler @ 0099789c
                       catch() { ... } // from try @ 0099789c with catch @ 0099789c
                       catch() { ... } // from try @ 009978e4 with catch @ 0099789c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009978d4 to 00a978e3 has its CatchHandler @ 00997948 */
                    /* try { // try from 009978e4 to 00a97963 has its CatchHandler @ 0099789c */
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.LayoutComponent:setPositionPercentX");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::LayoutComponent::setPositionPercentX(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00997948;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_LayoutComponent_setPositionPercentX\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:setPositionPercentX",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00997948:
                    /* catch() { ... } // from try @ 009978d4 with catch @ 00997948 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00997964 to 00a9799b has its CatchHandler @ 00997964
                       catch() { ... } // from try @ 00997964 with catch @ 00997964
                       catch() { ... } // from try @ 009979ac with catch @ 00997964 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

