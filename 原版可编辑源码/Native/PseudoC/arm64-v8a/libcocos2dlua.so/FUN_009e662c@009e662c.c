
undefined8 FUN_009e662c(undefined8 param_1)

{
  int iVar1;
  Downloader2 *this;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,"lua_universe_Downloader2_commit: expected 0 argument");
  }
  this = (Downloader2 *)universe::Downloader2::getInstance();
  universe::Downloader2::commit(this);
  return 0;
}

