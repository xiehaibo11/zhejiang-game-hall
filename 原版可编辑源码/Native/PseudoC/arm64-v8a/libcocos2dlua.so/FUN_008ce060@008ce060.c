
undefined8 FUN_008ce060(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 == 2) {
    dVar3 = (double)tolua_tonumber(0,param_1,2);
    *(int *)(lVar2 + 0x18) = (int)dVar3;
  }
  return 0;
}

