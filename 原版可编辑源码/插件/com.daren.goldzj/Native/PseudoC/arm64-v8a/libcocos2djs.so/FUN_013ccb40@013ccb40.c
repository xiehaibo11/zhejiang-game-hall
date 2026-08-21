
/* WARNING: Removing unreachable block (ram,0x013cd604) */
/* WARNING: Removing unreachable block (ram,0x013cd630) */
/* WARNING: Removing unreachable block (ram,0x013cd620) */
/* WARNING: Removing unreachable block (ram,0x013cd63c) */

ulong FUN_013ccb40(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

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
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ushort uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  long unaff_x26;
  double dVar26;
  double dVar27;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  ulong local_a0 [9];
  double local_58;
  ulong local_48 [7];
  
  uVar12 = (ulong)((in_stack_00000008 & 1) == 0);
  local_a0[7] = param_5;
  local_58 = (double)param_2;
  local_a0[8] = param_3;
  local_a0[4] = uVar12;
  puVar8 = local_a0 + 4;
LAB_013ccb94:
  bVar10 = (in_stack_00000010 & 1) == 0;
  uVar14 = (ulong)bVar10;
  puVar8[0xb] = in_stack_00000010;
  puVar8[9] = in_stack_00000000;
  puVar8[10] = uVar14;
  if (bVar10) {
    if ((int)uVar12 == 0) {
      dVar27 = *(double *)(in_stack_00000008 + 3);
      dVar26 = (double)((int)in_stack_00000010 >> 1);
      goto LAB_013ccbd8;
    }
    if ((int)in_stack_00000008 <= (int)in_stack_00000010) {
      return param_4;
    }
  }
  else {
    dVar26 = *(double *)(in_stack_00000010 + 3);
    if ((int)uVar12 == 0) {
      dVar27 = *(double *)(in_stack_00000008 + 3);
    }
    else {
      dVar27 = (double)((int)in_stack_00000008 >> 1);
    }
LAB_013ccbd8:
    if (dVar27 <= dVar26) {
      return param_4;
    }
  }
  if ((param_5 & 1) == 0) {
LAB_013cd760:
    puVar8[-2] = in_stack_00000010;
    puVar8[-1] = param_5;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260));
  }
  uVar16 = unaff_x26 + (ulong)*(uint *)(param_5 - 1);
  uVar17 = *(ushort *)(uVar16 + 7);
  if (uVar17 < 0xa9) goto LAB_013cd760;
  if (uVar17 == 0xa9) {
    lVar19 = thunk_FUN_01349b90(in_stack_00000010,in_stack_00000000,param_3);
    if ((*(int *)(lVar19 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
       ((*(uint *)(lVar19 + 7) & 1) != 0)) {
      param_4 = puVar8[0xc];
      in_stack_00000010 = puVar8[0xb];
      uVar14 = puVar8[10];
      in_stack_00000000 = puVar8[9];
      param_2 = puVar8[5];
      param_3 = puVar8[4];
      param_5 = puVar8[3];
      in_stack_00000008 = puVar8[0x11];
      uVar12 = *puVar8;
      goto LAB_013cd464;
    }
    iVar13 = FUN_013fd060(puVar8[3],lVar19);
    param_4 = puVar8[0xc];
    in_stack_00000010 = puVar8[0xb];
    iVar25 = (int)puVar8[10];
    in_stack_00000000 = puVar8[9];
    param_2 = puVar8[5];
    param_3 = puVar8[4];
    param_5 = puVar8[3];
    in_stack_00000008 = puVar8[0x11];
    uVar12 = *puVar8;
  }
  else {
    if (bVar10) {
      uVar20 = (long)(in_stack_00000010 << 0x20) >> 0x21;
    }
    else {
      uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(in_stack_00000010 - 1) + 7);
      if (((uVar3 != 0x42) ||
          (uVar20 = (ulong)*(double *)(in_stack_00000010 + 3),
          *(double *)(in_stack_00000010 + 3) != (double)(long)uVar20)) ||
         (0x3ffffffffffffe < uVar20 + 0x1fffffffffffff)) {
        uVar20 = in_stack_00000010;
        if (uVar3 == 0x40) {
LAB_013ccca8:
          uVar22 = *(ulong *)(unaff_x26 + 0x410);
          uVar15 = param_5;
          do {
            iVar13 = (int)uVar20;
            if (uVar17 < 0x411) {
              if ((uVar17 != 0xaa) || ((*(byte *)(uVar16 + 9) & 0x24) != 0)) goto LAB_013cd760;
              uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 3);
              if ((uVar15 & 1) == 0) {
                uVar15 = uVar22;
              }
              uVar23 = (ulong)(*(uint *)(uVar20 + 3) >> 3);
              lVar19 = 0;
              while( true ) {
                uVar23 = uVar23 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                uVar1 = uVar23 + 5;
                lVar21 = unaff_x26 + (ulong)*(uint *)(uVar15 + uVar1 * 4 + 7);
                if ((int)lVar21 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (*(int *)(lVar21 + 3) == iVar13) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar15 + 3) << 0x20) >> 0x21) <= uVar1) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(0,0x13cd5c0);
                    (*pcVar7)();
                  }
                  if (*(int *)(lVar21 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
                  goto LAB_013cd45c;
                  break;
                }
                lVar19 = lVar19 + 1;
                uVar23 = uVar23 + lVar19;
              }
            }
            else if ((*(uint *)(uVar16 + 0xb) >> 0x15 & 1) == 0) {
              lVar19 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0x17);
              uVar18 = *(uint *)(uVar16 + 0xb) >> 10 & 0x3ff;
              if (uVar18 != 0) {
                if (uVar18 < 0x21) {
                  lVar21 = (long)(int)uVar18 * 3;
                  while (lVar21 != 0) {
                    lVar21 = lVar21 + -3;
                    if (*(int *)(lVar19 + lVar21 * 4 + 0xf) == iVar13) goto LAB_013cd45c;
                  }
                }
                else {
                  iVar4 = *(short *)(lVar19 + 5) + -1;
                  iVar25 = 0;
                  iVar24 = iVar4;
                  do {
                    iVar2 = iVar25 + ((uint)(iVar24 - iVar25) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar19 + (long)(int)(((uint)(*(int *)(lVar19 + (
                                                  long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)(uVar20 + 3)) {
                      iVar25 = iVar2 + 1;
                      iVar2 = iVar24;
                    }
                    iVar24 = iVar2;
                  } while (iVar25 != iVar24);
                  for (; iVar25 <= iVar4; iVar25 = iVar25 + 1) {
                    uVar5 = (uint)(*(int *)(lVar19 + (long)(iVar25 * 3) * 4 + 0x13) >> 1) >> 9 &
                            0x3ff;
                    lVar21 = unaff_x26 + (ulong)*(uint *)(lVar19 + (long)(int)(uVar5 * 3) * 4 + 0xf)
                    ;
                    if (*(uint *)(lVar21 + 3) != *(uint *)(uVar20 + 3)) break;
                    if ((int)lVar21 == iVar13) {
                      if (uVar5 < uVar18) goto LAB_013cd45c;
                      break;
                    }
                  }
                }
              }
            }
            else {
              uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 3);
              if ((uVar15 & 1) == 0) {
                uVar15 = uVar22;
              }
              uVar23 = (ulong)(*(uint *)(uVar20 + 3) >> 3);
              lVar19 = 0;
              while( true ) {
                uVar23 = uVar23 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                iVar25 = *(int *)(uVar15 + (uVar23 * 3 + 5) * 4 + 7);
                if (iVar25 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (iVar25 == iVar13) goto LAB_013cd45c;
                lVar19 = lVar19 + 1;
                uVar23 = uVar23 + lVar19;
              }
            }
            if (uVar17 == 0x41b) {
              uVar17 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar20 - 1) + 7);
              uVar18 = (uint)uVar17;
              if (((uVar17 < 0x40) && (iVar13 = *(int *)(uVar20 + 7) * 2, iVar13 != 0)) &&
                 (iVar13 < 0x31)) {
                uVar15 = uVar20;
                if ((uVar17 & 7) == 0) {
                  lVar19 = 0;
                  bVar10 = false;
                }
                else {
                  lVar19 = 0;
                  while( true ) {
                    while (uVar5 = uVar18 & 7, uVar5 < 2) {
                      if (uVar5 == 0) {
                        bVar10 = false;
                        goto LAB_013cd014;
                      }
                      if (uVar5 != 1) goto LAB_013cd5c4;
                      if (*(int *)(uVar15 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)) {
                        puVar8[8] = uVar16;
                        puVar8[7] = uVar20;
                        goto LAB_013cd654;
                      }
                      uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
                      uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar15 - 1) + 7);
                    }
                    if (uVar5 == 2) break;
                    if (uVar5 == 3) {
                      uVar23 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
                      lVar19 = lVar19 + ((long)((ulong)*(uint *)(uVar15 + 0xf) << 0x20) >> 0x21);
                      uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar23 - 1) + 7);
                      uVar15 = uVar23;
                    }
                    else {
                      if (uVar5 != 5) {
LAB_013cd5c4:
                        puVar8[8] = uVar16;
                        puVar8[7] = uVar20;
                        goto LAB_013cd654;
                      }
                      uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
                      uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar15 - 1) + 7);
                    }
                  }
                  bVar10 = true;
                }
