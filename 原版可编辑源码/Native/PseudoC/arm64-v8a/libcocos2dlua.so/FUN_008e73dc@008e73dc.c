
undefined8 FUN_008e73dc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008e741c to 009e742f has its CatchHandler @ 008e7468 */
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"fairygui.GTextField:setSingleLine");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,&DAT_012aabc7,0);
    }
    else {
                    /* try { // try from 008e7440 to 009e7447 has its CatchHandler @ 008e7464 */
                    /* try { // try from 008e7448 to 009e7483 has its CatchHandler @ 008e7314 */
      (**(code **)(*plVar3 + 200))(plVar3,local_3c[0]);
    }
  }
  else {
                    /* catch() { ... } // from try @ 008e738c with catch @ 008e7464
                       catch() { ... } // from try @ 008e7440 with catch @ 008e7464 */
                    /* catch() { ... } // from try @ 008e7368 with catch @ 008e7468
                       catch() { ... } // from try @ 008e741c with catch @ 008e7468 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextField:setSingleLine",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

