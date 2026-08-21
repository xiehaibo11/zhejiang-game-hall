
undefined8 FUN_009d81ec(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,"lua_universe_Device_getTime: expected 0 argument");
  }
  universe::Device::getTime();
  uVar2 = __fixtfdi();
  lua_pushinteger(param_1,uVar2);
  return 1;
}

