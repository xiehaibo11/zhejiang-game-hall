
/* lua_cocos2dx_ui_EditBox_keyboardWillHide(lua_State*) */

undefined8 lua_cocos2dx_ui_EditBox_keyboardWillHide(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Rect aRStack_60 [16];
  Rect aRStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_60);
    cocos2d::Rect::Rect(aRStack_50);
    tolua_error(param_1,&DAT_012e06f6,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:keyboardWillHide",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

