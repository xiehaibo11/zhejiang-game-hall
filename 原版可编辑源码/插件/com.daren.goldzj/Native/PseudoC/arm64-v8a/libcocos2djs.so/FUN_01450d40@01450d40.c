
void FUN_01450d40(ulong param_1)

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
  ulong uVar12;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long lVar13;
  long extraout_x10;
  long lVar14;
  uint uVar15;
  ulong extraout_x12;
  ulong extraout_x12_00;
  uint uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *extraout_x13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  int iVar11;
  
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  sVar3 = *(short *)(unaff_x20 + unaff_x19 + 3);
  iVar11 = (int)sVar3;
  iVar10 = (int)sVar3;
  uVar12 = (ulong)*(ushort *)(unaff_x20 + unaff_x19 + 5);
  uVar7 = *(undefined8 *)(unaff_x29 + (long)*(short *)(unaff_x20 + unaff_x19 + 1) * 8);
  uVar9 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(uVar9 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    uVar9 = *(ulong *)(unaff_x26 + 0xa0);
  }
  lVar14 = *(long *)(unaff_x29 + -8);
  uVar5 = *(undefined8 *)(unaff_x26 + 0xa0);
  lVar8 = unaff_x29;
  if ((int)uVar9 != (int)uVar5) {
    lVar13 = (ulong)*(ushort *)(unaff_x20 + unaff_x19 + 7) * 4;
    lVar1 = lVar13 + 0x23;
    lVar13 = lVar13 + 0x1f;
    *(int *)(uVar9 + lVar1) = (int)unaff_x26 + *(int *)(uVar9 + lVar1) + 4;
    uVar17 = unaff_x26 + (ulong)*(uint *)(uVar9 + lVar13);
    uVar15 = (uint)uVar17;
    uVar4 = (uint)param_1;
    if (((uVar15 & 0xfffffffd) != uVar4) &&
       (uVar16 = (uint)*(undefined8 *)(unaff_x26 + 0xb88), uVar15 != uVar16)) {
      uVar6 = (uint)uVar7;
      if ((uVar15 & 3) == 3) {
        if (uVar15 == 3) {
LAB_01450ed0:
          uVar17 = param_1;
          if ((param_1 & 1) != 0) {
            while (sVar3 = *(short *)(unaff_x26 + (ulong)*(uint *)(uVar17 - 1) + 7), sVar3 == 0x438)
            {
              uVar17 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb);
            }
            if ((sVar3 == 0x439) &&
               (lVar14 = unaff_x26 +
                         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar14 + -1) + 0x13),
               (int)lVar14 ==
               *(int *)(unaff_x26 +
                        (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar17 + 0xf) + -1) + 0x13)))
            {
              if ((uVar6 == uVar4) && (uVar6 == *(uint *)(lVar14 + 0x2f))) {
                uVar17 = **(ulong **)(unaff_x26 + 0x1438);
                uVar2 = uVar17 + 0x1c;
                if (uVar2 < **(ulong **)(unaff_x26 + 0x1440)) {
                  uVar17 = uVar17 + 1;
                  **(ulong **)(unaff_x26 + 0x1438) = uVar2;
                }
                else {
                  uVar17 = FUN_01348620(param_1,0x1c);
                }
                *(int *)(uVar17 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xdd0);
                *(undefined4 *)(uVar17 + 3) = 0;
                *(undefined4 *)(uVar17 + 7) = 0;
                *(undefined4 *)(uVar17 + 0xf) = 0;
                *(undefined4 *)(uVar17 + 0x13) = 0;
                *(int *)(uVar17 + 0xb) = (int)*(undefined8 *)(unaff_x26 + 0x420);
                puVar18 = *(ulong **)(unaff_x26 + 0x1408);
                uVar4 = (uint)*puVar18;
                *(uint *)(uVar17 + 0x17) = uVar4;
                iVar10 = iVar11;
                if (((((uint)*(undefined8 *)((uVar17 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar4 & 1) != 0)) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar4 & 0xfffffffffffc0000) + 8) >> 1
                    & 1) != 0)) {
                  FUN_0133eb00(uVar17,uVar17 + 0x17,0,2);
                  uVar12 = extraout_x9_00;
                  lVar13 = extraout_x10;
                  uVar17 = extraout_x12_00;
                  puVar18 = extraout_x13;
                  iVar10 = extraout_w8_00;
                }
                *puVar18 = uVar17;
                *(int *)(uVar9 + lVar13) = (int)uVar17;
                if (((((uint)*(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar17 & 1) != 0)) &&
                   (uVar17 = unaff_x26 + (uVar17 & 0xffffffff),
                   ((uint)*(undefined8 *)((uVar17 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(uVar9,uVar9 + lVar13,0,2);
                  uVar12 = extraout_x9;
                  uVar17 = extraout_x12;
                  iVar10 = extraout_w8;
                }
                *(undefined4 *)(uVar9 + 0x17) = 0;
                goto LAB_01451008;
              }
              *(int *)(uVar9 + lVar13) = (int)(param_1 | 3);
              if (((((uint)*(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                  (((param_1 | 3) & 1) != 0)) &&
                 (((uint)*(undefined8 *)
                          ((unaff_x26 + (param_1 & 0xffffffff | 3) & 0xfffffffffffc0000) + 8) >> 1 &
                  1) != 0)) {
                FUN_0133eb00(uVar9,uVar9 + lVar13,0,2);
                uVar12 = extraout_x9_01;
                iVar10 = extraout_w8_01;
              }
              *(undefined4 *)(uVar9 + 0x17) = 0;
              goto LAB_01450df8;
            }
          }
        }
      }
      else if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar17 - 1) + 7) == 0x55) {
        uVar15 = *(uint *)(unaff_x26 +
                           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar14 + -1) + 0x13) + 0x2f
                          );
        if ((uVar6 == uVar15) && (uVar4 == uVar15)) {
LAB_01451008:
          FUN_013475c0(uVar12,uVar7,uVar17,param_1,lVar8 + (long)iVar10 * 8);
          goto LAB_01450e14;
        }
      }
      else if (uVar15 == (uint)*(undefined8 *)(unaff_x26 + 0xc08)) goto LAB_01450ed0;
      *(uint *)(uVar9 + lVar13) = uVar16;
      *(undefined4 *)(uVar9 + 0x17) = 0;
    }
  }
LAB_01450df8:
  FUN_01347520(uVar12,uVar7,uVar5,param_1,lVar8 + (long)iVar10 * 8);
LAB_01450e14:
                    /* WARNING: Could not recover jumptable at 0x01450e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x26 + 0x13e0) +
              (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) +
                              ((long)((ulong)*(uint *)(unaff_x29 + -0x20) << 0x20) >> 0x21) + 10) *
              8))();
  return;
}

