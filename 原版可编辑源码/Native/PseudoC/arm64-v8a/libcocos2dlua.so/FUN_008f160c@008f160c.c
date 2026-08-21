
undefined8 FUN_008f160c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 008f165c to 009f16af has its CatchHandler @ 008f165c
                       catch() { ... } // from try @ 008f165c with catch @ 008f165c
                       catch() { ... } // from try @ 008f176c with catch @ 008f165c
                       catch() { ... } // from try @ 008f17cc with catch @ 008f165c */
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"fairygui.Window:setBringToFrontOnClick");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_Window_setBringToFrontOnClick\'",0);
    }
    else {
      *(bool *)(lVar3 + 0x2b9) = local_3c[0];
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Window:setBringToFrontOnClick",iVar2 + -1,1);
  }
                    /* try { // try from 008f16b0 to 009f16fb has its CatchHandler @ 008f180c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

