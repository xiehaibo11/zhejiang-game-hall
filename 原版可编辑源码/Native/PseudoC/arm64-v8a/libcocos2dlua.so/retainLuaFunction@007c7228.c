
/* LuaJavaBridge::retainLuaFunction(lua_State*, int, int*) */

ulong LuaJavaBridge::retainLuaFunction(lua_State *param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  
  lua_pushstring(param_1,"luaj_function_id");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 != 5) {
    lua_settop(param_1,0xfffffffe);
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"luaj_function_id");
    lua_pushvalue(param_1,0xfffffffe);
    lua_rawset(param_1,0xffffd8f0);
  }
  lua_pushstring(param_1,"luaj_function_id_retain");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 != 5) {
    lua_settop(param_1,0xfffffffe);
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"luaj_function_id_retain");
    lua_pushvalue(param_1,0xfffffffe);
    lua_rawset(param_1,0xffffd8f0);
  }
  lua_pushvalue(param_1,param_2 + -2);
  lua_rawget(param_1,0xfffffffd);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 3) {
    dVar4 = (double)lua_tonumber(param_1,0xffffffff);
    uVar3 = (ulong)(uint)(int)dVar4;
  }
  else {
    lua_settop(param_1,0xfffffffe);
    uVar3 = (long)s_newFunctionId + 1;
    s_newFunctionId = (int)uVar3;
    lua_pushvalue(param_1,param_2 + -2);
    lua_pushinteger(param_1,uVar3);
    lua_rawset(param_1,0xfffffffc);
    lua_pushinteger(param_1,uVar3);
  }
  lua_pushvalue(param_1,0xffffffff);
  lua_rawget(param_1,0xfffffffd);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 3) {
    dVar4 = (double)lua_tonumber(param_1,0xffffffff);
    iVar1 = (int)dVar4 + 1;
    lua_settop(param_1,0xfffffffe);
    lVar2 = (long)iVar1;
  }
  else {
    lua_settop(param_1,0xfffffffe);
    lVar2 = 1;
    iVar1 = 1;
  }
  lua_pushinteger(param_1,lVar2);
  lua_rawset(param_1,0xfffffffd);
  lua_settop(param_1,0xfffffffd);
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return uVar3 & 0xffffffff;
}

