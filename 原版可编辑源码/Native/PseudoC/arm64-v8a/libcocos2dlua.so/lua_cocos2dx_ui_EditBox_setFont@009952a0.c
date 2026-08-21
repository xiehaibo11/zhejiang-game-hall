
/* lua_cocos2dx_ui_EditBox_setFont(lua_State*) */

bool lua_cocos2dx_ui_EditBox_setFont(lua_State *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar6 = (char *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 2) {
    local_60 = 0;
    local_58 = (void *)0x0;
    local_68 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_68,"ccui.EditBox:setFont");
    uVar1 = (uint)&local_68 | 1;
    if ((local_68 & 1) != 0) {
      uVar1 = (uint)local_58;
    }
    uVar5 = luaval_to_int32(param_1,3,&local_4c,"ccui.EditBox:setFont");
    bVar7 = (uVar4 & uVar5 & 1) == 0;
    if (bVar7) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_EditBox_setFont\'",0);
    }
    else {
      cocos2d::ui::EditBox::setFont(pcVar6,uVar1);
      lua_settop(param_1,1);
    }
    bVar7 = !bVar7;
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:setFont",iVar3 + -1,2);
    bVar7 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

