
undefined8 FUN_00c304b0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar3 = luaL_checklstring(param_1,1,0);
  lua_settop(param_1,1);
  lua_getfield(param_1,0xffffd8f0,"_LOADED");
  lua_getfield(param_1,2,uVar3);
  iVar1 = lua_toboolean(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_getfield(param_1,0xffffd8ef,"loaders");
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 != 5) {
      luaL_error(param_1,"\'package.loaders\' must be a table");
    }
    iVar1 = 1;
    lua_pushlstring(param_1,"",0);
    lua_rawgeti(param_1,0xfffffffe,1);
    iVar2 = lua_type(param_1,0xffffffff);
    while( true ) {
      if (iVar2 == 0) {
        uVar5 = lua_tolstring(param_1,0xfffffffe,0);
        luaL_error(param_1,"module \'%s\' not found:%s",uVar3,uVar5);
      }
      lua_pushstring(param_1,uVar3);
      lua_call(param_1,1,1);
      iVar2 = lua_type(param_1,0xffffffff);
      if (iVar2 == 6) break;
      iVar2 = lua_isstring(param_1,0xffffffff);
      if (iVar2 == 0) {
        lua_settop(param_1,0xfffffffe);
      }
      else {
        lua_concat(param_1,2);
      }
      iVar1 = iVar1 + 1;
      lua_rawgeti(param_1,0xfffffffe,iVar1);
      iVar2 = lua_type(param_1,0xffffffff);
    }
    lua_pushlightuserdata(param_1,&DAT_01411f60);
    lua_setfield(param_1,2,uVar3);
    lua_pushstring(param_1,uVar3);
    lua_call(param_1,1,1);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 != 0) {
      lua_setfield(param_1,2,uVar3);
    }
    lua_getfield(param_1,2,uVar3);
    puVar4 = (undefined *)lua_touserdata(param_1,0xffffffff);
    if (puVar4 == &DAT_01411f60) {
      lua_pushboolean(param_1,1);
      lua_pushvalue(param_1,0xffffffff);
      lua_setfield(param_1,2,uVar3);
    }
  }
  else {
    puVar4 = (undefined *)lua_touserdata(param_1,0xffffffff);
    if (puVar4 == &DAT_01411f60) {
      luaL_error(param_1,"loop or previous error loading module \'%s\'",uVar3);
    }
  }
  return 1;
}

