
/* LuaJavaBridge::releaseLuaFunctionById(int) */

int LuaJavaBridge::releaseLuaFunctionById(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  double dVar4;
  
  uVar1 = s_luaState;
  lua_pushstring(s_luaState,"luaj_function_id");
  lua_rawget(uVar1,0xffffd8f0);
  iVar2 = lua_type(uVar1,0xffffffff);
  if (iVar2 == 5) {
    lua_pushstring(uVar1,"luaj_function_id_retain");
    lua_rawget(uVar1,0xffffd8f0);
    iVar2 = lua_type(uVar1,0xffffffff);
    if (iVar2 == 5) {
      lua_pushinteger(uVar1,(long)param_1);
      lua_rawget(uVar1,0xfffffffe);
      iVar2 = lua_type(uVar1,0xffffffff);
      if (iVar2 == 3) {
        dVar4 = (double)lua_tonumber(uVar1,0xffffffff);
        iVar2 = (int)dVar4 + -1;
        lua_settop(uVar1,0xfffffffe);
        lua_pushinteger(uVar1,(long)param_1);
        if (0 < iVar2) {
          lua_pushinteger(uVar1,(long)iVar2);
          lua_rawset(uVar1,0xfffffffd);
          lua_settop(uVar1,0xfffffffd);
          __android_log_print(3,"luajc",
                              "luajreleaseLuaFunctionById() - function id %d retain count = %d",
                              param_1,iVar2);
          return iVar2;
        }
        lua_pushnil(uVar1);
        lua_rawset(uVar1,0xfffffffd);
        lua_settop(uVar1,0xfffffffe);
        lua_pushnil(uVar1);
        do {
          iVar2 = lua_next(uVar1,0xfffffffe);
          if (iVar2 == 0) goto LAB_007c77a8;
          dVar4 = (double)lua_tonumber(uVar1,0xffffffff);
          lua_settop(uVar1,0xfffffffe);
        } while ((int)dVar4 != param_1);
        lua_pushnil(uVar1);
        lua_rawset(uVar1,0xfffffffd);
LAB_007c77a8:
        lua_settop(uVar1,0xfffffffe);
        pcVar3 = "luajreleaseLuaFunctionById() - function id %d released";
      }
      else {
        lua_settop(uVar1,0xfffffffc);
        pcVar3 = "luajreleaseLuaFunctionById() - function id %d not found";
      }
      __android_log_print(3,"luajc",pcVar3,param_1);
      return 0;
    }
    lua_settop(uVar1,0xfffffffd);
    pcVar3 = "luajreleaseLuaFunctionById() - LUAJ_REGISTRY_RETAIN not exists";
  }
  else {
    lua_settop(uVar1,0xfffffffe);
    pcVar3 = "luajreleaseLuaFunctionById() - LUAJ_REGISTRY_FUNCTION not exists";
  }
  __android_log_print(3,"luajc","%s",pcVar3);
  return 0;
}

