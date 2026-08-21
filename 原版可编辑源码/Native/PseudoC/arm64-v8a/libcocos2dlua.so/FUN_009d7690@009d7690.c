
undefined8 FUN_009d7690(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  dVar4 = (double)lua_tonumber(param_1,1);
  iVar2 = SUB84(dVar4 + 6755399441055744.0,0);
  if ((iVar2 == 0) && (iVar1 = lua_isnumber(param_1,1), iVar1 == 0)) {
    luaL_typerror(param_1,1,"number");
  }
  dVar4 = (double)lua_tonumber(param_1,2);
  uVar3 = SUB84(dVar4 + 6755399441055744.0,0);
  if ((uVar3 == 0) && (iVar1 = lua_isnumber(param_1,2), iVar1 == 0)) {
    luaL_typerror(param_1,2,"number");
  }
  lua_pushnumber((double)(iVar2 >> (uVar3 & 0x1f)),param_1);
  return 1;
}

