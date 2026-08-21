
/* LuaJavaBridge::retainLuaFunctionById(int) */

int LuaJavaBridge::retainLuaFunctionById(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar1 = s_luaState;
  lua_pushstring(s_luaState,"luaj_function_id_retain");
  lua_rawget(uVar1,0xffffd8f0);
  iVar2 = lua_type(uVar1,0xffffffff);
  if (iVar2 == 5) {
    lua_pushinteger(uVar1,(long)param_1);
    lua_rawget(uVar1,0xfffffffe);
    iVar2 = lua_type(uVar1,0xffffffff);
    if (iVar2 == 3) {
      dVar4 = (double)lua_tonumber(uVar1,0xffffffff);
      iVar2 = (int)dVar4 + 1;
      lua_settop(uVar1,0xfffffffe);
      lua_pushinteger(uVar1,(long)param_1);
      lua_pushinteger(uVar1,(long)iVar2);
      lua_rawset(uVar1,0xfffffffd);
      lua_settop(uVar1,0xfffffffe);
      __android_log_print(3,"luajc","luajretainLuaFunctionById(%d) - retain count = %d",param_1,
                          iVar2);
      return iVar2;
    }
    uVar3 = 0xfffffffd;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  lua_settop(uVar1,uVar3);
  return 0;
}

