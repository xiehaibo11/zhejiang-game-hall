
undefined8 FUN_008e1670(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *this;
  ulong uVar3;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008e168c to 009e16c3 has its CatchHandler @ 008e1748 */
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 008e16c4 to 009e16f3 has its CatchHandler @ 008e163c */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GList:setColumnGap");
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 008e1708 to 009e1763 has its CatchHandler @ 008e163c */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_setColumnGap\'",0);
    }
    else {
      fairygui::GList::setColumnGap(this,local_3c);
    }
  }
  else {
                    /* try { // try from 008e16f4 to 009e1707 has its CatchHandler @ 008e1748 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:setColumnGap",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

