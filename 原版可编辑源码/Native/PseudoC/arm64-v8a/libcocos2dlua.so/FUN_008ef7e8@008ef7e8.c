
bool FUN_008ef7e8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  PopupMenu *this;
  
  this = (PopupMenu *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = fairygui::PopupMenu::getItemCount(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.PopupMenu:getItemCount",iVar1,0);
  }
  return iVar1 == 0;
}

