
/* lua_cocos2dx_ui_TextField_setPasswordEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setPasswordEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TextField *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
                    /* try { // try from 00981740 to 00a81753 has its CatchHandler @ 009817d8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00981758 to 00a8178b has its CatchHandler @ 009817dc */
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.TextField:setPasswordEnabled");
                    /* try { // try from 0098178c to 00a81827 has its CatchHandler @ 00981624 */
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::TextField::setPasswordEnabled(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009817e8;
    }
                    /* catch() { ... } // from try @ 00981740 with catch @ 009817d8 */
                    /* catch() { ... } // from try @ 00981758 with catch @ 009817dc */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_TextField_setPasswordEnabled\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setPasswordEnabled",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009817e8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0098170c with catch @ 0098180c */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

