
/* register_downloader(lua_State*) */

undefined8 register_downloader(lua_State *param_1)

{
                    /* try { // try from 0090cf34 to 00a0cf67 has its CatchHandler @ 0090cde8 */
  lua_gettop();
  luaL_newmetatable(param_1,"cc.Downloader");
  lua_pushstring(param_1,"__index");
  lua_pushvalue(param_1,0xfffffffe);
                    /* try { // try from 0090cf68 to 00a0cf7b has its CatchHandler @ 0090cfe0 */
  lua_settable(param_1,0xfffffffd);
                    /* try { // try from 0090cf80 to 00a0cf93 has its CatchHandler @ 0090cfe4 */
  luaL_register(param_1,0,&PTR_s_createDownloadDataTask_0169bfb0);
  lua_settop(param_1,0xfffffffe);
                    /* try { // try from 0090cf94 to 00a0cfff has its CatchHandler @ 0090cde8 */
  luaL_register(param_1,"cc.Downloader",&PTR_s_new_014a81a9_9_0169c030);
  lua_settop(param_1,0xfffffffe);
  return 1;
}

