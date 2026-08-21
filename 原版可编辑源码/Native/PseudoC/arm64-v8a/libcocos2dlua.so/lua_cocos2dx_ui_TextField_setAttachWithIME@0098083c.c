
/* lua_cocos2dx_ui_TextField_setAttachWithIME(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setAttachWithIME(lua_State *param_1)

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
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.TextField:setAttachWithIME");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::TextField::setAttachWithIME(this,local_3c[0]);
                    /* try { // try from 009808b4 to 00a808cb has its CatchHandler @ 009809a8 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009808f8;
    }
                    /* try { // try from 009808e4 to 00a808ff has its CatchHandler @ 009809a4 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_TextField_setAttachWithIME\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setAttachWithIME",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009808f8:
                    /* try { // try from 00980900 to 00a809c3 has its CatchHandler @ 009806dc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

