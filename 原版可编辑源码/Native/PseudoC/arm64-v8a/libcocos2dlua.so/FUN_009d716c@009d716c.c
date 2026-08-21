
undefined8 FUN_009d716c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = (double)lua_tonumber(param_1,1);
  iVar2 = SUB84(dVar3 + 6755399441055744.0,0);
  if ((iVar2 == 0) && (iVar1 = lua_isnumber(param_1,1), iVar1 == 0)) {
    luaL_typerror(param_1,1,"number");
  }
  lua_pushnumber((double)iVar2,param_1);
  return 1;
}

