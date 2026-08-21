
int FUN_00c2fc28(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  lua_getfield(param_1,0xffffffff,param_2);
  iVar1 = lua_isnumber(param_1,0xffffffff);
  if (iVar1 != 0) {
    iVar1 = lua_tointeger(param_1,0xffffffff);
    lua_settop(param_1,0xfffffffe);
    return iVar1;
  }
  if (-1 < param_3) {
    lua_settop(param_1,0xfffffffe);
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb308(param_1,0x62d,param_2);
}

