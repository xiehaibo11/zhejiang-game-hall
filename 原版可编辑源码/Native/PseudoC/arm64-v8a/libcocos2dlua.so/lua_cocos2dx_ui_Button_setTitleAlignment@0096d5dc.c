
/* lua_cocos2dx_ui_Button_setTitleAlignment(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_setTitleAlignment(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Button *pBVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_40;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0096d5fc to 00a6d617 has its CatchHandler @ 0096d8f0 */
  pBVar3 = (Button *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.Button:setTitleAlignment");
    if ((uVar4 & 1) == 0) goto LAB_0096d6b0;
                    /* try { // try from 0096d694 to 00a6d7e3 has its CatchHandler @ 0096d3e4 */
    cocos2d::ui::Button::setTitleAlignment(pBVar3,local_3c);
  }
  else {
                    /* try { // try from 0096d638 to 00a6d64f has its CatchHandler @ 0096d8c8 */
    if (((iVar2 != 3) ||
        (uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.Button:setTitleAlignment"),
        (uVar4 & 1) == 0)) ||
       (uVar4 = luaval_to_int32(param_1,3,&local_40,"ccui.Button:setTitleAlignment"),
       (uVar4 & 1) == 0)) {
LAB_0096d6b0:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.Button:setTitleAlignment",iVar2 + -1,1);
      uVar5 = 0;
      goto LAB_0096d6d4;
    }
                    /* try { // try from 0096d66c to 00a6d693 has its CatchHandler @ 0096d8c4 */
    cocos2d::ui::Button::setTitleAlignment(pBVar3,local_3c,local_40);
  }
  uVar5 = 1;
  lua_settop(param_1,1);
LAB_0096d6d4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

