
void tolua_pushstring(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    lua_pushstring();
    return;
  }
  lua_pushnil();
  return;
}

