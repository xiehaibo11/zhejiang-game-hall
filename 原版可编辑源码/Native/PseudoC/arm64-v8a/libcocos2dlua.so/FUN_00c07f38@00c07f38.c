
void FUN_00c07f38(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + *(int *)(param_1 + 0x34);
  if (*(byte *)(param_1 + 0x5a) < uVar1) {
    if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      entry();
    }
    *(char *)(param_1 + 0x5a) = (char)uVar1;
  }
  return;
}

