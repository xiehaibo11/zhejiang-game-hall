
bool FUN_008d980c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 008d9860 to 009d986b has its CatchHandler @ 008d9b24 */
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0xfa));
                    /* try { // try from 008d986c to 009d98df has its CatchHandler @ 008d97b0 */
  }
  else {
                    /* try { // try from 008d9840 to 009d984f has its CatchHandler @ 008d9b94 */
                    /* try { // try from 008d9854 to 009d985f has its CatchHandler @ 008d9b3c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:isDraggable",iVar1,0);
  }
  return iVar1 == 0;
}

