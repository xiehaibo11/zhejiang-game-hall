
/* lua_cocos2dx_ui_EditBox_registerScriptEditBoxHandler(lua_State*) */

undefined4 lua_cocos2dx_ui_EditBox_registerScriptEditBoxHandler(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  EditBox *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (EditBox *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 00992f5c with catch @ 00992ff4 */
                    /* catch() { ... } // from try @ 00992f74 with catch @ 00992ff8 */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccui.EditBox:registerScriptEditBoxHandler");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::EditBox::registerScriptEditBoxHandler(this,local_3c);
      uVar4 = 1;
                    /* catch() { ... } // from try @ 00992f28 with catch @ 00993028 */
      lua_settop(param_1,1);
      goto LAB_00993068;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_EditBox_registerScriptEditBoxHandler\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:registerScriptEditBoxHandler",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00993068:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

