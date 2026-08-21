
/* lua_cocos2dx_ui_LayoutComponent_setPositionPercentYEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_LayoutComponent_setPositionPercentYEnabled(lua_State *param_1)

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
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.LayoutComponent:setPositionPercentYEnabled");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::LayoutComponent::setPositionPercentYEnabled(this,local_3c[0]);
      uVar4 = 1;
                    /* try { // try from 009973ec to 00a97423 has its CatchHandler @ 009973ec
                       catch() { ... } // from try @ 009973ec with catch @ 009973ec
                       catch() { ... } // from try @ 00997434 with catch @ 009973ec */
      lua_settop(param_1,1);
      goto LAB_0099742c;
    }
                    /* try { // try from 00997424 to 00a97433 has its CatchHandler @ 00997498 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_LayoutComponent_setPositionPercentYEnabled\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:setPositionPercentYEnabled",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0099742c:
                    /* try { // try from 00997434 to 00a974b3 has its CatchHandler @ 009973ec */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

