
undefined8 FUN_008dfed8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GComponent *this;
  ulong uVar3;
  ulong uVar4;
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_int32(param_1,2,&iStack_4c,"fairygui.GComponent:swapChildrenAt");
    uVar4 = luaval_to_int32(param_1,3,&local_50,"fairygui.GComponent:swapChildrenAt");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_swapChildrenAt\'"
                  ,0);
    }
    else {
                    /* try { // try from 008dff60 to 009dff67 has its CatchHandler @ 008e009c */
      fairygui::GComponent::swapChildrenAt(this,iStack_4c,local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:swapChildrenAt",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 008dffbc to 009dffc3 has its CatchHandler @ 008e008c */
                    /* try { // try from 008dffc4 to 009e00af has its CatchHandler @ 008dfe78 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

