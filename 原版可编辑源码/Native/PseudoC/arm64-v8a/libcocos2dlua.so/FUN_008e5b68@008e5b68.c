
undefined8 FUN_008e5b68(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GGroup *this;
  ulong uVar3;
  int local_3c;
  long local_38;
  
                    /* try { // try from 008e5b78 to 009e5bb7 has its CatchHandler @ 008e5c3c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GGroup *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 008e5bb8 to 009e5be7 has its CatchHandler @ 008e5b28 */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GGroup:setColumnGap");
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 008e5bfc to 009e5c57 has its CatchHandler @ 008e5b28 */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GGroup_setColumnGap\'",0);
    }
    else {
      fairygui::GGroup::setColumnGap(this,local_3c);
    }
  }
  else {
                    /* try { // try from 008e5be8 to 009e5bfb has its CatchHandler @ 008e5c3c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GGroup:setColumnGap",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

