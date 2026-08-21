
void luaopen_lua_extensions(undefined8 param_1)

{
  lua_getfield(param_1,0xffffd8ee,"package");
  lua_getfield(param_1,0xffffffff,"preload");
                    /* try { // try from 0090ce6c to 00a0ce83 has its CatchHandler @ 0090cfe0 */
  lua_pushcclosure(param_1,luaopen_socket_core,0);
  lua_setfield(param_1,0xfffffffe,"socket.core");
                    /* try { // try from 0090cea0 to 00a0ceb7 has its CatchHandler @ 0090cfdc */
  lua_pushcclosure(param_1,luaopen_mime_core,0);
  lua_setfield(param_1,0xfffffffe,"mime.core");
                    /* try { // try from 0090cec4 to 00a0cf0f has its CatchHandler @ 0090cfe4 */
  lua_pushcclosure(param_1,luaopen_cjson,0);
  lua_setfield(param_1,0xfffffffe,"cjson");
  lua_pushcclosure(param_1,luaopen_zlib,0);
  lua_setfield(param_1,0xfffffffe,"zlib");
  lua_settop(param_1,0xfffffffd);
                    /* try { // try from 0090cf1c to 00a0cf33 has its CatchHandler @ 0090cfd8 */
  luaopen_luasocket_scripts(param_1);
  return;
}

