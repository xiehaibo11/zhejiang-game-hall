
/* universe::register_function(lua_State*, int (*)(lua_State*), char const*) */

void universe::register_function(lua_State *param_1,_func_int_lua_State_ptr *param_2,char *param_3)

{
  lua_pushcclosure(param_1,param_2,0);
  lua_setfield(param_1,0xfffffffe,param_3);
  return;
}

