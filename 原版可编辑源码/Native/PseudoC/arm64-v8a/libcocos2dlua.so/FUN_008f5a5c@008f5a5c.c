
bool FUN_008f5a5c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ScrollPane *this;
  
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = fairygui::ScrollPane::getPageX(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:getPageX",iVar1,0);
  }
  return iVar1 == 0;
}

