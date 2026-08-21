
/* WARNING: Removing unreachable block (ram,0x013d1168) */
/* WARNING: Removing unreachable block (ram,0x013d1190) */
/* WARNING: Removing unreachable block (ram,0x013d1184) */
/* WARNING: Removing unreachable block (ram,0x013d119c) */

undefined8
FUN_013d0760(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  code *pcVar7;
  ulong *puVar8;
  ulong *puVar9;
  bool bVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  undefined8 uVar12;
  undefined8 extraout_x1_00;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  ushort uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  long unaff_x26;
  ulong unaff_x27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong local_90 [9];
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined8 local_18;
  
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = in_stack_00000010;
  local_18 = 0x1a;
  uVar13 = (ulong)((in_stack_00000008 & 1) == 0);
  local_40 = param_5;
  local_30 = param_2;
  local_38 = param_3;
  local_90[4] = uVar13;
  uVar14 = *(undefined8 *)(unaff_x26 + 0xa0);
  puVar8 = local_90 + 4;
LAB_013d07b0:
  uVar11 = auVar30._0_8_;
  bVar10 = (uVar11 & 1) == 0;
  uVar16 = (ulong)bVar10;
  puVar8[10] = uVar11;
  puVar8[9] = uVar16;
  if (bVar10) {
    if ((int)uVar13 == 0) {
      dVar29 = *(double *)(in_stack_00000008 + 3);
      dVar28 = (double)(auVar30._0_4_ >> 1);
      goto LAB_013d07f0;
    }
    if ((int)in_stack_00000008 <= auVar30._0_4_) {
      return uVar14;
    }
  }
  else {
    dVar28 = *(double *)(uVar11 + 3);
    if ((int)uVar13 == 0) {
      dVar29 = *(double *)(in_stack_00000008 + 3);
    }
    else {
      dVar29 = (double)((int)in_stack_00000008 >> 1);
    }
LAB_013d07f0:
    if (dVar29 <= dVar28) {
      return uVar14;
    }
  }
  if ((param_5 & 1) == 0) {
LAB_013d12b0:
    puVar8[-2] = uVar11;
    puVar8[-1] = param_5;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260));
  }
  uVar21 = unaff_x26 + (ulong)*(uint *)(param_5 - 1);
  uVar18 = *(ushort *)(uVar21 + 7);
  if (uVar18 < 0xa9) goto LAB_013d12b0;
  if (uVar18 == 0xa9) {
    auVar30 = thunk_FUN_01349b90(uVar11,auVar30._8_8_,param_3,param_2);
    lVar20 = auVar30._0_8_;
    if ((*(int *)(lVar20 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
       ((*(uint *)(lVar20 + 7) & 1) != 0)) {
      uVar14 = *(undefined8 *)(unaff_x26 + 0xa0);
      auVar30._8_8_ = auVar30._8_8_;
      auVar30._0_8_ = puVar8[10];
      uVar16 = puVar8[9];
      param_2 = puVar8[8];
      param_3 = puVar8[7];
      param_5 = puVar8[6];
      unaff_x27 = puVar8[5];
      in_stack_00000008 = puVar8[0xf];
      uVar13 = *puVar8;
      goto LAB_013d1064;
    }
    iVar15 = FUN_013fd060(puVar8[6],lVar20);
    uVar14 = *(undefined8 *)(unaff_x26 + 0xa0);
    auVar30._8_8_ = extraout_x1_00;
    auVar30._0_8_ = puVar8[10];
    iVar27 = (int)puVar8[9];
    param_2 = puVar8[8];
    param_3 = puVar8[7];
    param_5 = puVar8[6];
    unaff_x27 = puVar8[5];
    in_stack_00000008 = puVar8[0xf];
    uVar13 = *puVar8;
  }
  else {
    if (bVar10) {
      uVar22 = (long)(uVar11 << 0x20) >> 0x21;
    }
    else {
      uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar11 - 1) + 7);
      if (((uVar3 != 0x42) ||
          (uVar22 = (ulong)*(double *)(uVar11 + 3), *(double *)(uVar11 + 3) != (double)(long)uVar22)
          ) || (0x3ffffffffffffe < uVar22 + 0x1fffffffffffff)) {
        uVar22 = uVar11;
        if (uVar3 == 0x40) {
LAB_013d08c0:
          uVar24 = *(ulong *)(unaff_x26 + 0x410);
          uVar17 = param_5;
          do {
            iVar15 = (int)uVar22;
            if (uVar18 < 0x411) {
              if ((uVar18 != 0xaa) || ((*(byte *)(uVar21 + 9) & 0x24) != 0)) goto LAB_013d12b0;
              uVar17 = unaff_x26 + (ulong)*(uint *)(uVar17 + 3);
              if ((uVar17 & 1) == 0) {
                uVar17 = uVar24;
              }
              uVar25 = (ulong)(*(uint *)(uVar22 + 3) >> 3);
              lVar20 = 0;
              while( true ) {
                uVar25 = uVar25 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar17 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                uVar1 = uVar25 + 5;
                lVar23 = unaff_x26 + (ulong)*(uint *)(uVar17 + uVar1 * 4 + 7);
                if ((int)lVar23 == (int)uVar14) break;
                if (*(int *)(lVar23 + 3) == iVar15) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar17 + 3) << 0x20) >> 0x21) <= uVar1) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(0,0x13d1124);
                    (*pcVar7)();
                  }
                  if (*(int *)(lVar23 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
                  goto LAB_013d105c;
                  break;
                }
                lVar20 = lVar20 + 1;
                uVar25 = uVar25 + lVar20;
              }
            }
            else if ((*(uint *)(uVar21 + 0xb) >> 0x15 & 1) == 0) {
              lVar20 = unaff_x26 + (ulong)*(uint *)(uVar21 + 0x17);
              uVar19 = *(uint *)(uVar21 + 0xb) >> 10 & 0x3ff;
              if (uVar19 != 0) {
                if (uVar19 < 0x21) {
                  lVar23 = (long)(int)uVar19 * 3;
                  while (lVar23 != 0) {
                    lVar23 = lVar23 + -3;
                    if (*(int *)(lVar20 + lVar23 * 4 + 0xf) == iVar15) goto LAB_013d105c;
                  }
                }
                else {
                  iVar4 = *(short *)(lVar20 + 5) + -1;
                  iVar27 = 0;
                  iVar26 = iVar4;
                  do {
                    iVar2 = iVar27 + ((uint)(iVar26 - iVar27) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar20 + (long)(int)(((uint)(*(int *)(lVar20 + (
                                                  long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)(uVar22 + 3)) {
                      iVar27 = iVar2 + 1;
                      iVar2 = iVar26;
                    }
                    iVar26 = iVar2;
                  } while (iVar27 != iVar26);
                  for (; iVar27 <= iVar4; iVar27 = iVar27 + 1) {
                    uVar5 = (uint)(*(int *)(lVar20 + (long)(iVar27 * 3) * 4 + 0x13) >> 1) >> 9 &
                            0x3ff;
                    lVar23 = unaff_x26 + (ulong)*(uint *)(lVar20 + (long)(int)(uVar5 * 3) * 4 + 0xf)
                    ;
                    if (*(uint *)(lVar23 + 3) != *(uint *)(uVar22 + 3)) break;
                    if ((int)lVar23 == iVar15) {
                      if (uVar5 < uVar19) goto LAB_013d105c;
                      break;
                    }
                  }
                }
              }
            }
            else {
              uVar17 = unaff_x26 + (ulong)*(uint *)(uVar17 + 3);
              if ((uVar17 & 1) == 0) {
                uVar17 = uVar24;
              }
              uVar25 = (ulong)(*(uint *)(uVar22 + 3) >> 3);
              lVar20 = 0;
              while( true ) {
                uVar25 = uVar25 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar17 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                iVar27 = *(int *)(uVar17 + (uVar25 * 3 + 5) * 4 + 7);
                if (iVar27 == (int)uVar14) break;
                if (iVar27 == iVar15) goto LAB_013d105c;
                lVar20 = lVar20 + 1;
                uVar25 = uVar25 + lVar20;
              }
            }
            if (uVar18 == 0x41b) {
              uVar18 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar22 - 1) + 7);
              uVar19 = (uint)uVar18;
              if (((uVar18 < 0x40) && (iVar15 = *(int *)(uVar22 + 7) * 2, iVar15 != 0)) &&
                 (iVar15 < 0x31)) {
                uVar17 = uVar22;
                if ((uVar18 & 7) == 0) {
                  lVar20 = 0;
                  bVar10 = false;
                }
                else {
                  lVar20 = 0;
                  while( true ) {
                    while (uVar5 = uVar19 & 7, uVar5 < 2) {
                      if (uVar5 == 0) {
                        bVar10 = false;
                        goto LAB_013d0c24;
                      }
                      if (uVar5 != 1) goto LAB_013d1128;
                      if (*(int *)(uVar17 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)) {
                        puVar8[4] = uVar21;
                        puVar8[3] = uVar22;
                        goto LAB_013d1154;
                      }
                      uVar17 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb);
                      uVar19 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar17 - 1) + 7);
                    }
                    if (uVar5 == 2) break;
                    if (uVar5 == 3) {
                      uVar25 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb);
                      lVar20 = lVar20 + ((long)((ulong)*(uint *)(uVar17 + 0xf) << 0x20) >> 0x21);
                      uVar19 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar25 - 1) + 7);
                      uVar17 = uVar25;
                    }
                    else {
                      if (uVar5 != 5) {
LAB_013d1128:
                        puVar8[4] = uVar21;
                        puVar8[3] = uVar22;
                        goto LAB_013d1154;
                      }
                      uVar17 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb);
                      uVar19 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar17 - 1) + 7);
                    }
                  }
                  bVar10 = true;
                }
