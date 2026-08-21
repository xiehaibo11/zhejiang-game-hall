
undefined8 auxiliar_getgroupudata(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_getmetatable(param_1,param_3);
  if (iVar1 != 0) {
    lua_pushstring(param_1,param_2);
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    lua_settop(param_1,0xfffffffd);
    if (iVar1 != 0) {
      uVar2 = lua_touserdata(param_1,param_3);
      return uVar2;
    }
  }
  return 0;
}

