
/* LuaJavaBridge::luaopen_luaj(lua_State*) */

void LuaJavaBridge::luaopen_luaj(lua_State *param_1)

{
  s_luaState = param_1;
  lua_createtable(param_1,0,0);
  lua_pushstring(param_1,"callStaticMethod");
  lua_pushcclosure(param_1,callJavaStaticMethod,0);
  lua_rawset(param_1,0xfffffffd);
  lua_setfield(param_1,0xffffd8ee,"LuaJavaBridge");
  return;
}

