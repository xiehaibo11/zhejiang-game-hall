
/* lua_cocos2dx_ui_Widget_setFlippedY(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_setFlippedY(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00967b88 to 00a67b8f has its CatchHandler @ 00967ba4 */
                    /* try { // try from 00967b90 to 00a67c93 has its CatchHandler @ 009678f4 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 00967a30 with catch @ 00967ba4
                       catch() { ... } // from try @ 00967b88 with catch @ 00967ba4 */
                    /* catch() { ... } // from try @ 00967a14 with catch @ 00967ba8 */
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"ccui.Widget:setFlippedY");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x5a8))(plVar3,local_3c[0]);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00967c1c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Widget_setFlippedY\'",0);
  }
  else {
                    /* catch() { ... } // from try @ 009679f0 with catch @ 00967bf8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:setFlippedY",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 009679cc with catch @ 00967c18 */
  uVar5 = 0;
LAB_00967c1c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009679a8 with catch @ 00967c38 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

