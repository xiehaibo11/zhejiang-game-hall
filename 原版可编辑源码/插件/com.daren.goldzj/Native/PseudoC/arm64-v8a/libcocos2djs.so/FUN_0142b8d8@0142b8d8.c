
void FUN_0142b8d8(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 long param_6,long param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int in_w10;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long local_40;
  
  uVar12 = unaff_x26 + (ulong)*(uint *)(param_7 + param_8 + 0x23);
  iVar19 = (int)unaff_x19;
  if ((int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xc08)) {
    lVar17 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 0x13);
    uVar13 = unaff_x26 + (ulong)*(uint *)(lVar17 + 0x13);
    uVar11 = unaff_x26 + (ulong)*(uint *)(lVar17 + 0xf);
    uVar15 = uVar12;
    if ((uVar12 & 1) != 0) {
      if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
        *(int *)(param_6 + -0x20) = iVar19 * 2;
        if (((long)*(int *)(uVar12 + 0x17) & 0x80000000U) == 0) {
          pcVar8 = (code *)(uVar12 + 0x3f);
        }
        else {
          pcVar8 = *(code **)((long)*(int *)(uVar12 + 0x27) * 8 + unaff_x26 + 0x2c78);
        }
        (*pcVar8)(in_w10 * 2,uVar13,param_4,param_7);
                    /* WARNING: Could not recover jumptable at 0x0142ba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_6 + -0x18) + unaff_x19 + 3) * 8))
                  ();
        return;
      }
      lVar17 = unaff_x26 + (ulong)*(uint *)(uVar12 + 7);
      if (((int)lVar17 != 0) && (*(int *)(lVar17 + 3) != 0)) goto FUN_0142c510;
      uVar15 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
      uVar1 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
      if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0142b9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 3) * 8))(uVar1);
        return;
      }
      if ((int)uVar1 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
        if ((int)uVar1 == 3) goto FUN_0142c510;
        uVar11 = uVar1 & 0xfffffffffffffffd;
      }
    }
    uVar1 = (long)(uVar15 << 0x20) >> 0x21;
    uVar16 = uVar1 & 0xf;
    uVar14 = (int)uVar15 >> 1;
    if (uVar16 == 4) {
      bVar9 = (uVar1 & 0x80) == 0;
      lVar17 = (uVar1 >> 8 & 0x7ff) * 4 + -1;
      if ((uVar14 >> 6 & 1) == 0) {
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
        if ((uVar12 & 1) == 0) {
          uVar12 = *(ulong *)(unaff_x26 + 0x168);
        }
        param_2 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar17);
        if (bVar9) {
                    /* WARNING: Could not recover jumptable at 0x0142c438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 3) * 8))();
          return;
        }
        if (((param_2 & 1) != 0) &&
           (*(int *)(param_2 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
          uVar10 = *(undefined8 *)(param_2 + 3);
LAB_0142c4a0:
          uVar11 = **(ulong **)(unaff_x26 + 0x1428);
          uVar12 = uVar11 + 0xc;
          if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar17 = uVar11 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar12;
          }
          else {
            lVar17 = FUN_01348560(param_2,0xc);
          }
          *(int *)(lVar17 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(undefined8 *)(lVar17 + 3) = uVar10;
                    /* WARNING: Could not recover jumptable at 0x0142c50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 3) * 8))();
          return;
        }
      }
      else {
        if (bVar9) {
                    /* WARNING: Could not recover jumptable at 0x0142c47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 3) * 8))
                    (unaff_x26 + (ulong)*(uint *)(uVar11 + lVar17));
          return;
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar11 + lVar17);
        if (((uVar12 & 1) != 0) && (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))
           ) {
          uVar10 = *(undefined8 *)(uVar12 + 3);
          goto LAB_0142c4a0;
        }
      }
    }
    else {
      if (uVar16 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0142c3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 3) * 8))(uVar11);
        return;
      }
      if (uVar16 == 0xd) {
                    /* WARNING: Could not recover jumptable at 0x0142c3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 3) * 8))();
        return;
      }
      if (uVar16 == 2) {
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
        if ((uVar12 & 1) == 0) {
          uVar12 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar11 = (ulong)(*(uint *)(param_4 + 3) >> 3);
        lVar17 = 0;
        while( true ) {
          uVar11 = uVar11 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar2 = uVar11 * 3;
          lVar18 = (lVar2 + 5) * 4;
          iVar3 = *(int *)(uVar12 + lVar18 + 7);
          if (iVar3 == (int)param_2) break;
          if (iVar3 == (int)param_4) {
            if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) <= lVar2 + 6U) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0,0x142c124);
              (*pcVar8)();
            }
            uVar11 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar18 + 0xb);
            lVar17 = param_6;
            if ((*(int *)(uVar12 + lVar18 + 0xf) >> 1 & 1U) == 0) goto LAB_0142c378;
            if (*(int *)(uVar11 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar2 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
              lVar18 = unaff_x26 + (ulong)*(uint *)(lVar2 + -1);
              if ((*(byte *)(lVar18 + 9) >> 1 & 1) != 0) {
                *(int *)(param_6 + -0x20) = iVar19 * 2;
                uVar11 = FUN_0133fcc0(0,lVar2);
                lVar17 = local_40;
                unaff_x19 = unaff_x20;
                unaff_x21 = param_6;
                goto LAB_0142c378;
              }
              uVar11 = param_2;
              if ((int)lVar18 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0142c378;
              if (*(int *)(lVar2 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                iVar3 = *(int *)(uVar12 - 1);
                while (iVar3 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0x13);
                  iVar3 = *(int *)(uVar12 - 1);
                }
                if ((uVar12 & 1) != 0) {
                  lVar17 = unaff_x26 + (ulong)*(uint *)(uVar12 - 1);
                  sVar6 = *(short *)(lVar17 + 7);
                  if (sVar6 != 0x439) {
                    if (sVar6 == 0x417) {
                      uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                    }
                    else {
                      uVar12 = uVar13;
                      if ((int)lVar17 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                    }
                  }
                  uVar7 = *(ushort *)
                           (unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) + -1) + 7);
                  if (uVar7 < 0x88 || 0x91 < uVar7) break;
                  *(int *)(param_6 + -0x20) = iVar19 * 2;
                  uVar11 = FUN_01341080(param_2,lVar2,0);
                  lVar17 = local_40;
                  unaff_x19 = unaff_x20;
                  unaff_x21 = param_6;
LAB_0142c378:
                    /* WARNING: Could not recover jumptable at 0x0142c3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(unaff_x21 +
                              (ulong)*(byte *)(*(long *)(lVar17 + -0x18) + unaff_x19 + 3) * 8))
                            (uVar11);
                  return;
                }
              }
            }
            else {
              lVar2 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
              sVar6 = *(short *)(lVar2 + 7);
              if (sVar6 == 0x423) {
                if (*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  uVar11 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                  goto LAB_0142c378;
                }
              }
              else if (sVar6 == 0x439) {
                if (((*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    (((bVar5 = *(byte *)(lVar2 + 9), (bVar5 & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 0x1b) & 0x1f) - 0xd <
                       4)) && ((bVar5 & 1) == 0)))) &&
                   (uVar11 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x1b),
                   (int)uVar11 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar11 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xf);
                  }
                  goto LAB_0142c378;
                }
              }
              else if (((sVar6 == 0x411) &&
                       (*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb), (uVar12 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7) < 0x40)))) {
                uVar11 = (ulong)(uint)(*(int *)(uVar12 + 7) * 2);
                goto LAB_0142c378;
              }
            }
            break;
          }
          lVar17 = lVar17 + 1;
          uVar11 = uVar11 + lVar17;
        }
      }
      else {
        if (uVar16 == 6) {
          uVar14 = *(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 +
                                              (ulong)*(uint *)(unaff_x26 +
                                                               (ulong)*(uint *)(uVar11 - 1) + 0x17)
                                             + (uVar1 >> 6 & 0x3ff) * 0xc + 0x17) + 3);
          *(int *)(param_6 + -0x20) = iVar19 * 2;
          FUN_0133fcc0(0,unaff_x26 + (ulong)uVar14);
                    /* WARNING: Could not recover jumptable at 0x0142c09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_6 + (ulong)*(byte *)(*(long *)(local_40 + -0x18) + unaff_x20) * 8))();
          return;
        }
        if (uVar16 == 7) {
          uVar14 = *(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar11 - 1) + 0x17) +
                            (uVar1 >> 6 & 0x3ff) * 0xc + 0x17);
          *(int *)(param_6 + -0x20) = iVar19 * 2;
          FUN_01348300(uVar11,uVar13,param_4,unaff_x26 + (ulong)uVar14);
                    /* WARNING: Could not recover jumptable at 0x0142c014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_6 + -0x18) + unaff_x19 + 3) * 8)
          )();
          return;
        }
        if ((uVar16 == 8) || (uVar16 == 9)) {
          if ((uVar14 >> 4 & 1) == 0) {
            uVar14 = *(uint *)(uVar12 + 0xf);
          }
          else {
            uVar14 = *(uint *)(uVar12 + 0x13);
          }
          if ((int)(unaff_x26 + (ulong)uVar14) == 3) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0,0x142bf18);
            (*pcVar8)();
          }
          uVar4 = *(uint *)(uVar11 + 0xb);
          uVar10 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar11 + 7) + 3);
          if (uVar16 != 8) {
            uVar13 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 0xf);
          }
          *(int *)(param_6 + -0x20) = iVar19 * 2;
          FUN_01348140(uVar13,uVar10,0,unaff_x26 + (ulong)uVar4,param_6,
                       unaff_x26 + (ulong)uVar14 & 0xfffffffffffffffd);
                    /* WARNING: Could not recover jumptable at 0x0142bfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_6 + (ulong)*(byte *)(*(long *)(local_40 + -0x18) + unaff_x20) * 8))();
          return;
        }
        if (uVar16 != 3) {
          if (uVar16 == 0xb) {
            *(int *)(param_6 + -0x20) = iVar19 * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1f08));
          }
          if (uVar16 == 0xc) {
            *(int *)(param_6 + -0x20) = iVar19 * 2;
            FUN_013fc180(uVar11,param_4,uVar13,2);
                    /* WARNING: Could not recover jumptable at 0x0142bc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x21 +
                        (ulong)*(byte *)(*(long *)(param_6 + -0x18) + unaff_x19 + 3) * 8))();
            return;
          }
          if (uVar16 != 0xe) {
            *(int *)(param_6 + -0x20) = iVar19 * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
          }
          uVar12 = uVar1 >> 6 & 0x1ffffff;
          lVar17 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 3);
          if ((ulong)((long)((ulong)*(uint *)(lVar17 + 3) << 0x20) >> 0x21) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0,0x142bb28);
            (*pcVar8)();
          }
          if ((int)unaff_x26 + *(int *)(unaff_x26 + (ulong)*(uint *)(lVar17 + uVar12 * 4 + 7) + 3)
              != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    /* WARNING: Could not recover jumptable at 0x0142bb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 3) * 8))();
            return;
          }
          *(int *)(param_6 + -0x20) = iVar19 * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xb);
        if ((int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
          lVar17 = param_6;
          if ((*(int *)(uVar11 + 7) >> 1 & 1U) != 0) {
            if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar2 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
              lVar18 = unaff_x26 + (ulong)*(uint *)(lVar2 + -1);
              if ((*(byte *)(lVar18 + 9) >> 1 & 1) == 0) {
                uVar12 = param_2;
                if ((int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                  if (*(int *)(lVar2 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                    iVar3 = *(int *)(uVar12 - 1);
                    while (iVar3 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0x13);
                      iVar3 = *(int *)(uVar12 - 1);
                    }
                    if ((uVar12 & 1) != 0) {
                      lVar17 = unaff_x26 + (ulong)*(uint *)(uVar12 - 1);
                      sVar6 = *(short *)(lVar17 + 7);
                      if (sVar6 != 0x439) {
                        if (sVar6 == 0x417) {
                          uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                        }
                        else {
                          uVar12 = uVar13;
                          if ((int)lVar17 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                          goto FUN_0142c510;
                        }
                      }
                      uVar7 = *(ushort *)
                               (unaff_x26 +
                                (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) + -1) +
                               7);
                      if (0x87 < uVar7 && uVar7 < 0x92) {
                        *(int *)(param_6 + -0x20) = iVar19 * 2;
                        uVar12 = FUN_01341080(param_2,lVar2,0);
                        lVar17 = local_40;
                        unaff_x19 = unaff_x20;
                        unaff_x21 = param_6;
                        goto LAB_0142bec4;
                      }
                    }
                  }
                  goto FUN_0142c510;
                }
              }
              else {
                *(int *)(param_6 + -0x20) = iVar19 * 2;
                uVar12 = FUN_0133fcc0(0,lVar2);
                lVar17 = local_40;
                unaff_x19 = unaff_x20;
                unaff_x21 = param_6;
              }
            }
            else {
              lVar2 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
              sVar6 = *(short *)(lVar2 + 7);
              if (sVar6 != 0x423) {
                if (sVar6 == 0x439) {
                  if ((*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                     ((((bVar5 = *(byte *)(lVar2 + 9), (bVar5 & 0xc0) == 0xc0 ||
                        ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 0x1b) & 0x1f) - 0xd
                         < 4)) && ((bVar5 & 1) == 0)) &&
                      (uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x1b),
                      (int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
                    if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf);
                    }
                    goto LAB_0142bec4;
                  }
                }
                else if (((sVar6 == 0x411) &&
                         (*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                        ((uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb), (uVar12 & 1) != 0 &&
                         (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7) < 0x40)))) {
                  uVar12 = (ulong)(uint)(*(int *)(uVar12 + 7) * 2);
                  goto LAB_0142bec4;
                }
                goto FUN_0142c510;
              }
              if (*(int *)(uVar12 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
              goto FUN_0142c510;
              uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
            }
          }
LAB_0142bec4:
                    /* WARNING: Could not recover jumptable at 0x0142beec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(lVar17 + -0x18) + unaff_x19 + 3) * 8))
                    (uVar12);
          return;
        }
      }
    }
  }
FUN_0142c510:
  *(int *)(param_6 + -0x20) = iVar19 * 2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f00));
}

