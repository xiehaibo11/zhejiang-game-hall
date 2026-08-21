
/* lua_cocos2dx_ui_LayoutComponent_setPositionPercentY(lua_State*) */

undefined4 lua_cocos2dx_ui_LayoutComponent_setPositionPercentY(lua_State *param_1)

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
                    /* catch() { ... } // from try @ 00997744 with catch @ 009977b8 */
  this = (LayoutComponent *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009977d4 to 00a9780b has its CatchHandler @ 009977d4
                       catch() { ... } // from try @ 009977d4 with catch @ 009977d4
                       catch() { ... } // from try @ 0099781c with catch @ 009977d4 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.LayoutComponent:setPositionPercentY");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 0099780c to 00a9781b has its CatchHandler @ 00997880 */
      cocos2d::ui::LayoutComponent::setPositionPercentY(this,(float)local_40);
      uVar4 = 1;
                    /* try { // try from 0099781c to 00a9789b has its CatchHandler @ 009977d4 */
      lua_settop(param_1,1);
      goto LAB_0099785c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_LayoutComponent_setPositionPercentY\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LayoutComponent:setPositionPercentY",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0099785c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0099780c with catch @ 00997880 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

