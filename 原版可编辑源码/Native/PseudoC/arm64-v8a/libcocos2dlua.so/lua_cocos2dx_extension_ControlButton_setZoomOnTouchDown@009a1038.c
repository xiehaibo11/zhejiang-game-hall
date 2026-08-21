
/* lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
                    /* try { // try from 009a103c to 00aa1063 has its CatchHandler @ 009a10c4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009a1064 to 00aa10e3 has its CatchHandler @ 009a0f64 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"cc.ControlButton:setZoomOnTouchDown");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x790))(plVar3,local_3c[0]);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009a10fc;
    }
                    /* try { // try from 009a10e4 to 00aa1133 has its CatchHandler @ 009a10e4
                       catch() { ... } // from try @ 009a10e4 with catch @ 009a10e4
                       catch() { ... } // from try @ 009a115c with catch @ 009a10e4 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 009a103c with catch @ 009a10c4 */
                    /* catch() { ... } // from try @ 009a0fd4 with catch @ 009a10c8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:setZoomOnTouchDown",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009a10fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

