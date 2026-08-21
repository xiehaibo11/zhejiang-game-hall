
/* lua_cocos2dx_ui_TextField_setTextVerticalAlignment(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setTextVerticalAlignment(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TextField *pTVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009811ac to 00a81247 has its CatchHandler @ 00980f3c */
  pTVar3 = (TextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.TextField:setTextVerticalAlignment");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::TextField::setTextVerticalAlignment(pTVar3,local_3c);
                    /* catch() { ... } // from try @ 00981160 with catch @ 009811f8 */
      uVar5 = 1;
                    /* catch() { ... } // from try @ 00981178 with catch @ 009811fc */
      lua_settop(param_1,1);
      goto LAB_0098123c;
    }
                    /* catch() { ... } // from try @ 0098112c with catch @ 0098122c */
    tolua_error(param_1,&DAT_012dca77,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setTextVerticalAlignment",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0098123c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

