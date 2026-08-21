
undefined8 FUN_008cbaf0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = lua_isuserdata(param_1,1);
  if ((iVar2 == 0) || (iVar2 = lua_getmetatable(param_1,1), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    lua_settop(param_1,0xfffffffe);
    lua_gc(param_1,2,0);
    iVar2 = tolua_register_gc(param_1,1);
    bVar1 = iVar2 != 0;
  }
  lua_pushboolean(param_1,bVar1);
  return 1;
}

