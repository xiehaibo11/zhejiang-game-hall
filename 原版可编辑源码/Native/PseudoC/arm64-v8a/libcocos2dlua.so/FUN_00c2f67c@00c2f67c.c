
void FUN_00c2f67c(long param_1)

{
  int iVar1;
  ulong uVar2;
  FILE *__stream;
  
  if (*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) {
    uVar2 = **(ulong **)(param_1 + 0x20);
    if ((int)((long)uVar2 >> 0x2f) == -0xd) {
      uVar2 = uVar2 & 0x7fffffffffff;
      if (*(char *)(uVar2 + 10) == '\x01') {
        __stream = *(FILE **)(uVar2 + 0x30);
        if (__stream != (FILE *)0x0) {
          iVar1 = fflush(__stream);
          luaL_fileresult(param_1,iVar1 == 0,0);
          return;
        }
        goto LAB_00c2f6ec;
      }
    }
  }
  param_1 = FUN_00c2ee00(param_1);
LAB_00c2f6ec:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x5d3);
}

