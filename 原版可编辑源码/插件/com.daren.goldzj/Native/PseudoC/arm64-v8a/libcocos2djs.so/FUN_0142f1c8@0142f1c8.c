
void FUN_0142f1c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6,undefined8 param_7,ulong param_8,ulong param_9)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong in_x9;
  uint in_w11;
  ulong uVar15;
  long lVar16;
  long unaff_x19;
  long lVar17;
  long unaff_x21;
  long unaff_x26;
  long lStack_40;
  long lStack_38;
  
  uVar14 = (long)((ulong)in_w11 << 0x20) >> 0x21;
  uVar15 = uVar14 & 0xf;
  iVar12 = (int)unaff_x19;
  lVar17 = unaff_x19;
  if (uVar15 == 4) {
    bVar9 = (uVar14 & 0x80) == 0;
    lVar13 = (uVar14 >> 8 & 0x7ff) * 4 + -1;
    if (((uint)((int)in_w11 >> 1) >> 6 & 1) == 0) {
      uVar14 = unaff_x26 + (ulong)*(uint *)(in_x9 + 3);
      if ((uVar14 & 1) == 0) {
        uVar14 = *(ulong *)(unaff_x26 + 0x168);
      }
      uVar10 = unaff_x26 + (ulong)*(uint *)(uVar14 + lVar13);
      if (bVar9) goto LAB_0142f2b8;
      if (((uVar10 & 1) == 0) || (*(int *)(uVar10 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
      goto LAB_0143019c;
      uVar11 = *(undefined8 *)(uVar10 + 3);
    }
    else {
      if (bVar9) {
        uVar10 = unaff_x26 + (ulong)*(uint *)(in_x9 + lVar13);
        goto LAB_0142f2b8;
      }
      uVar14 = unaff_x26 + (ulong)*(uint *)(in_x9 + lVar13);
      if (((uVar14 & 1) == 0) || (*(int *)(uVar14 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
      goto LAB_0143019c;
      uVar11 = *(undefined8 *)(uVar14 + 3);
    }
    uVar10 = **(ulong **)(unaff_x26 + 0x1428);
    uVar14 = uVar10 + 0xc;
    if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar10 = uVar10 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar14;
    }
    else {
      uVar10 = FUN_01348560(param_2,0xc);
    }
    *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(undefined8 *)(uVar10 + 3) = uVar11;
  }
  else {
    uVar10 = in_x9;
    if ((uVar15 != 5) && (uVar10 = param_8, uVar15 != 0xd)) {
      if (uVar15 == 2) {
        uVar14 = unaff_x26 + (ulong)*(uint *)(in_x9 + 3);
        if ((uVar14 & 1) == 0) {
          uVar14 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar15 = (ulong)(*(uint *)(param_4 + 3) >> 3);
        lVar13 = 0;
        while( true ) {
          uVar15 = uVar15 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar1 = uVar15 * 3;
          lVar16 = (lVar1 + 5) * 4;
          iVar2 = *(int *)(uVar14 + lVar16 + 7);
          if (iVar2 == (int)param_8) break;
          if (iVar2 == (int)param_4) {
            if ((ulong)((long)((ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21) <= lVar1 + 6U) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0,0x142fe30);
              (*pcVar8)();
            }
            uVar10 = unaff_x26 + (ulong)*(uint *)(uVar14 + lVar16 + 0xb);
            if ((*(int *)(uVar14 + lVar16 + 0xf) >> 1 & 1U) == 0) goto LAB_0142f2b8;
            if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar13 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
              lVar1 = unaff_x26 + (ulong)*(uint *)(lVar13 + -1);
              if ((*(byte *)(lVar1 + 9) >> 1 & 1) != 0) {
                *(int *)(param_6 + -0x20) = iVar12 * 2;
                uVar10 = FUN_0133fcc0(0);
                param_6 = lStack_38;
                lVar17 = lStack_40;
                unaff_x21 = unaff_x19;
                goto LAB_0142f2b8;
              }
              uVar10 = param_8;
              if ((int)lVar1 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0142f2b8;
              if (*(int *)(lVar13 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
                iVar2 = *(int *)(uVar14 - 1);
                while (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0x13);
                  iVar2 = *(int *)(uVar14 - 1);
                }
                if ((uVar14 & 1) == 0) break;
                lVar17 = unaff_x26 + (ulong)*(uint *)(uVar14 - 1);
                sVar6 = *(short *)(lVar17 + 7);
                if (sVar6 != 0x439) {
                  if (sVar6 == 0x417) {
                    uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
                  }
                  else {
                    uVar14 = param_9;
                    if ((int)lVar17 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                  }
                }
                uVar7 = *(ushort *)
                         (unaff_x26 +
                          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf) + -1) + 7);
                if (uVar7 < 0x88 || 0x91 < uVar7) break;
                *(int *)(param_6 + -0x20) = iVar12 * 2;
                uVar10 = FUN_01341080(param_2,lVar13,0);
                param_6 = lStack_38;
                lVar17 = lStack_40;
                unaff_x21 = unaff_x19;
                goto LAB_0142f2b8;
              }
            }
            else {
              lVar13 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
              sVar6 = *(short *)(lVar13 + 7);
              if (sVar6 == 0x423) {
                if (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  uVar10 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
                  goto LAB_0142f2b8;
                }
              }
              else if (sVar6 == 0x439) {
                if (((*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    (((bVar5 = *(byte *)(lVar13 + 9), (bVar5 & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_9 + 0xb) + 0x1b) & 0x1f) - 0xd
                       < 4)) && ((bVar5 & 1) == 0)))) &&
                   (uVar10 = unaff_x26 + (ulong)*(uint *)(param_9 + 0x1b),
                   (int)uVar10 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf);
                  }
                  goto LAB_0142f2b8;
                }
              }
              else if (((sVar6 == 0x411) &&
                       (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb), (uVar14 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7) < 0x40)))) {
                uVar10 = (ulong)(uint)(*(int *)(uVar14 + 7) * 2);
                goto LAB_0142f2b8;
              }
            }
            break;
          }
          lVar13 = lVar13 + 1;
          uVar15 = uVar15 + lVar13;
        }
        goto LAB_0143019c;
      }
      if (uVar15 == 6) {
        uVar3 = *(uint *)(unaff_x26 +
                          (ulong)*(uint *)(unaff_x26 +
                                           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(in_x9 - 1)
                                                           + 0x17) +
                                          (uVar14 >> 6 & 0x3ff) * 0xc + 0x17) + 3);
        *(int *)(param_6 + -0x20) = iVar12 * 2;
        uVar10 = FUN_0133fcc0(0,unaff_x26 + (ulong)uVar3);
        param_6 = lStack_38;
        lVar17 = lStack_40;
        unaff_x21 = unaff_x19;
      }
      else if (uVar15 == 7) {
        *(int *)(param_6 + -0x20) = iVar12 * 2;
        uVar10 = FUN_01348300();
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
          pcVar8 = (code *)SoftwareBreakpoint(0,0x142fc64);
          (*pcVar8)();
        }
        uVar4 = *(uint *)(in_x9 + 0xb);
        uVar11 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(in_x9 + 7) + 3);
        uVar14 = param_9;
        if (uVar15 != 8) {
          uVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_9 - 1) + 0xf);
        }
        *(int *)(param_6 + -0x20) = iVar12 * 2;
        uVar10 = FUN_01348140(uVar14,uVar11,0,unaff_x26 + (ulong)uVar4,param_6,
                              unaff_x26 + (ulong)uVar3 & 0xfffffffffffffffd,uVar14,param_9,param_9,0
                             );
        param_6 = lStack_38;
        lVar17 = lStack_40;
        unaff_x21 = unaff_x19;
      }
      else if (uVar15 == 3) {
        uVar10 = unaff_x26 + (ulong)*(uint *)(in_x9 + 0xb);
        if ((int)uVar10 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) goto LAB_0143019c;
        if ((*(int *)(in_x9 + 7) >> 1 & 1U) != 0) {
          if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
            lVar13 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
            lVar1 = unaff_x26 + (ulong)*(uint *)(lVar13 + -1);
            if ((*(byte *)(lVar1 + 9) >> 1 & 1) == 0) {
              uVar10 = param_8;
              if ((int)lVar1 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                if (*(int *)(lVar13 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                  uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
                  iVar2 = *(int *)(uVar14 - 1);
                  while (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0x13);
                    iVar2 = *(int *)(uVar14 - 1);
                  }
                  if ((uVar14 & 1) != 0) {
                    lVar17 = unaff_x26 + (ulong)*(uint *)(uVar14 - 1);
                    sVar6 = *(short *)(lVar17 + 7);
                    if (sVar6 != 0x439) {
                      if (sVar6 == 0x417) {
                        uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
                      }
                      else {
                        uVar14 = param_9;
                        if ((int)lVar17 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                        goto LAB_0143019c;
                      }
                    }
                    uVar7 = *(ushort *)
                             (unaff_x26 +
                              (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf) + -1) + 7)
                    ;
                    if (0x87 < uVar7 && uVar7 < 0x92) {
                      *(int *)(param_6 + -0x20) = iVar12 * 2;
                      uVar10 = FUN_01341080(param_2,lVar13,0);
                      param_6 = lStack_38;
                      lVar17 = lStack_40;
                      unaff_x21 = unaff_x19;
                      goto LAB_0142f2b8;
                    }
                  }
                }
                goto LAB_0143019c;
              }
            }
            else {
              *(int *)(param_6 + -0x20) = iVar12 * 2;
              uVar10 = FUN_0133fcc0(0);
              param_6 = lStack_38;
              lVar17 = lStack_40;
              unaff_x21 = unaff_x19;
            }
          }
          else {
            lVar13 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
            sVar6 = *(short *)(lVar13 + 7);
            if (sVar6 == 0x423) {
              if (*(int *)(uVar10 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
              goto LAB_0143019c;
              uVar10 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
            }
            else if (sVar6 == 0x439) {
              if ((*(int *)(uVar10 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x908)) ||
                 ((((bVar5 = *(byte *)(lVar13 + 9), (bVar5 & 0xc0) != 0xc0 &&
                    (3 < (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_9 + 0xb) + 0x1b) & 0x1f) -
                         0xd)) || ((bVar5 & 1) != 0)) ||
                  (uVar10 = unaff_x26 + (ulong)*(uint *)(param_9 + 0x1b),
                  (int)uVar10 == (int)*(undefined8 *)(unaff_x26 + 0xa8))))) goto LAB_0143019c;
              if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf);
              }
            }
            else {
              if (((sVar6 != 0x411) ||
                  (*(int *)(uVar10 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))) ||
                 ((uVar14 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb), (uVar14 & 1) == 0 ||
                  (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7))))) {
LAB_0143019c:
                *(int *)(param_6 + -0x20) = iVar12 * 2;
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f10));
              }
              uVar10 = (ulong)(uint)(*(int *)(uVar14 + 7) * 2);
            }
          }
        }
      }
      else {
        if (uVar15 == 0xb) {
          *(int *)(param_6 + -0x20) = iVar12 * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
        }
        if (uVar15 == 0xc) {
          *(int *)(param_6 + -0x20) = iVar12 * 2;
          uVar10 = FUN_013fc180();
        }
        else {
          if (uVar15 != 0xe) {
            *(int *)(param_6 + -0x20) = iVar12 * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
          }
          uVar14 = uVar14 >> 6 & 0x1ffffff;
          lVar13 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_9 + 0xb) + 3);
          if ((ulong)((long)((ulong)*(uint *)(lVar13 + 3) << 0x20) >> 0x21) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0,0x142f8cc);
            (*pcVar8)();
          }
          uVar10 = unaff_x26 +
                   (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar13 + uVar14 * 4 + 7) + 3);
          if ((int)uVar10 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            *(int *)(param_6 + -0x20) = iVar12 * 2;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
          }
        }
      }
    }
  }
LAB_0142f2b8:
  lVar13 = *(long *)(param_6 + -0x18);
  bVar5 = *(byte *)(lVar13 + lVar17 + 4);
  if (bVar5 == 0x26) {
    *(ulong *)(param_6 + (long)*(char *)(lVar13 + lVar17 + 5) * 8) = uVar10;
    bVar5 = *(byte *)(lVar13 + lVar17 + 6);
  }
                    /* WARNING: Could not recover jumptable at 0x0142f2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)bVar5 * 8))(uVar10);
  return;
}

