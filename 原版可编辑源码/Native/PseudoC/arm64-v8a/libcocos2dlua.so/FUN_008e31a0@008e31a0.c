
undefined8 FUN_008e31a0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int local_3c;
  long local_38;
  
                    /* catch() { ... } // from try @ 008e315c with catch @ 008e31a0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GList:setSelectionMode");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_setSelectionMode\'",0)
      ;
    }
    else {
      *(int *)(lVar3 + 0x304) = local_3c;
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:setSelectionMode",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

