
/* universe::set_functions(lua_State*, luaL_Reg const*) */

void universe::set_functions(lua_State *param_1,luaL_Reg *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)param_2;
  while (lVar1 != 0) {
    lua_pushcclosure(param_1,*(undefined8 *)(param_2 + 8),0);
    lua_setfield(param_1,0xfffffffe,*(undefined8 *)param_2);
    lVar1 = *(long *)(param_2 + 0x10);
    param_2 = param_2 + 0x10;
  }
  return;
}

