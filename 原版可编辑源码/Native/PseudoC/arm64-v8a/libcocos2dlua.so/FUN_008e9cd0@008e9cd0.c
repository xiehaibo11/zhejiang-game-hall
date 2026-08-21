
undefined8 FUN_008e9cd0(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    if (fairygui::GRoot::_inst == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)fairygui::GRoot::_inst + 0xc),
                 (int *)((long)fairygui::GRoot::_inst + 0x10),fairygui::GRoot::_inst,
                 "fairygui.GRoot");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.GRoot:getInstance",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

