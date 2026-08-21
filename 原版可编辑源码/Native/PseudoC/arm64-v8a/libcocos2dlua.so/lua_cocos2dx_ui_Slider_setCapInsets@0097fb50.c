
/* lua_cocos2dx_ui_Slider_setCapInsets(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_setCapInsets(lua_State *param_1)

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
    cocos2d::Rect::Rect(aRStack_48);
                    /* try { // try from 0097fba0 to 00a7fbe3 has its CatchHandler @ 0097fba0
                       catch() { ... } // from try @ 0097fba0 with catch @ 0097fba0
                       catch() { ... } // from try @ 0097fc90 with catch @ 0097fba0
                       catch() { ... } // from try @ 0097fd24 with catch @ 0097fba0 */
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"ccui.Slider:setCapInsets");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::Slider::setCapInsets(pRVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0097fc14;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Slider_setCapInsets\'",0);
  }
  else {
                    /* try { // try from 0097fbe4 to 00a7fc4f has its CatchHandler @ 0097fd3c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:setCapInsets",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0097fc14:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

