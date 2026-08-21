
undefined8 FUN_00917a40(undefined8 param_1)

{
  auxiliar_checkgroup(param_1,"tcp{any}",1);
  socket_destroy();
  lua_pushnumber(0x3ff0000000000000,param_1);
  return 1;
}

