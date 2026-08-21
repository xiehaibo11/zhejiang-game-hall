
/* lua_cocos2dx_ui_Text_setTextColor(lua_State*) */

undefined4 lua_cocos2dx_ui_Text_setTextColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Text *pTVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pTVar3 = (Text *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color4B::Color4B((Color4B *)&local_3c);
    uVar4 = luaval_to_color4b(param_1,2,(Color4B *)&local_3c,"ccui.Text:setTextColor");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::Text::setTextColor(pTVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009756e0;
    }
    tolua_error(param_1,0x12d9ad2,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d9abb,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009756e0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

