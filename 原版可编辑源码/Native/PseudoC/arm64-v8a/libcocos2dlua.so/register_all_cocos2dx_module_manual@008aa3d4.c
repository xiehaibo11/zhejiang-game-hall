
/* register_all_cocos2dx_module_manual(lua_State*) */

undefined8 register_all_cocos2dx_module_manual(lua_State *param_1)

{
  if (param_1 != (lua_State *)0x0) {
    tolua_open();
    tolua_module(param_1,"cc",0);
    tolua_beginmodule(param_1,"cc");
    tolua_module(param_1,"utils",0);
    tolua_beginmodule(param_1,"utils");
    tolua_function(param_1,"captureScreen",FUN_008aa4e0);
    tolua_function(param_1,"findChildren",FUN_008aa620);
    tolua_function(param_1,"findChild",FUN_008aa7c8);
    tolua_endmodule(param_1);
    tolua_module(param_1,"EventDispatcher",0);
    tolua_beginmodule(param_1,"EventDispatcher");
    tolua_function(param_1,"addCustomEventListener",
                   lua_cocos2dx_EventDispatcher_addCustomEventListener);
    tolua_endmodule(param_1);
    tolua_endmodule(param_1);
  }
  return 0;
}

