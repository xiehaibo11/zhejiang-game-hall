
undefined8 FUN_008ef60c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PopupMenu *pPVar3;
  ulong uVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pPVar3 = (PopupMenu *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar4 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"fairygui.PopupMenu:show");
    }
    else {
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_int32(param_1,3,&local_3c,"fairygui.PopupMenu:show");
      if ((uVar4 & 1) != 0) {
        fairygui::PopupMenu::show(pPVar3,uVar5,local_3c);
        goto LAB_008ef72c;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_PopupMenu_show\'",0);
  }
  else if (iVar2 + -1 == 0) {
    fairygui::PopupMenu::show(pPVar3,0,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.PopupMenu:show",iVar2 + -1,0);
  }
LAB_008ef72c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

