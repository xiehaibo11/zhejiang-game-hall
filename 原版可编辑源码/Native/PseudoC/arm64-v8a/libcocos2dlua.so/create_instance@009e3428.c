
/* universe::create_instance(lua_State*, char const*, void*) */

void universe::create_instance(lua_State *param_1,char *param_2,void *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)lua_newuserdata(param_1,8);
  *puVar1 = param_3;
  lua_getfield(param_1,0xffffd8f0,param_2);
  lua_setmetatable(param_1,0xfffffffe);
  return;
}

