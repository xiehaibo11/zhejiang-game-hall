
undefined8 FUN_008e62e4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GGroup *this;
  ulong uVar3;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 008e62fc to 009e630f has its CatchHandler @ 008e6394 */
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GGroup *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008e6314 to 009e6347 has its CatchHandler @ 008e6398 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GGroup:setMainGridIndex");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GGroup_setMainGridIndex\'",0
                 );
    }
    else {
                    /* try { // try from 008e6348 to 009e63e3 has its CatchHandler @ 008e6138 */
      fairygui::GGroup::setMainGridIndex(this,local_3c);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GGroup:setMainGridIndex",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 008e62fc with catch @ 008e6394 */
                    /* catch() { ... } // from try @ 008e6314 with catch @ 008e6398 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

