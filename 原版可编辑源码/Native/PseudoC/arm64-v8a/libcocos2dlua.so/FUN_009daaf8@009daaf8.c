
undefined8 FUN_009daaf8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,"lua_universe_getVersion: expected 0 argument");
  }
  lua_pushstring(param_1,&DAT_012f2697);
  return 1;
}

