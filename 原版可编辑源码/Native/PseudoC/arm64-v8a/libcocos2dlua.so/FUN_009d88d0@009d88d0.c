
undefined8 FUN_009d88d0(undefined8 param_1)

{
  int iVar1;
  
                    /* try { // try from 009d88d4 to 00ad88e7 has its CatchHandler @ 009d8a98 */
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
                    /* try { // try from 009d88e8 to 00ad8973 has its CatchHandler @ 009d8834 */
    luaL_argerror(param_1,0,"lua_universe_Device_removeAllNotifications: expected 0 argument");
  }
  universe::Device::removeAllNotifications();
  return 0;
}

