
bool FUN_008f6354(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008f635c to 009f6487 has its CatchHandler @ 008f635c
                       catch() { ... } // from try @ 008f635c with catch @ 008f635c
                       catch() { ... } // from try @ 008f6508 with catch @ 008f635c */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x50));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:isInertiaDisabled",iVar1,0);
  }
  return iVar1 == 0;
}

