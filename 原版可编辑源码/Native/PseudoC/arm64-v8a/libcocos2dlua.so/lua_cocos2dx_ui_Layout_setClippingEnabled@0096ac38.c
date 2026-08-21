
/* lua_cocos2dx_ui_Layout_setClippingEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_Layout_setClippingEnabled(lua_State *param_1)

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
                    /* try { // try from 0096ac60 to 00a6acfb has its CatchHandler @ 0096aae0 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"ccui.Layout:setClippingEnabled");
    if ((uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 0096ac14 with catch @ 0096acac */
      (**(code **)(*plVar3 + 0x680))(plVar3,local_3c[0]);
                    /* catch() { ... } // from try @ 0096ac2c with catch @ 0096acb0 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0096acfc;
    }
    tolua_error(param_1,&DAT_012d7929,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Layout:setClippingEnabled",iVar2 + -1,1);
                    /* catch() { ... } // from try @ 0096abe0 with catch @ 0096ace0 */
  }
  uVar5 = 0;
LAB_0096acfc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

