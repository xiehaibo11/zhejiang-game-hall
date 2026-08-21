
/* universe::get_instance(lua_State*, int) */

undefined8 universe::get_instance(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)lua_touserdata(param_1,param_2);
  return *puVar1;
}

