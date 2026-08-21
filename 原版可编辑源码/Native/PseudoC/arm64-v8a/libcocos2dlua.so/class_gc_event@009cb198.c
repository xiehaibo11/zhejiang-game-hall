
undefined8 class_gc_event(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)lua_touserdata(param_1,1);
  uVar3 = *puVar2;
  lua_pushvalue(param_1,0xffffd8ed);
  lua_pushlightuserdata(param_1,uVar3);
  lua_rawget(param_1,0xfffffffe);
  lua_getmetatable(param_1,1);
  iVar1 = lua_gettop(param_1);
  iVar1 = tolua_fast_isa(param_1,iVar1,iVar1 + -1,0xffffd8ec);
  if (iVar1 != 0) {
    lua_pushlstring(param_1,".collector",10);
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 != 6) {
      lua_settop(param_1,0xfffffffe);
      lua_pushcclosure(param_1,tolua_default_collect,0);
    }
    lua_pushvalue(param_1,1);
    lua_call(param_1,1,0);
    lua_pushlightuserdata(param_1,uVar3);
    lua_pushnil(param_1);
    lua_rawset(param_1,0xfffffffb);
  }
  lua_settop(param_1,0xfffffffc);
  return 0;
}

