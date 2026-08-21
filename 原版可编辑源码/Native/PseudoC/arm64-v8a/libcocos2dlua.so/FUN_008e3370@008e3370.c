
void FUN_008e3370(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *this;
  ulong uVar3;
  undefined8 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GList:childIndexToItemIndex");
    if ((uVar3 & 1) != 0) {
      iVar2 = fairygui::GList::childIndexToItemIndex(this,local_3c);
      tolua_pushnumber((double)iVar2,param_1);
      uVar4 = 1;
      goto LAB_008e342c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_childIndexToItemIndex\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:childIndexToItemIndex",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_008e342c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

