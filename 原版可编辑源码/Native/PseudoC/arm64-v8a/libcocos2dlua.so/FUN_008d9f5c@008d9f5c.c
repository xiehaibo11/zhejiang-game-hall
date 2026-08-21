
bool FUN_008d9f5c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008d9f68 to 009d9f73 has its CatchHandler @ 008da15c */
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008d9f7c to 009d9f93 has its CatchHandler @ 008da050 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 008d9fbc to 009da177 has its CatchHandler @ 008d9bdc */
    tolua_pushnumber((double)*(float *)(lVar2 + 0xf0),param_1);
  }
  else {
                    /* try { // try from 008d9f98 to 009d9fbb has its CatchHandler @ 008da04c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getRotation",iVar1,0);
  }
  return iVar1 == 0;
}

