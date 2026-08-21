
undefined8 push_table_instance(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = lua_type();
  if (iVar1 == 5) {
    lua_pushstring(param_1,".c_instance");
    lua_gettable(param_1,param_2);
    iVar1 = lua_isuserdata(param_1,0xffffffff);
    if (iVar1 != 0) {
      lua_replace(param_1,param_2);
      return 1;
    }
    lua_settop(param_1,0xfffffffe);
  }
  return 0;
}

