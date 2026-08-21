
/* universe::lua_get_universe_table(lua_State*) */

undefined8 universe::lua_get_universe_table(lua_State *param_1)

{
  int iVar1;
  
  lua_getfield(param_1,0xffffd8ee,&DAT_013c6c06);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_settop(param_1,0xfffffffe);
    lua_createtable(param_1,0,0);
    lua_setfield(param_1,0xffffd8ee,&DAT_013c6c06);
    lua_getfield(param_1,0xffffd8ee,&DAT_013c6c06);
  }
  return 1;
}

