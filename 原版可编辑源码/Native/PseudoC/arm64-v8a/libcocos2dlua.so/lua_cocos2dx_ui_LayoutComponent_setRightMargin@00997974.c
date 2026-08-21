
/* lua_cocos2dx_ui_LayoutComponent_setRightMargin(lua_State*) */

undefined4 lua_cocos2dx_ui_LayoutComponent_setRightMargin(lua_State *param_1)

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
                    /* try { // try from 0099799c to 00a979ab has its CatchHandler @ 00997a10 */
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009979ac to 00a97a2b has its CatchHandler @ 00997964 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.LayoutComponent:setRightMargin");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::LayoutComponent::setRightMargin(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00997a34;
    }
                    /* try { // try from 00997a2c to 00a97a63 has its CatchHandler @ 00997a2c
                       catch() { ... } // from try @ 00997a2c with catch @ 00997a2c
                       catch() { ... } // from try @ 00997a74 with catch @ 00997a2c */
    tolua_error(param_1,0x12e176f,0);
  }
  else {
                    /* catch() { ... } // from try @ 0099799c with catch @ 00997a10 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e174b,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00997a34:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

