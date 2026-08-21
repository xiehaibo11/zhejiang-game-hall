
int FUN_00c29cf0(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  lVar1 = (long)param_2 * 8 + -8;
  uVar2 = lVar6 + lVar1;
  if (uVar2 < *(ulong *)(param_1 + 0x28)) {
    uVar4 = *(ulong *)(lVar6 + lVar1);
    uVar5 = (uint)((long)uVar4 >> 0x2f);
    if (0xfffffff2 < uVar5) {
      if ((uVar5 != 0xfffffffb) || (iVar3 = FUN_00c1f7ac(uVar4 & 0x7fffffffffff,uVar2), iVar3 == 0))
      goto LAB_00c29d60;
      uVar4 = *(ulong *)(lVar6 + lVar1);
    }
    if ((int)((long)uVar4 >> 0x2f) == -0xe) {
      iVar3 = *(int *)(lVar6 + lVar1);
    }
    else {
      iVar3 = (int)*(double *)(lVar6 + lVar1);
      *(int *)(lVar6 + lVar1) = iVar3;
      *(undefined4 *)(uVar2 + 4) = 0xfff90000;
    }
    return iVar3;
  }
LAB_00c29d60:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,param_2,3);
}

