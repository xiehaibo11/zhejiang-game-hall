
void FUN_008cc558(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  lua_getfield(param_1,0xffffd8f0,param_2);
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    iVar1 = lua_getmetatable(param_1,0xffffffff);
    if (iVar1 != 0) {
      uVar2 = 0xfffffffd;
      goto LAB_008cc6c0;
    }
    param_3 = "tolua_commonclass";
  }
  lua_getfield(param_1,0xffffd8f0,param_3);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_pushnil(param_1);
  }
  else {
    lua_pushstring(param_1,"tolua_ubox");
    lua_rawget(param_1,0xfffffffe);
  }
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"tolua_ubox");
    lua_createtable(param_1,0,0);
    lua_createtable(param_1,0,0);
    lua_pushlstring(param_1,"__mode",6);
    lua_pushlstring(param_1,"v",1);
    lua_rawset(param_1,0xfffffffd);
    lua_setmetatable(param_1,0xfffffffe);
  }
  else {
    lua_pushstring(param_1,"tolua_ubox");
    lua_insert(param_1,0xfffffffe);
  }
  lua_rawset(param_1,0xfffffffc);
  uVar2 = 0xfffffffe;
  lua_setmetatable(param_1,0xfffffffe);
LAB_008cc6c0:
  lua_settop(param_1,uVar2);
  return;
}

