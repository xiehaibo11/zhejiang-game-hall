
undefined8 luaopen_math(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = lua_newuserdata(param_1,0x28);
  *(undefined4 *)(lVar1 + 0x20) = 0;
  FUN_00c2944c(param_1,&DAT_01410f38,&DAT_014118c0,&PTR_FUN_01697600);
  lua_getfield(param_1,0xffffffff,&DAT_014119b0);
  lua_setfield(param_1,0xfffffffe,&DAT_014119b8);
  return 1;
}

