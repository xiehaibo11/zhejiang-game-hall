
undefined8 FUN_008db52c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GObject *this;
  ulong uVar3;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_uint32(param_1,2,&local_3c,"fairygui.GObject:releaseDisplayLock");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GObject_releaseDisplayLock\'",0);
    }
    else {
      fairygui::GObject::releaseDisplayLock(this,local_3c);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:releaseDisplayLock",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

