
undefined8 FUN_008e8690(undefined8 param_1)

{
  int iVar1;
  GRoot *this;
  
  this = (GRoot *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GRoot::closeAllExceptModals(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRoot:closeAllExceptModals",iVar1 + -1,0);
  }
  return 0;
}

