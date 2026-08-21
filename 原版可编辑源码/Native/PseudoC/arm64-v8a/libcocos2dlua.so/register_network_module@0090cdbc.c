
/* register_network_module(lua_State*) */

undefined8 register_network_module(lua_State *param_1)

{
  int iVar1;
  
  lua_getfield(param_1,0xffffd8ee,&DAT_01276ae5);
  iVar1 = lua_type(param_1,0xffffffff);
                    /* try { // try from 0090cde8 to 00a0ce6b has its CatchHandler @ 0090cde8
                       catch() { ... } // from try @ 0090cde8 with catch @ 0090cde8
                       catch() { ... } // from try @ 0090cf34 with catch @ 0090cde8
                       catch() { ... } // from try @ 0090cf94 with catch @ 0090cde8 */
  if (iVar1 == 5) {
    luaopen_lua_extensions(param_1);
    tolua_web_socket_open(param_1);
    register_web_socket_manual(param_1);
    register_xml_http_request(param_1);
    register_downloader(param_1);
  }
  lua_settop(param_1,0xfffffffe);
  return 1;
}

