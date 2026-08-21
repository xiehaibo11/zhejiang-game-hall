
void FUN_01459a98(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 long param_6,long param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  int in_w10;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long local_40;
  
  uVar13 = unaff_x26 + (ulong)*(uint *)(param_7 + param_8 + 0x23);
  iVar8 = (int)unaff_x19;
  if ((int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc08)) {
    lVar18 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 0x13);
    uVar14 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0x13);
    uVar12 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf);
    uVar16 = uVar13;
    if ((uVar13 & 1) != 0) {
      if (*(int *)(uVar13 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
        *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
        if (((long)*(int *)(uVar13 + 0x17) & 0x80000000U) == 0) {
          pcVar9 = (code *)(uVar13 + 0x3f);
        }
        else {
          pcVar9 = *(code **)((long)*(int *)(uVar13 + 0x27) * 8 + unaff_x26 + 0x2c78);
        }
        (*pcVar9)(in_w10 * 2,uVar14,param_4,param_7);
                    /* WARNING: Could not recover jumptable at 0x01459be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_6 + -0x18) + unaff_x19 + 9) * 8))
                  ();
        return;
      }
      lVar18 = unaff_x26 + (ulong)*(uint *)(uVar13 + 7);
      if (((int)lVar18 != 0) && (*(int *)(lVar18 + 3) != 0)) goto FUN_0145a700;
      uVar16 = unaff_x26 + (ulong)*(uint *)(uVar13 + 3);
      uVar1 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
      if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01459b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))(uVar1);
        return;
      }
      if ((int)uVar1 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
        if ((int)uVar1 == 3) goto FUN_0145a700;
        uVar12 = uVar1 & 0xfffffffffffffffd;
      }
    }
    uVar1 = (long)(uVar16 << 0x20) >> 0x21;
    uVar17 = uVar1 & 0xf;
    uVar15 = (int)uVar16 >> 1;
    if (uVar17 == 4) {
      bVar10 = (uVar1 & 0x80) == 0;
      lVar18 = (uVar1 >> 8 & 0x7ff) * 4 + -1;
      if ((uVar15 >> 6 & 1) == 0) {
        uVar13 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
        if ((uVar13 & 1) == 0) {
          uVar13 = *(ulong *)(unaff_x26 + 0x168);
        }
        param_2 = unaff_x26 + (ulong)*(uint *)(uVar13 + lVar18);
        if (bVar10) {
                    /* WARNING: Could not recover jumptable at 0x0145a628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))();
          return;
        }
        if (((param_2 & 1) != 0) &&
           (*(int *)(param_2 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
          uVar11 = *(undefined8 *)(param_2 + 3);
LAB_0145a690:
          uVar12 = **(ulong **)(unaff_x26 + 0x1428);
          uVar13 = uVar12 + 0xc;
          if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar18 = uVar12 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar13;
          }
          else {
            lVar18 = FUN_01348560(param_2,0xc);
          }
          *(int *)(lVar18 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(undefined8 *)(lVar18 + 3) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x0145a6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))();
          return;
        }
      }
      else {
        if (bVar10) {
                    /* WARNING: Could not recover jumptable at 0x0145a66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))
                    (unaff_x26 + (ulong)*(uint *)(uVar12 + lVar18));
          return;
        }
        uVar13 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar18);
        if (((uVar13 & 1) != 0) && (*(int *)(uVar13 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))
           ) {
          uVar11 = *(undefined8 *)(uVar13 + 3);
          goto LAB_0145a690;
        }
      }
    }
    else {
      if (uVar17 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0145a5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))(uVar12);
        return;
      }
      if (uVar17 == 0xd) {
                    /* WARNING: Could not recover jumptable at 0x0145a5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))();
        return;
      }
      if (uVar17 == 2) {
        uVar13 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
        if ((uVar13 & 1) == 0) {
          uVar13 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar12 = (ulong)(*(uint *)(param_4 + 3) >> 3);
        lVar18 = 0;
        while( true ) {
          uVar12 = uVar12 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar2 = uVar12 * 3;
          lVar19 = (lVar2 + 5) * 4;
          iVar3 = *(int *)(uVar13 + lVar19 + 7);
          if (iVar3 == (int)param_2) break;
          if (iVar3 == (int)param_4) {
            if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) <= lVar2 + 6U) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(0,0x145a30c);
              (*pcVar9)();
            }
            uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + lVar19 + 0xb);
            lVar18 = param_6;
            if ((*(int *)(uVar13 + lVar19 + 0xf) >> 1 & 1U) == 0) goto LAB_0145a568;
            if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar2 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
              lVar19 = unaff_x26 + (ulong)*(uint *)(lVar2 + -1);
              if ((*(byte *)(lVar19 + 9) >> 1 & 1) != 0) {
                *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                uVar12 = FUN_0133fcc0(0,lVar2);
                lVar18 = local_40;
                unaff_x19 = unaff_x20;
                unaff_x21 = param_6;
                goto LAB_0145a568;
              }
              uVar12 = param_2;
              if ((int)lVar19 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0145a568;
              if (*(int *)(lVar2 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                uVar13 = unaff_x26 + (ulong)*(uint *)(uVar14 - 1);
                iVar3 = *(int *)(uVar13 - 1);
                while (iVar3 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x13);
                  iVar3 = *(int *)(uVar13 - 1);
                }
                if ((uVar13 & 1) != 0) {
                  lVar18 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                  sVar6 = *(short *)(lVar18 + 7);
                  if (sVar6 != 0x439) {
                    if (sVar6 == 0x417) {
                      uVar13 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
                    }
                    else {
                      uVar13 = uVar14;
                      if ((int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                    }
                  }
                  uVar7 = *(ushort *)
                           (unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) + -1) + 7);
                  if (uVar7 < 0x88 || 0x91 < uVar7) break;
                  *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                  uVar12 = FUN_01341080(param_2,lVar2,0);
                  lVar18 = local_40;
                  unaff_x19 = unaff_x20;
                  unaff_x21 = param_6;
LAB_0145a568:
                    /* WARNING: Could not recover jumptable at 0x0145a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(unaff_x21 +
                              (ulong)*(byte *)(*(long *)(lVar18 + -0x18) + unaff_x19 + 9) * 8))
                            (uVar12);
                  return;
                }
              }
            }
            else {
              lVar2 = unaff_x26 + (ulong)*(uint *)(uVar14 - 1);
              sVar6 = *(short *)(lVar2 + 7);
              if (sVar6 == 0x423) {
                if (*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
                  goto LAB_0145a568;
                }
              }
              else if (sVar6 == 0x439) {
                if (((*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    (((bVar5 = *(byte *)(lVar2 + 9), (bVar5 & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb) + 0x1b) & 0x1f) - 0xd <
                       4)) && ((bVar5 & 1) == 0)))) &&
                   (uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0x1b),
                   (int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf);
                  }
                  goto LAB_0145a568;
                }
              }
              else if (((sVar6 == 0x411) &&
                       (*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar13 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb), (uVar13 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40)))) {
                uVar12 = (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
                goto LAB_0145a568;
              }
            }
            break;
          }
          lVar18 = lVar18 + 1;
          uVar12 = uVar12 + lVar18;
        }
      }
      else {
        if (uVar17 == 6) {
          uVar15 = *(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 +
                                              (ulong)*(uint *)(unaff_x26 +
                                                               (ulong)*(uint *)(uVar12 - 1) + 0x17)
                                             + (uVar1 >> 6 & 0x3ff) * 0xc + 0x17) + 3);
          *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
          FUN_0133fcc0(0,unaff_x26 + (ulong)uVar15);
                    /* WARNING: Could not recover jumptable at 0x0145a284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_6 + (ulong)*(byte *)(*(long *)(local_40 + -0x18) + unaff_x20) * 8))();
          return;
        }
        if (uVar17 == 7) {
          uVar15 = *(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 0x17) +
                            (uVar1 >> 6 & 0x3ff) * 0xc + 0x17);
          *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
          FUN_01348300(uVar12,uVar14,param_4,unaff_x26 + (ulong)uVar15);
                    /* WARNING: Could not recover jumptable at 0x0145a1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_6 + -0x18) + unaff_x19 + 9) * 8)
          )();
          return;
        }
        if ((uVar17 == 8) || (uVar17 == 9)) {
          if ((uVar15 >> 4 & 1) == 0) {
            uVar15 = *(uint *)(uVar13 + 0xf);
          }
          else {
            uVar15 = *(uint *)(uVar13 + 0x13);
          }
          if ((int)(unaff_x26 + (ulong)uVar15) == 3) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0,0x145a0f4);
            (*pcVar9)();
          }
          uVar4 = *(uint *)(uVar12 + 0xb);
          uVar11 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar12 + 7) + 3);
          if (uVar17 != 8) {
            uVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 0xf);
          }
          *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
          FUN_01348140(uVar14,uVar11,0,unaff_x26 + (ulong)uVar4,param_6,
                       unaff_x26 + (ulong)uVar15 & 0xfffffffffffffffd);
                    /* WARNING: Could not recover jumptable at 0x0145a184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_6 + (ulong)*(byte *)(*(long *)(local_40 + -0x18) + unaff_x20) * 8))();
          return;
        }
        if (uVar17 != 3) {
          if (uVar17 == 0xb) {
            *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1f08));
          }
          if (uVar17 == 0xc) {
            *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
            FUN_013fc180(uVar12,param_4,uVar14,2);
                    /* WARNING: Could not recover jumptable at 0x01459ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x21 +
                        (ulong)*(byte *)(*(long *)(param_6 + -0x18) + unaff_x19 + 9) * 8))();
            return;
          }
          if (uVar17 != 0xe) {
            *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
          }
          uVar13 = uVar1 >> 6 & 0x1ffffff;
          lVar18 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb) + 3);
          if ((ulong)((long)((ulong)*(uint *)(lVar18 + 3) << 0x20) >> 0x21) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0,0x1459cf0);
            (*pcVar9)();
          }
          if ((int)unaff_x26 + *(int *)(unaff_x26 + (ulong)*(uint *)(lVar18 + uVar13 * 4 + 7) + 3)
              != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    /* WARNING: Could not recover jumptable at 0x01459d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 9) * 8))();
            return;
          }
          *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
        }
        uVar13 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
        if ((int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
          lVar18 = param_6;
          if ((*(int *)(uVar12 + 7) >> 1 & 1U) != 0) {
            if (*(int *)(uVar13 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar2 = unaff_x26 + (ulong)*(uint *)(uVar13 + 3);
              lVar19 = unaff_x26 + (ulong)*(uint *)(lVar2 + -1);
              if ((*(byte *)(lVar19 + 9) >> 1 & 1) == 0) {
                uVar13 = param_2;
                if ((int)lVar19 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                  if (*(int *)(lVar2 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    uVar13 = unaff_x26 + (ulong)*(uint *)(uVar14 - 1);
                    iVar3 = *(int *)(uVar13 - 1);
                    while (iVar3 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x13);
                      iVar3 = *(int *)(uVar13 - 1);
                    }
                    if ((uVar13 & 1) != 0) {
                      lVar18 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                      sVar6 = *(short *)(lVar18 + 7);
                      if (sVar6 != 0x439) {
                        if (sVar6 == 0x417) {
                          uVar13 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
                        }
                        else {
                          uVar13 = uVar14;
                          if ((int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                          goto FUN_0145a700;
                        }
                      }
                      uVar7 = *(ushort *)
                               (unaff_x26 +
                                (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) + -1) +
                               7);
                      if (0x87 < uVar7 && uVar7 < 0x92) {
                        *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                        uVar13 = FUN_01341080(param_2,lVar2,0);
                        lVar18 = local_40;
                        unaff_x19 = unaff_x20;
                        unaff_x21 = param_6;
                        goto LAB_0145a0a0;
                      }
                    }
                  }
                  goto FUN_0145a700;
                }
              }
              else {
                *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                uVar13 = FUN_0133fcc0(0,lVar2);
                lVar18 = local_40;
                unaff_x19 = unaff_x20;
                unaff_x21 = param_6;
              }
            }
            else {
              lVar2 = unaff_x26 + (ulong)*(uint *)(uVar14 - 1);
              sVar6 = *(short *)(lVar2 + 7);
              if (sVar6 != 0x423) {
                if (sVar6 == 0x439) {
                  if ((*(int *)(uVar13 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                     ((((bVar5 = *(byte *)(lVar2 + 9), (bVar5 & 0xc0) == 0xc0 ||
                        ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb) + 0x1b) & 0x1f) - 0xd
                         < 4)) && ((bVar5 & 1) == 0)) &&
                      (uVar13 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0x1b),
                      (int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
                    if (*(int *)(uVar13 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
                    }
                    goto LAB_0145a0a0;
                  }
                }
                else if (((sVar6 == 0x411) &&
                         (*(int *)(uVar13 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                        ((uVar13 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb), (uVar13 & 1) != 0 &&
                         (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40)))) {
                  uVar13 = (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
                  goto LAB_0145a0a0;
                }
                goto FUN_0145a700;
              }
              if (*(int *)(uVar13 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
              goto FUN_0145a700;
              uVar13 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
            }
          }
LAB_0145a0a0:
                    /* WARNING: Could not recover jumptable at 0x0145a0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(lVar18 + -0x18) + unaff_x19 + 9) * 8))
                    (uVar13);
          return;
        }
      }
    }
  }
FUN_0145a700:
  *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f00));
}

