
/* lua_cocos2dx_extension_Control_getTouchLocation(lua_State*) */

void lua_cocos2dx_extension_Control_getTouchLocation(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0099fec8 to 00a9feef has its CatchHandler @ 0099ff80 */
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0099fef0 to 00a9ffd7 has its CatchHandler @ 0099fbe0 */
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Touch",0), (uVar4 & 1) != 0)) {
      uVar5 = tolua_tousertype(param_1,2,0);
      local_40[0] = (**(code **)(*plVar3 + 0x6a0))(plVar3,uVar5);
      vec2_to_luaval(param_1,(Vec2 *)local_40);
      uVar5 = 1;
      goto LAB_0099ff78;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_Control_getTouchLocation\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Control:getTouchLocation",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0099ff78:
                    /* catch() { ... } // from try @ 0099fec8 with catch @ 0099ff80 */
                    /* catch() { ... } // from try @ 0099fe34 with catch @ 0099ff84 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0099fd54 with catch @ 0099ff88 */
                    /* catch() { ... } // from try @ 0099fc90 with catch @ 0099ff8c */
                    /* catch() { ... } // from try @ 0099fc54 with catch @ 0099ff90 */
                    /* catch() { ... } // from try @ 0099fe64 with catch @ 0099ff94 */
                    /* catch() { ... } // from try @ 0099fccc with catch @ 0099ff98 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0099fd8c with catch @ 0099ff9c */
  __stack_chk_fail(uVar5);
}

