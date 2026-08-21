
/* toluafix_open(lua_State*) */

void toluafix_open(lua_State *param_1)

{
  lua_pushstring(param_1,"toluafix_refid_ptr_mapping");
  lua_createtable(param_1,0,0);
  lua_rawset(param_1,0xffffd8f0);
  lua_pushstring(param_1,"toluafix_refid_type_mapping");
  lua_createtable(param_1,0,0);
  lua_rawset(param_1,0xffffd8f0);
  lua_pushstring(param_1,"toluafix_refid_function_mapping");
  lua_createtable(param_1,0,0);
  lua_rawset(param_1,0xffffd8f0);
  return;
}

