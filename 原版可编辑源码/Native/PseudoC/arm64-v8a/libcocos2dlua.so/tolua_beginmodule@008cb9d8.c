
void tolua_beginmodule(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    lua_pushvalue(param_1,0xffffd8ee);
    return;
  }
  lua_pushstring(param_1);
  lua_rawget(param_1,0xfffffffe);
  lua_pushlstring(param_1,".isclass",8);
  lua_rawget(param_1,0xfffffffe);
  iVar1 = lua_type(param_1,0xffffffff);
  lua_settop(param_1,0xfffffffe);
  if ((iVar1 != 0) && (iVar1 = lua_getmetatable(param_1,0xffffffff), iVar1 != 0)) {
    lua_remove(param_1,0xfffffffe);
    return;
  }
  return;
}

