
void FUN_00c2e5d4(long param_1)

{
  int iVar1;
  FILE *__stream;
  
  __stream = *(FILE **)(*(long *)(*(long *)(param_1 + 0x10) + 0x298) + 0x30);
  if (__stream != (FILE *)0x0) {
    iVar1 = fflush(__stream);
    luaL_fileresult(param_1,iVar1 == 0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x5f0);
}

