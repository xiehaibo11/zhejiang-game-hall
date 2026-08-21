
undefined8 FUN_008e7fa4(undefined8 param_1)

{
  int iVar1;
  GTextField *this;
  
  this = (GTextField *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GTextField::flushVars(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextField:flushVars",iVar1 + -1,0);
  }
  return 0;
}

