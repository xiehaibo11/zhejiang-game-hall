
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c31844(undefined8 param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  while( true ) {
    fwrite("lua_debug> ",1,0xb,(FILE *)pthread_rwlock_tryrdlock);
    pcVar3 = fgets(acStack_108,0xfa,(FILE *)&__sF);
    if ((pcVar3 == (char *)0x0) || (iVar1 = strcmp(acStack_108,"cont\n"), iVar1 == 0)) break;
    sVar2 = strlen(acStack_108);
    iVar1 = luaL_loadbuffer(param_1,acStack_108,sVar2,"=(debug command)");
    if ((iVar1 != 0) || (iVar1 = lua_pcall(param_1,0,0,0), iVar1 != 0)) {
      pcVar3 = (char *)lua_tolstring(param_1,0xffffffff,0);
      fputs(pcVar3,(FILE *)pthread_rwlock_tryrdlock);
      fputc(10,(FILE *)pthread_rwlock_tryrdlock);
    }
    lua_settop(param_1,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

