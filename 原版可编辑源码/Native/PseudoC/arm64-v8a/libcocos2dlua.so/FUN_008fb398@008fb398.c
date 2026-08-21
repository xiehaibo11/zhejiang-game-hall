
undefined8 FUN_008fb398(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_toboolean(param_1,2);
  *(bool *)(lVar2 + 0x1f) = iVar1 != 0;
  return 0;
}

