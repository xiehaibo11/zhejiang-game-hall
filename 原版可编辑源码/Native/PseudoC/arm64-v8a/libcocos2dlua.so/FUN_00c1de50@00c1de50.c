
void FUN_00c1de50(long param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 - 1;
  *(ulong *)(param_1 + 0x28) =
       *(long *)(param_1 + 0x20) +
       (ulong)*(byte *)(*(long *)((*(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) +
                                 0x20) + -0x5d) * 8;
  if (uVar1 == 0xd) {
    FUN_00c29cf0(param_1,param_2 + 1);
    return;
  }
  if (uVar1 != 0xe) {
    if (uVar1 == 4) {
      FUN_00c29ac0();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00bfb470(param_1,param_2 + 1,(&PTR_DAT_01697110)[uVar1]);
  }
  FUN_00c29c50();
  return;
}

