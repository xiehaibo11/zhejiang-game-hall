
undefined8 FUN_008f18cc(undefined8 param_1)

{
  int iVar1;
  Window *this;
  
  this = (Window *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::Window::bringToFront(this);
  }
  else {
                    /* try { // try from 008f18fc to 009f193b has its CatchHandler @ 008f19c0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Window:bringToFront",iVar1 + -1,0);
  }
  return 0;
}

