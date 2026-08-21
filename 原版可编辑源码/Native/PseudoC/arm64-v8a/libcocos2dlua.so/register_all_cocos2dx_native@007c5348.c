
/* register_all_cocos2dx_native(lua_State*) */

undefined8 register_all_cocos2dx_native(lua_State *param_1)

{
  tolua_open();
  tolua_module(param_1,"cc",0);
  tolua_beginmodule(param_1,"cc");
  lua_register_cocos2dx_native_Native(param_1);
  tolua_endmodule(param_1);
  return 1;
}

