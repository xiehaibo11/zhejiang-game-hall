
/* lua_cocos2dx_ui_Button_setPressedActionEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_setPressedActionEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Button *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
                    /* try { // try from 0096e250 to 00a6e283 has its CatchHandler @ 0096e1bc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0096e284 to 00a6e313 has its CatchHandler @ 0096e328 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.Button:setPressedActionEnabled");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Button::setPressedActionEnabled(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0096e2fc;
    }
    tolua_error(param_1,&DAT_012d8616,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:setPressedActionEnabled",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0096e2fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0096e314 to 00a6e343 has its CatchHandler @ 0096e1bc */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

