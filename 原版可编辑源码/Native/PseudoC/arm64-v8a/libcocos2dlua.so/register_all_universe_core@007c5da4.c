
/* register_all_universe_core(lua_State*) */

undefined8 register_all_universe_core(lua_State *param_1)

{
  tolua_open();
  tolua_module(param_1,&DAT_013c6c06,0);
  tolua_beginmodule(param_1,&DAT_013c6c06);
  lua_register_universe_core_Encryption(param_1);
  tolua_endmodule(param_1);
  return 1;
}

