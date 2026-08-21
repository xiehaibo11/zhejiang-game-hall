
bool FUN_008dda64(undefined8 param_1)

{
  int iVar1;
  GComponent *this;
  float fVar2;
  
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)fairygui::GComponent::getViewWidth(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:getViewWidth",iVar1,0);
  }
  return iVar1 == 0;
}

