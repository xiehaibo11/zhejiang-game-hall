
/* lua_cocos2dx_ui_Slider_setCapInsetProgressBarRenderer(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_setCapInsetProgressBarRenderer(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Rect *pRVar3;
  ulong uVar4;
  undefined4 uVar5;
  Rect aRStack_48 [16];
  long local_38;
  
                    /* try { // try from 0097e9cc to 00a7e9ff has its CatchHandler @ 0097e920 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar3 = (Rect *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0097ea00 to 00a7ea13 has its CatchHandler @ 0097ea68 */
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
                    /* try { // try from 0097ea14 to 00a7eaa3 has its CatchHandler @ 0097e920 */
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"ccui.Slider:setCapInsetProgressBarRenderer");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::Slider::setCapInsetProgressBarRenderer(pRVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0097ea80;
    }
                    /* catch() { ... } // from try @ 0097e974 with catch @ 0097ea68
                       catch() { ... } // from try @ 0097ea00 with catch @ 0097ea68 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Slider_setCapInsetProgressBarRenderer\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:setCapInsetProgressBarRenderer",iVar2 + -1,1);
                    /* catch() { ... } // from try @ 0097e9b0 with catch @ 0097ea64 */
  }
  uVar5 = 0;
LAB_0097ea80:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