LAB_013cd014:
                if (bVar10) {
                  puVar8[8] = uVar16;
                  puVar8[7] = uVar20;
                  if ((uVar18 >> 4 & 1) != 0) {
LAB_013cd654:
                    puVar8[-2] = 0;
                    puVar8[-1] = puVar8[7];
                    /* WARNING: Subroutine does not return */
                    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
                  }
                  lVar21 = *(long *)(uVar15 + 0x13);
                }
                else {
                  lVar21 = uVar15 + 0xb;
                }
                if ((uVar18 >> 3 & 1) == 0) {
                  uVar17 = *(ushort *)(lVar21 + lVar19 * 2);
                }
                else {
                  uVar17 = (ushort)*(byte *)(lVar21 + lVar19);
                }
                if (((uVar17 == 0x2d) || (uVar17 == 0x49)) ||
                   ((uVar17 == 0x4e || ((0x2f < uVar17 && (uVar17 < 0x3a)))))) goto LAB_013cd760;
              }
            }
            uVar15 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0xf);
            if ((int)uVar15 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013cd464;
            uVar16 = unaff_x26 + (ulong)*(uint *)(uVar15 - 1);
            uVar17 = *(ushort *)(uVar16 + 7);
          } while( true );
        }
        if (0x3f < uVar3) {
          if (uVar3 != 0x43) goto LAB_013cd760;
          uVar20 = unaff_x26 + (ulong)*(uint *)(in_stack_00000010 + 0xb);
          goto LAB_013ccca8;
        }
        uVar18 = *(uint *)(in_stack_00000010 + 3);
        if ((uVar18 & 0xc0000002) != 0) {
          if ((uVar18 >> 1 & 1) == 0) goto LAB_013cd760;
          if ((uVar3 == 0x25) || (uVar3 == 0x2d)) {
            uVar20 = unaff_x26 + (ulong)*(uint *)(in_stack_00000010 + 0xb);
          }
          else if ((uVar3 >> 5 & 1) != 0) goto LAB_013cd760;
          goto LAB_013ccca8;
        }
        uVar20 = (ulong)(uVar18 >> 3) & 0xffffff;
      }
    }
    puVar8[8] = uVar20;
    uVar15 = param_5;
    while( true ) {
      puVar8[7] = uVar16;
      if (uVar17 < 0x411) goto LAB_013cd760;
      bVar6 = *(byte *)(uVar16 + 10) >> 3;
      if (0xe < bVar6) break;
      if (bVar6 < 6) {
        if (bVar6 < 3) {
          if (((bVar6 == 0) || (bVar6 == 1)) || (bVar6 == 2)) goto LAB_013cd240;
          goto LAB_013cd760;
        }
        if (bVar6 == 3) goto LAB_013cd240;
        if ((bVar6 != 4) && (bVar6 != 5)) goto LAB_013cd760;
        lVar19 = unaff_x26 + (ulong)*(uint *)(uVar15 + 7);
        if (uVar20 < (ulong)((long)((ulong)*(uint *)(lVar19 + 3) << 0x20) >> 0x21)) {
          if (*(long *)(lVar19 + uVar20 * 8 + 7) == -0x8000000080001) goto LAB_013cd3bc;
          goto LAB_013cd45c;
        }
LAB_013cd258:
        if (0xfffffffe < uVar20) goto LAB_013cd760;
      }
      else if (bVar6 < 9) {
        if (((bVar6 != 6) && (bVar6 != 7)) && (bVar6 != 8)) goto LAB_013cd760;
LAB_013cd240:
        lVar19 = unaff_x26 + (ulong)*(uint *)(uVar15 + 7);
        if ((ulong)((long)((ulong)*(uint *)(lVar19 + 3) << 0x20) >> 0x21) <= uVar20)
        goto LAB_013cd258;
        if (*(int *)(lVar19 + uVar20 * 4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
        goto LAB_013cd45c;
      }
      else {
        if (bVar6 < 0xb) {
          if ((bVar6 == 9) || (bVar6 == 10)) goto LAB_013cd240;
          goto LAB_013cd760;
        }
        if (bVar6 == 0xb) goto LAB_013cd240;
        if (bVar6 != 0xc) goto LAB_013cd760;
LAB_013cd298:
        if (0xfffffffe < uVar20) goto LAB_013cd760;
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar15 + 7);
        uVar18 = *(uint *)(uVar12 + 0xf);
        puVar8[1] = uVar12;
        puVar8[2] = ((long)(unaff_x26 + (ulong)uVar18 << 0x20) >> 0x21) - 1;
        pcVar7 = *(code **)(unaff_x26 + 0x1080);
        puVar8[-2] = param_2;
        puVar8[-1] = param_5;
        *(undefined8 *)(unaff_x26 + 0x40) = 0x13cd2dc;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        uVar14 = puVar8[-1];
        uVar12 = (*pcVar7)();
        puVar8[-2] = 0;
        puVar8[-1] = uVar14;
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        uVar12 = uVar12 & 0xffffffff;
        lVar19 = 0;
        uVar20 = puVar8[8];
        while( true ) {
          uVar14 = unaff_x26 + (ulong)*(uint *)(puVar8[1] + ((uVar12 & puVar8[2]) * 3 + 4) * 4 + 7);
          if ((int)uVar14 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if ((uVar14 & 1) == 0) {
            if ((long)(uVar14 << 0x20) >> 0x21 == uVar20) {
              param_4 = puVar8[0xc];
              in_stack_00000010 = puVar8[0xb];
              uVar14 = puVar8[10];
              in_stack_00000000 = puVar8[9];
              param_2 = puVar8[5];
              param_3 = puVar8[4];
              param_5 = puVar8[3];
              in_stack_00000008 = puVar8[0x11];
              uVar12 = *puVar8;
              goto LAB_013cd45c;
            }
          }
          else if (((int)uVar14 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                  (*(double *)(uVar14 + 3) == (double)(long)uVar20)) {
            param_4 = puVar8[0xc];
            in_stack_00000010 = puVar8[0xb];
            uVar14 = puVar8[10];
            in_stack_00000000 = puVar8[9];
            param_2 = puVar8[5];
            param_3 = puVar8[4];
            param_5 = puVar8[3];
            in_stack_00000008 = puVar8[0x11];
            uVar12 = *puVar8;
            goto LAB_013cd45c;
          }
          lVar19 = lVar19 + 1;
          uVar12 = (uVar12 & puVar8[2]) + lVar19;
        }
        param_4 = puVar8[0xc];
        in_stack_00000010 = puVar8[0xb];
        uVar14 = puVar8[10];
        in_stack_00000000 = puVar8[9];
        param_2 = puVar8[5];
        param_3 = puVar8[4];
        param_5 = puVar8[3];
        uVar16 = puVar8[7];
        in_stack_00000008 = puVar8[0x11];
        uVar12 = *puVar8;
      }
LAB_013cd3bc:
      uVar15 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0xf);
      if ((int)uVar15 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013cd464;
      uVar16 = unaff_x26 + (ulong)*(uint *)(uVar15 - 1);
      uVar17 = *(ushort *)(uVar16 + 7);
    }
    if (bVar6 < 0x16) {
      if (bVar6 < 0x12) {
        if (bVar6 == 0xf) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb) + 7) <= uVar20)
          goto LAB_013cd240;
          goto LAB_013cd45c;
        }
        if (bVar6 == 0x10) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb) + 7) <= uVar20)
          goto LAB_013cd298;
          goto LAB_013cd45c;
        }
        if (bVar6 != 0x11) goto LAB_013cd760;
      }
      else if (bVar6 < 0x14) {
        if ((bVar6 != 0x12) && (bVar6 != 0x13)) goto LAB_013cd760;
      }
      else if ((bVar6 != 0x14) && (bVar6 != 0x15)) goto LAB_013cd760;
    }
    else if (bVar6 < 0x19) {
      if (((bVar6 != 0x16) && (bVar6 != 0x17)) && (bVar6 != 0x18)) goto LAB_013cd760;
    }
    else if (bVar6 < 0x1b) {
      if ((bVar6 != 0x19) && (bVar6 != 0x1a)) goto LAB_013cd760;
    }
    else if (bVar6 != 0x1b) {
      if (bVar6 == 0x1c) goto LAB_013cd3bc;
      goto LAB_013cd760;
    }
    if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
       (uVar20 < *(ulong *)(uVar15 + 0x1f))) goto LAB_013cd45c;
