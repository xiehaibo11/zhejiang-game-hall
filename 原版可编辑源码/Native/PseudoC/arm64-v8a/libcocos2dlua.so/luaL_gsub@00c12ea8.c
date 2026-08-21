
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaL_gsub(undefined8 param_1,char *param_2,char *param_3,undefined8 param_4)

{
  size_t sVar1;
  char *pcVar2;
  undefined1 auStack_420 [1048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sVar1 = strlen(param_3);
  luaL_buffinit(param_1,auStack_420);
  while (pcVar2 = strstr(param_2,param_3), pcVar2 != (char *)0x0) {
    luaL_addlstring(auStack_420,param_2,(long)pcVar2 - (long)param_2);
    luaL_addstring(auStack_420,param_4);
    param_2 = pcVar2 + sVar1;
  }
  luaL_addstring(auStack_420,param_2);
  luaL_pushresult(auStack_420);
  lua_tolstring(param_1,0xffffffff,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

