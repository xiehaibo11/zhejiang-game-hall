
/* lua_cocos2dx_ui_LayoutComponent_setSizeWidth(lua_State*) */

undefined4 lua_cocos2dx_ui_LayoutComponent_setSizeWidth(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayoutComponent *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 00996ea0 to 00a97197 has its CatchHandler @ 00996ea0
                       catch() { ... } // from try @ 00996ea0 with catch @ 00996ea0
                       catch() { ... } // from try @ 00997218 with catch @ 00996ea0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.LayoutComponent:setSizeWidth");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::LayoutComponent::setSizeWidth(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00996f5c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_LayoutComponent_setSizeWidth\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:setSizeWidth",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00996f5c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

