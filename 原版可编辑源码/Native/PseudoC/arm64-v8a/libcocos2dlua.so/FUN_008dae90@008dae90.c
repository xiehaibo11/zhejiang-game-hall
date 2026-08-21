
bool FUN_008dae90(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  GObject *this;
  
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = fairygui::GObject::addDisplayLock(this);
    tolua_pushnumber((double)uVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:addDisplayLock",iVar1,0);
  }
  return iVar1 == 0;
}

