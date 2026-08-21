
undefined8 FUN_008e5c3c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GGroup *this;
  ulong uVar3;
  bool local_3c [4];
  long local_38;
  
                    /* catch() { ... } // from try @ 008e5b78 with catch @ 008e5c3c
                       catch() { ... } // from try @ 008e5be8 with catch @ 008e5c3c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GGroup *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"fairygui.GGroup:setBoundsChangedFlag");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GGroup_setBoundsChangedFlag\'",0);
    }
    else {
      fairygui::GGroup::setBoundsChangedFlag(this,local_3c[0]);
    }
  }
  else if (iVar2 + -1 == 0) {
    fairygui::GGroup::setBoundsChangedFlag(this,false);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GGroup:setBoundsChangedFlag",iVar2 + -1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

