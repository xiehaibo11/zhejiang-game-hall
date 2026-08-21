
undefined8 FUN_008e159c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *this;
  ulong uVar3;
  int local_3c;
  long local_38;
  
                    /* try { // try from 008e159c to 009e15cb has its CatchHandler @ 008e1500 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GList *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008e15cc to 009e15df has its CatchHandler @ 008e1620 */
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008e15e0 to 009e163b has its CatchHandler @ 008e1500 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GList:removeSelection");
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 008e163c to 009e168b has its CatchHandler @ 008e163c
                       catch() { ... } // from try @ 008e163c with catch @ 008e163c
                       catch() { ... } // from try @ 008e16c4 with catch @ 008e163c
                       catch() { ... } // from try @ 008e1708 with catch @ 008e163c */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_removeSelection\'",0);
    }
    else {
      fairygui::GList::removeSelection(this,local_3c);
    }
  }
  else {
                    /* catch() { ... } // from try @ 008e1550 with catch @ 008e1620
                       catch() { ... } // from try @ 008e15cc with catch @ 008e1620 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:removeSelection",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

