
undefined8 FUN_008e2338(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *this;
  ulong uVar3;
  ulong uVar4;
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar3 = luaval_to_int32(param_1,2,&iStack_4c,"fairygui.GList:removeChildrenToPool");
    uVar4 = luaval_to_int32(param_1,3,&local_50,"fairygui.GList:removeChildrenToPool");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GList_removeChildrenToPool\'",0);
    }
    else {
      fairygui::GList::removeChildrenToPool(this,iStack_4c,local_50);
    }
  }
  else if (iVar2 + -1 == 0) {
    fairygui::GList::removeChildrenToPool(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:removeChildrenToPool",iVar2 + -1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

