
/* toluafix_get_function_by_refid(lua_State*, int) */

void toluafix_get_function_by_refid(lua_State *param_1,int param_2)

{
  lua_pushstring(param_1,"toluafix_refid_function_mapping");
  lua_rawget(param_1,0xffffd8f0);
  lua_pushinteger(param_1,(long)param_2);
  lua_rawget(param_1,0xfffffffe);
  lua_remove(param_1,0xfffffffe);
  return;
}

