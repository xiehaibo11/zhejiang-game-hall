
/* lua_cocos2dx_ui_Button_setCapInsetsNormalRenderer(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_setCapInsetsNormalRenderer(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Rect *pRVar3;
  ulong uVar4;
  undefined4 uVar5;
  Rect aRStack_48 [16];
  long local_38;
  
                    /* try { // try from 0096d1a0 to 00a6d1cf has its CatchHandler @ 0096d0f4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar3 = (Rect *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0096d1d0 to 00a6d1e3 has its CatchHandler @ 0096d224 */
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
                    /* try { // try from 0096d1e4 to 00a6d23f has its CatchHandler @ 0096d0f4 */
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"ccui.Button:setCapInsetsNormalRenderer");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::Button::setCapInsetsNormalRenderer(pRVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0096d258;
    }
                    /* try { // try from 0096d240 to 00a6d28f has its CatchHandler @ 0096d240
                       catch() { ... } // from try @ 0096d240 with catch @ 0096d240
                       catch() { ... } // from try @ 0096d2c4 with catch @ 0096d240
                       catch() { ... } // from try @ 0096d30c with catch @ 0096d240 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Button_setCapInsetsNormalRenderer\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 0096d144 with catch @ 0096d224
                       catch() { ... } // from try @ 0096d1d0 with catch @ 0096d224 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d823c,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0096d258:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

