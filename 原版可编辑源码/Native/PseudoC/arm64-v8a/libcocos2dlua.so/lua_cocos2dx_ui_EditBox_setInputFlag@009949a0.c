
/* lua_cocos2dx_ui_EditBox_setInputFlag(lua_State*) */

undefined4 lua_cocos2dx_ui_EditBox_setInputFlag(lua_State *param_1)

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
                    /* catch() { ... } // from try @ 009948bc with catch @ 009949bc */
  uVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.EditBox:setInputFlag");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::EditBox::setInputFlag(uVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00994a5c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_EditBox_setInputFlag\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:setInputFlag",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00994a5c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

