
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c2fdc4(undefined8 param_1)

{
  int __fd;
  char local_18 [16];
  long local_8;
  
  builtin_strncpy(local_18,"/tmp/lua_XXXXXX",0x10);
  local_8 = ___stack_chk_guard;
  __fd = mkstemp(local_18);
  if (__fd == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1,0x608);
  }
  close(__fd);
  lua_pushstring(param_1,local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

