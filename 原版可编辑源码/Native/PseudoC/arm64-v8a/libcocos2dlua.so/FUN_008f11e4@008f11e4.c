
undefined8 FUN_008f11e4(undefined8 param_1)

{
  int iVar1;
  Window *this;
  
  this = (Window *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::Window::initWindow(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Window:initWindow",iVar1 + -1,0);
  }
  return 0;
}

