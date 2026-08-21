
bool FUN_008f538c(undefined8 param_1)

{
  int iVar1;
  ScrollPane *this;
  float fVar2;
  
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)fairygui::ScrollPane::getScrollingPosY(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:getScrollingPosY",iVar1,0);
  }
  return iVar1 == 0;
}

