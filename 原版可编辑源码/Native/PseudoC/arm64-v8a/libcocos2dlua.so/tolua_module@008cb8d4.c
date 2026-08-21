
void tolua_module(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    lua_pushvalue(param_1,0xffffd8ee);
  }
  else {
    lua_pushstring(param_1);
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 != 5) {
      lua_settop(param_1,0xfffffffe);
      lua_createtable(param_1,0,0);
      lua_pushstring(param_1,param_2);
      lua_pushvalue(param_1,0xfffffffe);
      lua_rawset(param_1,0xfffffffc);
    }
  }
  if ((param_3 != 0) && (iVar1 = tolua_ismodulemetatable(param_1), iVar1 == 0)) {
    lua_createtable(param_1,0,0);
    tolua_moduleevents(param_1);
    iVar1 = lua_getmetatable(param_1,0xfffffffe);
    if (iVar1 != 0) {
      lua_setmetatable(param_1,0xfffffffe);
    }
    lua_setmetatable(param_1,0xfffffffe);
  }
  lua_settop(param_1,0xfffffffe);
  return;
}

