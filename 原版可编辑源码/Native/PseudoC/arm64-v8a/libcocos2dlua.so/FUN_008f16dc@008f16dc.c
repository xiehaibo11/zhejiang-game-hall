
undefined8 FUN_008f16dc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008f1708 to 009f176b has its CatchHandler @ 008f1810 */
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"fairygui.Window:setModal");
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 008f176c to 009f179f has its CatchHandler @ 008f165c */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_Window_setModal\'",0);
    }
    else {
      *(bool *)(lVar3 + 0x2b8) = local_3c[0];
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Window:setModal",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008f17a0 to 009f17b3 has its CatchHandler @ 008f180c */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

