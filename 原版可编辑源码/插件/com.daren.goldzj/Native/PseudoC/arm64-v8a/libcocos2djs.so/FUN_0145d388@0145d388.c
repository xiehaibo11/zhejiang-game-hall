
void FUN_0145d388(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6,undefined8 param_7,ulong param_8,ulong param_9)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  code *pcVar9;
  bool bVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong in_x9;
  uint in_w11;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  long lStack_40;
  long lStack_38;
  
  uVar14 = (long)((ulong)in_w11 << 0x20) >> 0x21;
  uVar15 = uVar14 & 0xf;
  iVar8 = (int)unaff_x19;
  lVar13 = param_6;
  if (uVar15 == 4) {
    bVar10 = (uVar14 & 0x80) == 0;
    lVar16 = (uVar14 >> 8 & 0x7ff) * 4 + -1;
    if (((uint)((int)in_w11 >> 1) >> 6 & 1) == 0) {
      uVar14 = unaff_x26 + (ulong)*(uint *)(in_x9 + 3);
      if ((uVar14 & 1) == 0) {
        uVar14 = *(ulong *)(unaff_x26 + 0x168);
      }
      uVar11 = unaff_x26 + (ulong)*(uint *)(uVar14 + lVar16);
      if (bVar10) goto LAB_0145d478;
      if (((uVar11 & 1) == 0) || (*(int *)(uVar11 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
      goto LAB_0145e378;
      uVar12 = *(undefined8 *)(uVar11 + 3);
    }
    else {
      if (bVar10) {
        uVar11 = unaff_x26 + (ulong)*(uint *)(in_x9 + lVar16);
        goto LAB_0145d478;
      }
      uVar14 = unaff_x26 + (ulong)*(uint *)(in_x9 + lVar16);
      if (((uVar14 & 1) == 0) || (*(int *)(uVar14 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
      goto LAB_0145e378;
      uVar12 = *(undefined8 *)(uVar14 + 3);
    }
    uVar11 = **(ulong **)(unaff_x26 + 0x1428);
    uVar14 = uVar11 + 0xc;
    if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar11 = uVar11 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar14;
    }
    else {
      uVar11 = FUN_01348560(param_2,0xc);
    }
    *(int *)(uVar11 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(undefined8 *)(uVar11 + 3) = uVar12;
  }
  else {
    uVar11 = in_x9;
    if ((uVar15 != 5) && (uVar11 = param_8, uVar15 != 0xd)) {
      if (uVar15 == 2) {
        uVar14 = unaff_x26 + (ulong)*(uint *)(in_x9 + 3);
        if ((uVar14 & 1) == 0) {
          uVar14 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar15 = (ulong)(*(uint *)(param_4 + 3) >> 3);
        lVar16 = 0;
        while( true ) {
          uVar15 = uVar15 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar1 = uVar15 * 3;
          lVar17 = (lVar1 + 5) * 4;
          iVar2 = *(int *)(uVar14 + lVar17 + 7);
          if (iVar2 == (int)param_8) break;
          if (iVar2 == (int)param_4) {
            if ((ulong)((long)((ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21) <= lVar1 + 6U) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(0,0x145e004);
              (*pcVar9)();
            }
            uVar11 = unaff_x26 + (ulong)*(uint *)(uVar14 + lVar17 + 0xb);
            if ((*(int *)(uVar14 + lVar17 + 0xf) >> 1 & 1U) == 0) goto LAB_0145d478;
            if (*(int *)(uVar11 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar16 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
              lVar1 = unaff_x26 + (ulong)*(uint *)(lVar16 + -1);
              if ((*(byte *)(lVar1 + 9) >> 1 & 1) != 0) {
                *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                uVar11 = FUN_0133fcc0(0);
                lVar13 = lStack_40;
                unaff_x19 = lStack_38;
                unaff_x21 = param_6;
                goto LAB_0145d478;
              }
              uVar11 = param_8;
              if ((int)lVar1 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0145d478;
              if (*(int *)(lVar16 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
                iVar2 = *(int *)(uVar14 - 1);
                while (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0x13);
                  iVar2 = *(int *)(uVar14 - 1);
                }
                if ((uVar14 & 1) == 0) break;
                lVar13 = unaff_x26 + (ulong)*(uint *)(uVar14 - 1);
                sVar6 = *(short *)(lVar13 + 7);
                if (sVar6 != 0x439) {
                  if (sVar6 == 0x417) {
                    uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
                  }
                  else {
                    uVar14 = param_9;
                    if ((int)lVar13 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                  }
                }
                uVar7 = *(ushort *)
                         (unaff_x26 +
                          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf) + -1) + 7);
                if (uVar7 < 0x88 || 0x91 < uVar7) break;
                *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                uVar11 = FUN_01341080(param_2,lVar16,0);
                lVar13 = lStack_40;
                unaff_x19 = lStack_38;
                unaff_x21 = param_6;
                goto LAB_0145d478;
              }
            }
            else {
              lVar16 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
              sVar6 = *(short *)(lVar16 + 7);
              if (sVar6 == 0x423) {
                if (*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  uVar11 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
                  goto LAB_0145d478;
                }
              }
              else if (sVar6 == 0x439) {
                if (((*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    (((bVar5 = *(byte *)(lVar16 + 9), (bVar5 & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_9 + 0xb) + 0x1b) & 0x1f) - 0xd
                       < 4)) && ((bVar5 & 1) == 0)))) &&
                   (uVar11 = unaff_x26 + (ulong)*(uint *)(param_9 + 0x1b),
                   (int)uVar11 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar11 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xf);
                  }
                  goto LAB_0145d478;
                }
              }
              else if (((sVar6 == 0x411) &&
                       (*(int *)(uVar11 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb), (uVar14 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7) < 0x40)))) {
                uVar11 = (ulong)(uint)(*(int *)(uVar14 + 7) * 2);
                goto LAB_0145d478;
              }
            }
            break;
          }
          lVar16 = lVar16 + 1;
          uVar15 = uVar15 + lVar16;
        }
        goto LAB_0145e378;
      }
      if (uVar15 == 6) {
        uVar3 = *(uint *)(unaff_x26 +
                          (ulong)*(uint *)(unaff_x26 +
                                           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(in_x9 - 1)
                                                           + 0x17) +
                                          (uVar14 >> 6 & 0x3ff) * 0xc + 0x17) + 3);
        *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
        uVar11 = FUN_0133fcc0(0,unaff_x26 + (ulong)uVar3);
        lVar13 = lStack_40;
        unaff_x19 = lStack_38;
        unaff_x21 = param_6;
      }
      else if (uVar15 == 7) {
        *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
        uVar11 = FUN_01348300();
      }
      else if ((uVar15 == 8) || (uVar15 == 9)) {
        if (((uint)((int)in_w11 >> 1) >> 4 & 1) == 0) {
          uVar3 = *(uint *)(param_1 + 0xf);
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x13);
        }
        if ((int)(unaff_x26 + (ulong)uVar3) == 3) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(0,0x145de2c);
          (*pcVar9)();
        }
        uVar4 = *(uint *)(in_x9 + 0xb);
        uVar12 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(in_x9 + 7) + 3);
        uVar14 = param_9;
        if (uVar15 != 8) {
          uVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_9 - 1) + 0xf);
        }
        *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
        uVar11 = FUN_01348140(uVar14,uVar12,0,unaff_x26 + (ulong)uVar4,param_6,
                              unaff_x26 + (ulong)uVar3 & 0xfffffffffffffffd,uVar14,param_9,param_9,0
                             );
        lVar13 = lStack_40;
        unaff_x19 = lStack_38;
        unaff_x21 = param_6;
      }
      else if (uVar15 == 3) {
        uVar11 = unaff_x26 + (ulong)*(uint *)(in_x9 + 0xb);
        if ((int)uVar11 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) goto LAB_0145e378;
        if ((*(int *)(in_x9 + 7) >> 1 & 1U) != 0) {
          if (*(int *)(uVar11 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
            lVar16 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
            lVar1 = unaff_x26 + (ulong)*(uint *)(lVar16 + -1);
            if ((*(byte *)(lVar1 + 9) >> 1 & 1) == 0) {
              uVar11 = param_8;
              if ((int)lVar1 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                if (*(int *)(lVar16 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                  uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
                  iVar2 = *(int *)(uVar14 - 1);
                  while (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0x13);
                    iVar2 = *(int *)(uVar14 - 1);
                  }
                  if ((uVar14 & 1) != 0) {
                    lVar13 = unaff_x26 + (ulong)*(uint *)(uVar14 - 1);
                    sVar6 = *(short *)(lVar13 + 7);
                    if (sVar6 != 0x439) {
                      if (sVar6 == 0x417) {
                        uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
                      }
                      else {
                        uVar14 = param_9;
                        if ((int)lVar13 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                        goto LAB_0145e378;
                      }
                    }
                    uVar7 = *(ushort *)
                             (unaff_x26 +
                              (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf) + -1) + 7)
                    ;
                    if (0x87 < uVar7 && uVar7 < 0x92) {
                      *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                      uVar11 = FUN_01341080(param_2,lVar16,0);
                      lVar13 = lStack_40;
                      unaff_x19 = lStack_38;
                      unaff_x21 = param_6;
                      goto LAB_0145d478;
                    }
                  }
                }
                goto LAB_0145e378;
              }
            }
            else {
              *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
              uVar11 = FUN_0133fcc0(0);
              lVar13 = lStack_40;
              unaff_x19 = lStack_38;
              unaff_x21 = param_6;
            }
          }
          else {
            lVar16 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
            sVar6 = *(short *)(lVar16 + 7);
            if (sVar6 == 0x423) {
              if (*(int *)(uVar11 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
              goto LAB_0145e378;
              uVar11 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
            }
            else if (sVar6 == 0x439) {
              if ((*(int *)(uVar11 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x908)) ||
                 ((((bVar5 = *(byte *)(lVar16 + 9), (bVar5 & 0xc0) != 0xc0 &&
                    (3 < (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_9 + 0xb) + 0x1b) & 0x1f) -
                         0xd)) || ((bVar5 & 1) != 0)) ||
                  (uVar11 = unaff_x26 + (ulong)*(uint *)(param_9 + 0x1b),
                  (int)uVar11 == (int)*(undefined8 *)(unaff_x26 + 0xa8))))) goto LAB_0145e378;
              if (*(int *)(uVar11 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xf);
              }
            }
            else {
              if (((sVar6 != 0x411) ||
                  (*(int *)(uVar11 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))) ||
                 ((uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb), (uVar14 & 1) == 0 ||
                  (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7))))) {
LAB_0145e378:
                *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f10));
              }
              uVar11 = (ulong)(uint)(*(int *)(uVar14 + 7) * 2);
            }
          }
        }
      }
      else {
        if (uVar15 == 0xb) {
          *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
        }
        if (uVar15 == 0xc) {
          *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
          uVar11 = FUN_013fc180();
        }
        else {
          if (uVar15 != 0xe) {
            *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
          }
          uVar14 = uVar14 >> 6 & 0x1ffffff;
          lVar16 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_9 + 0xb) + 3);
          if ((ulong)((long)((ulong)*(uint *)(lVar16 + 3) << 0x20) >> 0x21) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0,0x145da80);
            (*pcVar9)();
          }
          uVar11 = unaff_x26 +
                   (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar16 + uVar14 * 4 + 7) + 3);
          if ((int)uVar11 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            *(int *)(param_6 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
          }
        }
      }
    }
  }
LAB_0145d478:
                    /* WARNING: Could not recover jumptable at 0x0145d494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(lVar13 + -0x18) + unaff_x19 + 0xd) * 8))
            (uVar11);
  return;
}

