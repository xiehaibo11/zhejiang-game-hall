
/* tolua_script_handler_mgr_open(lua_State*) */

undefined8 tolua_script_handler_mgr_open(lua_State *param_1)

{
  tolua_open();
  tolua_usertype(param_1,"ScheduleHandlerDelegate");
  tolua_usertype(param_1,"ScriptHandlerMgr");
  tolua_module(param_1,0,0);
  tolua_beginmodule(param_1,0);
  tolua_cclass(param_1,"ScriptHandlerMgr","ScriptHandlerMgr",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"ScriptHandlerMgr");
  tolua_function(param_1,"getInstance",FUN_008c8998);
  tolua_function(param_1,"registerScriptHandler",FUN_008c8aa4);
  tolua_function(param_1,"unregisterScriptHandler",FUN_008c8c18);
  tolua_function(param_1,"removeObjectAllHandlers",FUN_008c8d4c);
  tolua_endmodule(param_1);
  tolua_endmodule(param_1);
  return 1;
}

