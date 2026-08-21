
/* lua_cocos2dx_ui_LayoutComponent_setSizeHeight(lua_State*) */

undefined4 lua_cocos2dx_ui_LayoutComponent_setSizeHeight(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayoutComponent *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0099809c to 00a980eb has its CatchHandler @ 009981ac */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.LayoutComponent:setSizeHeight");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::LayoutComponent::setSizeHeight(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00998118;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_LayoutComponent_setSizeHeight\'",0)
    ;
  }
  else {
                    /* try { // try from 009980ec to 00a9811b has its CatchHandler @ 00998044 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:setSizeHeight",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00998118:
                    /* try { // try from 0099811c to 00a9812f has its CatchHandler @ 009981ac */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00998130 to 00a98203 has its CatchHandler @ 00998044 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

