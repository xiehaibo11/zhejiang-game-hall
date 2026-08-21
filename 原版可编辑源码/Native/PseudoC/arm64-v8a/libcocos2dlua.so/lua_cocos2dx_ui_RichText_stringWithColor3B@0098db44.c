
/* lua_cocos2dx_ui_RichText_stringWithColor3B(lua_State*) */

void lua_cocos2dx_ui_RichText_stringWithColor3B(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  Color3B *pCVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte local_58 [8];
  ulong local_50;
  void *local_48;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar4 = (Color3B *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    cocos2d::Color3B::Color3B(aCStack_40);
    uVar5 = luaval_to_color3b(param_1,2,aCStack_40,"ccui.RichText:stringWithColor3B");
    if ((uVar5 & 1) != 0) {
      cocos2d::ui::RichText::stringWithColor3B(pCVar4);
      uVar5 = (ulong)(local_58[0] >> 1);
      pvVar2 = (void *)((ulong)local_58 | 1);
      if ((local_58[0] & 1) != 0) {
        uVar5 = local_50;
        pvVar2 = local_48;
      }
      lua_pushlstring(param_1,pvVar2,uVar5);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
      uVar6 = 1;
      goto LAB_0098dc38;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_RichText_stringWithColor3B\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichText:stringWithColor3B",iVar3 + -1,1);
  }
  uVar6 = 0;
LAB_0098dc38:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

