
ulong FUN_00c07cb4(long param_1)

{
  ulong uVar1;
  
  if ((*(int *)(param_1 + 0x34) != 0x10a) && (*(int *)(param_1 + 0x34) != 0x11f)) {
                    /* WARNING: Subroutine does not return */
    FUN_00c07c88(param_1,0x11f);
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  FUN_00c079c0(param_1);
  return uVar1 & 0x7fffffffffff;
}

