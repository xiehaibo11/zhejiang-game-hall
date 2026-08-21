
undefined8 FUN_00917fe4(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = auxiliar_checkclass(param_1,"tcp{master}",1);
  dVar3 = (double)luaL_optnumber(0x4040000000000000,param_1,2);
  iVar1 = socket_listen(uVar2,(int)dVar3);
  if (iVar1 == 0) {
                    /* try { // try from 00918058 to 00a1808b has its CatchHandler @ 00918158 */
    uVar2 = 1;
    auxiliar_setclass(param_1,"tcp{server}",1);
    lua_pushnumber(0x3ff0000000000000,param_1);
  }
  else {
    lua_pushnil(param_1);
    uVar2 = socket_strerror(iVar1);
    lua_pushstring(param_1,uVar2);
    uVar2 = 2;
  }
  return uVar2;
}

