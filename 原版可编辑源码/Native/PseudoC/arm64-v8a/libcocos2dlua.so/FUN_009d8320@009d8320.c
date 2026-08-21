
undefined8 FUN_009d8320(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = lua_gettop();
                    /* try { // try from 009d8334 to 00ad846b has its CatchHandler @ 009d8334
                       catch() { ... } // from try @ 009d8334 with catch @ 009d8334
                       catch() { ... } // from try @ 009d84c8 with catch @ 009d8334
                       catch() { ... } // from try @ 009d8560 with catch @ 009d8334 */
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,"lua_universe_Device_getFreeDiskSpace: expected 0 argument");
  }
  uVar2 = universe::Device::getFreeDiskSpace();
  lua_pushnumber((double)uVar2,param_1);
  return 1;
}

