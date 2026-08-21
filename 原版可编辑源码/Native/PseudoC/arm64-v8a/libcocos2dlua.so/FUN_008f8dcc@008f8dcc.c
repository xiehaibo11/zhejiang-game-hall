
undefined8 FUN_008f8dcc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  lua_pushinteger(param_1,(long)*(int *)(lVar1 + 0x68));
  return 1;
}

