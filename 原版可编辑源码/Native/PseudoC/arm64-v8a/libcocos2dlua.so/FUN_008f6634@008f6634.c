
undefined8 FUN_008f6634(undefined8 param_1)

{
  int iVar1;
  ScrollPane *this;
  
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::ScrollPane::cancelDragging(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:cancelDragging",iVar1 + -1,0);
  }
  return 0;
}

