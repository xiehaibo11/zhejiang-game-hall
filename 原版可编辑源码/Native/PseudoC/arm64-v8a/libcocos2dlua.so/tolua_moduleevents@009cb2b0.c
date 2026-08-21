
void tolua_moduleevents(undefined8 param_1)

{
  lua_pushstring(param_1,"__index");
  lua_pushcclosure(param_1,FUN_009cb324,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,"__newindex");
  lua_pushcclosure(param_1,FUN_009cb458,0);
  lua_rawset(param_1,0xfffffffd);
  return;
}

