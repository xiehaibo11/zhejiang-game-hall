
/* WARNING: Removing unreachable block (ram,0x013de7f8) */
/* WARNING: Removing unreachable block (ram,0x013de864) */
/* WARNING: Removing unreachable block (ram,0x013de814) */
/* WARNING: Removing unreachable block (ram,0x013de870) */

ulong FUN_013ddda0(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

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
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ushort uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
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
  ulong local_70 [5];
  ulong local_48;
  ulong local_40;
  
  uVar12 = (ulong)((in_stack_00000000 & 1) == 0);
  local_48 = param_4;
  local_40 = param_2;
  local_70[0] = uVar12;
  uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
  puVar8 = local_70;
LAB_013ddde4:
  bVar10 = (param_5 & 1) == 0;
  uVar14 = (ulong)bVar10;
  puVar8[9] = param_3;
  puVar8[8] = param_5;
  puVar8[7] = uVar14;
  if (bVar10) {
    if ((int)uVar12 == 0) {
      dVar27 = *(double *)(in_stack_00000000 + 3);
      dVar26 = (double)((int)param_5 >> 1);
      goto LAB_013dde28;
    }
    if ((int)in_stack_00000000 <= (int)param_5) goto LAB_013de754;
  }
  else {
    dVar26 = *(double *)(param_5 + 3);
    if ((int)uVar12 == 0) {
      dVar27 = *(double *)(in_stack_00000000 + 3);
    }
    else {
      dVar27 = (double)((int)in_stack_00000000 >> 1);
    }
LAB_013dde28:
    if (dVar27 <= dVar26) {
LAB_013de754:
      if ((int)param_3 != (int)uVar13) {
        return param_3;
      }
      puVar8[-2] = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x17b);
      puVar8[-1] = 0x130;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
  }
  if ((param_4 & 1) == 0) {
LAB_013de988:
    puVar8[-2] = param_5;
    puVar8[-1] = param_4;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260),param_3,param_4,2);
  }
  uVar19 = unaff_x26 + (ulong)*(uint *)(param_4 - 1);
  uVar16 = *(ushort *)(uVar19 + 7);
  if (uVar16 < 0xa9) goto LAB_013de988;
  if (uVar16 == 0xa9) {
    lVar18 = thunk_FUN_01349b90(param_5);
    if ((*(int *)(lVar18 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
       ((*(uint *)(lVar18 + 7) & 1) != 0)) {
      param_3 = puVar8[9];
      uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
      param_5 = puVar8[8];
      uVar14 = puVar8[7];
      param_2 = puVar8[6];
      param_4 = puVar8[5];
      in_stack_00000000 = puVar8[0xe];
      uVar12 = *puVar8;
      goto LAB_013de6a8;
    }
    iVar11 = FUN_013fd060(puVar8[5],lVar18);
    param_3 = puVar8[9];
    uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
    param_5 = puVar8[8];
    iVar25 = (int)puVar8[7];
    param_2 = puVar8[6];
    param_4 = puVar8[5];
    in_stack_00000000 = puVar8[0xe];
    uVar12 = *puVar8;
  }
  else {
    if (bVar10) {
      uVar20 = (long)(param_5 << 0x20) >> 0x21;
    }
    else {
      uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_5 - 1) + 7);
      if (((uVar3 != 0x42) ||
          (uVar20 = (ulong)*(double *)(param_5 + 3),
          *(double *)(param_5 + 3) != (double)(long)uVar20)) ||
         (0x3ffffffffffffe < uVar20 + 0x1fffffffffffff)) {
        uVar20 = param_5;
        if (uVar3 == 0x40) {
LAB_013ddef8:
          uVar22 = *(ulong *)(unaff_x26 + 0x410);
          uVar15 = param_4;
          do {
            iVar11 = (int)uVar20;
            if (uVar16 < 0x411) {
              if ((uVar16 != 0xaa) || ((*(byte *)(uVar19 + 9) & 0x24) != 0)) goto LAB_013de988;
              uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 3);
              if ((uVar15 & 1) == 0) {
                uVar15 = uVar22;
              }
              uVar23 = (ulong)(*(uint *)(uVar20 + 3) >> 3);
              lVar18 = 0;
              while( true ) {
                uVar23 = uVar23 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                uVar1 = uVar23 + 5;
                lVar21 = unaff_x26 + (ulong)*(uint *)(uVar15 + uVar1 * 4 + 7);
                if ((int)lVar21 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (*(int *)(lVar21 + 3) == iVar11) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar15 + 3) << 0x20) >> 0x21) <= uVar1) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(0,0x13de7b4);
                    (*pcVar7)();
                  }
                  if (*(int *)(lVar21 + 0xb) != (int)uVar13) goto LAB_013de6a0;
                  break;
                }
                lVar18 = lVar18 + 1;
                uVar23 = uVar23 + lVar18;
              }
            }
            else if ((*(uint *)(uVar19 + 0xb) >> 0x15 & 1) == 0) {
              lVar18 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0x17);
              uVar17 = *(uint *)(uVar19 + 0xb) >> 10 & 0x3ff;
              if (uVar17 != 0) {
                if (uVar17 < 0x21) {
                  lVar21 = (long)(int)uVar17 * 3;
                  while (lVar21 != 0) {
                    lVar21 = lVar21 + -3;
                    if (*(int *)(lVar18 + lVar21 * 4 + 0xf) == iVar11) goto LAB_013de6a0;
                  }
                }
                else {
                  iVar4 = *(short *)(lVar18 + 5) + -1;
                  iVar25 = 0;
                  iVar24 = iVar4;
                  do {
                    iVar2 = iVar25 + ((uint)(iVar24 - iVar25) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar18 + (long)(int)(((uint)(*(int *)(lVar18 + (
                                                  long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)(uVar20 + 3)) {
                      iVar25 = iVar2 + 1;
                      iVar2 = iVar24;
                    }
                    iVar24 = iVar2;
                  } while (iVar25 != iVar24);
                  for (; iVar25 <= iVar4; iVar25 = iVar25 + 1) {
                    uVar5 = (uint)(*(int *)(lVar18 + (long)(iVar25 * 3) * 4 + 0x13) >> 1) >> 9 &
                            0x3ff;
                    lVar21 = unaff_x26 + (ulong)*(uint *)(lVar18 + (long)(int)(uVar5 * 3) * 4 + 0xf)
                    ;
                    if (*(uint *)(lVar21 + 3) != *(uint *)(uVar20 + 3)) break;
                    if ((int)lVar21 == iVar11) {
                      if (uVar5 < uVar17) goto LAB_013de6a0;
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
              lVar18 = 0;
              while( true ) {
                uVar23 = uVar23 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                iVar25 = *(int *)(uVar15 + (uVar23 * 3 + 5) * 4 + 7);
                if (iVar25 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (iVar25 == iVar11) goto LAB_013de6a0;
                lVar18 = lVar18 + 1;
                uVar23 = uVar23 + lVar18;
              }
            }
            if (uVar16 == 0x41b) {
              uVar16 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar20 - 1) + 7);
              uVar17 = (uint)uVar16;
              if (((uVar16 < 0x40) && (iVar11 = *(int *)(uVar20 + 7) * 2, iVar11 != 0)) &&
                 (iVar11 < 0x31)) {
                uVar15 = uVar20;
                if ((uVar16 & 7) == 0) {
                  lVar18 = 0;
                  bVar10 = false;
                }
                else {
                  lVar18 = 0;
                  while( true ) {
                    while (uVar5 = uVar17 & 7, uVar5 < 2) {
                      if (uVar5 == 0) {
                        bVar10 = false;
                        goto LAB_013de260;
                      }
                      if (uVar5 != 1) goto LAB_013de7b8;
                      if (*(int *)(uVar15 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)) {
                        puVar8[4] = uVar19;
                        puVar8[3] = uVar20;
                        goto LAB_013de880;
                      }
                      uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
                      uVar17 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar15 - 1) + 7);
                    }
                    if (uVar5 == 2) break;
                    if (uVar5 == 3) {
                      uVar23 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
                      lVar18 = lVar18 + ((long)((ulong)*(uint *)(uVar15 + 0xf) << 0x20) >> 0x21);
                      uVar17 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar23 - 1) + 7);
                      uVar15 = uVar23;
                    }
                    else {
                      if (uVar5 != 5) {
LAB_013de7b8:
                        puVar8[4] = uVar19;
                        puVar8[3] = uVar20;
                        goto LAB_013de880;
                      }
                      uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
                      uVar17 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar15 - 1) + 7);
                    }
                  }
                  bVar10 = true;
                }
LAB_013de260:
                if (bVar10) {
                  puVar8[4] = uVar19;
                  puVar8[3] = uVar20;
                  if ((uVar17 >> 4 & 1) != 0) {
LAB_013de880:
                    puVar8[-2] = 0;
                    puVar8[-1] = uVar20;
                    /* WARNING: Subroutine does not return */
                    FUN_013be7e0(0,2,*(undefined8 *)(unaff_x26 + 0x2580),param_3,param_4,param_5,
                                 param_2,in_stack_00000000,uVar12);
                  }
                  lVar21 = *(long *)(uVar15 + 0x13);
                }
                else {
                  lVar21 = uVar15 + 0xb;
                }
                if ((uVar17 >> 3 & 1) == 0) {
                  uVar16 = *(ushort *)(lVar21 + lVar18 * 2);
                }
                else {
                  uVar16 = (ushort)*(byte *)(lVar21 + lVar18);
                }
                if (((uVar16 == 0x2d) || (uVar16 == 0x49)) ||
                   ((uVar16 == 0x4e || ((0x2f < uVar16 && (uVar16 < 0x3a)))))) goto LAB_013de988;
              }
            }
            uVar15 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf);
            if ((int)uVar15 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013de6a8;
            uVar19 = unaff_x26 + (ulong)*(uint *)(uVar15 - 1);
            uVar16 = *(ushort *)(uVar19 + 7);
          } while( true );
        }
        if (0x3f < uVar3) {
          if (uVar3 != 0x43) goto LAB_013de988;
          uVar20 = unaff_x26 + (ulong)*(uint *)(param_5 + 0xb);
          goto LAB_013ddef8;
        }
        uVar17 = *(uint *)(param_5 + 3);
        if ((uVar17 & 0xc0000002) != 0) {
          if ((uVar17 >> 1 & 1) == 0) goto LAB_013de988;
          if ((uVar3 == 0x25) || (uVar3 == 0x2d)) {
            uVar20 = unaff_x26 + (ulong)*(uint *)(param_5 + 0xb);
          }
          else if ((uVar3 >> 5 & 1) != 0) goto LAB_013de988;
          goto LAB_013ddef8;
        }
        uVar20 = (ulong)(uVar17 >> 3) & 0xffffff;
      }
    }
    puVar8[4] = uVar20;
    uVar15 = param_4;
    while( true ) {
      puVar8[3] = uVar19;
      if (uVar16 < 0x411) goto LAB_013de988;
      bVar6 = *(byte *)(uVar19 + 10) >> 3;
      if (0xe < bVar6) break;
      if (bVar6 < 6) {
        if (bVar6 < 3) {
          if (((bVar6 == 0) || (bVar6 == 1)) || (bVar6 == 2)) goto LAB_013de48c;
          goto LAB_013de988;
        }
        if (bVar6 == 3) goto LAB_013de48c;
        if ((bVar6 != 4) && (bVar6 != 5)) goto LAB_013de988;
        lVar18 = unaff_x26 + (ulong)*(uint *)(uVar15 + 7);
        if (uVar20 < (ulong)((long)((ulong)*(uint *)(lVar18 + 3) << 0x20) >> 0x21)) {
          if (*(long *)(lVar18 + uVar20 * 8 + 7) == -0x8000000080001) goto LAB_013de600;
          goto LAB_013de6a0;
        }
LAB_013de4a4:
        if (0xfffffffe < uVar20) goto LAB_013de988;
      }
      else if (bVar6 < 9) {
        if (((bVar6 != 6) && (bVar6 != 7)) && (bVar6 != 8)) goto LAB_013de988;
LAB_013de48c:
        lVar18 = unaff_x26 + (ulong)*(uint *)(uVar15 + 7);
        if ((ulong)((long)((ulong)*(uint *)(lVar18 + 3) << 0x20) >> 0x21) <= uVar20)
        goto LAB_013de4a4;
        if (*(int *)(lVar18 + uVar20 * 4 + 7) != (int)uVar13) goto LAB_013de6a0;
      }
      else {
        if (bVar6 < 0xb) {
          if ((bVar6 == 9) || (bVar6 == 10)) goto LAB_013de48c;
          goto LAB_013de988;
        }
        if (bVar6 == 0xb) goto LAB_013de48c;
        if (bVar6 != 0xc) goto LAB_013de988;
LAB_013de4e0:
        if (0xfffffffe < uVar20) goto LAB_013de988;
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar15 + 7);
        uVar17 = *(uint *)(uVar12 + 0xf);
        puVar8[1] = uVar12;
        puVar8[2] = ((long)(unaff_x26 + (ulong)uVar17 << 0x20) >> 0x21) - 1;
        pcVar7 = *(code **)(unaff_x26 + 0x1080);
        puVar8[-2] = param_2;
        puVar8[-1] = param_5;
        *(undefined8 *)(unaff_x26 + 0x40) = 0x13de520;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        uVar14 = puVar8[-1];
        uVar12 = (*pcVar7)();
        puVar8[-2] = 0;
        puVar8[-1] = uVar14;
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        uVar12 = uVar12 & 0xffffffff;
        lVar18 = 0;
        uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
        uVar20 = puVar8[4];
        while( true ) {
          uVar14 = unaff_x26 + (ulong)*(uint *)(puVar8[1] + ((uVar12 & puVar8[2]) * 3 + 4) * 4 + 7);
          if ((int)uVar14 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if ((uVar14 & 1) == 0) {
            if ((long)(uVar14 << 0x20) >> 0x21 == uVar20) {
              param_3 = puVar8[9];
              param_5 = puVar8[8];
              uVar14 = puVar8[7];
              param_2 = puVar8[6];
              param_4 = puVar8[5];
              in_stack_00000000 = puVar8[0xe];
              uVar12 = *puVar8;
              goto LAB_013de6a0;
            }
          }
          else if (((int)uVar14 != (int)uVar13) && (*(double *)(uVar14 + 3) == (double)(long)uVar20)
                  ) {
            param_3 = puVar8[9];
            param_5 = puVar8[8];
            uVar14 = puVar8[7];
            param_2 = puVar8[6];
            param_4 = puVar8[5];
            in_stack_00000000 = puVar8[0xe];
            uVar12 = *puVar8;
            goto LAB_013de6a0;
          }
          lVar18 = lVar18 + 1;
          uVar12 = (uVar12 & puVar8[2]) + lVar18;
        }
        param_3 = puVar8[9];
        param_5 = puVar8[8];
        uVar14 = puVar8[7];
        param_2 = puVar8[6];
        param_4 = puVar8[5];
        uVar19 = puVar8[3];
        in_stack_00000000 = puVar8[0xe];
        uVar12 = *puVar8;
      }
LAB_013de600:
      uVar15 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf);
      if ((int)uVar15 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013de6a8;
      uVar19 = unaff_x26 + (ulong)*(uint *)(uVar15 - 1);
      uVar16 = *(ushort *)(uVar19 + 7);
    }
    if (bVar6 < 0x16) {
      if (bVar6 < 0x12) {
        if (bVar6 == 0xf) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb) + 7) <= uVar20)
          goto LAB_013de48c;
          goto LAB_013de6a0;
        }
        if (bVar6 == 0x10) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb) + 7) <= uVar20)
          goto LAB_013de4e0;
          goto LAB_013de6a0;
        }
        if (bVar6 != 0x11) goto LAB_013de988;
      }
      else if (bVar6 < 0x14) {
        if ((bVar6 != 0x12) && (bVar6 != 0x13)) goto LAB_013de988;
      }
      else if ((bVar6 != 0x14) && (bVar6 != 0x15)) goto LAB_013de988;
    }
    else if (bVar6 < 0x19) {
      if (((bVar6 != 0x16) && (bVar6 != 0x17)) && (bVar6 != 0x18)) goto LAB_013de988;
    }
    else if (bVar6 < 0x1b) {
      if ((bVar6 != 0x19) && (bVar6 != 0x1a)) goto LAB_013de988;
    }
    else if (bVar6 != 0x1b) {
      if (bVar6 == 0x1c) goto LAB_013de600;
      goto LAB_013de988;
    }
    if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
       (uVar20 < *(ulong *)(uVar15 + 0x1f))) goto LAB_013de6a0;
