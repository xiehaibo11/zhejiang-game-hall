
ulong FUN_01389180(ulong param_1,ulong param_2,int param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  uint uVar12;
  ulong *puVar13;
  ulong extraout_x8;
  uint uVar14;
  ulong extraout_x9;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong extraout_x11;
  ulong uVar20;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  uint *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  long lVar31;
  int iVar32;
  long unaff_x26;
  long unaff_x27;
  ulong uVar33;
  ulong uVar34;
  ulong local_80 [3];
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  long local_38;
  ulong local_30;
  ulong local_20;
  
  if ((param_1 & 1) == 0) {
    uVar9 = *(ulong *)(unaff_x26 + 0x140);
  }
  else {
    uVar9 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
  }
  local_30 = param_1;
  if ((*(uint *)(uVar9 + 0xb) >> 0x18 & 1) == 0) {
    if ((int)param_4 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
LAB_01389ac0:
      puVar21 = local_80 + 2;
      puVar11 = *(ulong **)(unaff_x26 + 0x1428);
      puVar13 = *(ulong **)(unaff_x26 + 0x1430);
      lVar10 = unaff_x26 +
               (ulong)*(uint *)(unaff_x26 +
                                (ulong)*(uint *)(unaff_x26 +
                                                 (ulong)*(uint *)(unaff_x26 +
                                                                  (ulong)*(uint *)(unaff_x27 + -1) +
                                                                 0x13) + 499) + 0x1b);
      lVar18 = (ulong)*(byte *)(lVar10 + 3) * 4;
      uVar9 = *puVar11 + lVar18;
      local_80[2] = param_1;
      if (uVar9 < *puVar13) {
        local_20 = *puVar11 + 1;
        *puVar11 = uVar9;
      }
      else {
        local_40 = lVar18;
        local_38 = lVar10;
        local_30 = param_2;
        local_20 = FUN_01348560(param_1,lVar18);
        puVar11 = *(ulong **)(unaff_x26 + 0x1428);
        puVar13 = *(ulong **)(unaff_x26 + 0x1430);
        param_2 = local_30;
        lVar10 = local_38;
        lVar18 = local_40;
      }
      *(int *)(local_20 - 1) = (int)lVar10;
      uVar9 = *(ulong *)(unaff_x26 + 0x168);
      *(int *)(local_20 + 3) = (int)uVar9;
      *(int *)(local_20 + 7) = (int)uVar9;
      lVar18 = lVar18 + -1;
      if (lVar18 == 0xb) {
        uVar15 = *(ulong *)(unaff_x26 + 0xa0);
      }
      else {
        uVar15 = *(ulong *)(unaff_x26 + 0xa0);
        do {
          lVar18 = lVar18 + -4;
          *(int *)(local_20 + lVar18) = (int)uVar15;
        } while (lVar18 != 0xb);
      }
      if (((uint)param_2 >> 5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2268));
      }
      uVar17 = local_20;
      if ((int)local_80[2] != (int)uVar15 &&
          (int)local_80[2] != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
        if (((local_80[2] & 1) == 0) ||
           (uVar19 = local_80[2],
           *(ushort *)(unaff_x26 + (ulong)*(uint *)(local_80[2] - 1) + 7) < 0xa9)) {
          uVar19 = FUN_013492a0();
          uVar9 = *(ulong *)(unaff_x26 + 0x168);
          uVar15 = *(ulong *)(unaff_x26 + 0xa0);
          puVar11 = *(ulong **)(unaff_x26 + 0x1428);
          puVar13 = *(ulong **)(unaff_x26 + 0x1430);
        }
        uVar8 = unaff_x26 + (ulong)*(uint *)(uVar19 - 1);
        local_80[2] = uVar19;
        local_50 = uVar8;
        if ((((*(ushort *)(uVar8 + 7) < 0xaa) || (*(int *)(uVar19 + 7) != (int)uVar9)) ||
            (*(ushort *)(uVar8 + 7) < 0x412)) || ((*(uint *)(uVar8 + 0xb) >> 0x15 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x21d8));
        }
        uVar20 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0x17);
        uVar16 = (ulong)(int)((*(uint *)(uVar8 + 0xb) >> 10 & 0x3ff) * 3);
        local_30 = uVar16;
        uVar17 = local_20;
        if (uVar16 != 0) {
          uVar25 = 0;
          uVar23 = 1;
          do {
            uVar34 = unaff_x26 + (ulong)*(uint *)(uVar20 + uVar25 * 4 + 0xf);
            puVar21[7] = uVar25;
            puVar21[6] = uVar23;
            puVar21[5] = uVar20;
            puVar21[3] = uVar34;
            uVar27 = uVar8;
            uVar28 = uVar20;
            uVar33 = uVar25;
            if ((int)uVar23 == 0) {
              uVar27 = unaff_x26 + (ulong)*(uint *)(uVar19 - 1);
              iVar24 = (int)uVar34;
              if ((*(uint *)(uVar27 + 0xb) >> 0x15 & 1) == 0) {
                uVar28 = unaff_x26 + (ulong)*(uint *)(uVar27 + 0x17);
                uVar12 = *(uint *)(uVar27 + 0xb) >> 10 & 0x3ff;
                if (uVar12 != 0) {
                  if (uVar12 < 0x21) {
                    uVar33 = (long)(int)uVar12 * 3;
                    do {
                      if (uVar33 == 0) goto LAB_0138a108;
                      uVar33 = uVar33 - 3;
                    } while (*(int *)(uVar28 + uVar33 * 4 + 0xf) != iVar24);
                    goto LAB_01389e60;
                  }
                  iVar5 = *(short *)(uVar28 + 5) + -1;
                  iVar32 = 0;
                  iVar30 = iVar5;
                  do {
                    iVar1 = iVar32 + ((uint)(iVar30 - iVar32) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(uVar28 + (long)(int)(((uint)(*(int *)(uVar28 + (
                                                  long)(iVar1 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)(uVar34 + 3)) {
                      iVar32 = iVar1 + 1;
                      iVar1 = iVar30;
                    }
                    iVar30 = iVar1;
                  } while (iVar32 != iVar30);
                  for (; iVar32 <= iVar5; iVar32 = iVar32 + 1) {
                    uVar14 = (uint)(*(int *)(uVar28 + (long)(iVar32 * 3) * 4 + 0x13) >> 1) >> 9 &
                             0x3ff;
                    uVar33 = (ulong)(int)(uVar14 * 3);
                    lVar10 = unaff_x26 + (ulong)*(uint *)(uVar28 + uVar33 * 4 + 0xf);
                    if (*(uint *)(lVar10 + 3) != *(uint *)(uVar34 + 3)) break;
                    if ((int)lVar10 == iVar24) {
                      if (uVar14 < uVar12) goto LAB_01389e60;
                      break;
                    }
                  }
                }
              }
              else {
                uVar27 = unaff_x26 + (ulong)*(uint *)(uVar19 + 3);
                if ((uVar27 & 1) == 0) {
                  uVar27 = *(ulong *)(unaff_x26 + 0x410);
                }
                uVar28 = (ulong)(*(uint *)(uVar34 + 3) >> 3);
                lVar10 = 0;
                while( true ) {
                  uVar28 = uVar28 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar27 + 0xf) << 0x20) >>
                                    0x21) - 1U;
                  lVar18 = uVar28 * 3;
                  lVar31 = (lVar18 + 5) * 4;
                  iVar32 = *(int *)(uVar27 + lVar31 + 7);
                  if (iVar32 == (int)uVar15) break;
                  if (iVar32 == iVar24) {
                    uVar12 = *(int *)(uVar27 + lVar31 + 0xf) >> 1;
                    uVar29 = (ulong)uVar12;
                    if ((uVar12 >> 4 & 1) == 0) {
                      if ((ulong)((long)((ulong)*(uint *)(uVar27 + 3) << 0x20) >> 0x21) <=
                          lVar18 + 6U) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(0,0x138a190);
                        (*pcVar6)();
                      }
                      uVar9 = unaff_x26 + (ulong)*(uint *)(uVar27 + lVar31 + 0xb);
                      goto LAB_01389f2c;
                    }
                    break;
                  }
                  lVar10 = lVar10 + 1;
                  uVar28 = uVar28 + lVar10;
                }
              }
            }
            else {
LAB_01389e60:
              uVar12 = *(int *)(uVar28 + uVar33 * 4 + 0x13) >> 1;
              uVar29 = (ulong)uVar12;
              if ((uVar12 >> 4 & 1) == 0) {
                if ((uVar12 >> 1 & 1) == 0) {
                  bVar7 = (uVar12 >> 6 & 7) == 2;
                  uVar17 = (ulong)*(byte *)(uVar27 + 4) + ((uVar29 & 0x1ff80000) >> 0x13);
                  if (uVar17 < *(byte *)(uVar27 + 3)) {
                    lVar10 = uVar17 * 4 + -1;
                    if (bVar7) {
                      uVar17 = *(ulong *)(unaff_x26 + (ulong)*(uint *)(uVar19 + lVar10) + 3);
                      goto LAB_01389ef8;
                    }
                    uVar9 = unaff_x26 + (ulong)*(uint *)(uVar19 + lVar10);
                  }
                  else {
                    uVar20 = unaff_x26 + (ulong)*(uint *)(uVar19 + 3);
                    if ((uVar20 & 1) == 0) {
                      uVar20 = uVar9;
                    }
                    uVar9 = unaff_x26 +
                            (ulong)*(uint *)(uVar20 + (uVar17 - *(byte *)(uVar27 + 3)) * 4 + 7);
                    if (bVar7) {
                      uVar17 = *(ulong *)(uVar9 + 3);
LAB_01389ef8:
                      uVar20 = *puVar11 + 0xc;
                      if (uVar20 < *puVar13) {
                        uVar9 = *puVar11 + 1;
                        *puVar11 = uVar20;
                      }
                      else {
                        puVar21[2] = uVar29;
                        puVar21[1] = uVar17;
                        uVar9 = FUN_01348560(uVar19,0xc);
                        uVar19 = *puVar21;
                        uVar8 = puVar21[4];
                        uVar34 = puVar21[3];
                        uVar15 = *(ulong *)(unaff_x26 + 0xa0);
                        uVar29 = puVar21[2];
                        uVar17 = puVar21[1];
                      }
                      *(int *)(uVar9 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      *(ulong *)(uVar9 + 3) = uVar17;
                    }
                  }
                }
                else {
                  uVar9 = unaff_x26 + (ulong)*(uint *)(uVar28 + uVar33 * 4 + 0x17);
                }
LAB_01389f2c:
                if ((uVar29 & 1) != 0) {
                  if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
                    lVar10 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
                    lVar18 = unaff_x26 + (ulong)*(uint *)(lVar10 + -1);
                    if ((*(byte *)(lVar18 + 9) >> 1 & 1) == 0) {
                      iVar24 = (int)*(undefined8 *)(unaff_x26 + 0xca8);
                      uVar9 = uVar15;
                      if ((int)lVar18 == iVar24) {
                        if (*(int *)(lVar10 + 0x33) != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
LAB_0138a2e0:
                          puVar21[-2] = uVar34;
                          puVar21[-1] = uVar19;
                    /* WARNING: Subroutine does not return */
                          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
                        }
                        uVar9 = unaff_x26 + (ulong)*(uint *)(uVar19 - 1);
                        iVar32 = *(int *)(uVar9 - 1);
                        while (iVar32 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                          uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0x13);
                          iVar32 = *(int *)(uVar9 - 1);
                        }
                        if ((uVar9 & 1) == 0) goto LAB_0138a2e0;
                        lVar18 = unaff_x26 + (ulong)*(uint *)(uVar9 - 1);
                        sVar3 = *(short *)(lVar18 + 7);
                        if (sVar3 != 0x439) {
                          if (sVar3 == 0x417) {
                            uVar9 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0xb);
                          }
                          else {
                            uVar9 = uVar19;
                            if ((int)lVar18 == iVar24) goto LAB_0138a2e0;
                          }
                        }
                        uVar4 = *(ushort *)
                                 (unaff_x26 +
                                  (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) + -1) +
                                 7);
                        if (uVar4 < 0x88 || 0x91 < uVar4) goto LAB_0138a2e0;
                        puVar21[-1] = 0;
                        puVar21[-2] = uVar19;
                        uVar9 = FUN_01341080(uVar19,lVar10,0);
                        puVar21 = puVar21 + -2;
                      }
                    }
                    else {
                      puVar21[-1] = 0;
                      puVar21[-2] = uVar19;
                      uVar9 = FUN_0133fcc0(uVar8,0,lVar10);
                      puVar21 = puVar21 + -2;
                    }
                  }
                  else {
                    lVar10 = unaff_x26 + (ulong)*(uint *)(uVar19 - 1);
                    sVar3 = *(short *)(lVar10 + 7);
                    if (sVar3 == 0x423) {
                      if (*(int *)(uVar9 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
                      goto LAB_0138a2e0;
                      uVar9 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0xb);
                    }
                    else if (sVar3 == 0x439) {
                      if ((((*(int *)(uVar9 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x908)) ||
                           ((bVar2 = *(byte *)(lVar10 + 9), (bVar2 & 0xc0) != 0xc0 &&
                            (3 < (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar19 + 0xb) + 0x1b) &
                                 0x1f) - 0xd)))) || ((bVar2 & 1) != 0)) ||
                         (uVar9 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0x1b),
                         (int)uVar9 == (int)*(undefined8 *)(unaff_x26 + 0xa8))) goto LAB_0138a2e0;
                      if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                        uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf);
                      }
                    }
                    else {
                      if (((sVar3 != 0x411) ||
                          (*(int *)(uVar9 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))) ||
                         ((uVar9 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0xb), (uVar9 & 1) == 0 ||
                          (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7)))))
                      goto LAB_0138a2e0;
                      uVar9 = (ulong)(uint)(*(int *)(uVar9 + 7) * 2);
                    }
                  }
                }
                FUN_013c6000(puVar21[10],puVar21[3],uVar9,*puVar21);
                uVar23 = puVar21[6];
                if ((int)uVar23 == 0) {
                  uVar9 = *(ulong *)(unaff_x26 + 0x168);
                  uVar20 = puVar21[5];
                  uVar17 = puVar21[10];
                  uVar19 = *puVar21;
                  uVar16 = puVar21[8];
                  uVar25 = puVar21[7];
                  uVar8 = puVar21[4];
                  uVar15 = *(ulong *)(unaff_x26 + 0xa0);
                  puVar11 = *(ulong **)(unaff_x26 + 0x1428);
                  puVar13 = *(ulong **)(unaff_x26 + 0x1430);
                }
                else {
                  uVar19 = *puVar21;
                  uVar8 = puVar21[4];
                  uVar20 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0x17);
                  uVar23 = (ulong)(*(int *)(uVar19 - 1) == (int)uVar8);
                  uVar9 = *(ulong *)(unaff_x26 + 0x168);
                  puVar13 = *(ulong **)(unaff_x26 + 0x1430);
                  uVar17 = puVar21[10];
                  uVar16 = puVar21[8];
                  uVar25 = puVar21[7];
                  uVar15 = *(ulong *)(unaff_x26 + 0xa0);
                  puVar11 = *(ulong **)(unaff_x26 + 0x1428);
                }
              }
            }