LAB_013d0c24:
                if (bVar10) {
                  puVar8[4] = uVar21;
                  puVar8[3] = uVar22;
                  if ((uVar19 >> 4 & 1) != 0) {
LAB_013d1154:
                    puVar8[-2] = 0;
                    puVar8[-1] = puVar8[3];
                    /* WARNING: Subroutine does not return */
                    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580),puVar8[10],puVar8[5]);
                  }
                  lVar23 = *(long *)(uVar17 + 0x13);
                }
                else {
                  lVar23 = uVar17 + 0xb;
                }
                if ((uVar19 >> 3 & 1) == 0) {
                  uVar18 = *(ushort *)(lVar23 + lVar20 * 2);
                }
                else {
                  uVar18 = (ushort)*(byte *)(lVar23 + lVar20);
                }
                if (((uVar18 == 0x2d) || (uVar18 == 0x49)) ||
                   ((uVar18 == 0x4e || ((0x2f < uVar18 && (uVar18 < 0x3a)))))) goto LAB_013d12b0;
              }
            }
            uVar17 = unaff_x26 + (ulong)*(uint *)(uVar21 + 0xf);
            if ((int)uVar17 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013d1064;
            uVar21 = unaff_x26 + (ulong)*(uint *)(uVar17 - 1);
            uVar18 = *(ushort *)(uVar21 + 7);
          } while( true );
        }
        if (0x3f < uVar3) {
          if (uVar3 != 0x43) goto LAB_013d12b0;
          uVar22 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xb);
          goto LAB_013d08c0;
        }
        uVar19 = *(uint *)(uVar11 + 3);
        if ((uVar19 & 0xc0000002) != 0) {
          if ((uVar19 >> 1 & 1) == 0) goto LAB_013d12b0;
          if ((uVar3 == 0x25) || (uVar3 == 0x2d)) {
            uVar22 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xb);
          }
          else if ((uVar3 >> 5 & 1) != 0) goto LAB_013d12b0;
          goto LAB_013d08c0;
        }
        uVar22 = (ulong)(uVar19 >> 3) & 0xffffff;
      }
    }
    puVar8[4] = uVar22;
    uVar17 = param_5;
    while( true ) {
      uVar11 = auVar30._0_8_;
      puVar8[3] = uVar21;
      if (uVar18 < 0x411) goto LAB_013d12b0;
      bVar6 = *(byte *)(uVar21 + 10) >> 3;
      if (0xe < bVar6) break;
      if (bVar6 < 6) {
        if (bVar6 < 3) {
          if (((bVar6 == 0) || (bVar6 == 1)) || (bVar6 == 2)) goto LAB_013d0e50;
          goto LAB_013d12b0;
        }
        if (bVar6 == 3) goto LAB_013d0e50;
        if ((bVar6 != 4) && (bVar6 != 5)) goto LAB_013d12b0;
        lVar20 = unaff_x26 + (ulong)*(uint *)(uVar17 + 7);
        if (uVar22 < (ulong)((long)((ulong)*(uint *)(lVar20 + 3) << 0x20) >> 0x21)) {
          if (*(long *)(lVar20 + uVar22 * 8 + 7) == -0x8000000080001) goto LAB_013d0fc4;
          goto LAB_013d105c;
        }
LAB_013d0e68:
        if (0xfffffffe < uVar22) goto LAB_013d12b0;
      }
      else if (bVar6 < 9) {
        if (((bVar6 != 6) && (bVar6 != 7)) && (bVar6 != 8)) goto LAB_013d12b0;
LAB_013d0e50:
        lVar20 = unaff_x26 + (ulong)*(uint *)(uVar17 + 7);
        if ((ulong)((long)((ulong)*(uint *)(lVar20 + 3) << 0x20) >> 0x21) <= uVar22)
        goto LAB_013d0e68;
        if (*(int *)(lVar20 + uVar22 * 4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
        goto LAB_013d105c;
      }
      else {
        if (bVar6 < 0xb) {
          if ((bVar6 == 9) || (bVar6 == 10)) goto LAB_013d0e50;
          goto LAB_013d12b0;
        }
        if (bVar6 == 0xb) goto LAB_013d0e50;
        if (bVar6 != 0xc) goto LAB_013d12b0;
LAB_013d0ea8:
        if (0xfffffffe < uVar22) goto LAB_013d12b0;
        uVar13 = unaff_x26 + (ulong)*(uint *)(uVar17 + 7);
        uVar19 = *(uint *)(uVar13 + 0xf);
        puVar8[1] = uVar13;
        puVar8[2] = ((long)(unaff_x26 + (ulong)uVar19 << 0x20) >> 0x21) - 1;
        pcVar7 = *(code **)(unaff_x26 + 0x1080);
        puVar8[-2] = in_stack_00000008;
        puVar8[-1] = param_5;
        *(undefined8 *)(unaff_x26 + 0x40) = 0x13d0ee8;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        uVar13 = puVar8[-1];
        auVar30 = (*pcVar7)();
        uVar12 = auVar30._8_8_;
        puVar8[-2] = 0;
        puVar8[-1] = uVar13;
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        uVar13 = auVar30._0_8_ & 0xffffffff;
        lVar20 = 0;
        uVar14 = *(undefined8 *)(unaff_x26 + 0xa0);
        uVar22 = puVar8[4];
        while( true ) {
          uVar11 = unaff_x26 + (ulong)*(uint *)(puVar8[1] + ((uVar13 & puVar8[2]) * 3 + 4) * 4 + 7);
          if ((int)uVar11 == (int)uVar14) break;
          if ((uVar11 & 1) == 0) {
            if ((long)(uVar11 << 0x20) >> 0x21 == uVar22) {
              auVar30._8_8_ = uVar12;
              auVar30._0_8_ = puVar8[10];
              uVar16 = puVar8[9];
              param_2 = puVar8[8];
              param_3 = puVar8[7];
              param_5 = puVar8[6];
              unaff_x27 = puVar8[5];
              in_stack_00000008 = puVar8[0xf];
              uVar13 = *puVar8;
              goto LAB_013d105c;
            }
          }
          else if (((int)uVar11 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                  (*(double *)(uVar11 + 3) == (double)(long)uVar22)) {
            auVar30._8_8_ = uVar12;
            auVar30._0_8_ = puVar8[10];
            uVar16 = puVar8[9];
            param_2 = puVar8[8];
            param_3 = puVar8[7];
            param_5 = puVar8[6];
            unaff_x27 = puVar8[5];
            in_stack_00000008 = puVar8[0xf];
            uVar13 = *puVar8;
            goto LAB_013d105c;
          }
          lVar20 = lVar20 + 1;
          uVar13 = (uVar13 & puVar8[2]) + lVar20;
        }
        auVar30._8_8_ = uVar12;
        auVar30._0_8_ = puVar8[10];
        uVar16 = puVar8[9];
        param_2 = puVar8[8];
        param_3 = puVar8[7];
        param_5 = puVar8[6];
        unaff_x27 = puVar8[5];
        uVar21 = puVar8[3];
        in_stack_00000008 = puVar8[0xf];
        uVar13 = *puVar8;
      }
LAB_013d0fc4:
      uVar17 = unaff_x26 + (ulong)*(uint *)(uVar21 + 0xf);
      if ((int)uVar17 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013d1064;
      uVar21 = unaff_x26 + (ulong)*(uint *)(uVar17 - 1);
      uVar18 = *(ushort *)(uVar21 + 7);
    }
    if (bVar6 < 0x16) {
      if (bVar6 < 0x12) {
        if (bVar6 == 0xf) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb) + 7) <= uVar22)
          goto LAB_013d0e50;
          goto LAB_013d105c;
        }
        if (bVar6 == 0x10) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb) + 7) <= uVar22)
          goto LAB_013d0ea8;
          goto LAB_013d105c;
        }
        if (bVar6 != 0x11) goto LAB_013d12b0;
      }
      else if (bVar6 < 0x14) {
        if ((bVar6 != 0x12) && (bVar6 != 0x13)) goto LAB_013d12b0;
      }
      else if ((bVar6 != 0x14) && (bVar6 != 0x15)) goto LAB_013d12b0;
    }
    else if (bVar6 < 0x19) {
      if (((bVar6 != 0x16) && (bVar6 != 0x17)) && (bVar6 != 0x18)) goto LAB_013d12b0;
    }
    else if (bVar6 < 0x1b) {
      if ((bVar6 != 0x19) && (bVar6 != 0x1a)) goto LAB_013d12b0;
    }
    else if (bVar6 != 0x1b) {
      if (bVar6 == 0x1c) goto LAB_013d0fc4;
      goto LAB_013d12b0;
    }
    if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
       (uVar22 < *(ulong *)(uVar17 + 0x1f))) goto LAB_013d105c;
