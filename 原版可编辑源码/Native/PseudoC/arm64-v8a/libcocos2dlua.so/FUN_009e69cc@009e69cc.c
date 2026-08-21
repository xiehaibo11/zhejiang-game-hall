
undefined8 FUN_009e69cc(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,"lua_universe_Downloader2_getThreadCount: expected 0 argument");
  }
  universe::Downloader2::getInstance();
  iVar1 = universe::Downloader2::getThreadCount();
                    /* try { // try from 009e6a04 to 00ae6a73 has its CatchHandler @ 009e6a04
                       catch() { ... } // from try @ 009e6a04 with catch @ 009e6a04
                       catch() { ... } // from try @ 009e6a94 with catch @ 009e6a04
                       catch() { ... } // from try @ 009e6b44 with catch @ 009e6a04
                       catch() { ... } // from try @ 009e6bb0 with catch @ 009e6a04
                       catch() { ... } // from try @ 009e6c0c with catch @ 009e6a04
                       catch() { ... } // from try @ 009e6c94 with catch @ 009e6a04
                       catch() { ... } // from try @ 009e6d80 with catch @ 009e6a04 */
  lua_pushinteger(param_1,(long)iVar1);
  return 1;
}