LAB_0138a108:
            uVar25 = uVar25 + 3;
          } while (uVar25 != uVar16);
        }
      }
      return uVar17;
    }
    lVar10 = unaff_x26 + (ulong)*(uint *)(param_4 + (long)param_3 * 2 + 0x1f);
    uVar12 = (uint)lVar10;
    if (uVar12 == ((uint)uVar9 | 2)) {
      uVar12 = *(uint *)(param_4 + (long)param_3 * 2 + 0x23);
LAB_013891f0:
      lVar10 = unaff_x26 + (ulong)uVar12;
      uVar12 = (uint)((int)param_1 == (int)*(undefined8 *)(unaff_x26 + 0xa0) ||
                     (int)param_1 == (int)*(undefined8 *)(unaff_x26 + 0xb0));
      local_40 = (ulong)uVar12;
      uVar15 = uVar9;
      local_38 = lVar10;
      if (uVar12 == 0) {
        local_48 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
        uVar12 = *(uint *)(local_48 - 1);
        local_50 = (ulong)uVar12;
        iVar24 = (int)unaff_x26 + *(int *)(local_48 + 3) >> 1;
        lVar18 = (long)iVar24;
        if (lVar18 == 0) {
          param_1 = *(ulong *)(unaff_x26 + 0x168);
          uVar19 = *(ulong *)(unaff_x26 + 0x168);
        }
        else if (uVar12 == (uint)*(undefined8 *)(unaff_x26 + 0x1e8)) {
          if (0x3fffffe < lVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
          }
          local_20 = lVar18 * 8;
          if (0x3fffffff < local_20 + 8) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
          }
          local_58 = (ulong)(uint)(iVar24 * 2);
          puVar21 = *(ulong **)(unaff_x26 + 0x1428);
          puVar26 = (uint *)*puVar21;
          if (0x20000 < local_20 + 8) {
            local_80[2] = 4;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
          }
          if ((uint *)puVar21[1] <= puVar26 + lVar18 * 2 + 2) {
            local_80[2] = 4;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
          }
          uVar17 = (long)puVar26 + 1;
          *puVar21 = (ulong)(puVar26 + lVar18 * 2 + 2);
          *puVar26 = uVar12;
          if ((((uint)*(undefined8 *)((uVar17 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
             (local_80[2] = unaff_x26 + local_50,
             ((uint)*(undefined8 *)((local_80[2] & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar17,puVar26,2,2);
          }
          puVar26[1] = (uint)local_58;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x1389414;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          local_80[2] = lVar10;
          local_60 = uVar17;
          param_1 = (**(code **)(unaff_x26 + 0x11d0))(puVar26 + 2,local_48 + 7);
          local_80[2] = 0;
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          uVar19 = local_60;
        }
        else {
          uVar19 = local_48;
          if (uVar12 != (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
            if (0x7fffffd < lVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
            }
            lVar10 = **(long **)(unaff_x26 + 0x1428);
            uVar8 = lVar18 * 4;
            uVar14 = iVar24 * 2;
            uVar17 = lVar10 + uVar8 + 8;
            if ((uVar17 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar8 + 8 < 0x20000)) {
              **(ulong **)(unaff_x26 + 0x1428) = uVar17;
              uVar19 = lVar10 + 1;
            }
            else {
              local_58 = (ulong)uVar14;
              local_20 = uVar8;
              param_1 = FUN_01348500();
              uVar12 = (uint)local_50;
              uVar14 = (uint)local_58;
              uVar8 = local_20;
              uVar19 = param_1;
            }
            *(uint *)(uVar19 - 1) = uVar12;
            *(uint *)(uVar19 + 3) = uVar14;
            local_60 = uVar19;
            if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
              *(undefined8 *)(unaff_x26 + 0x40) = 0x1389300;
              *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
              local_80[2] = local_38;
              param_1 = (**(code **)(unaff_x26 + 0x11d0))(uVar19 + 7,local_48 + 7);
              local_80[2] = 0;
              *(undefined8 *)(unaff_x26 + 0x38) = 0;
              uVar19 = local_60;
            }
            else if (uVar8 + 7 != 7) {
              lVar10 = 7;
              do {
                lVar18 = lVar10 + 4;
                *(undefined4 *)(uVar19 + lVar10) = *(undefined4 *)(local_48 + lVar10);
                lVar10 = lVar18;
              } while (lVar18 != uVar8 + 7);
            }
          }
        }
        uVar12 = (uint)local_40;
        uVar20 = unaff_x26 + (ulong)*(uint *)(local_30 + 3);
        lVar10 = local_38;
        uVar17 = local_30;
        if ((uVar20 & 1) == 0) {
          uVar8 = *(ulong *)(unaff_x26 + 0x168);
        }
        else {
          uVar8 = *(ulong *)(unaff_x26 + 0x168);
          if ((int)uVar20 != (int)*(ulong *)(unaff_x26 + 0x168)) {
            uVar16 = (long)((ulong)*(uint *)(uVar20 + 3) << 0x20) >> 0x21 & 0x3ff;
            if (uVar16 == 0) {
              uVar8 = *(ulong *)(unaff_x26 + 0x168);
            }
            else {
              uVar8 = **(ulong **)(unaff_x26 + 0x1428);
              uVar25 = uVar16 * 4;
              uVar17 = uVar8 + uVar25 + 8;
              if (uVar17 < **(ulong **)(unaff_x26 + 0x1430)) {
                **(ulong **)(unaff_x26 + 0x1428) = uVar17;
                uVar8 = uVar8 + 1;
              }
              else {
                local_60 = uVar19;
                local_58 = uVar20;
                local_48 = uVar25;
                local_20 = uVar16;
                param_1 = FUN_01348560();
                uVar19 = local_60;
                uVar20 = local_58;
                uVar16 = local_20;
                uVar8 = param_1;
                uVar25 = local_48;
              }
              uVar12 = (uint)local_40;
              *(int *)(uVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x248);
              uVar25 = uVar25 + 7;
              *(int *)(uVar8 + 3) = (int)uVar16 * 2;
              if (uVar25 == 7) {
                bVar7 = true;
              }
              else {
                uVar22 = *(undefined8 *)(unaff_x26 + 0xa0);
                uVar17 = uVar25;
                do {
                  uVar17 = uVar17 - 4;
                  *(int *)(uVar8 + uVar17) = (int)uVar22;
                } while (uVar17 != 7);
                bVar7 = false;
              }
              lVar10 = local_38;
              uVar16 = local_40;
              uVar17 = local_30;
              if (!bVar7) {
                do {
                  uVar25 = uVar25 - 4;
                  uVar23 = unaff_x26 + (ulong)*(uint *)(uVar20 + uVar25);
                  if (((uVar23 & 1) != 0) &&
                     (iVar24 = (int)*(undefined8 *)(unaff_x26 + 0x140),
                     *(int *)(uVar23 - 1) == iVar24)) {
                    uVar27 = **(ulong **)(unaff_x26 + 0x1428);
                    uVar34 = *(ulong *)(uVar23 + 3);
                    uVar23 = uVar27 + 0xc;
                    if (uVar23 < **(ulong **)(unaff_x26 + 0x1430)) {
                      **(ulong **)(unaff_x26 + 0x1428) = uVar23;
                      uVar23 = uVar27 + 1;
                    }
                    else {
                      local_60 = uVar19;
                      local_58 = uVar20;
                      local_50 = uVar8;
                      local_48 = uVar34;
                      local_20 = uVar25;
                      param_1 = FUN_01348560(param_1,0xc);
                      iVar24 = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      uVar15 = uVar9;
                      lVar10 = local_38;
                      uVar16 = local_40;
                      uVar17 = local_30;
                      uVar19 = local_60;
                      uVar20 = local_58;
                      uVar23 = param_1;
                      uVar25 = local_20;
                      uVar8 = local_50;
                      uVar34 = local_48;
                    }
                    *(int *)(uVar23 - 1) = iVar24;
                    *(ulong *)(uVar23 + 3) = uVar34;
                  }
                  *(int *)(uVar8 + uVar25) = (int)uVar23;
                  if (((((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                      ((uVar23 & 1) != 0)) &&
                     (((uint)*(undefined8 *)
                              ((unaff_x26 + (uVar23 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 &
                      1) != 0)) {
                    local_80[2] = uVar15;
                    FUN_0133eb00(uVar8,uVar8 + uVar25,0,2);
                    uVar15 = local_80[2];
                    uVar19 = extraout_x8;
                    uVar20 = extraout_x9;
                    uVar25 = extraout_x11;
                    uVar8 = extraout_x12_00;
                  }
                  uVar12 = (uint)uVar16;
                } while (uVar25 != 7);
              }
            }
          }
        }
      }
      else {
        uVar19 = *(ulong *)(unaff_x26 + 0x168);
        uVar17 = param_1;
        uVar8 = uVar19;
      }
      uVar16 = **(ulong **)(unaff_x26 + 0x1428);
      local_48 = (ulong)*(byte *)(lVar10 + 3) * 4;
      uVar20 = uVar16 + local_48;
      if (uVar20 < **(ulong **)(unaff_x26 + 0x1430)) {
        local_20 = uVar16 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar20;
        uVar9 = uVar15;
        local_38 = lVar10;
      }
      else {
        local_60 = uVar19;
        local_50 = uVar8;
        param_1 = FUN_01348560();
        uVar12 = (uint)local_40;
        uVar17 = local_30;
        uVar19 = local_60;
        uVar8 = local_50;
        local_20 = param_1;
      }
      *(int *)(local_20 - 1) = (int)local_38;
      lVar10 = local_48 + -1;
      *(int *)(local_20 + 3) = (int)uVar8;
      *(int *)(local_20 + 7) = (int)uVar19;
      if (lVar10 != 0xb) {
        uVar22 = *(undefined8 *)(unaff_x26 + 0xa0);
        do {
          lVar10 = lVar10 + -4;
          *(int *)(local_20 + lVar10) = (int)uVar22;
        } while (lVar10 != 0xb);
      }
      if (uVar12 == 0) {
        bVar2 = *(byte *)(local_38 + 4);
        local_30 = (ulong)*(byte *)(uVar9 + 4);
        uVar9 = (ulong)*(byte *)(uVar9 + 3);
        if (local_30 == uVar9) {
          bVar7 = true;
        }
        else {
          uVar15 = local_30;
          do {
            lVar10 = uVar15 * 4;
            uVar15 = uVar15 + 1;
            *(undefined4 *)(local_20 + lVar10 + ((long)(int)(uint)bVar2 - local_30) * 4 + -1) =
                 *(undefined4 *)(uVar17 + lVar10 + -1);
          } while (uVar15 != uVar9);
          bVar7 = false;
        }
        if (!bVar7) {
          local_48 = ((long)(int)(uint)bVar2 - local_30) * 4;
          do {
            local_38 = local_48 + local_30 * 4 + -1;
            uVar15 = unaff_x26 + (ulong)*(uint *)(local_20 + local_38);
            if (((uVar15 & 1) != 0) &&
               (*(int *)(uVar15 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
              uVar19 = **(ulong **)(unaff_x26 + 0x1428);
              local_40 = *(undefined8 *)(uVar15 + 3);
              uVar15 = uVar19 + 0xc;
              uVar17 = uVar9;
              if (uVar15 < **(ulong **)(unaff_x26 + 0x1430)) {
                param_1 = uVar19 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar15;
              }
              else {
                param_1 = FUN_01348560(param_1,0xc);
              }
              *(int *)(param_1 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
              *(ulong *)(param_1 + 3) = local_40;
              *(int *)(local_20 + local_38) = (int)param_1;
              if (((((uint)*(undefined8 *)((local_20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                  ((param_1 & 1) != 0)) &&
                 (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                 ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                local_80[2] = uVar17;
                FUN_0133eb00(local_20,local_20 + local_38,0,2);
                local_20 = extraout_x12;
              }
            }
            local_30 = local_30 + 1;
          } while (local_30 != uVar9);
        }
      }
      return local_20;
    }
    if ((uVar12 & 3) == 1) {
      if (*(int *)(lVar10 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x2b8)) {
        lVar18 = ((long)((ulong)*(uint *)(lVar10 + 3) << 0x20) >> 0x21) + -2;
        do {
          if ((int)unaff_x26 + *(int *)(lVar10 + lVar18 * 4 + 7) == ((uint)uVar9 | 2)) {
            uVar12 = *(uint *)(lVar10 + lVar18 * 4 + 0xb);
            goto LAB_013891f0;
          }
          lVar18 = lVar18 + -2;
        } while (-1 < lVar18);
      }
      else if (uVar12 == (uint)*(undefined8 *)(unaff_x26 + 0xb88)) goto LAB_01389ac0;
    }
  }
  local_80[2] = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f60));
}

