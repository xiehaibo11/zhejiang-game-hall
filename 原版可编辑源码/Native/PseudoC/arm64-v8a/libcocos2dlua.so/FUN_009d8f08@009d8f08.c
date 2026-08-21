
undefined8 FUN_009d8f08(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,"lua_universe_Device_isSupportChangeIcon: expected 0 argument");
  }
  uVar2 = universe::Device::isSupportChangeIcon();
  lua_pushboolean(param_1,uVar2 & 1);
                    /* catch() { ... } // from try @ 009d8ec4 with catch @ 009d8f4c */
  return 1;
}

