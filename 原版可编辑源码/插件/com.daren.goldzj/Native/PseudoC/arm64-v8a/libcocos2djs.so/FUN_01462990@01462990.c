
void FUN_01462990(long param_1,ulong param_2,undefined8 param_3,long param_4,int param_5,
                 long param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  double dVar8;
  
  lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 + -1);
  if ((int)lVar2 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
    uVar5 = **(ulong **)(unaff_x26 + 0x1428);
    dVar8 = *(double *)(param_1 + 3);
    uVar1 = uVar5 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar5 = uVar5 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      uVar5 = FUN_01348560(param_1,0xc);
    }
    *(int *)(uVar5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(uVar5 + 3) = dVar8 - (double)((int)param_2 >> 1);
    uVar7 = 0xe;
    goto LAB_01462884;
  }
  sVar3 = *(short *)(lVar2 + 7);
  iVar4 = ((int)unaff_x19 + -1) * 2;
  if (sVar3 == 0x41) {
    if (((param_2 & 1) != 0) && (*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) == 0x41))
    {
      *(int *)(param_4 + -0x20) = iVar4;
      uVar5 = FUN_013ea5e0();
      if ((uVar5 & 1) == 0) {
        if (param_5 == 0) {
          lVar2 = param_8 * 4 + 0x1f;
          uVar6 = (int)unaff_x26 + *(int *)(param_6 + lVar2);
          uVar7 = uVar6 | 0xfe;
          if (uVar6 != uVar7) {
            *(uint *)(param_6 + lVar2) = uVar7;
            *(undefined4 *)(param_6 + 0x17) = 0;
          }
        }
        *(int *)(param_4 + -0x20) = iVar4;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b0));
      }
      uVar7 = 0x40;
      goto LAB_01462884;
    }
LAB_01462aec:
    uVar7 = 0xfe;
  }
  else {
    if (sVar3 != 0x43) goto LAB_01462aec;
    if ((param_2 & 1) == 0) {
      uVar7 = 0x1e;
    }
    else {
      lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      if ((int)lVar2 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
        uVar7 = 0x1e;
      }
      else {
        if (*(short *)(lVar2 + 7) != 0x43) goto LAB_01462aec;
        uVar7 = 0x1e;
      }
    }
  }
  *(int *)(param_4 + -0x20) = iVar4;
  uVar5 = FUN_01392040(param_2,param_1);
LAB_01462884:
  if (param_5 == 0) {
    lVar2 = param_8 * 4 + 0x1f;
    uVar6 = (int)unaff_x26 + *(int *)(param_6 + lVar2);
    uVar7 = uVar6 | uVar7;
    if (uVar6 != uVar7) {
      *(uint *)(param_6 + lVar2) = uVar7;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x014628d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_4 + -0x18) + unaff_x19 + 9) * 8))(uVar5)
  ;
  return;
}

