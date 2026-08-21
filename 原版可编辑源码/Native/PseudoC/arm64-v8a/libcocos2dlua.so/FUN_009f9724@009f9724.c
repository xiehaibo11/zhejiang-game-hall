
undefined8 FUN_009f9724(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  FUN_009f9a54(param_1);
  lua_pushlightuserdata(param_1,"pb.State");
  lua_rawget(param_1,0xffffd8f0);
  if (iVar1 != 0) {
    iVar1 = lua_type(param_1,1);
    if (iVar1 == 0) {
      lua_pushnil(param_1);
    }
    else {
      luaL_checkudata(param_1,1,"pb.State");
      lua_pushvalue(param_1,1);
    }
    lua_pushlightuserdata(param_1,"pb.State");
    lua_insert(param_1,0xfffffffe);
    lua_rawset(param_1,0xffffd8f0);
  }
  return 1;
}

