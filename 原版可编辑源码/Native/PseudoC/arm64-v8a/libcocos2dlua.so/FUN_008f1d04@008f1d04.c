
bool FUN_008f1d04(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 008f1d2c to 009f2173 has its CatchHandler @ 008f1d2c
                       catch() { ... } // from try @ 008f1d2c with catch @ 008f1d2c
                       catch() { ... } // from try @ 008f21f4 with catch @ 008f1d2c */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x214));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLoader:isPlaying",iVar1,0);
  }
  return iVar1 == 0;
}

