
undefined8 FUN_008daa44(undefined8 param_1)

{
  int iVar1;
  GObject *this;
  
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GObject::removeFromParent(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:removeFromParent",iVar1 + -1,0);
  }
  return 0;
}

