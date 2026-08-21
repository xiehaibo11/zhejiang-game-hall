
bool FUN_008d99b8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008d99bc to 009d99c7 has its CatchHandler @ 008d9b0c */
                    /* try { // try from 008d99c8 to 009d99d3 has its CatchHandler @ 008d9af4 */
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008d99d4 to 009d9a6b has its CatchHandler @ 008d97b0 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0xf5));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:isTouchable",iVar1,0);
  }
  return iVar1 == 0;
}