LAB_013cd464:
    iVar25 = (int)uVar14;
    iVar13 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
  }
  goto LAB_013cd468;
LAB_013cd45c:
  iVar25 = (int)uVar14;
  iVar13 = (int)*(undefined8 *)(unaff_x26 + 0xb8);
LAB_013cd468:
  puVar9 = puVar8;
  if (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xb8)) goto LAB_013cd580;
  uVar12 = FUN_013c0ba0(param_5,in_stack_00000010);
  puVar9 = puVar8 + -4;
  puVar8[-2] = uVar12;
  puVar8[-1] = puVar8[4];
  puVar8[-4] = puVar8[3];
  puVar8[-3] = puVar8[0xb];
  puVar8[7] = uVar12;
  uVar12 = FUN_0133fcc0(3,puVar8[5],uVar12);
  iVar13 = (int)uVar12;
  if (iVar13 == (int)*(undefined8 *)(unaff_x26 + 0xc0)) {
LAB_013cd550:
    in_stack_00000000 = puVar8[5];
  }
  else {
    if ((uVar12 & 1) == 0) {
      if (iVar13 != 0) goto LAB_013cd50c;
      goto LAB_013cd550;
    }
    if ((iVar13 == (int)*(undefined8 *)(unaff_x26 + 200)) ||
       (lVar19 = unaff_x26 + (ulong)*(uint *)(uVar12 - 1), (*(byte *)(lVar19 + 9) >> 4 & 1) != 0))
    goto LAB_013cd550;
    if ((int)lVar19 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      if (ABS(*(double *)(uVar12 + 3)) <= 0.0) goto LAB_013cd550;
    }
    else if ((*(short *)(lVar19 + 7) == 0x41) && ((*(uint *)(uVar12 + 3) >> 1 & 0x3fffffff) == 0))
    goto LAB_013cd550;
LAB_013cd50c:
    puVar8[4] = (ulong)((puVar8[5] & 1) == 0);
    uVar11 = FUN_013e8d20(puVar8[8],puVar8[5],puVar8[3]);
    if ((int)puVar8[4] == 0) {
      uVar12 = puVar8[5];
LAB_013cd7ec:
      if ((int)puVar8[4] == 0) {
        dVar26 = *(double *)(uVar12 + 3);
      }
      else {
        dVar26 = (double)((int)uVar12 >> 1);
      }
      dVar26 = dVar26 + 1.0;
      iVar13 = (int)dVar26;
      puVar8[5] = (ulong)dVar26;
      if ((dVar26 != (double)iVar13) ||
         (((iVar13 == 0 && ((long)dVar26 < 0)) || (SCARRY4(iVar13,iVar13))))) {
        in_stack_00000000 = **(ulong **)(unaff_x26 + 0x1428);
        uVar12 = in_stack_00000000 + 0xc;
        if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
          in_stack_00000000 = in_stack_00000000 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar12;
        }
        else {
          in_stack_00000000 = FUN_01348560(uVar11,0xc);
        }
        *(int *)(in_stack_00000000 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(ulong *)(in_stack_00000000 + 3) = puVar8[5];
      }
      else {
        in_stack_00000000 = (ulong)(iVar13 * 2);
      }
    }
    else {
      uVar12 = puVar8[5];
      if (SCARRY4((int)uVar12,2)) goto LAB_013cd7ec;
      in_stack_00000000 = (ulong)((int)uVar12 + 2);
    }
  }
  uVar12 = puVar8[-4];
  param_4 = puVar8[8];
  in_stack_00000010 = puVar8[7];
  iVar25 = (int)puVar8[6];
  param_2 = puVar8[1];
  param_3 = *puVar8;
  param_5 = puVar8[-1];
  in_stack_00000008 = puVar8[0xd];
