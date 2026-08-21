
void tolua_variable(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  lua_pushstring(param_1,&DAT_012a5cc6);
  lua_rawget(param_1,0xfffffffe);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 != 5) {
    lua_settop(param_1,0xfffffffe);
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,&DAT_012a5cc6);
    lua_pushvalue(param_1,0xfffffffe);
    lua_rawset(param_1,0xfffffffc);
  }
  lua_pushstring(param_1,param_2);
  lua_pushcclosure(param_1,param_3,0);
  lua_rawset(param_1,0xfffffffd);
  lua_settop(param_1,0xfffffffe);
  if (param_4 != 0) {
    lua_pushstring(param_1,&DAT_012a5ccb);
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 != 5) {
      lua_settop(param_1,0xfffffffe);
      lua_createtable(param_1,0,0);
      lua_pushstring(param_1,&DAT_012a5ccb);
      lua_pushvalue(param_1,0xfffffffe);
      lua_rawset(param_1,0xfffffffc);
    }
    lua_pushstring(param_1,param_2);
    lua_pushcclosure(param_1,param_4,0);
    lua_rawset(param_1,0xfffffffd);
    lua_settop(param_1,0xfffffffe);
    return;
  }
  return;
}

