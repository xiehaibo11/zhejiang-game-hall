
undefined8 FUN_0090d968(undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 0090d968 to 00a0d9db has its CatchHandler @ 0090da8c */
  lVar1 = luaL_checkudata(param_1,1,"cc.Downloader");
  if (lVar1 == 0) {
    luaL_argerror(param_1,1,"`Downloader\' expected");
  }
  lua_pushlightuserdata(param_1,lVar1);
  lua_pushnil(param_1);
  lua_settable(param_1,0xffffd8f0);
  return 0;
}

