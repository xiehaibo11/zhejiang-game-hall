
undefined8 FUN_008e2bbc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *this;
  ulong uVar3;
  int local_3c;
  long local_38;
  
                    /* try { // try from 008e2bc0 to 009e2bdf has its CatchHandler @ 008e2f0c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008e2be4 to 009e2bfb has its CatchHandler @ 008e2ef0 */
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008e2c00 to 009e2c17 has its CatchHandler @ 008e2ee0 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GList:handleArrowKey");
                    /* try { // try from 008e2c1c to 009e2c33 has its CatchHandler @ 008e2ed4 */
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_handleArrowKey\'",0);
    }
    else {
      fairygui::GList::handleArrowKey(this,local_3c);
    }
  }
  else {
                    /* try { // try from 008e2c38 to 009e2c4f has its CatchHandler @ 008e2ed0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:handleArrowKey",iVar2 + -1,1);
  }
                    /* try { // try from 008e2c68 to 009e2c87 has its CatchHandler @ 008e2ecc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008e2c88 to 009e2fdb has its CatchHandler @ 008e24b0 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

