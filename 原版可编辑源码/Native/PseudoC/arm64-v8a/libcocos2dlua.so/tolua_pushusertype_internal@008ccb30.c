
void tolua_pushusertype_internal(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    lua_pushnil(param_1);
    return;
  }
  lua_getfield(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 != 0) {
    lua_pushstring(param_1,"tolua_ubox");
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 0) {
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"tolua_ubox");
      lua_rawget(param_1,0xffffd8f0);
    }
    lua_pushlightuserdata(param_1,param_2);
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 0) {
      lua_settop(param_1,0xfffffffe);
      lua_pushlightuserdata(param_1,param_2);
      plVar2 = (long *)lua_newuserdata(param_1,8);
      *plVar2 = param_2;
      lua_pushvalue(param_1,0xffffffff);
      lua_insert(param_1,0xfffffffc);
      lua_rawset(param_1,0xfffffffd);
      lua_settop(param_1,0xfffffffe);
      lua_pushvalue(param_1,0xfffffffe);
      lua_setmetatable(param_1,0xfffffffe);
      lua_pushvalue(param_1,0xffffd8f0);
      lua_setfenv(param_1,0xfffffffe);
    }
    else {
      lua_insert(param_1);
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"tolua_super");
      lua_rawget(param_1,0xffffd8f0);
      lua_getmetatable(param_1,0xfffffffe);
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 == 5) {
        lua_pushstring(param_1,param_3);
        lua_rawget(param_1,0xfffffffe);
        iVar1 = lua_toboolean(param_1,0xffffffff);
        if (iVar1 == 1) {
          lua_settop(param_1,0xfffffffc);
          lua_remove(param_1,0xfffffffe);
          return;
        }
      }
      lua_pushvalue(param_1,0xfffffffb);
      lua_setmetatable(param_1,0xfffffffb);
      lua_settop(param_1,0xfffffffc);
    }
    lua_remove(param_1,0xfffffffe);
    if (param_4 == 0) {
      return;
    }
    lua_pushvalue(param_1,0xffffffff);
    lua_pushstring(param_1,"tolua_value_root");
    lua_rawget(param_1,0xffffd8f0);
    lua_insert(param_1,0xfffffffe);
    lua_pushlightuserdata(param_1,param_2);
    lua_insert(param_1,0xfffffffe);
    lua_rawset(param_1,0xfffffffd);
  }
  lua_settop(param_1,0xfffffffe);
  return;
}

