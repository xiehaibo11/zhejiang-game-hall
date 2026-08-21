
bool FUN_008f7f8c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GLabel *this;
  
  this = (GLabel *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = fairygui::GLabel::getTitleFontSize(this);
    lua_pushinteger(param_1,(long)iVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLabel:getTitleFontSize",iVar1,0);
  }
  return iVar1 == 0;
}

