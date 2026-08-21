
void FUN_01439280(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  ulong uVar14;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long lVar15;
  long extraout_x10;
  long lVar16;
  uint uVar17;
  ulong extraout_x12;
  ulong extraout_x12_00;
  uint uVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *extraout_x13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  int iVar13;
  
  *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
  cVar4 = *(char *)(unaff_x20 + unaff_x19 + 2);
  iVar13 = (int)cVar4;
  iVar12 = (int)cVar4;
  uVar14 = (ulong)*(byte *)(unaff_x20 + unaff_x19 + 3);
  uVar10 = *(undefined8 *)(unaff_x29 + (long)*(char *)(unaff_x20 + unaff_x19 + 1) * 8);
  uVar11 = unaff_x26 +
           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(uVar11 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    uVar11 = *(ulong *)(unaff_x26 + 0xa0);
  }
  lVar16 = *(long *)(unaff_x29 + -8);
  uVar7 = *(undefined8 *)(unaff_x26 + 0xa0);
  lVar8 = unaff_x29;
  if ((int)uVar11 != (int)uVar7) {
    lVar15 = (ulong)*(byte *)(unaff_x20 + unaff_x19 + 4) * 4;
    lVar1 = lVar15 + 0x23;
    lVar15 = lVar15 + 0x1f;
    *(int *)(uVar11 + lVar1) = (int)unaff_x26 + *(int *)(uVar11 + lVar1) + 4;
    uVar19 = unaff_x26 + (ulong)*(uint *)(uVar11 + lVar15);
    uVar17 = (uint)uVar19;
    uVar6 = (uint)param_1;
    if (((uVar17 & 0xfffffffd) != uVar6) &&
       (uVar18 = (uint)*(undefined8 *)(unaff_x26 + 0xb88), uVar17 != uVar18)) {
      uVar9 = (uint)uVar10;
      if ((uVar17 & 3) == 3) {
        if (uVar17 == 3) {
LAB_0143942c:
          uVar19 = param_1;
          if ((param_1 & 1) != 0) {
            while (sVar5 = *(short *)(unaff_x26 + (ulong)*(uint *)(uVar19 - 1) + 7), sVar5 == 0x438)
            {
              uVar19 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0xb);
            }
            if ((sVar5 == 0x439) &&
               (lVar16 = unaff_x26 +
                         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar16 + -1) + 0x13),
               (int)lVar16 ==
               *(int *)(unaff_x26 +
                        (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf) + -1) + 0x13)))
            {
              if ((uVar9 == uVar6) && (uVar9 == *(uint *)(lVar16 + 0x2f))) {
                uVar19 = **(ulong **)(unaff_x26 + 0x1438);
                uVar2 = uVar19 + 0x1c;
                if (uVar2 < **(ulong **)(unaff_x26 + 0x1440)) {
                  uVar19 = uVar19 + 1;
                  **(ulong **)(unaff_x26 + 0x1438) = uVar2;
                }
                else {
                  uVar19 = FUN_01348620(param_1,0x1c);
                }
                *(int *)(uVar19 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xdd0);
                *(undefined4 *)(uVar19 + 3) = 0;
                *(undefined4 *)(uVar19 + 7) = 0;
                *(undefined4 *)(uVar19 + 0xf) = 0;
                *(undefined4 *)(uVar19 + 0x13) = 0;
                *(int *)(uVar19 + 0xb) = (int)*(undefined8 *)(unaff_x26 + 0x420);
                puVar20 = *(ulong **)(unaff_x26 + 0x1408);
                uVar6 = (uint)*puVar20;
                *(uint *)(uVar19 + 0x17) = uVar6;
                iVar12 = iVar13;
                if (((((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar6 & 1) != 0)) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar6 & 0xfffffffffffc0000) + 8) >> 1
                    & 1) != 0)) {
                  FUN_0133eb00(uVar19,uVar19 + 0x17,0,2);
                  uVar14 = extraout_x9_00;
                  lVar15 = extraout_x10;
                  uVar19 = extraout_x12_00;
                  puVar20 = extraout_x13;
                  iVar12 = extraout_w8_00;
                }
                *puVar20 = uVar19;
                *(int *)(uVar11 + lVar15) = (int)uVar19;
                if (((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar19 & 1) != 0)) &&
                   (uVar19 = unaff_x26 + (uVar19 & 0xffffffff),
                   ((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(uVar11,uVar11 + lVar15,0,2);
                  uVar14 = extraout_x9;
                  uVar19 = extraout_x12;
                  iVar12 = extraout_w8;
                }
                *(undefined4 *)(uVar11 + 0x17) = 0;
                goto LAB_01439564;
              }
              *(int *)(uVar11 + lVar15) = (int)(param_1 | 3);
              if (((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                  (((param_1 | 3) & 1) != 0)) &&
                 (((uint)*(undefined8 *)
                          ((unaff_x26 + (param_1 & 0xffffffff | 3) & 0xfffffffffffc0000) + 8) >> 1 &
                  1) != 0)) {
                FUN_0133eb00(uVar11,uVar11 + lVar15,0,2);
                uVar14 = extraout_x9_01;
                iVar12 = extraout_w8_01;
              }
              *(undefined4 *)(uVar11 + 0x17) = 0;
              goto LAB_01439334;
            }
          }
        }
      }
      else if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar19 - 1) + 7) == 0x55) {
        uVar17 = *(uint *)(unaff_x26 +
                           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar16 + -1) + 0x13) + 0x2f
                          );
        if ((uVar9 == uVar17) && (uVar6 == uVar17)) {
LAB_01439564:
          uVar10 = FUN_013475c0(uVar14,uVar10,uVar19,param_1,lVar8 + (long)iVar12 * 8);
          goto LAB_01439350;
        }
      }
      else if (uVar17 == (uint)*(undefined8 *)(unaff_x26 + 0xc08)) goto LAB_0143942c;
      *(uint *)(uVar11 + lVar15) = uVar18;
      *(undefined4 *)(uVar11 + 0x17) = 0;
    }
  }
LAB_01439334:
  uVar10 = FUN_01347520(uVar14,uVar10,uVar7,param_1,lVar8 + (long)iVar12 * 8);
LAB_01439350:
  lVar16 = *(long *)(unaff_x29 + -0x18);
  lVar8 = (long)((ulong)*(uint *)(unaff_x29 + -0x20) << 0x20) >> 0x21;
  bVar3 = *(byte *)(lVar16 + lVar8 + 5);
  if (bVar3 == 0x26) {
    *(undefined8 *)(unaff_x29 + (long)*(char *)(lVar16 + lVar8 + 6) * 8) = uVar10;
    bVar3 = *(byte *)(lVar16 + lVar8 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x014393a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x26 + 0x13e0) + (ulong)bVar3 * 8))();
  return;
}

