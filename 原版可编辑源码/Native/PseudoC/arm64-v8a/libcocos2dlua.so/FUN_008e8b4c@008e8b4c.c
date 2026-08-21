
bool FUN_008e8b4c(undefined8 param_1)

{
  int iVar1;
  
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)fairygui::GRoot::_soundVolumeScale,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRoot:getSoundVolumeScale",iVar1,0);
  }
  return iVar1 == 0;
}

