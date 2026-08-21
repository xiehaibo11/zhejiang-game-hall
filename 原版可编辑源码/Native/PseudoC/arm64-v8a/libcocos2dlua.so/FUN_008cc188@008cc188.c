
void FUN_008cc188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  lua_pushstring(param_1,"tolua_super");
  lua_rawget(param_1,0xffffd8f0);
  lua_getfield(param_1,0xffffd8f0,param_2);
  lua_rawget(param_1,0xfffffffe);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_settop(param_1,0xfffffffe);
    lua_createtable(param_1,0,0);
    lua_getfield(param_1,0xffffd8f0,param_2);
    lua_pushvalue(param_1,0xfffffffe);
    lua_rawset(param_1,0xfffffffc);
  }
  lua_pushstring(param_1,param_3);
  lua_pushboolean(param_1,1);
  lua_rawset(param_1,0xfffffffd);
  lua_getfield(param_1,0xffffd8f0,param_3);
  lua_rawget(param_1,0xfffffffd);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushnil(param_1);
    while (iVar1 = lua_next(param_1,0xfffffffe), iVar1 != 0) {
      lua_pushvalue(param_1,0xfffffffe);
      lua_insert(param_1,0xfffffffe);
      lua_rawset(param_1,0xfffffffb);
    }
  }
  lua_settop(param_1,0xfffffffc);
  return;
}

