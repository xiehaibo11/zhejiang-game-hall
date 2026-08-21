
void FUN_011a7b6c(void)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 local_14 [4];
  
  if (DAT_01781870 != -1) {
    FUN_011a2d5c();
    DAT_01781870 = -1;
  }
  if (DAT_01781874 != -1) {
    FUN_011a2d5c();
    DAT_01781874 = -1;
  }
  iVar1 = FUN_011a6068(&DAT_01781870,0);
  if (iVar1 == 0) {
    local_14[0] = 0x2a;
    do {
      sVar2 = write(DAT_01781874,local_14,1);
      if (-1 < (int)sVar2) {
        return;
      }
      piVar3 = (int *)__errno();
    } while (*piVar3 == 4);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

