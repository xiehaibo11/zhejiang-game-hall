
void FUN_0142cf04(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6,long param_7)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 in_w8;
  long in_x9;
  long in_x10;
  ulong uVar13;
  ulong in_x11;
  uint uVar14;
  ulong uVar15;
  int in_w13;
  ulong uVar16;
  long lVar17;
  long unaff_x20;
  long unaff_x21;
  long lVar18;
  long unaff_x26;
  long local_40;
  
  uVar10 = unaff_x26 + (ulong)*(uint *)(param_6 + param_7 + 0x23);
  if ((int)uVar10 != (int)*(undefined8 *)(unaff_x26 + 0xc08)) {
    lVar17 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(in_x10 + -1) + 0x13);
    uVar13 = unaff_x26 + (ulong)*(uint *)(lVar17 + 0x13);
    uVar12 = unaff_x26 + (ulong)*(uint *)(lVar17 + 0xf);
    uVar15 = uVar10;
    if ((uVar10 & 1) != 0) {
      if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
        *(undefined4 *)(param_5 + -0x20) = in_w8;
        if (((long)*(int *)(uVar10 + 0x17) & 0x80000000U) == 0) {
          pcVar8 = (code *)(uVar10 + 0x3f);
        }
        else {
          pcVar8 = *(code **)((long)*(int *)(uVar10 + 0x27) * 8 + unaff_x26 + 0x2c78);
        }
        (*pcVar8)(in_w13 * 2,uVar13,param_3,param_6);
                    /* WARNING: Could not recover jumptable at 0x0142d044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_5 + -0x18) + in_x9) * 8))();
        return;
      }
      lVar17 = unaff_x26 + (ulong)*(uint *)(uVar10 + 7);
      if (((int)lVar17 != 0) && (*(int *)(lVar17 + 3) != 0)) goto FUN_0142dafc;
      uVar15 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
      param_1 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
      if ((param_1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0142cfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + in_x9) * 8))();
        return;
      }
      if ((int)param_1 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
        if ((int)param_1 == 3) goto FUN_0142dafc;
        uVar12 = param_1 & 0xfffffffffffffffd;
      }
    }
    uVar7 = (long)(uVar15 << 0x20) >> 0x21;
    uVar16 = uVar7 & 0xf;
    uVar14 = (int)uVar15 >> 1;
    if (uVar16 == 4) {
      bVar9 = (uVar7 & 0x80) == 0;
      lVar17 = (uVar7 >> 8 & 0x7ff) * 4 + -1;
      if ((uVar14 >> 6 & 1) == 0) {
        uVar10 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
        if ((uVar10 & 1) == 0) {
          uVar10 = *(ulong *)(unaff_x26 + 0x168);
        }
        param_1 = unaff_x26 + (ulong)*(uint *)(uVar10 + lVar17);
        if (bVar9) {
                    /* WARNING: Could not recover jumptable at 0x0142da28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + in_x9) * 8))();
          return;
        }
        if (((param_1 & 1) != 0) &&
           (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
          uVar11 = *(undefined8 *)(param_1 + 3);
LAB_0142da90:
          uVar12 = **(ulong **)(unaff_x26 + 0x1428);
          uVar10 = uVar12 + 0xc;
          if (uVar10 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar17 = uVar12 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar10;
          }
          else {
            lVar17 = FUN_01348560(param_1,0xc);
          }
          *(int *)(lVar17 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(undefined8 *)(lVar17 + 3) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x0142daf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + in_x9) * 8))();
          return;
        }
      }
      else {
        if (bVar9) {
                    /* WARNING: Could not recover jumptable at 0x0142da6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + in_x9) * 8))
                    (unaff_x26 + (ulong)*(uint *)(uVar12 + lVar17));
          return;
        }
        uVar10 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar17);
        if (((uVar10 & 1) != 0) && (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))
           ) {
          uVar11 = *(undefined8 *)(uVar10 + 3);
          goto LAB_0142da90;
        }
      }
    }
    else {
      if (uVar16 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0142d9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + in_x9) * 8))(uVar12);
        return;
      }
      if (uVar16 == 0xd) {
        *(undefined4 *)(param_5 + -0x20) = in_w8;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b8));
      }
      if (uVar16 == 2) {
        uVar10 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
        if ((uVar10 & 1) == 0) {
          uVar10 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar12 = (ulong)(*(uint *)(param_3 + 3) >> 3);
        lVar17 = 0;
        while( true ) {
          uVar12 = uVar12 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar1 = uVar12 * 3;
          lVar18 = (lVar1 + 5) * 4;
          iVar2 = *(int *)(uVar10 + lVar18 + 7);
          if (iVar2 == (int)in_x11) break;
          if (iVar2 == (int)param_3) {
            if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= lVar1 + 6U) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0,0x142d6f4);
              (*pcVar8)();
            }
            uVar12 = unaff_x26 + (ulong)*(uint *)(uVar10 + lVar18 + 0xb);
            lVar17 = param_5;
            if ((*(int *)(uVar10 + lVar18 + 0xf) >> 1 & 1U) == 0) goto LAB_0142d93c;
            if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar1 = unaff_x26 + (ulong)*(uint *)(uVar12 + 3);
              lVar18 = unaff_x26 + (ulong)*(uint *)(lVar1 + -1);
              if ((*(byte *)(lVar18 + 9) >> 1 & 1) != 0) {
                *(undefined4 *)(param_5 + -0x20) = in_w8;
                uVar12 = FUN_0133fcc0(0,lVar1);
                lVar17 = local_40;
                in_x9 = param_5;
                unaff_x21 = unaff_x20;
                goto LAB_0142d93c;
              }
              uVar12 = in_x11;
              if ((int)lVar18 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0142d93c;
              if (*(int *)(lVar1 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                uVar10 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                iVar2 = *(int *)(uVar10 - 1);
                while (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0x13);
                  iVar2 = *(int *)(uVar10 - 1);
                }
                if ((uVar10 & 1) != 0) {
                  lVar17 = unaff_x26 + (ulong)*(uint *)(uVar10 - 1);
                  sVar5 = *(short *)(lVar17 + 7);
                  if (sVar5 != 0x439) {
                    if (sVar5 == 0x417) {
                      uVar10 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                    }
                    else {
                      uVar10 = uVar13;
                      if ((int)lVar17 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                    }
                  }
                  uVar6 = *(ushort *)
                           (unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) + -1) + 7);
                  if (uVar6 < 0x88 || 0x91 < uVar6) break;
                  *(undefined4 *)(param_5 + -0x20) = in_w8;
                  uVar12 = FUN_01341080(param_1,lVar1,0);
                  lVar17 = local_40;
                  in_x9 = param_5;
                  unaff_x21 = unaff_x20;
LAB_0142d93c:
                    /* WARNING: Could not recover jumptable at 0x0142d960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(lVar17 + -0x18) + in_x9) * 8))
                            (uVar12);
                  return;
                }
              }
            }
            else {
              lVar1 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
              sVar5 = *(short *)(lVar1 + 7);
              if (sVar5 == 0x423) {
                if (*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                  goto LAB_0142d93c;
                }
              }
              else if (sVar5 == 0x439) {
                if (((*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    (((bVar4 = *(byte *)(lVar1 + 9), (bVar4 & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 0x1b) & 0x1f) - 0xd <
                       4)) && ((bVar4 & 1) == 0)))) &&
                   (uVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x1b),
                   (int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf);
                  }
                  goto LAB_0142d93c;
                }
              }
              else if (((sVar5 == 0x411) &&
                       (*(int *)(uVar12 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar10 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb), (uVar10 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7) < 0x40)))) {
                uVar12 = (ulong)(uint)(*(int *)(uVar10 + 7) * 2);
                goto LAB_0142d93c;
              }
            }
            break;
          }
          lVar17 = lVar17 + 1;
          uVar12 = uVar12 + lVar17;
        }
      }
      else {
        if (uVar16 == 6) {
          uVar14 = *(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 +
                                              (ulong)*(uint *)(unaff_x26 +
                                                               (ulong)*(uint *)(uVar12 - 1) + 0x17)
                                             + (uVar7 >> 6 & 0x3ff) * 0xc + 0x17) + 3);
          *(undefined4 *)(param_5 + -0x20) = in_w8;
          FUN_0133fcc0(0,unaff_x26 + (ulong)uVar14);
                    /* WARNING: Could not recover jumptable at 0x0142d66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x20 + (ulong)*(byte *)(*(long *)(local_40 + -0x18) + param_5) * 8))();
          return;
        }
        if (uVar16 == 7) {
          uVar14 = *(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 0x17) +
                            (uVar7 >> 6 & 0x3ff) * 0xc + 0x17);
          *(undefined4 *)(param_5 + -0x20) = in_w8;
          FUN_01348300(uVar12,uVar13,param_3,unaff_x26 + (ulong)uVar14);
                    /* WARNING: Could not recover jumptable at 0x0142d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_5 + -0x18) + in_x9) * 8))();
          return;
        }
        if ((uVar16 == 8) || (uVar16 == 9)) {
          if ((uVar14 >> 4 & 1) == 0) {
            uVar14 = *(uint *)(uVar10 + 0xf);
          }
          else {
            uVar14 = *(uint *)(uVar10 + 0x13);
          }
          if ((int)(unaff_x26 + (ulong)uVar14) == 3) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0,0x142d508);
            (*pcVar8)();
          }
          uVar3 = *(uint *)(uVar12 + 0xb);
          uVar11 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar12 + 7) + 3);
          if (uVar16 != 8) {
            uVar13 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 0xf);
          }
          *(undefined4 *)(param_5 + -0x20) = in_w8;
          FUN_01348140(uVar13,uVar11,0,unaff_x26 + (ulong)uVar3,param_5,
                       unaff_x26 + (ulong)uVar14 & 0xfffffffffffffffd);
                    /* WARNING: Could not recover jumptable at 0x0142d58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x20 + (ulong)*(byte *)(*(long *)(local_40 + -0x18) + param_5) * 8))();
          return;
        }
        if (uVar16 != 3) {
          if (uVar16 == 0xb) {
            *(undefined4 *)(param_5 + -0x20) = in_w8;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1f08));
          }
          if (uVar16 == 0xc) {
            *(undefined4 *)(param_5 + -0x20) = in_w8;
            FUN_013fc180(uVar12,param_3,uVar13);
                    /* WARNING: Could not recover jumptable at 0x0142d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_5 + -0x18) + in_x9) * 8))();
            return;
          }
          if (uVar16 != 0xe) {
            *(undefined4 *)(param_5 + -0x20) = in_w8;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
          }
          uVar10 = uVar7 >> 6 & 0x1ffffff;
          lVar17 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 3);
          if ((ulong)((long)((ulong)*(uint *)(lVar17 + 3) << 0x20) >> 0x21) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0,0x142d13c);
            (*pcVar8)();
          }
          if ((int)unaff_x26 + *(int *)(unaff_x26 + (ulong)*(uint *)(lVar17 + uVar10 * 4 + 7) + 3)
              != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    /* WARNING: Could not recover jumptable at 0x0142d178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + in_x9) * 8))();
            return;
          }
          *(undefined4 *)(param_5 + -0x20) = in_w8;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
        }
        uVar10 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
        if ((int)uVar10 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
          lVar17 = param_5;
          if ((*(int *)(uVar12 + 7) >> 1 & 1U) != 0) {
            if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar1 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
              lVar18 = unaff_x26 + (ulong)*(uint *)(lVar1 + -1);
              if ((*(byte *)(lVar18 + 9) >> 1 & 1) == 0) {
                uVar10 = in_x11;
                if ((int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                  if (*(int *)(lVar1 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    uVar10 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                    iVar2 = *(int *)(uVar10 - 1);
                    while (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0x13);
                      iVar2 = *(int *)(uVar10 - 1);
                    }
                    if ((uVar10 & 1) != 0) {
                      lVar17 = unaff_x26 + (ulong)*(uint *)(uVar10 - 1);
                      sVar5 = *(short *)(lVar17 + 7);
                      if (sVar5 != 0x439) {
                        if (sVar5 == 0x417) {
                          uVar10 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                        }
                        else {
                          uVar10 = uVar13;
                          if ((int)lVar17 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                          goto FUN_0142dafc;
                        }
                      }
                      uVar6 = *(ushort *)
                               (unaff_x26 +
                                (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) + -1) +
                               7);
                      if (0x87 < uVar6 && uVar6 < 0x92) {
                        *(undefined4 *)(param_5 + -0x20) = in_w8;
                        uVar10 = FUN_01341080(param_1,lVar1,0);
                        lVar17 = local_40;
                        in_x9 = param_5;
                        unaff_x21 = unaff_x20;
                        goto LAB_0142d4b8;
                      }
                    }
                  }
                  goto FUN_0142dafc;
                }
              }
              else {
                *(undefined4 *)(param_5 + -0x20) = in_w8;
                uVar10 = FUN_0133fcc0(0,lVar1);
                lVar17 = local_40;
                in_x9 = param_5;
                unaff_x21 = unaff_x20;
              }
            }
            else {
              lVar1 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
              sVar5 = *(short *)(lVar1 + 7);
              if (sVar5 != 0x423) {
                if (sVar5 == 0x439) {
                  if ((*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                     ((((bVar4 = *(byte *)(lVar1 + 9), (bVar4 & 0xc0) == 0xc0 ||
                        ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb) + 0x1b) & 0x1f) - 0xd
                         < 4)) && ((bVar4 & 1) == 0)) &&
                      (uVar10 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x1b),
                      (int)uVar10 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
                    if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf);
                    }
                    goto LAB_0142d4b8;
                  }
                }
                else if (((sVar5 == 0x411) &&
                         (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                        ((uVar10 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb), (uVar10 & 1) != 0 &&
                         (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7) < 0x40)))) {
                  uVar10 = (ulong)(uint)(*(int *)(uVar10 + 7) * 2);
                  goto LAB_0142d4b8;
                }
                goto FUN_0142dafc;
              }
              if (*(int *)(uVar10 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
              goto FUN_0142dafc;
              uVar10 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
            }
          }
LAB_0142d4b8:
                    /* WARNING: Could not recover jumptable at 0x0142d4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(lVar17 + -0x18) + in_x9) * 8))(uVar10)
          ;
          return;
        }
      }
    }
  }
FUN_0142dafc:
  *(undefined4 *)(param_5 + -0x20) = in_w8;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f00));
}

