
/* universe::create_singleton(lua_State*, char const*, luaL_Reg const*) */

void universe::create_singleton(lua_State *param_1,char *param_2,luaL_Reg *param_3)

{
  long lVar1;
  
  lua_createtable(param_1,0,0);
  lVar1 = *(long *)param_3;
  while (lVar1 != 0) {
    lua_pushcclosure(param_1,*(undefined8 *)(param_3 + 8),0);
    lua_setfield(param_1,0xfffffffe,*(undefined8 *)param_3);
    lVar1 = *(long *)(param_3 + 0x10);
    param_3 = param_3 + 0x10;
  }
  lua_setfield(param_1,0xfffffffe,param_2);
  return;
}

