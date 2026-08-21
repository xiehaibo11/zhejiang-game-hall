
void FUN_00c2e6e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x298) + 0x30);
  if (lVar1 != 0) {
    FUN_00c2e61c(param_1,lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x5f0);
}

