
bool tolua_ismodulemetatable(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = lua_getmetatable(param_1,0xffffffff);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    lua_pushstring(param_1,"__index");
    lua_rawget(param_1,0xfffffffe);
    pcVar3 = (code *)lua_tocfunction(param_1,0xffffffff);
    bVar1 = pcVar3 == FUN_009cb324;
    lua_settop(param_1,0xfffffffd);
  }
  return bVar1;
}

