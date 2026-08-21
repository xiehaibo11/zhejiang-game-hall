
undefined8 FUN_008d95d4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008d95fc to 009d9607 has its CatchHandler @ 008d9674 */
  iVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008d960c to 009d9617 has its CatchHandler @ 008d9664 */
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 2) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GObject:startDrag");
    if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 008d95fc with catch @ 008d9674 */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_startDrag\'",0);
      goto LAB_008d9688;
    }
  }
  else {
                    /* try { // try from 008d9618 to 009d97af has its CatchHandler @ 008d9248 */
    if (iVar3 + -1 != 0) {
                    /* catch() { ... } // from try @ 008d951c with catch @ 008d9660 */
                    /* catch() { ... } // from try @ 008d960c with catch @ 008d9664 */
                    /* catch() { ... } // from try @ 008d9478 with catch @ 008d9668 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.GObject:startDrag",iVar3 + -1,0);
      goto LAB_008d9688;
    }
  }
  fairygui::GObject::startDrag(iVar2);
LAB_008d9688:
                    /* catch() { ... } // from try @ 008d94cc with catch @ 008d9688 */
                    /* catch() { ... } // from try @ 008d959c with catch @ 008d9694 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 008d9408 with catch @ 008d96ac */
  return 0;
}

