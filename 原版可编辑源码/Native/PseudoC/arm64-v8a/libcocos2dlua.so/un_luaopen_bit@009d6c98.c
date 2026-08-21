
undefined8 un_luaopen_bit(undefined8 param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  lua_pushnumber(0x41d56a8cddc00000);
  dVar4 = (double)lua_tonumber(param_1,0xffffffff);
  iVar3 = SUB84(dVar4 + 6755399441055744.0,0);
  if (iVar3 == 0) {
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      luaL_typerror(param_1,0xffffffff,"number");
    }
    lua_settop(param_1,0xfffffffe);
  }
  else {
    lua_settop(param_1,0xfffffffe);
    if (iVar3 == 0x55aa3377) goto LAB_009d6d50;
  }
  pcVar1 = "not compiled with SWAPPED_DOUBLE";
  if (iVar3 != 0x43380000) {
    pcVar1 = "compiled with incompatible luaconf.h";
  }
  luaL_error(param_1,"bit library self-test failed (%s)",pcVar1);
LAB_009d6d50:
  lua_createtable(param_1,0,0);
  luaL_register(param_1,0,&PTR_s_tobit_0169f9f0);
  return 1;
}

