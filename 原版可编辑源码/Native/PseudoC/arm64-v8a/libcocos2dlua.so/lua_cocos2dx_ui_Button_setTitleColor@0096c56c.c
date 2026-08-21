
/* lua_cocos2dx_ui_Button_setTitleColor(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_setTitleColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Button *this;
  ulong uVar3;
  undefined4 uVar4;
  Color3B aCStack_40 [8];
  long local_38;
  
                    /* try { // try from 0096c580 to 00a6c597 has its CatchHandler @ 0096c7c4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0096c5b4 to 00a6c5cb has its CatchHandler @ 0096c7c0 */
    cocos2d::Color3B::Color3B(aCStack_40);
                    /* try { // try from 0096c5cc to 00a6c80f has its CatchHandler @ 0096c320 */
    uVar3 = luaval_to_color3b(param_1,2,aCStack_40,"ccui.Button:setTitleColor");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Button::setTitleColor(this,aCStack_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0096c630;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_setTitleColor\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d7f96,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0096c630:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

