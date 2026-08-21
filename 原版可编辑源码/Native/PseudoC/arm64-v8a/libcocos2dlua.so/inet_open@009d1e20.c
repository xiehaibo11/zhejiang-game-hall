
undefined8 inet_open(undefined8 param_1)

{
  lua_pushstring(param_1,"dns");
  lua_createtable(param_1,0,0);
  luaL_openlib(param_1,0,&PTR_DAT_01769718,0);
  lua_settable(param_1,0xfffffffd);
  return 0;
}

