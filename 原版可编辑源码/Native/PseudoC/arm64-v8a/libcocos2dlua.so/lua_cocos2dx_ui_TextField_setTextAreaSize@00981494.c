
/* lua_cocos2dx_ui_TextField_setTextAreaSize(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setTextAreaSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Size *pSVar3;
  ulong uVar4;
  undefined4 uVar5;
  Size aSStack_40 [8];
  long local_38;
  
                    /* try { // try from 00981498 to 00a8149f has its CatchHandler @ 009814b4 */
                    /* try { // try from 009814a0 to 00a814d3 has its CatchHandler @ 009813a8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009813fc with catch @ 009814b4
                       catch() { ... } // from try @ 00981498 with catch @ 009814b4 */
                    /* catch() { ... } // from try @ 009813e0 with catch @ 009814b8
                       catch() { ... } // from try @ 0098144c with catch @ 009814b8 */
  pSVar3 = (Size *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009814d4 to 00a8150f has its CatchHandler @ 009814d4
                       catch() { ... } // from try @ 009814d4 with catch @ 009814d4
                       catch() { ... } // from try @ 00981564 with catch @ 009814d4
                       catch() { ... } // from try @ 009815ac with catch @ 009814d4 */
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
    uVar4 = luaval_to_size(param_1,2,aSStack_40,"ccui.TextField:setTextAreaSize");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::TextField::setTextAreaSize(pSVar3);
                    /* try { // try from 00981510 to 00a81533 has its CatchHandler @ 00981608 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00981558;
    }
                    /* try { // try from 00981540 to 00a81547 has its CatchHandler @ 00981608 */
                    /* try { // try from 00981550 to 00a81563 has its CatchHandler @ 009815ec */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_TextField_setTextAreaSize\'",0);
  }
  else {
                    /* try { // try from 00981538 to 00a8153f has its CatchHandler @ 009815f0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setTextAreaSize",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00981558:
                    /* try { // try from 00981564 to 00a81597 has its CatchHandler @ 009814d4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

