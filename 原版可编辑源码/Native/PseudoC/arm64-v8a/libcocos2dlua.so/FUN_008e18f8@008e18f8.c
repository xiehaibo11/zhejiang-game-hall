
undefined8 FUN_008e18f8(lua_State *param_1)

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
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GList:setVerticalAlign");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_setVerticalAlign\'",0)
      ;
    }
    else {
      fairygui::GList::setVerticalAlign(pGVar3,local_3c);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:setVerticalAlign",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008e19b4 to 009e1a03 has its CatchHandler @ 008e19b4
                       catch() { ... } // from try @ 008e19b4 with catch @ 008e19b4
                       catch() { ... } // from try @ 008e1a3c with catch @ 008e19b4
                       catch() { ... } // from try @ 008e1a80 with catch @ 008e19b4 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

