
undefined8 FUN_008e9314(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GRoot *this;
  ulong uVar3;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GRoot *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"fairygui.GRoot:setSoundEnabled");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GRoot_setSoundEnabled\'",0);
    }
    else {
      fairygui::GRoot::setSoundEnabled(this,local_3c[0]);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRoot:setSoundEnabled",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

