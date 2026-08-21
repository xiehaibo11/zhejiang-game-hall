
void FUN_00bfb124(ulong param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)((*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc) + 0xa8);
  if ((uVar3 & 3) != 0) {
    param_2[1] = uVar3;
    uVar1 = (uint)((long)*param_2 >> 0x2f);
    *param_2 = param_1 | 0xfffc800000000000;
    uVar2 = 0xd;
    if (0xfffffff2 < uVar1) {
      uVar2 = ~uVar1;
    }
    *(ulong **)(param_1 + 0x20) = param_2 + 2;
    *(ulong **)(param_1 + 0x28) = param_2 + 2;
                    /* WARNING: Subroutine does not return */
    FUN_00bfae80(param_1,0xd6,(&PTR_DAT_01697110)[uVar2]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb020(param_1,param_2,0x18e);
}

