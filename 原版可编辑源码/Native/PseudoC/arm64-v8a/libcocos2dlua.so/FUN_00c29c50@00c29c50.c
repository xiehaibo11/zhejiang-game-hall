
undefined1  [16] FUN_00c29c50(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar1 = (long)param_2 * 8 + -8;
  if ((ulong)(lVar5 + lVar1) < *(ulong *)(param_1 + 0x28)) {
    uVar3 = *(ulong *)(lVar5 + lVar1);
    uVar4 = (uint)((long)uVar3 >> 0x2f);
    if (0xfffffff2 < uVar4) {
      if ((uVar4 != 0xfffffffb) || (iVar2 = FUN_00c1f784(uVar3 & 0x7fffffffffff), iVar2 == 0))
      goto LAB_00c29ce0;
      uVar3 = *(ulong *)(lVar5 + lVar1);
    }
    if ((int)((long)uVar3 >> 0x2f) == -0xe) {
      dVar6 = (double)*(int *)(lVar5 + lVar1);
      *(double *)(lVar5 + lVar1) = dVar6;
    }
    else {
      dVar6 = *(double *)(lVar5 + lVar1);
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar6;
    return auVar7;
  }
LAB_00c29ce0:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,param_2,3);
}

