
ulong FUN_00c29a84(long param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x20) + (long)param_2 * 8 + -8;
  if (uVar1 < *(ulong *)(param_1 + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb458(param_1,param_2,0x227);
}

