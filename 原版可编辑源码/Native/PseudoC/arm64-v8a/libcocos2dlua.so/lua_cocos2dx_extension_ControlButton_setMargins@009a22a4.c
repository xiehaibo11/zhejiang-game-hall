
/* lua_cocos2dx_extension_ControlButton_setMargins(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlButton_setMargins(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_int32(param_1,2,&iStack_4c,"cc.ControlButton:setMargins");
    uVar5 = luaval_to_int32(param_1,3,&local_50,"cc.ControlButton:setMargins");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x730))(plVar3,iStack_4c,local_50);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_009a238c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_setMargins\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:setMargins",iVar2 + -1,2);
  }
                    /* try { // try from 009a2388 to 00aa2407 has its CatchHandler @ 009a2388
                       catch() { ... } // from try @ 009a2388 with catch @ 009a2388
                       catch() { ... } // from try @ 009a275c with catch @ 009a2388
                       catch() { ... } // from try @ 009a2908 with catch @ 009a2388 */
  uVar6 = 0;
LAB_009a238c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

