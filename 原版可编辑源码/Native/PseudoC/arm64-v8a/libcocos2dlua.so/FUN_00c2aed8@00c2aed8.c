
undefined8 FUN_00c2aed8(undefined8 param_1)

{
  int iVar1;
  
  lua_settop(param_1,1);
  lua_newuserdata(param_1,0);
  iVar1 = lua_toboolean(param_1,1);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = lua_type(param_1,1);
  if (iVar1 != 1) {
    iVar1 = lua_getmetatable(param_1,1);
    if (iVar1 != 0) {
      lua_rawget(param_1,0xffffd8ed);
      iVar1 = lua_toboolean(param_1,0xffffffff);
      lua_settop(param_1,0xfffffffe);
      if (iVar1 != 0) {
        lua_getmetatable(param_1,1);
        goto LAB_00c2af90;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00bfb458(param_1,1,0x2af);
  }
  lua_createtable(param_1,0,0);
  lua_pushvalue(param_1,0xffffffff);
  lua_pushboolean(param_1,1);
  lua_rawset(param_1,0xffffd8ed);
LAB_00c2af90:
  lua_setmetatable(param_1,2);
  return 1;
}

