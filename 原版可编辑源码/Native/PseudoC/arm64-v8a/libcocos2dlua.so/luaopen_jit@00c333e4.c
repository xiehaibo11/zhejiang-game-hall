
undefined8 luaopen_jit(long param_1)

{
  lua_pushlstring(param_1,"Linux",5);
  lua_pushlstring(param_1,"arm64",5);
  lua_pushinteger(param_1,0x4e84);
  lua_pushlstring(param_1,"LuaJIT 2.1.0-beta2",0x12);
  FUN_00c2944c(param_1,&DAT_01410f50,&DAT_01412520,&PTR_FUN_01697990);
  FUN_00c2992c(param_1,"jit.profile",FUN_00c327b0,*(undefined8 *)(param_1 + 0x48));
  FUN_00c2992c(param_1,"jit.util",FUN_00c32780,*(undefined8 *)(param_1 + 0x48));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x10;
  return 1;
}