LAB_013cd580:
  iVar13 = (int)in_stack_00000010;
  puVar8 = puVar9;
  if ((iVar25 == 0) || (SCARRY4(iVar13,2))) {
    puVar9[9] = in_stack_00000000;
    if (iVar25 == 0) {
      dVar26 = *(double *)(in_stack_00000010 + 3);
    }
    else {
      dVar26 = (double)(iVar13 >> 1);
    }
    dVar26 = dVar26 + 1.0;
    iVar13 = (int)dVar26;
    puVar9[0xb] = (ulong)dVar26;
    if (((dVar26 != (double)iVar13) || ((iVar13 == 0 && ((long)dVar26 < 0)))) ||
       (SCARRY4(iVar13,iVar13))) {
      uVar16 = **(ulong **)(unaff_x26 + 0x1428);
      uVar14 = uVar16 + 0xc;
      if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
        in_stack_00000010 = uVar16 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar14;
      }
      else {
        in_stack_00000010 = FUN_01348560(in_stack_00000010,0xc);
        uVar12 = *puVar9;
        param_4 = puVar9[0xc];
        in_stack_00000000 = puVar9[9];
        param_2 = puVar9[5];
        param_3 = puVar9[4];
        param_5 = puVar9[3];
        in_stack_00000008 = puVar9[0x11];
      }
      *(int *)(in_stack_00000010 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
      *(ulong *)(in_stack_00000010 + 3) = puVar9[0xb];
    }
    else {
      in_stack_00000010 = (ulong)(iVar13 * 2);
    }
  }
  else {
    in_stack_00000010 = (ulong)(iVar13 + 2);
  }
  goto LAB_013ccb94;
}

