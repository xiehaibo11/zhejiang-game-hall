
/* lua_cocos2dx_ui_Text_setTextVerticalAlignment(lua_State*) */

undefined4 lua_cocos2dx_ui_Text_setTextVerticalAlignment(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Text *pTVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0097468c to 00a7468f has its CatchHandler @ 009746c4 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00974690 to 00a746d7 has its CatchHandler @ 00974640 */
  pTVar3 = (Text *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 0097468c with catch @ 009746c4 */
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.Text:setTextVerticalAlignment");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 009746d8 to 00a74837 has its CatchHandler @ 009746d8
                       catch() { ... } // from try @ 009746d8 with catch @ 009746d8
                       catch() { ... } // from try @ 009748b8 with catch @ 009746d8 */
      cocos2d::ui::Text::setTextVerticalAlignment(pTVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00974730;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Text_setTextVerticalAlignment\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d968d,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00974730:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

