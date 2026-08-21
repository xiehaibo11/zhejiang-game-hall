
undefined8 FUN_008e17bc(undefined8 param_1)

{
  int iVar1;
  GList *this;
  
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GList::setVirtual(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:setVirtual",iVar1 + -1,0);
  }
  return 0;
}

