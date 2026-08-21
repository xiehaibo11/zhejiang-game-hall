
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c30738(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_248 [576];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = lua_getstack(param_1,1,auStack_248);
  if (((iVar1 == 0) || (iVar1 = lua_getinfo(param_1,&DAT_01412040,auStack_248), iVar1 == 0)) ||
     (iVar1 = lua_iscfunction(param_1,0xffffffff), iVar1 != 0)) {
    luaL_error(param_1,"\'module\' not called from a Lua function");
  }
  lua_pushvalue(param_1,0xfffffffe);
  lua_setfenv(param_1,0xfffffffe);
  lua_settop(param_1,0xfffffffe);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

