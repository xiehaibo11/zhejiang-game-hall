
void FUN_01467300(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  ulong uVar11;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long lVar12;
  long extraout_x10;
  long lVar13;
  uint uVar14;
  ulong extraout_x12;
  ulong extraout_x12_00;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *extraout_x13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  iVar10 = *(int *)(unaff_x20 + unaff_x19 + 5);
  uVar11 = (ulong)*(uint *)(unaff_x20 + unaff_x19 + 9);
  uVar7 = *(undefined8 *)(unaff_x29 + (long)*(int *)(unaff_x20 + unaff_x19 + 1) * 8);
  uVar9 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(uVar9 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    uVar9 = *(ulong *)(unaff_x26 + 0xa0);
  }
  lVar13 = *(long *)(unaff_x29 + -8);
  uVar5 = *(undefined8 *)(unaff_x26 + 0xa0);
  lVar8 = unaff_x29;
  if ((int)uVar9 != (int)uVar5) {
    lVar12 = (ulong)*(uint *)(unaff_x20 + unaff_x19 + 0xd) * 4;
    lVar1 = lVar12 + 0x23;
    lVar12 = lVar12 + 0x1f;
    *(int *)(uVar9 + lVar1) = (int)unaff_x26 + *(int *)(uVar9 + lVar1) + 4;
    uVar16 = unaff_x26 + (ulong)*(uint *)(uVar9 + lVar12);
    uVar14 = (uint)uVar16;
    uVar4 = (uint)param_1;
    if (((uVar14 & 0xfffffffd) != uVar4) &&
       (uVar15 = (uint)*(undefined8 *)(unaff_x26 + 0xb88), uVar14 != uVar15)) {
      uVar6 = (uint)uVar7;
      if ((uVar14 & 3) == 3) {
        if (uVar14 == 3) {
LAB_01467490:
          uVar16 = param_1;
          if ((param_1 & 1) != 0) {
            while (sVar3 = *(short *)(unaff_x26 + (ulong)*(uint *)(uVar16 - 1) + 7), sVar3 == 0x438)
            {
              uVar16 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0xb);
            }
            if ((sVar3 == 0x439) &&
               (lVar13 = unaff_x26 +
                         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar13 + -1) + 0x13),
               (int)lVar13 ==
               *(int *)(unaff_x26 +
                        (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar16 + 0xf) + -1) + 0x13)))
            {
              if ((uVar6 == uVar4) && (uVar6 == *(uint *)(lVar13 + 0x2f))) {
                uVar16 = **(ulong **)(unaff_x26 + 0x1438);
                uVar2 = uVar16 + 0x1c;
                if (uVar2 < **(ulong **)(unaff_x26 + 0x1440)) {
                  uVar16 = uVar16 + 1;
                  **(ulong **)(unaff_x26 + 0x1438) = uVar2;
                }
                else {
                  uVar16 = FUN_01348620(param_1,0x1c);
                }
                *(int *)(uVar16 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xdd0);
                *(undefined4 *)(uVar16 + 3) = 0;
                *(undefined4 *)(uVar16 + 7) = 0;
                *(undefined4 *)(uVar16 + 0xf) = 0;
                *(undefined4 *)(uVar16 + 0x13) = 0;
                *(int *)(uVar16 + 0xb) = (int)*(undefined8 *)(unaff_x26 + 0x420);
                puVar17 = *(ulong **)(unaff_x26 + 0x1408);
                uVar4 = (uint)*puVar17;
                *(uint *)(uVar16 + 0x17) = uVar4;
                if (((((uint)*(undefined8 *)((uVar16 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar4 & 1) != 0)) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar4 & 0xfffffffffffc0000) + 8) >> 1
                    & 1) != 0)) {
                  FUN_0133eb00(uVar16,uVar16 + 0x17,0,2);
                  uVar11 = extraout_x9_00;
                  lVar12 = extraout_x10;
                  uVar16 = extraout_x12_00;
                  puVar17 = extraout_x13;
                  iVar10 = extraout_w8_00;
                }
                *puVar17 = uVar16;
                *(int *)(uVar9 + lVar12) = (int)uVar16;
                if (((((uint)*(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar16 & 1) != 0)) &&
                   (uVar16 = unaff_x26 + (uVar16 & 0xffffffff),
                   ((uint)*(undefined8 *)((uVar16 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(uVar9,uVar9 + lVar12,0,2);
                  uVar11 = extraout_x9;
                  uVar16 = extraout_x12;
                  iVar10 = extraout_w8;
                }
                *(undefined4 *)(uVar9 + 0x17) = 0;
                goto LAB_014675c8;
              }
              *(int *)(uVar9 + lVar12) = (int)(param_1 | 3);
              if (((((uint)*(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                  (((param_1 | 3) & 1) != 0)) &&
                 (((uint)*(undefined8 *)
                          ((unaff_x26 + (param_1 & 0xffffffff | 3) & 0xfffffffffffc0000) + 8) >> 1 &
                  1) != 0)) {
                FUN_0133eb00(uVar9,uVar9 + lVar12,0,2);
                uVar11 = extraout_x9_01;
                iVar10 = extraout_w8_01;
              }
              *(undefined4 *)(uVar9 + 0x17) = 0;
              goto LAB_014673b8;
            }
          }
        }
      }
      else if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar16 - 1) + 7) == 0x55) {
        uVar14 = *(uint *)(unaff_x26 +
                           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar13 + -1) + 0x13) + 0x2f
                          );
        if ((uVar6 == uVar14) && (uVar4 == uVar14)) {
LAB_014675c8:
          FUN_013475c0(uVar11,uVar7,uVar16,param_1,lVar8 + (long)iVar10 * 8);
          goto LAB_014673d4;
        }
      }
      else if (uVar14 == (uint)*(undefined8 *)(unaff_x26 + 0xc08)) goto LAB_01467490;
      *(uint *)(uVar9 + lVar12) = uVar15;
      *(undefined4 *)(uVar9 + 0x17) = 0;
    }
  }
LAB_014673b8:
  FUN_01347520(uVar11,uVar7,uVar5,param_1,lVar8 + (long)iVar10 * 8);
LAB_014673d4:
                    /* WARNING: Could not recover jumptable at 0x01467404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x26 + 0x13e0) +
              (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) +
                              ((long)((ulong)*(uint *)(unaff_x29 + -0x20) << 0x20) >> 0x21) + 0x12)
              * 8))();
  return;
}

