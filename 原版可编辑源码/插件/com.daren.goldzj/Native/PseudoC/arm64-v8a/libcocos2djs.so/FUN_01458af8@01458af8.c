
void FUN_01458af8(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6,ulong param_7,long param_8)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  ulong uVar7;
  int iVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long in_x9;
  uint uVar15;
  ulong uVar16;
  int in_w11;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long local_40;
  
  uVar12 = unaff_x26 + (ulong)*(uint *)(param_6 + param_8 + 0x23);
  iVar8 = (int)unaff_x19;
  if ((int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xc08)) {
    lVar18 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(in_x9 + -1) + 0x13);
    uVar13 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0x13);
    uVar14 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf);
    uVar16 = uVar12;
    if ((uVar12 & 1) != 0) {
      if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
        *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
        if (((long)*(int *)(uVar12 + 0x17) & 0x80000000U) == 0) {
          pcVar9 = (code *)(uVar12 + 0x3f);
        }
        else {
          pcVar9 = *(code **)((long)*(int *)(uVar12 + 0x27) * 8 + unaff_x26 + 0x2c78);
        }
        (*pcVar9)(in_w11 * 2,uVar13,param_3,param_6);
                    /* WARNING: Could not recover jumptable at 0x01458c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_5 + -0x18) + unaff_x19 + 9) * 8))
                  ();
        return;
      }
      lVar18 = unaff_x26 + (ulong)*(uint *)(uVar12 + 7);
      if (((int)lVar18 != 0) && (*(int *)(lVar18 + 3) != 0)) goto FUN_0145979c;
      uVar16 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
      param_1 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
      if ((param_1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01458bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))();
        return;
      }
      if ((int)param_1 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
        if ((int)param_1 == 3) goto FUN_0145979c;
        uVar14 = param_1 & 0xfffffffffffffffd;
      }
    }
    uVar7 = (long)(uVar16 << 0x20) >> 0x21;
    uVar17 = uVar7 & 0xf;
    uVar15 = (int)uVar16 >> 1;
    if (uVar17 == 4) {
      bVar10 = (uVar7 & 0x80) == 0;
      lVar18 = (uVar7 >> 8 & 0x7ff) * 4 + -1;
      if ((uVar15 >> 6 & 1) == 0) {
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + 3);
        if ((uVar12 & 1) == 0) {
          uVar12 = *(ulong *)(unaff_x26 + 0x168);
        }
        param_1 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar18);
        if (bVar10) {
                    /* WARNING: Could not recover jumptable at 0x014596c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))();
          return;
        }
        if (((param_1 & 1) != 0) &&
           (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
          uVar11 = *(undefined8 *)(param_1 + 3);
LAB_0145972c:
          uVar14 = **(ulong **)(unaff_x26 + 0x1428);
          uVar12 = uVar14 + 0xc;
          if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar18 = uVar14 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar12;
          }
          else {
            lVar18 = FUN_01348560(param_1,0xc);
          }
          *(int *)(lVar18 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(undefined8 *)(lVar18 + 3) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x01459798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))();
          return;
        }
      }
      else {
        if (bVar10) {
                    /* WARNING: Could not recover jumptable at 0x01459708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))
                    (unaff_x26 + (ulong)*(uint *)(uVar14 + lVar18));
          return;
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + lVar18);
        if (((uVar12 & 1) != 0) && (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))
           ) {
          uVar11 = *(undefined8 *)(uVar12 + 3);
          goto LAB_0145972c;
        }
      }
    }
    else {
      if (uVar17 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0145966c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))(uVar14);
        return;
      }
      if (uVar17 == 0xd) {
        *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b8));
      }
      if (uVar17 == 2) {
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + 3);
        if ((uVar12 & 1) == 0) {
          uVar12 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar14 = (ulong)(*(uint *)(param_3 + 3) >> 3);
        lVar18 = 0;
        while( true ) {
          uVar14 = uVar14 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar1 = uVar14 * 3;
          lVar19 = (lVar1 + 5) * 4;
          iVar2 = *(int *)(uVar12 + lVar19 + 7);
          if (iVar2 == (int)param_7) break;
          if (iVar2 == (int)param_3) {
            if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) <= lVar1 + 6U) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(0,0x1459368);
              (*pcVar9)();
            }
            uVar14 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar19 + 0xb);
            lVar18 = param_5;
            if ((*(int *)(uVar12 + lVar19 + 0xf) >> 1 & 1U) == 0) goto LAB_014595c4;
            if (*(int *)(uVar14 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar1 = unaff_x26 + (ulong)*(uint *)(uVar14 + 3);
              lVar19 = unaff_x26 + (ulong)*(uint *)(lVar1 + -1);
              if ((*(byte *)(lVar19 + 9) >> 1 & 1) != 0) {
                *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
                uVar14 = FUN_0133fcc0(0,lVar1);
                lVar18 = local_40;
                unaff_x19 = unaff_x20;
                unaff_x21 = param_5;
                goto LAB_014595c4;
              }
              uVar14 = param_7;
              if ((int)lVar19 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_014595c4;
              if (*(int *)(lVar1 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                iVar2 = *(int *)(uVar12 - 1);
                while (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0x13);
                  iVar2 = *(int *)(uVar12 - 1);
                }
                if ((uVar12 & 1) != 0) {
                  lVar18 = unaff_x26 + (ulong)*(uint *)(uVar12 - 1);
                  sVar5 = *(short *)(lVar18 + 7);
                  if (sVar5 != 0x439) {
                    if (sVar5 == 0x417) {
                      uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                    }
                    else {
                      uVar12 = uVar13;
                      if ((int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                    }
                  }
                  uVar6 = *(ushort *)
                           (unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) + -1) + 7);
                  if (uVar6 < 0x88 || 0x91 < uVar6) break;
                  *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
                  uVar14 = FUN_01341080(param_1,lVar1,0);
                  lVar18 = local_40;
                  unaff_x19 = unaff_x20;
                  unaff_x21 = param_5;
LAB_014595c4:
                    /* WARNING: Could not recover jumptable at 0x014595ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(unaff_x21 +
                              (ulong)*(byte *)(*(long *)(lVar18 + -0x18) + unaff_x19 + 9) * 8))
                            (uVar14);
                  return;
                }
              }
            }
            else {
              lVar1 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
              sVar5 = *(short *)(lVar1 + 7);
              if (sVar5 == 0x423) {
                if (*(int *)(uVar14 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  uVar14 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                  goto LAB_014595c4;
                }
              }
              else if (sVar5 == 0x439) {
                if (((*(int *)(uVar14 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    (((bVar4 = *(byte *)(lVar1 + 9), (bVar4 & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 0x1b) & 0x1f) - 0xd <
                       4)) && ((bVar4 & 1) == 0)))) &&
                   (uVar14 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x1b),
                   (int)uVar14 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar14 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf);
                  }
                  goto LAB_014595c4;
                }
              }
              else if (((sVar5 == 0x411) &&
                       (*(int *)(uVar14 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb), (uVar12 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7) < 0x40)))) {
                uVar14 = (ulong)(uint)(*(int *)(uVar12 + 7) * 2);
                goto LAB_014595c4;
              }
            }
            break;
          }
          lVar18 = lVar18 + 1;
          uVar14 = uVar14 + lVar18;
        }
      }
      else {
        if (uVar17 == 6) {
          uVar15 = *(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 +
                                              (ulong)*(uint *)(unaff_x26 +
                                                               (ulong)*(uint *)(uVar14 - 1) + 0x17)
                                             + (uVar7 >> 6 & 0x3ff) * 0xc + 0x17) + 3);
          *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
          FUN_0133fcc0(0,unaff_x26 + (ulong)uVar15);
                    /* WARNING: Could not recover jumptable at 0x014592e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_5 + (ulong)*(byte *)(*(long *)(local_40 + -0x18) + unaff_x20) * 8))();
          return;
        }
        if (uVar17 == 7) {
          uVar15 = *(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 0x17) +
                            (uVar7 >> 6 & 0x3ff) * 0xc + 0x17);
          *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
          FUN_01348300(uVar14,uVar13,param_3,unaff_x26 + (ulong)uVar15);
                    /* WARNING: Could not recover jumptable at 0x01459254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_5 + -0x18) + unaff_x19 + 9) * 8)
          )();
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
            pcVar9 = (code *)SoftwareBreakpoint(0,0x1459150);
            (*pcVar9)();
          }
          uVar3 = *(uint *)(uVar14 + 0xb);
          uVar11 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar14 + 7) + 3);
          if (uVar17 != 8) {
            uVar13 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 0xf);
          }
          *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
          FUN_01348140(uVar13,uVar11,0,unaff_x26 + (ulong)uVar3,param_5,
                       unaff_x26 + (ulong)uVar15 & 0xfffffffffffffffd);
                    /* WARNING: Could not recover jumptable at 0x014591e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_5 + (ulong)*(byte *)(*(long *)(local_40 + -0x18) + unaff_x20) * 8))();
          return;
        }
        if (uVar17 != 3) {
          if (uVar17 == 0xb) {
            *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1f08));
          }
          if (uVar17 == 0xc) {
            *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
            FUN_013fc180(uVar14,param_3,uVar13,0);
                    /* WARNING: Could not recover jumptable at 0x01458e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x21 +
                        (ulong)*(byte *)(*(long *)(param_5 + -0x18) + unaff_x19 + 9) * 8))();
            return;
          }
          if (uVar17 != 0xe) {
            *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
          }
          uVar12 = uVar7 >> 6 & 0x1ffffff;
          lVar18 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 3);
          if ((ulong)((long)((ulong)*(uint *)(lVar18 + 3) << 0x20) >> 0x21) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0,0x1458d4c);
            (*pcVar9)();
          }
          if ((int)unaff_x26 + *(int *)(unaff_x26 + (ulong)*(uint *)(lVar18 + uVar12 * 4 + 7) + 3)
              != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    /* WARNING: Could not recover jumptable at 0x01458d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))();
            return;
          }
          *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
        if ((int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
          lVar18 = param_5;
          if ((*(int *)(uVar14 + 7) >> 1 & 1U) != 0) {
            if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar1 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
              lVar19 = unaff_x26 + (ulong)*(uint *)(lVar1 + -1);
              if ((*(byte *)(lVar19 + 9) >> 1 & 1) == 0) {
                uVar12 = param_7;
                if ((int)lVar19 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                  if (*(int *)(lVar1 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                    iVar2 = *(int *)(uVar12 - 1);
                    while (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0x13);
                      iVar2 = *(int *)(uVar12 - 1);
                    }
                    if ((uVar12 & 1) != 0) {
                      lVar18 = unaff_x26 + (ulong)*(uint *)(uVar12 - 1);
                      sVar5 = *(short *)(lVar18 + 7);
                      if (sVar5 != 0x439) {
                        if (sVar5 == 0x417) {
                          uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                        }
                        else {
                          uVar12 = uVar13;
                          if ((int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                          goto FUN_0145979c;
                        }
                      }
                      uVar6 = *(ushort *)
                               (unaff_x26 +
                                (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) + -1) +
                               7);
                      if (0x87 < uVar6 && uVar6 < 0x92) {
                        *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
                        uVar12 = FUN_01341080(param_1,lVar1,0);
                        lVar18 = local_40;
                        unaff_x19 = unaff_x20;
                        unaff_x21 = param_5;
                        goto LAB_014590fc;
                      }
                    }
                  }
                  goto FUN_0145979c;
                }
              }
              else {
                *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
                uVar12 = FUN_0133fcc0(0,lVar1);
                lVar18 = local_40;
                unaff_x19 = unaff_x20;
                unaff_x21 = param_5;
              }
            }
            else {
              lVar1 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
              sVar5 = *(short *)(lVar1 + 7);
              if (sVar5 != 0x423) {
                if (sVar5 == 0x439) {
                  if ((*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                     ((((bVar4 = *(byte *)(lVar1 + 9), (bVar4 & 0xc0) == 0xc0 ||
                        ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 0x1b) & 0x1f) - 0xd
                         < 4)) && ((bVar4 & 1) == 0)) &&
                      (uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x1b),
                      (int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
                    if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf);
                    }
                    goto LAB_014590fc;
                  }
                }
                else if (((sVar5 == 0x411) &&
                         (*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                        ((uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb), (uVar12 & 1) != 0 &&
                         (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7) < 0x40)))) {
                  uVar12 = (ulong)(uint)(*(int *)(uVar12 + 7) * 2);
                  goto LAB_014590fc;
                }
                goto FUN_0145979c;
              }
              if (*(int *)(uVar12 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
              goto FUN_0145979c;
              uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
            }
          }
LAB_014590fc:
                    /* WARNING: Could not recover jumptable at 0x01459124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(lVar18 + -0x18) + unaff_x19 + 9) * 8))
                    (uVar12);
          return;
        }
      }
    }
  }
FUN_0145979c:
  *(int *)(param_5 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f00));
}

