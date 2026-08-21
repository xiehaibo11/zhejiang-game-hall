
undefined8 FUN_008eec48(undefined8 param_1)

{
  int iVar1;
  PopupMenu *this;
  
  this = (PopupMenu *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::PopupMenu::clearItems(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.PopupMenu:clearItems",iVar1 + -1,0);
  }
  return 0;
}

