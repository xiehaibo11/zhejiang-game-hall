
void FUN_01467700(ulong param_1)

{
  long lVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int extraout_w8;
  ulong uVar8;
  ulong extraout_x9;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  iVar7 = *(int *)(unaff_x20 + unaff_x19 + 5);
  uVar8 = (ulong)*(uint *)(unaff_x20 + unaff_x19 + 9);
  uVar4 = *(undefined8 *)(unaff_x29 + (long)*(int *)(unaff_x20 + unaff_x19 + 1) * 8);
  uVar6 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(uVar6 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    uVar6 = *(ulong *)(unaff_x26 + 0xa0);
  }
  lVar10 = *(long *)(unaff_x29 + -8);
  uVar3 = *(undefined8 *)(unaff_x26 + 0xa0);
  lVar5 = unaff_x29;
  if ((int)uVar6 == (int)uVar3) goto LAB_014677b8;
  lVar9 = (ulong)*(uint *)(unaff_x20 + unaff_x19 + 0xd) * 4;
  lVar1 = lVar9 + 0x23;
  lVar9 = lVar9 + 0x1f;
  *(int *)(uVar6 + lVar1) = (int)unaff_x26 + *(int *)(uVar6 + lVar1) + 4;
  uVar11 = (int)unaff_x26 + *(int *)(uVar6 + lVar9);
  if (((uVar11 & 0xfffffffd) == (uint)param_1) ||
     (uVar13 = (uint)*(undefined8 *)(unaff_x26 + 0xb88), uVar11 == uVar13)) goto LAB_014677b8;
  if ((uVar11 & 3) == 3) {
    if (uVar11 == 3) goto LAB_01467838;
  }
  else if (uVar11 == (uint)*(undefined8 *)(unaff_x26 + 0xc08)) {
LAB_01467838:
    uVar12 = param_1;
    if ((param_1 & 1) != 0) {
      while (sVar2 = *(short *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7), sVar2 == 0x438) {
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
      }
      if ((sVar2 == 0x439) &&
         (*(int *)(unaff_x26 + (ulong)*(uint *)(lVar10 + -1) + 0x13) ==
          *(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) + -1) +
                  0x13))) {
        *(int *)(uVar6 + lVar9) = (int)(param_1 | 3);
        if ((((uint)*(undefined8 *)((uVar6 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
           ((((param_1 | 3) & 1) != 0 &&
            (((uint)*(undefined8 *)
                     ((unaff_x26 + (param_1 & 0xffffffff | 3) & 0xfffffffffffc0000) + 8) >> 1 & 1)
             != 0)))) {
          FUN_0133eb00(uVar6,uVar6 + lVar9,0,2);
          uVar8 = extraout_x9;
          iVar7 = extraout_w8;
        }
        *(undefined4 *)(uVar6 + 0x17) = 0;
        goto LAB_014677b8;
      }
    }
  }
  *(uint *)(uVar6 + lVar9) = uVar13;
  *(undefined4 *)(uVar6 + 0x17) = 0;
LAB_014677b8:
  FUN_01347660(uVar8,uVar4,uVar3,param_1,lVar5 + (long)iVar7 * 8);
                    /* WARNING: Could not recover jumptable at 0x01467804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x26 + 0x13e0) +
              (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) +
                              ((long)((ulong)*(uint *)(unaff_x29 + -0x20) << 0x20) >> 0x21) + 0x12)
              * 8))();
  return;
}

