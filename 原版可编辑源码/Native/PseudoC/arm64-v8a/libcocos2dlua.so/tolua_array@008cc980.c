
void tolua_array(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  int iVar2;
  
  lua_pushstring(param_1,&DAT_012a5cc6);
  lua_rawget(param_1,0xfffffffe);
  iVar2 = lua_type(param_1,0xffffffff);
  if (iVar2 != 5) {
    lua_settop(param_1,0xfffffffe);
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,&DAT_012a5cc6);
    lua_pushvalue(param_1,0xfffffffe);
    lua_rawset(param_1,0xfffffffc);
  }
  lua_pushstring(param_1,param_2);
  lua_createtable(param_1,0,0);
  lua_pushvalue(param_1,0xffffffff);
  lua_setmetatable(param_1,0xfffffffe);
  lua_pushstring(param_1,"__index");
  lua_pushcclosure(param_1,param_3,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,"__newindex");
  pcVar1 = FUN_008ccacc;
  if (param_4 != (code *)0x0) {
    pcVar1 = param_4;
  }
  lua_pushcclosure(param_1,pcVar1,0);
  lua_rawset(param_1,0xfffffffd);
  lua_rawset(param_1,0xfffffffd);
  lua_settop(param_1,0xfffffffe);
  return;
}

