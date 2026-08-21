
undefined8 FUN_008df6f8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GComponent *this;
  ulong uVar3;
  char *pcVar4;
  Margin aMStack_48 [16];
  long local_38;
  
                    /* try { // try from 008df704 to 009df70b has its CatchHandler @ 008df7a8 */
                    /* try { // try from 008df70c to 009df7db has its CatchHandler @ 008df65c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  pcVar4 = (char *)(ulong)(iVar2 - 1U);
  if (iVar2 - 1U == 1) {
    fairygui::Margin::Margin(aMStack_48);
    uVar3 = luaval_to_margin(param_1,2,aMStack_48,pcVar4);
    if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 008df6e0 with catch @ 008df794 */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_setMargin\'",0);
    }
    else {
      fairygui::GComponent::setMargin(this,aMStack_48);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:setMargin",pcVar4,1);
  }
                    /* catch() { ... } // from try @ 008df704 with catch @ 008df7a8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

