
undefined8 luaopen_zlib(undefined8 param_1)

{
  luaL_newmetatable(param_1,"lz.deflate.meta");
  lua_pushcclosure(param_1,FUN_0091a9dc,0);
  lua_setfield(param_1,0xfffffffe,&DAT_012b4a80);
  lua_settop(param_1,0xfffffffe);
  luaL_newmetatable(param_1,"lz.inflate.meta");
  lua_pushcclosure(param_1,FUN_0091a9fc,0);
  lua_setfield(param_1,0xfffffffe,&DAT_012b4a80);
  lua_settop(param_1,0xfffffffe);
  luaL_register(param_1,"zlib",&PTR_s_deflate_01429e2e_0xb_0169c480);
  lua_pushlstring(param_1,"BEST_SPEED",10);
  lua_pushinteger(param_1,1);
  lua_settable(param_1,0xfffffffd);
  lua_pushlstring(param_1,"BEST_COMPRESSION",0x10);
  lua_pushinteger(param_1,9);
  lua_settable(param_1,0xfffffffd);
  lua_pushlstring(param_1,"_COPYRIGHT",10);
  lua_pushlstring(param_1,"Copyright (c) 2009-2010 Brian Maher",0x23);
  lua_settable(param_1,0xfffffffd);
  lua_pushlstring(param_1,"_DESCRIPTION",0xc);
  lua_pushlstring(param_1,"Yet another binding to the zlib library",0x27);
  lua_settable(param_1,0xfffffffd);
  lua_pushlstring(param_1,"_VERSION",8);
  lua_pushlstring(param_1,"lua-zlib $Id: c9f86792ac86380927af9b2393a874e0a2c3f9e5 $  (HEAD, master)"
                  ,0x48);
  lua_settable(param_1,0xfffffffd);
  lua_pushlstring(param_1,"_TEST_BUFSIZ",0xc);
  lua_pushinteger(param_1,0x400);
  lua_settable(param_1,0xfffffffd);
  return 1;
}

