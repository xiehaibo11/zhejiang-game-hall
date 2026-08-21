
undefined4 FUN_009cb0bc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = lua_isuserdata(param_1,1);
  if (iVar1 != 0) {
    lua_pushvalue(param_1,1);
    while (iVar1 = lua_getmetatable(param_1,0xffffffff), iVar1 != 0) {
      lua_remove(param_1,0xfffffffe);
      lua_pushstring(param_1,param_2);
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 == 6) {
        lua_pushvalue(param_1,1);
        lua_pushvalue(param_1,2);
        lua_call(param_1,2,1);
        return 1;
      }
      lua_settop(param_1,3);
    }
  }
  tolua_error(param_1,"Attempt to perform operation on an invalid operand",0);
  return 0;
}

