
undefined8 luaopen_socket_core(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = socket_open();
  if (iVar1 == 0) {
    lua_pushstring(param_1,"unable to initialize library");
    lua_error(param_1);
  }
  else {
    luaL_openlib(param_1,"socket",&PTR_DAT_01769018,0);
    lua_pushstring(param_1,"_VERSION");
    lua_pushstring(param_1,"LuaSocket 3.0-rc1");
    lua_rawset(param_1,0xfffffffd);
  }
  auxiliar_open(param_1);
  except_open(param_1);
  timeout_open(param_1);
  buffer_open(param_1);
  inet_open(param_1);
  tcp_open(param_1);
                    /* try { // try from 00915a48 to 00a15ed7 has its CatchHandler @ 00915a48
                       catch() { ... } // from try @ 00915a48 with catch @ 00915a48
                       catch() { ... } // from try @ 00915f58 with catch @ 00915a48 */
  udp_open(param_1);
  select_open(param_1);
  return 1;
}

