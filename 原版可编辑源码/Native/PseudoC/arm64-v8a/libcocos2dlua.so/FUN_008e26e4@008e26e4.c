
void FUN_008e26e4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *this;
  ulong uVar3;
  undefined8 uVar4;
  int local_3c;
  long local_38;
  
                    /* try { // try from 008e26ec to 009e2703 has its CatchHandler @ 008e2eec */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GList *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008e2714 to 009e273b has its CatchHandler @ 008e2ee8 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GList:itemIndexToChildIndex");
    if ((uVar3 & 1) != 0) {
      iVar2 = fairygui::GList::itemIndexToChildIndex(this,local_3c);
                    /* try { // try from 008e2754 to 009e276f has its CatchHandler @ 008e2f88 */
      tolua_pushnumber((double)iVar2,param_1);
      uVar4 = 1;
      goto LAB_008e27a0;
    }
                    /* try { // try from 008e2790 to 009e27a7 has its CatchHandler @ 008e2f54 */
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_itemIndexToChildIndex\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:itemIndexToChildIndex",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_008e27a0:
                    /* try { // try from 008e27ac to 009e27c3 has its CatchHandler @ 008e2f30 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

