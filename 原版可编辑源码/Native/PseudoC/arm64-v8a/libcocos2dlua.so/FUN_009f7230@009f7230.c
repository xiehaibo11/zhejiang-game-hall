
undefined8 FUN_009f7230(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = luaL_checkudata(param_1,1,"pb.Buffer");
  lua_pushfstring(param_1,"pb.Buffer: %p",uVar1);
  return 1;
}

