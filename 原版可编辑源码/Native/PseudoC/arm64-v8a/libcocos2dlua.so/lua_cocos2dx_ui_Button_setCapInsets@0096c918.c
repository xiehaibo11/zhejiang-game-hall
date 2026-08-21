
/* lua_cocos2dx_ui_Button_setCapInsets(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_setCapInsets(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Rect *pRVar3;
  ulong uVar4;
  undefined4 uVar5;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0096c930 to 00a6c947 has its CatchHandler @ 0096cc10 */
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar3 = (Rect *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0096c954 to 00a6c96b has its CatchHandler @ 0096cbdc */
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
                    /* try { // try from 0096c978 to 00a6c98f has its CatchHandler @ 0096cbac */
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"ccui.Button:setCapInsets");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::Button::setCapInsets(pRVar3);
                    /* try { // try from 0096c994 to 00a6c9b7 has its CatchHandler @ 0096cba8 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0096c9dc;
    }
                    /* try { // try from 0096c9d0 to 00a6c9e7 has its CatchHandler @ 0096cc34 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_setCapInsets\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:setCapInsets",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0096c9dc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0096c9f4 to 00a6ca0b has its CatchHandler @ 0096cc0c */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

