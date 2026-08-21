
bool FUN_008d9298(undefined8 param_1)

{
  int iVar1;
  GObject *this;
  float fVar2;
  
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)fairygui::GObject::getYMin(this);
    lua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getYMin",iVar1,0);
  }
  return iVar1 == 0;
}

