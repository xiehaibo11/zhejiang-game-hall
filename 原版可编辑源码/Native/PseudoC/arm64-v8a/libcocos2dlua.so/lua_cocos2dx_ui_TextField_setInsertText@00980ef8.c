
/* lua_cocos2dx_ui_TextField_setInsertText(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setInsertText(lua_State *param_1)

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
                    /* catch() { ... } // from try @ 00980ef0 with catch @ 00980f28 */
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00980f3c to 00a8112b has its CatchHandler @ 00980f3c
                       catch() { ... } // from try @ 00980f3c with catch @ 00980f3c
                       catch() { ... } // from try @ 009811ac with catch @ 00980f3c */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.TextField:setInsertText");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::TextField::setInsertText(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00980fb4;
    }
    tolua_error(param_1,&DAT_012dc98a,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setInsertText",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00980fb4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

