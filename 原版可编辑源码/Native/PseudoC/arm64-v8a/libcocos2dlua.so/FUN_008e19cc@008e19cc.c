
undefined8 FUN_008e19cc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *this;
  ulong uVar3;
  ulong uVar4;
  int local_50;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GList *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008e1a04 to 009e1a3b has its CatchHandler @ 008e1ac0 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"fairygui.GList:resizeToFit");
                    /* try { // try from 008e1a6c to 009e1a7f has its CatchHandler @ 008e1ac0 */
    uVar4 = luaval_to_int32(param_1,3,&local_50,"fairygui.GList:resizeToFit");
                    /* try { // try from 008e1a80 to 009e1adb has its CatchHandler @ 008e19b4 */
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      fairygui::GList::resizeToFit(this,local_4c,local_50);
      goto LAB_008e1ad0;
    }
  }
  else {
    if (iVar2 != 2) {
                    /* catch() { ... } // from try @ 008e1a04 with catch @ 008e1ac0
                       catch() { ... } // from try @ 008e1a6c with catch @ 008e1ac0 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.GList:resizeToFit",iVar2 + -1,1);
      goto LAB_008e1ad0;
    }
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"fairygui.GList:resizeToFit");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 008e1a3c to 009e1a6b has its CatchHandler @ 008e19b4 */
      fairygui::GList::resizeToFit(this,local_4c,0);
      goto LAB_008e1ad0;
    }
  }
  tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_resizeToFit\'",0);
LAB_008e1ad0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

