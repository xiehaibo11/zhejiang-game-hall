
undefined8 FUN_008d90c4(lua_State *param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  size_to_luaval(param_1,(Size *)(lVar1 + 0x78));
  return 1;
}

