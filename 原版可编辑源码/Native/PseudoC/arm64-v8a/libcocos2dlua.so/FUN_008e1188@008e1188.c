
undefined8 FUN_008e1188(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_type(param_1,2);
  if (iVar1 == 1) {
    iVar1 = lua_toboolean(param_1,2);
    *(bool *)(lVar2 + 0x2e0) = iVar1 != 0;
  }
  else {
    luaL_error(param_1,"fairygui.GList:scrollItemToViewOnClick value type MUST be Boolean!");
  }
  return 0;
}

