
void FUN_00c29bdc(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  lVar1 = (long)param_2 * 8 + -8;
  if ((ulong)(*(long *)(param_1 + 0x20) + lVar1) < *(ulong *)(param_1 + 0x28)) {
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar1);
    uVar4 = (uint)((long)uVar3 >> 0x2f);
    if ((uVar4 < 0xfffffff3) ||
       ((uVar4 == 0xfffffffb && (iVar2 = FUN_00c1f7ac(uVar3 & 0x7fffffffffff), iVar2 != 0)))) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,param_2,3);
}

