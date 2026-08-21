
void auxiliar_newclass(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  luaL_newmetatable();
  lua_pushstring(param_1,"__index");
  lua_createtable(param_1,0,0);
  lua_pushstring(param_1,"class");
                    /* try { // try from 009d0ecc to 00ad10d3 has its CatchHandler @ 009cee70 */
  lua_pushstring(param_1,param_2);
  lua_rawset(param_1,0xfffffffd);
  lVar1 = *param_3;
  while (lVar1 != 0) {
    lua_pushstring(param_1);
    lua_pushcclosure(param_1,param_3[1],0);
    uVar2 = 0xfffffffb;
    if (*(char *)*param_3 != '_') {
      uVar2 = 0xfffffffd;
    }
    lua_rawset(param_1,uVar2);
    lVar1 = param_3[2];
    param_3 = param_3 + 2;
  }
  lua_rawset(param_1,0xfffffffd);
  lua_settop(param_1,0xfffffffe);
  return;
}

