
undefined8 FUN_00918abc(undefined8 param_1)

{
  auxiliar_checkgroup(param_1,"udp{any}",1);
  socket_destroy();
  lua_pushnumber(0x3ff0000000000000,param_1);
                    /* try { // try from 00918af8 to 00a18afb has its CatchHandler @ 00918b30 */
  return 1;
}

