
/* lua_cocos2dx_ui_Widget_setEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_setEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
                    /* catch() { ... } // from try @ 00967984 with catch @ 00967c58 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 00967960 with catch @ 00967c78 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00967c94 to 00a67cdf has its CatchHandler @ 00967c94
                       catch() { ... } // from try @ 00967c94 with catch @ 00967c94
                       catch() { ... } // from try @ 00967ce4 with catch @ 00967c94 */
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"ccui.Widget:setEnabled");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x580))(plVar3,local_3c[0]);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00967d0c;
    }
    tolua_error(param_1,&DAT_012d6cdc,0);
  }
  else {
                    /* try { // try from 00967ce0 to 00a67ce3 has its CatchHandler @ 00967d18 */
                    /* try { // try from 00967ce4 to 00a67d2b has its CatchHandler @ 00967c94 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d6cc5,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00967d0c:
                    /* catch() { ... } // from try @ 00967ce0 with catch @ 00967d18 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00967d2c to 00a67e43 has its CatchHandler @ 00967d2c
                       catch() { ... } // from try @ 00967d2c with catch @ 00967d2c
                       catch() { ... } // from try @ 00967ec4 with catch @ 00967d2c */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

