
/* tolua_web_socket_open(lua_State*) */

undefined8 tolua_web_socket_open(lua_State *param_1)

{
  tolua_open();
  tolua_usertype(param_1,"cc.WebSocket");
                    /* try { // try from 0090eda4 to 00a0edbf has its CatchHandler @ 0090ef2c */
  tolua_module(param_1,"cc",0);
  tolua_beginmodule(param_1,"cc");
                    /* try { // try from 0090edd8 to 00a0edef has its CatchHandler @ 0090ef20 */
  tolua_cclass(param_1,"WebSocket","cc.WebSocket",&DAT_013c996e,FUN_0090eed4);
  tolua_beginmodule(param_1,"WebSocket");
  tolua_function(param_1,"create",FUN_0090ef04);
                    /* try { // try from 0090ee04 to 00a0ee1b has its CatchHandler @ 0090ef1c */
  tolua_function(param_1,"createByAProtocol",FUN_0090f2b4);
                    /* try { // try from 0090ee2c to 00a0ee43 has its CatchHandler @ 0090ef28 */
  tolua_function(param_1,"createByProtocolArray",FUN_0090f620);
  tolua_function(param_1,"getReadyState",FUN_0090f9e0);
  tolua_function(param_1,"close",FUN_0090faa0);
                    /* try { // try from 0090ee60 to 00a0ee73 has its CatchHandler @ 0090ef24 */
                    /* try { // try from 0090ee74 to 00a0ef47 has its CatchHandler @ 0090ed48 */
  tolua_function(param_1,"sendString",FUN_0090fb48);
  tolua_variable(param_1,"url",FUN_0090fc8c,0);
  tolua_variable(param_1,"protocol",FUN_0090fd38,0);
  tolua_endmodule(param_1);
  tolua_endmodule(param_1);
  return 1;
}

