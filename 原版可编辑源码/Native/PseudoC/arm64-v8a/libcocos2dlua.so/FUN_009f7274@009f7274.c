
undefined8 FUN_009f7274(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)luaL_checkudata(param_1,1,"pb.Buffer");
  lua_pushinteger(param_1,*puVar1);
  return 1;
}

