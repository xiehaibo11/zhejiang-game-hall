
void FUN_0142a718(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6,ulong param_7,long param_8)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long in_x9;
  uint uVar15;
  ulong uVar16;
  int in_w11;
  ulong uVar17;
  long lVar18;
  int iVar19;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long local_40;
  
  uVar12 = unaff_x26 + (ulong)*(uint *)(param_6 + param_8 + 0x23);
  iVar19 = (int)unaff_x19;
  if ((int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xc08)) {
    lVar10 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(in_x9 + -1) + 0x13);
    uVar13 = unaff_x26 + (ulong)*(uint *)(lVar10 + 0x13);
    uVar14 = unaff_x26 + (ulong)*(uint *)(lVar10 + 0xf);
    uVar16 = uVar12;
    if ((uVar12 & 1) != 0) {
      if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
        *(int *)(param_5 + -0x20) = iVar19 * 2;
        if (((long)*(int *)(uVar12 + 0x17) & 0x80000000U) == 0) {
          pcVar7 = (code *)(uVar12 + 0x3f);
        }
        else {
          pcVar7 = *(code **)((long)*(int *)(uVar12 + 0x27) * 8 + unaff_x26 + 0x2c78);
        }
        uVar9 = (*pcVar7)(in_w11 * 2,uVar13,param_3,param_6);
        lVar10 = *(long *)(param_5 + -0x18);
        bVar3 = *(byte *)(lVar10 + unaff_x19 + 3);
        if (bVar3 == 0x26) {
          *(undefined8 *)(param_5 + (long)*(char *)(lVar10 + unaff_x19 + 4) * 8) = uVar9;
          bVar3 = *(byte *)(lVar10 + unaff_x19 + 5);
        }
                    /* WARNING: Could not recover jumptable at 0x0142a8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)bVar3 * 8))();
        return;
      }
      lVar10 = unaff_x26 + (ulong)*(uint *)(uVar12 + 7);
      if (((int)lVar10 != 0) && (*(int *)(lVar10 + 3) != 0)) goto FUN_0142b59c;
      uVar16 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
      param_1 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
      if ((param_1 & 1) == 0) {
        bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 3);
        if (bVar3 == 0x26) {
          *(ulong *)(param_5 + (long)*(char *)(unaff_x20 + unaff_x19 + 4) * 8) = param_1;
          bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 5);
        }
                    /* WARNING: Could not recover jumptable at 0x0142a810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)bVar3 * 8))();
        return;
      }
      if ((int)param_1 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
        if ((int)param_1 == 3) goto FUN_0142b59c;
        uVar14 = param_1 & 0xfffffffffffffffd;
      }
    }
    uVar6 = (long)(uVar16 << 0x20) >> 0x21;
    uVar17 = uVar6 & 0xf;
    uVar15 = (int)uVar16 >> 1;
    if (uVar17 == 4) {
      bVar8 = (uVar6 & 0x80) == 0;
      lVar10 = (uVar6 >> 8 & 0x7ff) * 4 + -1;
      if ((uVar15 >> 6 & 1) == 0) {
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + 3);
        if ((uVar12 & 1) == 0) {
          uVar12 = *(ulong *)(unaff_x26 + 0x168);
        }
        param_1 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar10);
        if (bVar8) {
          bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 3);
          if (bVar3 == 0x26) {
            *(ulong *)(param_5 + (long)*(char *)(unaff_x20 + unaff_x19 + 4) * 8) = param_1;
            bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 5);
          }
                    /* WARNING: Could not recover jumptable at 0x0142b480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)bVar3 * 8))();
          return;
        }
        if (((param_1 & 1) != 0) &&
           (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
          uVar9 = *(undefined8 *)(param_1 + 3);
LAB_0142b508:
          uVar14 = **(ulong **)(unaff_x26 + 0x1428);
          uVar12 = uVar14 + 0xc;
          if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar10 = uVar14 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar12;
          }
          else {
            lVar10 = FUN_01348560(param_1,0xc);
          }
          *(int *)(lVar10 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(undefined8 *)(lVar10 + 3) = uVar9;
          bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 3);
          if (bVar3 == 0x26) {
            *(long *)(param_5 + (long)*(char *)(unaff_x20 + unaff_x19 + 4) * 8) = lVar10;
            bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 5);
          }
                    /* WARNING: Could not recover jumptable at 0x0142b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)bVar3 * 8))();
          return;
        }
      }
      else {
        if (bVar8) {
          bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 3);
          if (bVar3 == 0x26) {
            *(ulong *)(param_5 + (long)*(char *)(unaff_x20 + unaff_x19 + 4) * 8) =
                 unaff_x26 + (ulong)*(uint *)(uVar14 + lVar10);
            bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 5);
          }
                    /* WARNING: Could not recover jumptable at 0x0142b4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)bVar3 * 8))();
          return;
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + lVar10);
        if (((uVar12 & 1) != 0) && (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))
           ) {
          uVar9 = *(undefined8 *)(uVar12 + 3);
          goto LAB_0142b508;
        }
      }
    }
    else {
      if (uVar17 == 5) {
        bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 3);
        if (bVar3 == 0x26) {
          *(ulong *)(param_5 + (long)*(char *)(unaff_x20 + unaff_x19 + 4) * 8) = uVar14;
          bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 5);
        }
                    /* WARNING: Could not recover jumptable at 0x0142b408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)bVar3 * 8))(uVar14);
        return;
      }
      if (uVar17 == 0xd) {
        *(int *)(param_5 + -0x20) = iVar19 * 2;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b8));
      }
      if (uVar17 == 2) {
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + 3);
        if ((uVar12 & 1) == 0) {
          uVar12 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar14 = (ulong)(*(uint *)(param_3 + 3) >> 3);
        lVar10 = 0;
        while( true ) {
          uVar14 = uVar14 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar11 = uVar14 * 3;
          lVar18 = (lVar11 + 5) * 4;
          iVar1 = *(int *)(uVar12 + lVar18 + 7);
          if (iVar1 == (int)param_7) break;
          if (iVar1 == (int)param_3) {
            if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) <= lVar11 + 6U) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(0,0x142b0b0);
              (*pcVar7)();
            }
            uVar14 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar18 + 0xb);
            lVar10 = unaff_x19;
            if ((*(int *)(uVar12 + lVar18 + 0xf) >> 1 & 1U) == 0) goto LAB_0142b304;
            if (*(int *)(uVar14 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar11 = unaff_x26 + (ulong)*(uint *)(uVar14 + 3);
              lVar18 = unaff_x26 + (ulong)*(uint *)(lVar11 + -1);
              if ((*(byte *)(lVar18 + 9) >> 1 & 1) != 0) {
                *(int *)(param_5 + -0x20) = iVar19 * 2;
                uVar14 = FUN_0133fcc0(0,lVar11);
                param_5 = unaff_x20;
                lVar10 = local_40;
                unaff_x21 = unaff_x19;
                goto LAB_0142b304;
              }
              uVar14 = param_7;
              if ((int)lVar18 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0142b304;
              if (*(int *)(lVar11 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                iVar1 = *(int *)(uVar12 - 1);
                while (iVar1 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0x13);
                  iVar1 = *(int *)(uVar12 - 1);
                }
                if ((uVar12 & 1) != 0) {
                  lVar10 = unaff_x26 + (ulong)*(uint *)(uVar12 - 1);
                  sVar4 = *(short *)(lVar10 + 7);
                  if (sVar4 != 0x439) {
                    if (sVar4 == 0x417) {
                      uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                    }
                    else {
                      uVar12 = uVar13;
                      if ((int)lVar10 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                    }
                  }
                  uVar5 = *(ushort *)
                           (unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) + -1) + 7);
                  if (uVar5 < 0x88 || 0x91 < uVar5) break;
                  *(int *)(param_5 + -0x20) = iVar19 * 2;
                  uVar14 = FUN_01341080(param_1,lVar11,0);
                  param_5 = unaff_x20;
                  lVar10 = local_40;
                  unaff_x21 = unaff_x19;
LAB_0142b304:
                  lVar11 = *(long *)(param_5 + -0x18);
                  bVar3 = *(byte *)(lVar11 + lVar10 + 3);
                  if (bVar3 == 0x26) {
                    *(ulong *)(param_5 + (long)*(char *)(lVar11 + lVar10 + 4) * 8) = uVar14;
                    bVar3 = *(byte *)(lVar11 + lVar10 + 5);
                  }
                    /* WARNING: Could not recover jumptable at 0x0142b34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(unaff_x21 + (ulong)bVar3 * 8))(uVar14);
                  return;
                }
              }
            }
            else {
              lVar11 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
              sVar4 = *(short *)(lVar11 + 7);
              if (sVar4 == 0x423) {
                if (*(int *)(uVar14 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  uVar14 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                  goto LAB_0142b304;
                }
              }
              else if (sVar4 == 0x439) {
                if (((*(int *)(uVar14 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    (((bVar3 = *(byte *)(lVar11 + 9), (bVar3 & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 0x1b) & 0x1f) - 0xd <
                       4)) && ((bVar3 & 1) == 0)))) &&
                   (uVar14 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x1b),
                   (int)uVar14 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar14 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf);
                  }
                  goto LAB_0142b304;
                }
              }
              else if (((sVar4 == 0x411) &&
                       (*(int *)(uVar14 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb), (uVar12 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7) < 0x40)))) {
                uVar14 = (ulong)(uint)(*(int *)(uVar12 + 7) * 2);
                goto LAB_0142b304;
              }
            }
            break;
          }
          lVar10 = lVar10 + 1;
          uVar14 = uVar14 + lVar10;
        }
      }
      else {
        if (uVar17 == 6) {
          uVar15 = *(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 +
                                              (ulong)*(uint *)(unaff_x26 +
                                                               (ulong)*(uint *)(uVar14 - 1) + 0x17)
                                             + (uVar6 >> 6 & 0x3ff) * 0xc + 0x17) + 3);
          *(int *)(param_5 + -0x20) = iVar19 * 2;
          uVar9 = FUN_0133fcc0(0,unaff_x26 + (ulong)uVar15);
          lVar10 = *(long *)(unaff_x20 + -0x18);
          bVar3 = *(byte *)(lVar10 + local_40);
          if (bVar3 == 0x26) {
            *(undefined8 *)(unaff_x20 + (long)*(char *)(lVar10 + local_40 + 1) * 8) = uVar9;
            bVar3 = *(byte *)(lVar10 + local_40 + 2);
          }
                    /* WARNING: Could not recover jumptable at 0x0142b028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x19 + 3 + (ulong)bVar3 * 8))();
          return;
        }
        if (uVar17 == 7) {
          uVar15 = *(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 0x17) +
                            (uVar6 >> 6 & 0x3ff) * 0xc + 0x17);
          *(int *)(param_5 + -0x20) = iVar19 * 2;
          uVar9 = FUN_01348300(uVar14,uVar13,param_3,unaff_x26 + (ulong)uVar15);
          lVar10 = *(long *)(param_5 + -0x18);
          bVar3 = *(byte *)(lVar10 + unaff_x19 + 3);
          if (bVar3 == 0x26) {
            *(undefined8 *)(param_5 + (long)*(char *)(lVar10 + unaff_x19 + 4) * 8) = uVar9;
            bVar3 = *(byte *)(lVar10 + unaff_x19 + 5);
          }
                    /* WARNING: Could not recover jumptable at 0x0142af80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)bVar3 * 8))();
          return;
        }
        if ((uVar17 == 8) || (uVar17 == 9)) {
          if ((uVar15 >> 4 & 1) == 0) {
            uVar15 = *(uint *)(uVar12 + 0xf);
          }
          else {
            uVar15 = *(uint *)(uVar12 + 0x13);
          }
          if ((int)(unaff_x26 + (ulong)uVar15) == 3) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0,0x142ae44);
            (*pcVar7)();
          }
          uVar2 = *(uint *)(uVar14 + 0xb);
          uVar9 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar14 + 7) + 3);
          if (uVar17 != 8) {
            uVar13 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 0xf);
          }
          *(int *)(param_5 + -0x20) = iVar19 * 2;
          uVar9 = FUN_01348140(uVar13,uVar9,0,unaff_x26 + (ulong)uVar2,param_5,
                               unaff_x26 + (ulong)uVar15 & 0xfffffffffffffffd);
          lVar10 = *(long *)(unaff_x20 + -0x18);
          bVar3 = *(byte *)(lVar10 + local_40);
          if (bVar3 == 0x26) {
            *(undefined8 *)(unaff_x20 + (long)*(char *)(lVar10 + local_40 + 1) * 8) = uVar9;
            bVar3 = *(byte *)(lVar10 + local_40 + 2);
          }
                    /* WARNING: Could not recover jumptable at 0x0142aef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x19 + 3 + (ulong)bVar3 * 8))();
          return;
        }
        if (uVar17 != 3) {
          if (uVar17 == 0xb) {
            *(int *)(param_5 + -0x20) = iVar19 * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1f08));
          }
          if (uVar17 == 0xc) {
            *(int *)(param_5 + -0x20) = iVar19 * 2;
            uVar9 = FUN_013fc180(uVar14,param_3,uVar13,0);
            lVar10 = *(long *)(param_5 + -0x18);
            bVar3 = *(byte *)(lVar10 + unaff_x19 + 3);
            if (bVar3 == 0x26) {
              *(undefined8 *)(param_5 + (long)*(char *)(lVar10 + unaff_x19 + 4) * 8) = uVar9;
              bVar3 = *(byte *)(lVar10 + unaff_x19 + 5);
            }
                    /* WARNING: Could not recover jumptable at 0x0142aaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x21 + (ulong)bVar3 * 8))();
            return;
          }
          if (uVar17 != 0xe) {
            *(int *)(param_5 + -0x20) = iVar19 * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
          }
          uVar12 = uVar6 >> 6 & 0x1ffffff;
          lVar10 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 3);
          if ((ulong)((long)((ulong)*(uint *)(lVar10 + 3) << 0x20) >> 0x21) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0,0x142a9c0);
            (*pcVar7)();
          }
          lVar10 = unaff_x26 +
                   (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar10 + uVar12 * 4 + 7) + 3);
          if ((int)lVar10 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 3);
            if (bVar3 == 0x26) {
              *(long *)(param_5 + (long)*(char *)(unaff_x20 + unaff_x19 + 4) * 8) = lVar10;
              bVar3 = *(byte *)(unaff_x20 + unaff_x19 + 5);
            }
                    /* WARNING: Could not recover jumptable at 0x0142aa18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x21 + (ulong)bVar3 * 8))();
            return;
          }
          *(int *)(param_5 + -0x20) = iVar19 * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
        if ((int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
          lVar10 = unaff_x19;
          if ((*(int *)(uVar14 + 7) >> 1 & 1U) != 0) {
            if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar11 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
              lVar18 = unaff_x26 + (ulong)*(uint *)(lVar11 + -1);
              if ((*(byte *)(lVar18 + 9) >> 1 & 1) == 0) {
                uVar12 = param_7;
                if ((int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                  if (*(int *)(lVar11 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                    iVar1 = *(int *)(uVar12 - 1);
                    while (iVar1 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0x13);
                      iVar1 = *(int *)(uVar12 - 1);
                    }
                    if ((uVar12 & 1) != 0) {
                      lVar10 = unaff_x26 + (ulong)*(uint *)(uVar12 - 1);
                      sVar4 = *(short *)(lVar10 + 7);
                      if (sVar4 != 0x439) {
                        if (sVar4 == 0x417) {
                          uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                        }
                        else {
                          uVar12 = uVar13;
                          if ((int)lVar10 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                          goto FUN_0142b59c;
                        }
                      }
                      uVar5 = *(ushort *)
                               (unaff_x26 +
                                (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) + -1) +
                               7);
                      if (0x87 < uVar5 && uVar5 < 0x92) {
                        *(int *)(param_5 + -0x20) = iVar19 * 2;
                        uVar12 = FUN_01341080(param_1,lVar11,0);
                        param_5 = unaff_x20;
                        lVar10 = local_40;
                        unaff_x21 = unaff_x19;
                        goto LAB_0142add0;
                      }
                    }
                  }
                  goto FUN_0142b59c;
                }
              }
              else {
                *(int *)(param_5 + -0x20) = iVar19 * 2;
                uVar12 = FUN_0133fcc0(0,lVar11);
                param_5 = unaff_x20;
                lVar10 = local_40;
                unaff_x21 = unaff_x19;
              }
            }
            else {
              lVar11 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
              sVar4 = *(short *)(lVar11 + 7);
              if (sVar4 != 0x423) {
                if (sVar4 == 0x439) {
                  if ((*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                     ((((bVar3 = *(byte *)(lVar11 + 9), (bVar3 & 0xc0) == 0xc0 ||
                        ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 0x1b) & 0x1f) - 0xd
                         < 4)) && ((bVar3 & 1) == 0)) &&
                      (uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x1b),
                      (int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
                    if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf);
                    }
                    goto LAB_0142add0;
                  }
                }
                else if (((sVar4 == 0x411) &&
                         (*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                        ((uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb), (uVar12 & 1) != 0 &&
                         (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7) < 0x40)))) {
                  uVar12 = (ulong)(uint)(*(int *)(uVar12 + 7) * 2);
                  goto LAB_0142add0;
                }
                goto FUN_0142b59c;
              }
              if (*(int *)(uVar12 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
              goto FUN_0142b59c;
              uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
            }
          }
LAB_0142add0:
          lVar11 = *(long *)(param_5 + -0x18);
          bVar3 = *(byte *)(lVar11 + lVar10 + 3);
          if (bVar3 == 0x26) {
            *(ulong *)(param_5 + (long)*(char *)(lVar11 + lVar10 + 4) * 8) = uVar12;
            bVar3 = *(byte *)(lVar11 + lVar10 + 5);
          }
                    /* WARNING: Could not recover jumptable at 0x0142ae18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)bVar3 * 8))(uVar12);
          return;
        }
      }
    }
  }
FUN_0142b59c:
  *(int *)(param_5 + -0x20) = iVar19 * 2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f00));
}

