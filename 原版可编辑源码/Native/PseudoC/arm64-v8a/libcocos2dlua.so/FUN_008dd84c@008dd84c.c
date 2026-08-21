
bool FUN_008dd84c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008dd868 to 009dd873 has its CatchHandler @ 008dd960 */
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 008dd874 to 009dd893 has its CatchHandler @ 008dd948 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x270));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:getOpaque",iVar1,0);
  }
  return iVar1 == 0;
}

