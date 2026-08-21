
/* lua_cocos2dx_ui_TextField_setTouchAreaEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setTouchAreaEnabled(lua_State *param_1)

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
                    /* try { // try from 00982644 to 00a8264b has its CatchHandler @ 0098270c */
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00982654 to 00a8265f has its CatchHandler @ 009826fc */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.TextField:setTouchAreaEnabled");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 00982674 to 00a8267f has its CatchHandler @ 00982710 */
      cocos2d::ui::TextField::setTouchAreaEnabled(this,local_3c[0]);
                    /* try { // try from 00982680 to 00a82757 has its CatchHandler @ 00982544 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009826cc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_TextField_setTouchAreaEnabled\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setTouchAreaEnabled",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009826cc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

