
void FUN_008eeb50(lua_State *param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  PopupMenu *this;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (PopupMenu *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.PopupMenu:getItemName");
    if ((uVar4 & 1) != 0) {
      pbVar5 = (byte *)fairygui::PopupMenu::getItemName(this,local_3c);
      uVar4 = *(ulong *)(pbVar5 + 8);
      pbVar1 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar1 = pbVar5 + 1;
        uVar4 = (ulong)(*pbVar5 >> 1);
      }
      lua_pushlstring(param_1,pbVar1,uVar4);
      uVar6 = 1;
      goto LAB_008eec20;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_PopupMenu_getItemName\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.PopupMenu:getItemName",iVar3 + -1,1);
  }
  uVar6 = 0;
LAB_008eec20:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

