
undefined8 FUN_008cbb6c(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = lua_isuserdata(param_1,1);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)lua_touserdata(param_1,1);
    uVar3 = *puVar2;
    lua_gc(param_1,2,0);
    lua_pushstring(param_1,"tolua_gc");
    lua_rawget(param_1,0xffffd8f0);
    lua_pushlightuserdata(param_1,uVar3);
    lua_rawget(param_1,0xfffffffe);
    lua_getmetatable(param_1,1);
    iVar1 = lua_rawequal(param_1,0xffffffff,0xfffffffe);
    if (iVar1 != 0) {
      lua_pushlightuserdata(param_1,uVar3);
      lua_pushnil(param_1);
      lua_rawset(param_1,0xfffffffb);
      uVar3 = 1;
      goto LAB_008cbc28;
    }
  }
  uVar3 = 0;
LAB_008cbc28:
  lua_pushboolean(param_1,uVar3);
  return 1;
}