LAB_013de6a8:
    iVar25 = (int)uVar14;
    iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
  }
  goto LAB_013de6ac;
LAB_013de6a0:
  iVar25 = (int)uVar14;
  iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xb8);
LAB_013de6ac:
  puVar9 = puVar8;
  if (iVar11 == (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
    param_3 = FUN_013c0ba0(param_4,param_5);
    uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
    if ((int)puVar8[9] != (int)uVar13) {
      puVar9 = puVar8 + -6;
      puVar8[-1] = 0;
      uVar12 = *(ulong *)(unaff_x26 + 0xa0);
      puVar8[-3] = puVar8[9];
      puVar8[-2] = uVar12;
      puVar8[-5] = puVar8[8];
      puVar8[-4] = param_3;
      puVar8[-6] = puVar8[5];
      param_3 = FUN_0133fb80(4,puVar8[6]);
      uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
    }
    param_5 = puVar9[8];
    iVar25 = (int)puVar9[7];
    param_2 = puVar9[6];
    param_4 = puVar9[5];
    in_stack_00000000 = puVar9[0xe];
    uVar12 = *puVar9;
  }
  iVar11 = (int)param_5;
  puVar8 = puVar9;
  if ((iVar25 == 0) || (SCARRY4(iVar11,2))) {
    puVar9[9] = param_3;
    if (iVar25 == 0) {
      dVar26 = *(double *)(param_5 + 3);
    }
    else {
      dVar26 = (double)(iVar11 >> 1);
    }
    dVar26 = dVar26 + 1.0;
    iVar11 = (int)dVar26;
    puVar9[8] = (ulong)dVar26;
    if ((dVar26 != (double)iVar11) ||
       (((iVar11 == 0 && ((long)dVar26 < 0)) || (SCARRY4(iVar11,iVar11))))) {
      param_5 = **(ulong **)(unaff_x26 + 0x1428);
      uVar14 = param_5 + 0xc;
      if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
        param_5 = param_5 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar14;
      }
      else {
        param_5 = FUN_01348560(2,0xc);
        uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
        uVar12 = *puVar9;
        param_3 = puVar9[9];
        param_2 = puVar9[6];
        param_4 = puVar9[5];
        in_stack_00000000 = puVar9[0xe];
      }
      *(int *)(param_5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
      *(ulong *)(param_5 + 3) = puVar9[8];
    }
    else {
      param_5 = (ulong)(iVar11 * 2);
    }
  }
  else {
    param_5 = (ulong)(iVar11 + 2);
  }
  goto LAB_013ddde4;
}

