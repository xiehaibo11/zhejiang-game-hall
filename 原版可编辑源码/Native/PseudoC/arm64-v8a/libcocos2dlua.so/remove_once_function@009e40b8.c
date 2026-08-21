
/* universe::remove_once_function(lua_State*, int) */

undefined8 universe::remove_once_function(lua_State *param_1,int param_2)

{
  luaL_unref(param_1,0xffffd8f0,param_2);
  return 1;
}

