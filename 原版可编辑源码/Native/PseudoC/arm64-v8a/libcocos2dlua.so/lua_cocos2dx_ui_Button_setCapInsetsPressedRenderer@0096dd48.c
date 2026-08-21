
/* lua_cocos2dx_ui_Button_setCapInsetsPressedRenderer(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_setCapInsetsPressedRenderer(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Rect *pRVar3;
  ulong uVar4;
  undefined4 uVar5;
  Rect aRStack_48 [16];
  long local_38;
  
                    /* catch() { ... } // from try @ 0096db08 with catch @ 0096dd4c */
                    /* catch() { ... } // from try @ 0096daec with catch @ 0096dd50 */
                    /* catch() { ... } // from try @ 0096da24 with catch @ 0096dd54 */
                    /* catch() { ... } // from try @ 0096d984 with catch @ 0096dd58 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar3 = (Rect *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0096dac8 with catch @ 0096dd78 */
                    /* catch() { ... } // from try @ 0096da00 with catch @ 0096dd7c */
                    /* catch() { ... } // from try @ 0096d960 with catch @ 0096dd80 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
                    /* try { // try from 0096dd9c to 00a6dde7 has its CatchHandler @ 0096dd9c
                       catch() { ... } // from try @ 0096dd9c with catch @ 0096dd9c
                       catch() { ... } // from try @ 0096ddec with catch @ 0096dd9c */
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"ccui.Button:setCapInsetsPressedRenderer");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::Button::setCapInsetsPressedRenderer(pRVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0096de0c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Button_setCapInsetsPressedRenderer\'"
                ,0);
  }
  else {
                    /* try { // try from 0096dde8 to 00a6ddeb has its CatchHandler @ 0096de20 */
                    /* try { // try from 0096ddec to 00a6de33 has its CatchHandler @ 0096dd9c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d84d0,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0096de0c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0096dde8 with catch @ 0096de20 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0096de34 to 00a6e023 has its CatchHandler @ 0096de34
                       catch() { ... } // from try @ 0096de34 with catch @ 0096de34
                       catch() { ... } // from try @ 0096e0a4 with catch @ 0096de34 */
  __stack_chk_fail();
}

