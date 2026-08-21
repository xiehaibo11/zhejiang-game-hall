
undefined8 FUN_008edc1c(undefined8 param_1)

{
  int iVar1;
  GController *this;
  
  this = (GController *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GController::runActions(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GController:runActions",iVar1 + -1,0);
  }
  return 0;
}

