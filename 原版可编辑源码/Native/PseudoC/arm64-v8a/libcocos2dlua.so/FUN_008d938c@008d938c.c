
bool FUN_008d938c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008d938c to 009d9397 has its CatchHandler @ 008d96fc */
                    /* try { // try from 008d93a4 to 009d93af has its CatchHandler @ 008d96d0 */
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008d93b0 to 009d93db has its CatchHandler @ 008d9248 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0xe8));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:isPivotAsAnchor",iVar1,0);
                    /* try { // try from 008d93dc to 009d93eb has its CatchHandler @ 008d9700 */
  }
                    /* try { // try from 008d93f0 to 009d93fb has its CatchHandler @ 008d96f8 */
  return iVar1 == 0;
}

