
bool tolua_register_gc(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)lua_touserdata();
  uVar3 = *puVar2;
  lua_pushstring(param_1,"tolua_gc");
  lua_rawget(param_1,0xffffd8f0);
  lua_pushlightuserdata(param_1,uVar3);
  lua_rawget(param_1,0xfffffffe);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_pushlightuserdata(param_1,uVar3);
    lua_getmetatable(param_1,param_2);
    lua_rawset(param_1,0xfffffffc);
  }
  lua_settop(param_1,0xfffffffd);
  return iVar1 == 0;
}

