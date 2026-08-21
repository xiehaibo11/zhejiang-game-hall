
/* lua_cocos2dx_extension_ControlButton_getTitleColorForState(lua_State*) */

void lua_cocos2dx_extension_ControlButton_getTitleColorForState(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined2 local_40;
  undefined1 local_3e;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009a18e4 to 00aa19df has its CatchHandler @ 009a1538 */
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.ControlButton:getTitleColorForState");
    if ((uVar4 & 1) != 0) {
      uVar5 = (**(code **)(*plVar3 + 0x6c8))(plVar3,local_3c);
      local_40 = (undefined2)uVar5;
      local_3e = (undefined1)((ulong)uVar5 >> 0x10);
      color3b_to_luaval(param_1,(Color3B *)&local_40);
      uVar5 = 1;
      goto LAB_009a199c;
    }
                    /* catch() { ... } // from try @ 009a164c with catch @ 009a1984 */
                    /* catch() { ... } // from try @ 009a1610 with catch @ 009a1994 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_getTitleColorForState\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 009a18bc with catch @ 009a1974 */
                    /* catch() { ... } // from try @ 009a1800 with catch @ 009a1978 */
                    /* catch() { ... } // from try @ 009a1730 with catch @ 009a197c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:getTitleColorForState",iVar2 + -1,1);
                    /* catch() { ... } // from try @ 009a16fc with catch @ 009a1980 */
  }
                    /* catch() { ... } // from try @ 009a15ac with catch @ 009a1998 */
  uVar5 = 0;
LAB_009a199c:
                    /* catch() { ... } // from try @ 009a1830 with catch @ 009a199c */
                    /* catch() { ... } // from try @ 009a1654 with catch @ 009a19a0 */
                    /* catch() { ... } // from try @ 009a1738 with catch @ 009a19a4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

