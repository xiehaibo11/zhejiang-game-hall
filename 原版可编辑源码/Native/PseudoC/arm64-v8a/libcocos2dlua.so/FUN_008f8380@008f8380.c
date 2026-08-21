
undefined8 FUN_008f8380(undefined8 param_1)

{
  int iVar1;
  FUIInput *this;
  
  this = (FUIInput *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::FUIInput::applyTextFormat(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.FUIInput:applyTextFormat",iVar1 + -1,0);
  }
  return 0;
}

