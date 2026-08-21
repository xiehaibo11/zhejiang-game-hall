
undefined8 FUN_0136ac20(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  ulong *puVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  long unaff_x26;
  int iVar29;
  long lVar30;
  ulong local_a0 [14];
  ulong local_28 [3];
  
  puVar10 = local_a0 + 2;
  if ((param_2 & 1) == 0) {
LAB_0136b2d4:
    return *(undefined8 *)(unaff_x26 + 0xa0);
  }
  local_a0[5] = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  uVar4 = *(ushort *)(local_a0[5] + 7);
  if (uVar4 < 0xaa) {
    if ((uVar4 < 0xa9) && ((0x3f < uVar4 || (*(int *)(param_2 + 7) == 0)))) goto LAB_0136b2d4;
  }
  else {
    uVar16 = *(ulong *)(unaff_x26 + 0x168);
    if (((*(int *)(param_2 + 7) == (int)uVar16) ||
        (*(int *)(param_2 + 7) == (int)*(undefined8 *)(unaff_x26 + 1000))) &&
       ((((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 0xb) >> 0x18 & 1) == 0 &&
         (0x411 < uVar4)) && ((*(uint *)(local_a0[5] + 0xb) >> 0x15 & 1) == 0)))) {
      lVar21 = unaff_x26 + (ulong)*(uint *)(local_a0[5] + 0x17);
      lVar13 = (long)(int)((*(uint *)(local_a0[5] + 0xb) >> 10 & 0x3ff) * 3);
      lVar17 = 0;
      uVar20 = 1;
      uVar19 = 0;
      uVar14 = 0;
      do {
        *(undefined8 *)((long)puVar10 + 0x58) = uVar14;
        *(long *)((long)puVar10 + 0x50) = lVar13;
        if (lVar17 != lVar13) {
          uVar22 = *(undefined8 *)(unaff_x26 + 0xf8);
          lVar15 = lVar13;
          lVar18 = lVar17;
          do {
            lVar23 = unaff_x26 + (ulong)*(uint *)(lVar21 + lVar18 * 4 + 0xf);
            iVar26 = *(int *)(lVar23 + -1);
            puVar10[9] = lVar18;
            puVar10[8] = lVar13;
            puVar10[7] = lVar17;
            puVar10[6] = uVar19;
            puVar10[5] = uVar20;
            puVar10[4] = lVar21;
            puVar10[2] = lVar23;
            if (iVar26 == (int)uVar22) {
              if ((int)uVar14 != 0) goto LAB_0136ad7c;
              lVar13 = lVar18;
              if ((int)uVar19 == 0) {
                uVar19 = 1;
                lVar17 = lVar18;
              }
            }
            else if ((int)uVar14 == 0) {
LAB_0136ad7c:
              if ((int)uVar20 == 0) {
                lVar27 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                iVar26 = (int)lVar23;
                if ((*(uint *)(lVar27 + 0xb) >> 0x15 & 1) == 0) {
                  lVar25 = unaff_x26 + (ulong)*(uint *)(lVar27 + 0x17);
                  uVar7 = *(uint *)(lVar27 + 0xb) >> 10 & 0x3ff;
                  if (uVar7 != 0) {
                    if (uVar7 < 0x21) {
                      lVar30 = (long)(int)uVar7 * 3;
                      do {
                        if (lVar30 == 0) goto LAB_0136b29c;
                        lVar30 = lVar30 + -3;
                      } while (*(int *)(lVar25 + lVar30 * 4 + 0xf) != iVar26);
                      goto LAB_0136afc0;
                    }
                    iVar6 = *(short *)(lVar25 + 5) + -1;
                    iVar12 = 0;
                    iVar29 = iVar6;
                    do {
                      iVar1 = iVar12 + ((uint)(iVar29 - iVar12) >> 1);
                      if (*(uint *)(unaff_x26 +
                                    (ulong)*(uint *)(lVar25 + (long)(int)(((uint)(*(int *)(lVar25 + 
                                                  (long)(iVar1 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff)
                                                  * 3) * 4 + 0xf) + 3) < *(uint *)(lVar23 + 3)) {
                        iVar12 = iVar1 + 1;
                        iVar1 = iVar29;
                      }
                      iVar29 = iVar1;
                    } while (iVar12 != iVar29);
                    for (; iVar12 <= iVar6; iVar12 = iVar12 + 1) {
                      uVar8 = (uint)(*(int *)(lVar25 + (long)(iVar12 * 3) * 4 + 0x13) >> 1) >> 9 &
                              0x3ff;
                      lVar30 = (long)(int)(uVar8 * 3);
                      lVar2 = unaff_x26 + (ulong)*(uint *)(lVar25 + lVar30 * 4 + 0xf);
                      if (*(uint *)(lVar2 + 3) != *(uint *)(lVar23 + 3)) break;
                      if ((int)lVar2 == iVar26) {
                        if (uVar8 < uVar7) goto LAB_0136afc0;
                        break;
                      }
                    }
                  }
                }
                else {
                  uVar24 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                  if ((uVar24 & 1) == 0) {
                    uVar24 = *(ulong *)(unaff_x26 + 0x410);
                  }
                  uVar28 = (ulong)(*(uint *)(lVar23 + 3) >> 3);
                  lVar27 = 0;
                  while( true ) {
                    uVar28 = uVar28 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar24 + 0xf) << 0x20) >>
                                      0x21) - 1U;
                    lVar25 = uVar28 * 3;
                    lVar30 = (lVar25 + 5) * 4;
                    iVar12 = *(int *)(uVar24 + lVar30 + 7);
                    if (iVar12 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                    if (iVar12 == iVar26) {
                      uVar7 = *(int *)(uVar24 + lVar30 + 0xf) >> 1;
                      uVar28 = (ulong)uVar7;
                      if ((uVar7 >> 4 & 1) == 0) {
                        if ((ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21) <=
                            lVar25 + 6U) {
                    /* WARNING: Does not return */
                          pcVar9 = (code *)SoftwareBreakpoint(0,0x136b304);
                          (*pcVar9)();
                        }
                        uVar16 = unaff_x26 + (ulong)*(uint *)(uVar24 + lVar30 + 0xb);
                        goto LAB_0136b0a0;
                      }
                      break;
                    }
                    lVar27 = lVar27 + 1;
                    uVar28 = uVar28 + lVar27;
                  }
                }
              }
              else {
                lVar27 = puVar10[3];
                lVar25 = lVar21;
                lVar30 = lVar18;
LAB_0136afc0:
                uVar7 = *(int *)(lVar25 + lVar30 * 4 + 0x13) >> 1;
                uVar28 = (ulong)uVar7;
                if ((uVar7 >> 4 & 1) == 0) {
                  if ((uVar7 >> 1 & 1) == 0) {
                    bVar11 = (uVar7 >> 6 & 7) == 2;
                    uVar20 = (ulong)*(byte *)(lVar27 + 4) + ((uVar28 & 0x1ff80000) >> 0x13);
                    if (uVar20 < *(byte *)(lVar27 + 3)) {
                      lVar13 = uVar20 * 4 + -1;
                      if (bVar11) {
                        uVar14 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(param_2 + lVar13) + 3)
                        ;
                        goto LAB_0136b058;
                      }
                      uVar16 = unaff_x26 + (ulong)*(uint *)(param_2 + lVar13);
                    }
                    else {
                      uVar24 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                      if ((uVar24 & 1) == 0) {
                        uVar24 = uVar16;
                      }
                      uVar16 = unaff_x26 +
                               (ulong)*(uint *)(uVar24 + (uVar20 - *(byte *)(lVar27 + 3)) * 4 + 7);
                      if (bVar11) {
                        uVar14 = *(undefined8 *)(uVar16 + 3);
LAB_0136b058:
                        uVar16 = **(ulong **)(unaff_x26 + 0x1428);
                        uVar20 = uVar16 + 0xc;
                        if (uVar20 < **(ulong **)(unaff_x26 + 0x1430)) {
                          uVar16 = uVar16 + 1;
                          **(ulong **)(unaff_x26 + 0x1428) = uVar20;
                        }
                        else {
                          puVar10[1] = uVar28;
                          *puVar10 = uVar14;
                          uVar16 = FUN_01348560(param_1,0xc);
                          param_1 = puVar10[0xe];
                          param_2 = puVar10[0xd];
                          lVar23 = puVar10[2];
                          uVar28 = puVar10[1];
                          uVar14 = *puVar10;
                        }
                        *(int *)(uVar16 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                        *(undefined8 *)(uVar16 + 3) = uVar14;
                      }
                    }
                  }
                  else {
                    uVar16 = unaff_x26 + (ulong)*(uint *)(lVar25 + lVar30 * 4 + 0x17);
                  }
LAB_0136b0a0:
                  if ((uVar28 & 1) != 0) {
                    if (*(int *)(uVar16 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
                      lVar13 = unaff_x26 + (ulong)*(uint *)(uVar16 + 3);
                      lVar21 = unaff_x26 + (ulong)*(uint *)(lVar13 + -1);
                      if ((*(byte *)(lVar21 + 9) >> 1 & 1) == 0) {
                        iVar26 = (int)*(undefined8 *)(unaff_x26 + 0xca8);
                        if ((int)lVar21 == iVar26) {
                          if (*(int *)(lVar13 + 0x33) != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
LAB_0136b45c:
                            puVar10[-2] = lVar23;
                            puVar10[-1] = param_2;
                    /* WARNING: Subroutine does not return */
                            FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
                          }
                          uVar16 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                          iVar12 = *(int *)(uVar16 - 1);
                          while (iVar12 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                            uVar16 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0x13);
                            iVar12 = *(int *)(uVar16 - 1);
                          }
                          if ((uVar16 & 1) == 0) goto LAB_0136b45c;
                          lVar21 = unaff_x26 + (ulong)*(uint *)(uVar16 - 1);
                          sVar5 = *(short *)(lVar21 + 7);
                          if (sVar5 != 0x439) {
                            if (sVar5 == 0x417) {
                              uVar16 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                            }
                            else {
                              uVar16 = param_2;
                              if ((int)lVar21 == iVar26) goto LAB_0136b45c;
                            }
                          }
                          uVar4 = *(ushort *)
                                   (unaff_x26 +
                                    (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar16 + 0xf) + -1
                                                    ) + 7);
                          if (uVar4 < 0x88 || 0x91 < uVar4) goto LAB_0136b45c;
                          puVar10[-1] = 0;
                          puVar10[-2] = param_2;
                          uVar16 = FUN_01341080(param_1,lVar13,0);
                          puVar10 = puVar10 + -2;
                        }
                        else {
                          uVar16 = *(ulong *)(unaff_x26 + 0xa0);
                        }
                      }
                      else {
                        puVar10[-1] = 0;
                        puVar10[-2] = param_2;
                        uVar16 = FUN_0133fcc0(1,0,lVar13);
                        puVar10 = puVar10 + -2;
                      }
                    }
                    else {
                      lVar13 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                      sVar5 = *(short *)(lVar13 + 7);
                      if (sVar5 == 0x423) {
                        if (*(int *)(uVar16 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
                        goto LAB_0136b45c;
                        uVar16 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                      }
                      else if (sVar5 == 0x439) {
                        if ((((*(int *)(uVar16 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x908)) ||
                             ((bVar3 = *(byte *)(lVar13 + 9), (bVar3 & 0xc0) != 0xc0 &&
                              (3 < (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) &
                                   0x1f) - 0xd)))) || ((bVar3 & 1) != 0)) ||
                           (uVar16 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                           (int)uVar16 == (int)*(undefined8 *)(unaff_x26 + 0xa8)))
                        goto LAB_0136b45c;
                        if (*(int *)(uVar16 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                          uVar16 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0xf);
                        }
                      }
                      else {
                        if (((sVar5 != 0x411) ||
                            (*(int *)(uVar16 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))) ||
                           ((uVar16 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar16 & 1) == 0
                            || (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar16 - 1) + 7)))))
                        goto LAB_0136b45c;
                        uVar16 = (ulong)(uint)(*(int *)(uVar16 + 7) * 2);
                      }
                    }
                  }
                  FUN_013c6000(*(undefined8 *)((long)puVar10 + 0x70),
                               *(undefined8 *)((long)puVar10 + 0x10),uVar16,
                               *(undefined8 *)((long)puVar10 + 0x70),
                               *(undefined8 *)((long)puVar10 + 0x68));
                  uVar20 = *(ulong *)((long)puVar10 + 0x28);
                  if ((int)uVar20 == 0) {
                    uVar19 = *(undefined8 *)((long)puVar10 + 0x30);
                    lVar21 = *(long *)((long)puVar10 + 0x20);
                    param_1 = *(long *)((long)puVar10 + 0x70);
                    param_2 = *(ulong *)((long)puVar10 + 0x68);
                    uVar14 = *(undefined8 *)((long)puVar10 + 0x58);
                    lVar15 = *(long *)((long)puVar10 + 0x50);
                    lVar18 = *(long *)((long)puVar10 + 0x48);
                    uVar16 = *(ulong *)(unaff_x26 + 0x168);
                    uVar22 = *(undefined8 *)(unaff_x26 + 0xf8);
                    lVar13 = *(long *)((long)puVar10 + 0x40);
                    lVar17 = *(long *)((long)puVar10 + 0x38);
                  }
                  else {
                    param_2 = *(ulong *)((long)puVar10 + 0x68);
                    lVar21 = unaff_x26 + (ulong)*(uint *)(*(long *)((long)puVar10 + 0x18) + 0x17);
                    uVar20 = (ulong)(*(int *)(param_2 - 1) == (int)*(long *)((long)puVar10 + 0x18));
                    uVar19 = *(undefined8 *)((long)puVar10 + 0x30);
                    param_1 = *(long *)((long)puVar10 + 0x70);
                    uVar14 = *(undefined8 *)((long)puVar10 + 0x58);
                    lVar15 = *(long *)((long)puVar10 + 0x50);
                    lVar18 = *(long *)((long)puVar10 + 0x48);
                    uVar16 = *(ulong *)(unaff_x26 + 0x168);
                    uVar22 = *(undefined8 *)(unaff_x26 + 0xf8);
                    lVar13 = *(long *)((long)puVar10 + 0x40);
                    lVar17 = *(long *)((long)puVar10 + 0x38);
                  }
                }
              }
            }
LAB_0136b29c:
            lVar18 = lVar18 + 3;
          } while (lVar18 != lVar15);
        }
        if (((int)uVar14 != 0) || ((int)uVar19 == 0)) goto LAB_0136b2d4;
        lVar13 = lVar13 + 3;
        uVar14 = 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x21d8));
}

