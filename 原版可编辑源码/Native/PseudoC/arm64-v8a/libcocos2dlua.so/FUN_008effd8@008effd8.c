
undefined8 FUN_008effd8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_toboolean(param_1,2);
  *(bool *)(lVar2 + 0x281) = iVar1 != 0;
  return 0;
}

