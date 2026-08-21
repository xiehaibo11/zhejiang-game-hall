
void FUN_00c2f91c(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  FILE *__stream;
  
  if (*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) {
    uVar3 = **(ulong **)(param_1 + 0x20);
    if ((int)((long)uVar3 >> 0x2f) == -0xd) {
      uVar3 = uVar3 & 0x7fffffffffff;
      if (*(char *)(uVar3 + 10) == '\x01') {
        __stream = *(FILE **)(uVar3 + 0x30);
        if (__stream != (FILE *)0x0) {
          iVar1 = FUN_00c29ed8(param_1,2,0xffffffff,&DAT_01411e40);
          iVar2 = FUN_00c29da0(param_1,3,0x400);
          iVar1 = setvbuf(__stream,(char *)0x0,iVar1,(long)iVar2);
          luaL_fileresult(param_1,iVar1 == 0,0);
          return;
        }
        goto LAB_00c2f9c8;
      }
    }
  }
  param_1 = FUN_00c2ee00(param_1);
LAB_00c2f9c8:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x5d3);
}