LAB_013d1064:
    iVar27 = (int)uVar16;
    iVar15 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
  }
  goto LAB_013d1068;
LAB_013d105c:
  iVar27 = (int)uVar16;
  iVar15 = (int)*(undefined8 *)(unaff_x26 + 0xb8);
LAB_013d1068:
  puVar9 = puVar8;
  if (iVar15 == (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
    uVar13 = FUN_013c0ba0(unaff_x27,param_5,auVar30._0_8_);
    puVar9 = puVar8 + -4;
    puVar8[-2] = uVar13;
    puVar8[-1] = puVar8[7];
    puVar8[-4] = puVar8[6];
    puVar8[-3] = puVar8[10];
    FUN_0133fcc0(3,puVar8[8],puVar8[7],puVar8[6],puVar8[10]);
    uVar14 = *(undefined8 *)(unaff_x26 + 0xa0);
    auVar30._8_8_ = extraout_x1;
    auVar30._0_8_ = puVar8[6];
    iVar27 = (int)puVar8[5];
    param_2 = puVar8[4];
    param_3 = puVar8[3];
    param_5 = puVar8[2];
    unaff_x27 = puVar8[1];
    in_stack_00000008 = puVar8[0xb];
    uVar13 = puVar8[-4];
  }
  uVar12 = auVar30._8_8_;
  iVar15 = auVar30._0_4_;
  puVar8 = puVar9;
  if ((iVar27 == 0) || (SCARRY4(iVar15,2))) {
    if (iVar27 == 0) {
      dVar28 = *(double *)(auVar30._0_8_ + 3);
    }
    else {
      dVar28 = (double)(iVar15 >> 1);
    }
    dVar28 = dVar28 + 1.0;
    iVar15 = (int)dVar28;
    puVar9[10] = (ulong)dVar28;
    if ((dVar28 != (double)iVar15) ||
       (((iVar15 == 0 && ((long)dVar28 < 0)) || (SCARRY4(iVar15,iVar15))))) {
      uVar16 = **(ulong **)(unaff_x26 + 0x1428);
      uVar11 = uVar16 + 0xc;
      if (uVar11 < **(ulong **)(unaff_x26 + 0x1430)) {
        auVar30._8_8_ = uVar12;
        auVar30._0_8_ = uVar16 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar11;
      }
      else {
        auVar30 = FUN_01348560(auVar30._0_8_,0xc);
        uVar13 = *puVar9;
        uVar14 = *(undefined8 *)(unaff_x26 + 0xa0);
        in_stack_00000008 = puVar9[0xf];
        param_2 = puVar9[8];
        param_3 = puVar9[7];
        param_5 = puVar9[6];
        unaff_x27 = puVar9[5];
      }
      *(int *)(auVar30._0_8_ + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
      *(ulong *)(auVar30._0_8_ + 3) = puVar9[10];
    }
    else {
      auVar30._8_8_ = uVar12;
      auVar30._0_8_ = (long)(iVar15 * 2);
    }
  }
  else {
    auVar30._8_8_ = uVar12;
    auVar30._0_8_ = (long)(iVar15 + 2);
  }
  goto LAB_013d07b0;
}

