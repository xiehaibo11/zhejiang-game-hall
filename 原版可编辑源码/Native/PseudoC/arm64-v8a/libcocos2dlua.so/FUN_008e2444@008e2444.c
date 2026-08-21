
undefined8 FUN_008e2444(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *pGVar3;
  ulong uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pGVar3 = (GList *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GList:setAlign");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_setAlign\'",0);
    }
    else {
                    /* try { // try from 008e24b0 to 009e2527 has its CatchHandler @ 008e24b0
                       catch() { ... } // from try @ 008e24b0 with catch @ 008e24b0
                       catch() { ... } // from try @ 008e2c88 with catch @ 008e24b0 */
      fairygui::GList::setAlign(pGVar3,local_3c);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:setAlign",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

