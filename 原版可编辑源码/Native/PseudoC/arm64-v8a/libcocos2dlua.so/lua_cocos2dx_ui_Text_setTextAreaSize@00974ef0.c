
/* lua_cocos2dx_ui_Text_setTextAreaSize(lua_State*) */

undefined4 lua_cocos2dx_ui_Text_setTextAreaSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Text *this;
  ulong uVar3;
  undefined4 uVar4;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Text *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
    uVar3 = luaval_to_size(param_1,2,aSStack_40,"ccui.Text:setTextAreaSize");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Text::setTextAreaSize(this,aSStack_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00974fb4;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Text_setTextAreaSize\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d98f1,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00974fb4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

