
void FUN_014353dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                 long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  ulong uVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  undefined8 uVar9;
  
  lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 + -1);
  if ((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
    uVar8 = **(ulong **)(unaff_x26 + 0x1428);
    uVar9 = *(undefined8 *)(param_1 + 3);
    uVar2 = uVar8 + 0xc;
    if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar4 = uVar8 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar2;
    }
    else {
      lVar4 = FUN_01348560(param_1,0xc);
    }
    *(int *)(lVar4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(undefined8 *)(unaff_x26 + 0x40) = 0x1435584;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    uVar9 = (**(code **)(unaff_x26 + 0x11e8))(uVar9,(double)((int)param_5 >> 1));
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 3) = uVar9;
    uVar5 = 0xe;
    iVar7 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
    goto LAB_014352b8;
  }
  sVar3 = *(short *)(lVar4 + 7);
  iVar7 = (int)unaff_x19 * 2;
  if (sVar3 == 0x41) {
    if (((param_5 & 1) != 0) && (*(short *)(unaff_x26 + (ulong)*(uint *)(param_5 - 1) + 7) == 0x41))
    {
      *(int *)(param_4 + -0x20) = iVar7;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1bf0));
    }
LAB_014354d8:
    uVar5 = 0xfe;
  }
  else {
    if (sVar3 != 0x43) goto LAB_014354d8;
    if ((param_5 & 1) == 0) {
      uVar5 = 0x1e;
    }
    else {
      lVar4 = unaff_x26 + (ulong)*(uint *)(param_5 - 1);
      if ((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
        uVar5 = 0x1e;
      }
      else {
        if (*(short *)(lVar4 + 7) != 0x43) goto LAB_014354d8;
        uVar5 = 0x1e;
      }
    }
  }
  *(int *)(param_4 + -0x20) = iVar7;
  lVar4 = FUN_01392780(param_5,param_1);
  iVar7 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
LAB_014352b8:
  if ((int)param_6 != iVar7) {
    lVar1 = param_8 * 4 + 0x1f;
    uVar6 = (int)unaff_x26 + *(int *)(param_6 + lVar1);
    uVar5 = uVar6 | uVar5;
    if (uVar6 != uVar5) {
      *(uint *)(param_6 + lVar1) = uVar5;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01435304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_4 + -0x18) + unaff_x19 + 3) * 8))(lVar4)
  ;
  return;
}

