
/* lua_cocos2dx_ui_TextField_setDetachWithIME(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setDetachWithIME(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TextField *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.TextField:setDetachWithIME");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::TextField::setDetachWithIME(this,local_3c[0]);
                    /* try { // try from 00982524 to 00a82527 has its CatchHandler @ 00982540 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0098256c;
    }
    tolua_error(param_1,0x12dd136,0);
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00982524 with catch @ 00982540
                        */
                    /* try { // try from 00982544 to 00a82643 has its CatchHandler @ 00982544
                       catch() { ... } // from try @ 00982544 with catch @ 00982544
                       catch() { ... } // from try @ 00982680 with catch @ 00982544 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dd116,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0098256c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

