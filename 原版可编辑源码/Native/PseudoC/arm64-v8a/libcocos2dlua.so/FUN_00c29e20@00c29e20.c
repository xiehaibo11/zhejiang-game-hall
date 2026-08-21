
ulong FUN_00c29e20(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (long)param_2 * 8 + -8;
  if ((ulong)(*(long *)(param_1 + 0x20) + lVar1) < *(ulong *)(param_1 + 0x28)) {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar1);
    if ((int)((long)uVar2 >> 0x2f) == -0xc) {
      return uVar2 & 0x7fffffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,param_2,5);
}

