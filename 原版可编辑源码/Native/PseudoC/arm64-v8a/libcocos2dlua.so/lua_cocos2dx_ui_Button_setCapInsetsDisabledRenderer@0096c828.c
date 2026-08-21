
/* lua_cocos2dx_ui_Button_setCapInsetsDisabledRenderer(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_setCapInsetsDisabledRenderer(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Rect *pRVar3;
  ulong uVar4;
  undefined4 uVar5;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar3 = (Rect *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0096c870 to 00a6c887 has its CatchHandler @ 0096cc3c */
    cocos2d::Rect::Rect(aRStack_48);
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"ccui.Button:setCapInsetsDisabledRenderer");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 0096c894 to 00a6c8ab has its CatchHandler @ 0096cc14 */
      cocos2d::ui::Button::setCapInsetsDisabledRenderer(pRVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0096c8ec;
    }
                    /* try { // try from 0096c8d4 to 00a6c8f3 has its CatchHandler @ 0096cbe0 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Button_setCapInsetsDisabledRenderer\'"
                ,0);
  }
  else {
                    /* try { // try from 0096c8b8 to 00a6c8cf has its CatchHandler @ 0096cbe4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:setCapInsetsDisabledRenderer",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0096c8ec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0096c90c to 00a6c923 has its CatchHandler @ 0096cc38 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

