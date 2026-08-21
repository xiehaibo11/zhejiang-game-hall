
undefined8 FUN_009d8ce4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,"lua_universe_Device_showIosAppComment: expected 0 argument");
  }
  universe::Device::showIosAppComment();
                    /* try { // try from 009d8d1c to 00ad8d37 has its CatchHandler @ 009d8da4 */
  return 0;
}

