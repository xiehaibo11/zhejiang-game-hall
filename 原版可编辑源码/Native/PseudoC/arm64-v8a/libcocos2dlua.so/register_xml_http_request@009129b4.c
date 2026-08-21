
/* register_xml_http_request(lua_State*) */

undefined8 register_xml_http_request(lua_State *param_1)

{
                    /* try { // try from 009129c0 to 00a129d7 has its CatchHandler @ 00912b5c */
  tolua_open();
  tolua_usertype(param_1,"cc.XMLHttpRequest");
                    /* try { // try from 009129e4 to 00a129fb has its CatchHandler @ 00912b58 */
  tolua_module(param_1,"cc",0);
                    /* try { // try from 009129fc to 00a12a9b has its CatchHandler @ 00912900 */
  tolua_beginmodule(param_1,"cc");
  tolua_cclass(param_1,"XMLHttpRequest","cc.XMLHttpRequest",&DAT_012769c7,FUN_00912c20);
  tolua_beginmodule(param_1,"XMLHttpRequest");
  tolua_variable(param_1,"responseType",FUN_00912c44,FUN_00912c84);
  tolua_variable(param_1,"withCredentials",FUN_00912cf8,FUN_00912d30);
  tolua_variable(param_1,"timeout",FUN_00912da8,FUN_00912de4);
                    /* try { // try from 00912a9c to 00a12aa7 has its CatchHandler @ 00912ae8 */
                    /* try { // try from 00912aa8 to 00a12b8b has its CatchHandler @ 00912900 */
  tolua_variable(param_1,"readyState",FUN_00912e58,0);
  tolua_variable(param_1,"status",FUN_00912e90,0);
                    /* catch() { ... } // from try @ 00912a9c with catch @ 00912ae8 */
  tolua_variable(param_1,"statusText",FUN_00912ec8,0);
                    /* catch() { ... } // from try @ 00912988 with catch @ 00912af0 */
  tolua_variable(param_1,"responseText",FUN_00912f10,0);
  tolua_variable(param_1,"response",FUN_00912f5c,0);
  tolua_function(param_1,"new",FUN_009131e8);
  tolua_function(param_1,"open",FUN_0091329c);
                    /* catch() { ... } // from try @ 009129e4 with catch @ 00912b58 */
                    /* catch() { ... } // from try @ 009129c0 with catch @ 00912b5c */
  tolua_function(param_1,"send",FUN_009137d8);
                    /* catch() { ... } // from try @ 0091295c with catch @ 00912b70 */
  tolua_function(param_1,"abort",FUN_00913a44);
                    /* try { // try from 00912b8c to 00a12bdb has its CatchHandler @ 00912b8c
                       catch() { ... } // from try @ 00912b8c with catch @ 00912b8c
                       catch() { ... } // from try @ 00912c1c with catch @ 00912b8c
                       catch() { ... } // from try @ 00912c60 with catch @ 00912b8c */
  tolua_function(param_1,"setRequestHeader",FUN_00913a98);
  tolua_function(param_1,"getAllResponseHeaders",FUN_00913b38);
  tolua_function(param_1,"getResponseHeader",FUN_00913ea8);
                    /* try { // try from 00912bdc to 00a12c1b has its CatchHandler @ 00912ce4 */
  tolua_function(param_1,"registerScriptHandler",FUN_00913ff0);
  tolua_function(param_1,"unregisterScriptHandler",FUN_009140e8);
  tolua_endmodule(param_1);
  tolua_endmodule(param_1);
                    /* try { // try from 00912c1c to 00a12c4b has its CatchHandler @ 00912b8c */
  return 1;
}

