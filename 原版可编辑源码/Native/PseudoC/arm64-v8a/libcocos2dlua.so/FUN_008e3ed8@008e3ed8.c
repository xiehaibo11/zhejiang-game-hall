
bool FUN_008e3ed8(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    ccvector_std_string_to_luaval(param_1,(vector *)(lVar2 + 0x2b0));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComboBox:getItems",iVar1,0);
  }
  return iVar1 == 0;
}

