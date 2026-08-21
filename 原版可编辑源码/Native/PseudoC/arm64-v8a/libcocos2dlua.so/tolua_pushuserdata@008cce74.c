
void tolua_pushuserdata(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    lua_pushlightuserdata();
    return;
  }
  lua_pushnil();
  return;
}

