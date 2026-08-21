
undefined8 FUN_008e21ec(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *this;
  ulong uVar3;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"fairygui.GList:setAutoResizeItem");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_setAutoResizeItem\'",0
                 );
    }
    else {
      fairygui::GList::setAutoResizeItem(this,local_3c[0]);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:setAutoResizeItem",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

