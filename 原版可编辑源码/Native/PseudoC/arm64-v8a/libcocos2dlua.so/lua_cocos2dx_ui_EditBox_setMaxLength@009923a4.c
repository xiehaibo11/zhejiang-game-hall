
/* lua_cocos2dx_ui_EditBox_setMaxLength(lua_State*) */

undefined4 lua_cocos2dx_ui_EditBox_setMaxLength(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009923c0 to 00a92567 has its CatchHandler @ 009923c0
                       catch() { ... } // from try @ 009923c0 with catch @ 009923c0
                       catch() { ... } // from try @ 009925e8 with catch @ 009923c0 */
  iVar2 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.EditBox:setMaxLength");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::EditBox::setMaxLength(iVar2);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00992460;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_EditBox_setMaxLength\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:setMaxLength",iVar3 + -1,1);
  }
  uVar5 = 0;
LAB_00992460:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

