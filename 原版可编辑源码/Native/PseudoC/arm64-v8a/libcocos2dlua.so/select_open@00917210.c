
undefined8 select_open(undefined8 param_1)

{
  lua_pushstring(param_1,"_SETSIZE");
  lua_pushnumber(0x4090000000000000,param_1);
  lua_rawset(param_1,0xfffffffd);
  luaL_openlib(param_1,0,&PTR_s_select_017690d8,0);
  return 0;
}

