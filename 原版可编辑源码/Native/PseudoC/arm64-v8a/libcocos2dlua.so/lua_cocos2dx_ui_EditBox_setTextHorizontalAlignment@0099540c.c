
/* lua_cocos2dx_ui_EditBox_setTextHorizontalAlignment(lua_State*) */

undefined4 lua_cocos2dx_ui_EditBox_setTextHorizontalAlignment(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.EditBox:setTextHorizontalAlignment");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::EditBox::setTextHorizontalAlignment(uVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009954c8;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_EditBox_setTextHorizontalAlignment\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:setTextHorizontalAlignment",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009954c8:
                    /* try { // try from 009954d0 to 00a955b7 has its CatchHandler @ 009954d0
                       catch() { ... } // from try @ 009954d0 with catch @ 009954d0
                       catch() { ... } // from try @ 00995638 with catch @ 009954d0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

