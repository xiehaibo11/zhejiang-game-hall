
/* WARNING: Removing unreachable block (ram,0x013da95c) */
/* WARNING: Removing unreachable block (ram,0x013da984) */
/* WARNING: Removing unreachable block (ram,0x013da978) */
/* WARNING: Removing unreachable block (ram,0x013da990) */

undefined8
FUN_013d9f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  bool bVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ushort uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  long unaff_x26;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  ulong in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong local_a0 [4];
  undefined1 local_80 [8];
  ulong local_78 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = in_stack_00000008;
  local_18 = 0x1a;
  uVar15 = (ulong)((in_stack_00000000 & 1) == 0);
  local_78[5] = param_5;
  local_20 = param_4;
  local_78[7] = param_2;
  local_78[6] = param_3;
  local_78[0] = uVar15;
  puVar8 = local_80;
LAB_013d9f90:
  uVar11 = auVar30._0_8_;
  bVar10 = (uVar11 & 1) == 0;
  uVar17 = (ulong)bVar10;
  *(ulong *)(puVar8 + 0x58) = uVar11;
  *(ulong *)(puVar8 + 0x50) = uVar17;
  if (bVar10) {
    if ((int)uVar15 == 0) {
      dVar29 = *(double *)(in_stack_00000000 + 3);
      dVar28 = (double)(auVar30._0_4_ >> 1);
      goto LAB_013d9fd0;
    }
    if ((int)in_stack_00000000 <= auVar30._0_4_) {
      return param_4;
    }
  }
  else {
    dVar28 = *(double *)(uVar11 + 3);
    if ((int)uVar15 == 0) {
      dVar29 = *(double *)(in_stack_00000000 + 3);
    }
    else {
      dVar29 = (double)((int)in_stack_00000000 >> 1);
    }
LAB_013d9fd0:
    if (dVar29 <= dVar28) {
      return param_4;
    }
  }
  if ((param_5 & 1) == 0) {
LAB_013daaa4:
    *(ulong *)(puVar8 + -0x10) = uVar11;
    *(ulong *)(puVar8 + -8) = param_5;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260));
  }
  lVar14 = unaff_x26 + (ulong)*(uint *)(param_5 - 1);
  uVar19 = *(ushort *)(lVar14 + 7);
  if (uVar19 < 0xa9) goto LAB_013daaa4;
  if (uVar19 == 0xa9) {
    auVar30 = thunk_FUN_01349b90(uVar11,auVar30._8_8_,param_3);
    lVar14 = auVar30._0_8_;
    if ((*(int *)(lVar14 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
       ((*(uint *)(lVar14 + 7) & 1) != 0)) {
      param_4 = *(undefined8 *)(puVar8 + 0x60);
      auVar30._8_8_ = auVar30._8_8_;
      auVar30._0_8_ = *(undefined8 *)(puVar8 + 0x58);
      uVar17 = *(ulong *)(puVar8 + 0x50);
      param_2 = *(undefined8 *)(puVar8 + 0x40);
      param_3 = *(undefined8 *)(puVar8 + 0x38);
      param_5 = *(ulong *)(puVar8 + 0x30);
      in_stack_00000000 = *(ulong *)(puVar8 + 0x80);
      uVar15 = *(ulong *)(puVar8 + 8);
      goto LAB_013da84c;
    }
    iVar16 = FUN_013fd060(*(undefined8 *)(puVar8 + 0x30),lVar14);
    param_4 = *(undefined8 *)(puVar8 + 0x60);
    auVar30._8_8_ = extraout_x1_00;
    auVar30._0_8_ = *(undefined8 *)(puVar8 + 0x58);
    iVar27 = (int)*(undefined8 *)(puVar8 + 0x50);
    param_2 = *(undefined8 *)(puVar8 + 0x40);
    param_3 = *(undefined8 *)(puVar8 + 0x38);
    param_5 = *(ulong *)(puVar8 + 0x30);
    in_stack_00000000 = *(ulong *)(puVar8 + 0x80);
    uVar15 = *(ulong *)(puVar8 + 8);
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
LAB_013da0a0:
          uVar24 = *(ulong *)(unaff_x26 + 0x410);
          uVar18 = param_5;
          do {
            iVar16 = (int)uVar22;
            if (uVar19 < 0x411) {
              if ((uVar19 != 0xaa) || ((*(byte *)(lVar14 + 9) & 0x24) != 0)) goto LAB_013daaa4;
              uVar18 = unaff_x26 + (ulong)*(uint *)(uVar18 + 3);
              if ((uVar18 & 1) == 0) {
                uVar18 = uVar24;
              }
              uVar25 = (ulong)(*(uint *)(uVar22 + 3) >> 3);
              lVar21 = 0;
              while( true ) {
                uVar25 = uVar25 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                uVar1 = uVar25 + 5;
                lVar23 = unaff_x26 + (ulong)*(uint *)(uVar18 + uVar1 * 4 + 7);
                if ((int)lVar23 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (*(int *)(lVar23 + 3) == iVar16) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar18 + 3) << 0x20) >> 0x21) <= uVar1) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(0,0x13da918);
                    (*pcVar7)();
                  }
                  if (*(int *)(lVar23 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
                  goto LAB_013da844;
                  break;
                }
                lVar21 = lVar21 + 1;
                uVar25 = uVar25 + lVar21;
              }
            }
            else if ((*(uint *)(lVar14 + 0xb) >> 0x15 & 1) == 0) {
              lVar21 = unaff_x26 + (ulong)*(uint *)(lVar14 + 0x17);
              uVar20 = *(uint *)(lVar14 + 0xb) >> 10 & 0x3ff;
              if (uVar20 != 0) {
                if (uVar20 < 0x21) {
                  lVar23 = (long)(int)uVar20 * 3;
                  while (lVar23 != 0) {
                    lVar23 = lVar23 + -3;
                    if (*(int *)(lVar21 + lVar23 * 4 + 0xf) == iVar16) goto LAB_013da844;
                  }
                }
                else {
                  iVar4 = *(short *)(lVar21 + 5) + -1;
                  iVar27 = 0;
                  iVar26 = iVar4;
                  do {
                    iVar2 = iVar27 + ((uint)(iVar26 - iVar27) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar21 + (long)(int)(((uint)(*(int *)(lVar21 + (
                                                  long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)(uVar22 + 3)) {
                      iVar27 = iVar2 + 1;
                      iVar2 = iVar26;
                    }
                    iVar26 = iVar2;
                  } while (iVar27 != iVar26);
                  for (; iVar27 <= iVar4; iVar27 = iVar27 + 1) {
                    uVar5 = (uint)(*(int *)(lVar21 + (long)(iVar27 * 3) * 4 + 0x13) >> 1) >> 9 &
                            0x3ff;
                    lVar23 = unaff_x26 + (ulong)*(uint *)(lVar21 + (long)(int)(uVar5 * 3) * 4 + 0xf)
                    ;
                    if (*(uint *)(lVar23 + 3) != *(uint *)(uVar22 + 3)) break;
                    if ((int)lVar23 == iVar16) {
                      if (uVar5 < uVar20) goto LAB_013da844;
                      break;
                    }
                  }
                }
              }
            }
            else {
              uVar18 = unaff_x26 + (ulong)*(uint *)(uVar18 + 3);
              if ((uVar18 & 1) == 0) {
                uVar18 = uVar24;
              }
              uVar25 = (ulong)(*(uint *)(uVar22 + 3) >> 3);
              lVar21 = 0;
              while( true ) {
                uVar25 = uVar25 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                iVar27 = *(int *)(uVar18 + (uVar25 * 3 + 5) * 4 + 7);
                if (iVar27 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (iVar27 == iVar16) goto LAB_013da844;
                lVar21 = lVar21 + 1;
                uVar25 = uVar25 + lVar21;
              }
            }
            if (uVar19 == 0x41b) {
              uVar19 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar22 - 1) + 7);
              uVar20 = (uint)uVar19;
              if (((uVar19 < 0x40) && (iVar16 = *(int *)(uVar22 + 7) * 2, iVar16 != 0)) &&
                 (iVar16 < 0x31)) {
                uVar18 = uVar22;
                if ((uVar19 & 7) == 0) {
                  lVar21 = 0;
                  bVar10 = false;
                }
                else {
                  lVar21 = 0;
                  while( true ) {
                    while (uVar5 = uVar20 & 7, uVar5 < 2) {
                      if (uVar5 == 0) {
                        bVar10 = false;
                        goto LAB_013da40c;
                      }
                      if (uVar5 != 1) goto LAB_013da91c;
                      if (*(int *)(uVar18 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)) {
                        *(long *)(puVar8 + 0x28) = lVar14;
                        *(ulong *)(puVar8 + 0x20) = uVar22;
                        goto LAB_013da948;
                      }
                      uVar18 = unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar18 - 1) + 7);
                    }
                    if (uVar5 == 2) break;
                    if (uVar5 == 3) {
                      uVar25 = unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb);
                      lVar21 = lVar21 + ((long)((ulong)*(uint *)(uVar18 + 0xf) << 0x20) >> 0x21);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar25 - 1) + 7);
                      uVar18 = uVar25;
                    }
                    else {
                      if (uVar5 != 5) {
LAB_013da91c:
                        *(long *)(puVar8 + 0x28) = lVar14;
                        *(ulong *)(puVar8 + 0x20) = uVar22;
                        goto LAB_013da948;
                      }
                      uVar18 = unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar18 - 1) + 7);
                    }
                  }
                  bVar10 = true;
                }
LAB_013da40c:
                if (bVar10) {
                  *(long *)(puVar8 + 0x28) = lVar14;
                  *(ulong *)(puVar8 + 0x20) = uVar22;
                  if ((uVar20 >> 4 & 1) != 0) {
LAB_013da948:
                    *(undefined8 *)(puVar8 + -0x10) = 0;
                    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + 0x20);
                    /* WARNING: Subroutine does not return */
                    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
                  }
                  lVar23 = *(long *)(uVar18 + 0x13);
                }
                else {
                  lVar23 = uVar18 + 0xb;
                }
                if ((uVar20 >> 3 & 1) == 0) {
                  uVar19 = *(ushort *)(lVar23 + lVar21 * 2);
                }
                else {
                  uVar19 = (ushort)*(byte *)(lVar23 + lVar21);
                }
                if (((uVar19 == 0x2d) || (uVar19 == 0x49)) ||
                   ((uVar19 == 0x4e || ((0x2f < uVar19 && (uVar19 < 0x3a)))))) goto LAB_013daaa4;
              }
            }
            uVar18 = unaff_x26 + (ulong)*(uint *)(lVar14 + 0xf);
            if ((int)uVar18 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013da84c;
            lVar14 = unaff_x26 + (ulong)*(uint *)(uVar18 - 1);
            uVar19 = *(ushort *)(lVar14 + 7);
          } while( true );
        }
        if (0x3f < uVar3) {
          if (uVar3 != 0x43) goto LAB_013daaa4;
          uVar22 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xb);
          goto LAB_013da0a0;
        }
        uVar20 = *(uint *)(uVar11 + 3);
        if ((uVar20 & 0xc0000002) != 0) {
          if ((uVar20 >> 1 & 1) == 0) goto LAB_013daaa4;
          if ((uVar3 == 0x25) || (uVar3 == 0x2d)) {
            uVar22 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xb);
          }
          else if ((uVar3 >> 5 & 1) != 0) goto LAB_013daaa4;
          goto LAB_013da0a0;
        }
        uVar22 = (ulong)(uVar20 >> 3) & 0xffffff;
      }
    }
    *(ulong *)(puVar8 + 0x28) = uVar22;
    uVar18 = param_5;
    while( true ) {
      uVar11 = auVar30._0_8_;
      *(long *)(puVar8 + 0x20) = lVar14;
      if (uVar19 < 0x411) goto LAB_013daaa4;
      bVar6 = *(byte *)(lVar14 + 10) >> 3;
      if (0xe < bVar6) break;
      if (bVar6 < 6) {
        if (bVar6 < 3) {
          if (((bVar6 == 0) || (bVar6 == 1)) || (bVar6 == 2)) goto LAB_013da638;
          goto LAB_013daaa4;
        }
        if (bVar6 == 3) goto LAB_013da638;
        if ((bVar6 != 4) && (bVar6 != 5)) goto LAB_013daaa4;
        lVar21 = unaff_x26 + (ulong)*(uint *)(uVar18 + 7);
        if (uVar22 < (ulong)((long)((ulong)*(uint *)(lVar21 + 3) << 0x20) >> 0x21)) {
          if (*(long *)(lVar21 + uVar22 * 8 + 7) == -0x8000000080001) goto LAB_013da7ac;
          goto LAB_013da844;
        }
LAB_013da650:
        if (0xfffffffe < uVar22) goto LAB_013daaa4;
      }
      else if (bVar6 < 9) {
        if (((bVar6 != 6) && (bVar6 != 7)) && (bVar6 != 8)) goto LAB_013daaa4;
LAB_013da638:
        lVar21 = unaff_x26 + (ulong)*(uint *)(uVar18 + 7);
        if ((ulong)((long)((ulong)*(uint *)(lVar21 + 3) << 0x20) >> 0x21) <= uVar22)
        goto LAB_013da650;
        if (*(int *)(lVar21 + uVar22 * 4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
        goto LAB_013da844;
      }
      else {
        if (bVar6 < 0xb) {
          if ((bVar6 == 9) || (bVar6 == 10)) goto LAB_013da638;
          goto LAB_013daaa4;
        }
        if (bVar6 == 0xb) goto LAB_013da638;
        if (bVar6 != 0xc) goto LAB_013daaa4;
LAB_013da690:
        if (0xfffffffe < uVar22) goto LAB_013daaa4;
        lVar14 = unaff_x26 + (ulong)*(uint *)(uVar18 + 7);
        uVar20 = *(uint *)(lVar14 + 0xf);
        *(long *)(puVar8 + 0x10) = lVar14;
        *(long *)(puVar8 + 0x18) = ((long)(unaff_x26 + (ulong)uVar20 << 0x20) >> 0x21) + -1;
        pcVar7 = *(code **)(unaff_x26 + 0x1080);
        *(undefined8 *)(puVar8 + -0x10) = param_2;
        *(ulong *)(puVar8 + -8) = param_5;
        *(undefined8 *)(unaff_x26 + 0x40) = 0x13da6d0;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        uVar12 = *(undefined8 *)(puVar8 + -8);
        auVar30 = (*pcVar7)();
        uVar13 = auVar30._8_8_;
        *(undefined8 *)(puVar8 + -0x10) = 0;
        *(undefined8 *)(puVar8 + -8) = uVar12;
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        uVar15 = auVar30._0_8_ & 0xffffffff;
        lVar14 = 0;
        uVar22 = *(ulong *)(puVar8 + 0x28);
        while( true ) {
          uVar11 = unaff_x26 +
                   (ulong)*(uint *)(*(long *)(puVar8 + 0x10) +
                                   ((uVar15 & *(ulong *)(puVar8 + 0x18)) * 3 + 4) * 4 + 7);
          if ((int)uVar11 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if ((uVar11 & 1) == 0) {
            if ((long)(uVar11 << 0x20) >> 0x21 == uVar22) {
              param_4 = *(undefined8 *)(puVar8 + 0x60);
              auVar30._8_8_ = uVar13;
              auVar30._0_8_ = *(undefined8 *)(puVar8 + 0x58);
              uVar17 = *(ulong *)(puVar8 + 0x50);
              param_2 = *(undefined8 *)(puVar8 + 0x40);
              param_3 = *(undefined8 *)(puVar8 + 0x38);
              param_5 = *(ulong *)(puVar8 + 0x30);
              in_stack_00000000 = *(ulong *)(puVar8 + 0x80);
              uVar15 = *(ulong *)(puVar8 + 8);
              goto LAB_013da844;
            }
          }
          else if (((int)uVar11 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                  (*(double *)(uVar11 + 3) == (double)(long)uVar22)) {
            param_4 = *(undefined8 *)(puVar8 + 0x60);
            auVar30._8_8_ = uVar13;
            auVar30._0_8_ = *(undefined8 *)(puVar8 + 0x58);
            uVar17 = *(ulong *)(puVar8 + 0x50);
            param_2 = *(undefined8 *)(puVar8 + 0x40);
            param_3 = *(undefined8 *)(puVar8 + 0x38);
            param_5 = *(ulong *)(puVar8 + 0x30);
            in_stack_00000000 = *(ulong *)(puVar8 + 0x80);
            uVar15 = *(ulong *)(puVar8 + 8);
            goto LAB_013da844;
          }
          lVar14 = lVar14 + 1;
          uVar15 = (uVar15 & *(ulong *)(puVar8 + 0x18)) + lVar14;
        }
        param_4 = *(undefined8 *)(puVar8 + 0x60);
        auVar30._8_8_ = uVar13;
        auVar30._0_8_ = *(undefined8 *)(puVar8 + 0x58);
        uVar17 = *(ulong *)(puVar8 + 0x50);
        param_2 = *(undefined8 *)(puVar8 + 0x40);
        param_3 = *(undefined8 *)(puVar8 + 0x38);
        param_5 = *(ulong *)(puVar8 + 0x30);
        lVar14 = *(long *)(puVar8 + 0x20);
        in_stack_00000000 = *(ulong *)(puVar8 + 0x80);
        uVar15 = *(ulong *)(puVar8 + 8);
      }
LAB_013da7ac:
      uVar18 = unaff_x26 + (ulong)*(uint *)(lVar14 + 0xf);
      if ((int)uVar18 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013da84c;
      lVar14 = unaff_x26 + (ulong)*(uint *)(uVar18 - 1);
      uVar19 = *(ushort *)(lVar14 + 7);
    }
    if (bVar6 < 0x16) {
      if (bVar6 < 0x12) {
        if (bVar6 == 0xf) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb) + 7) <= uVar22)
          goto LAB_013da638;
          goto LAB_013da844;
        }
        if (bVar6 == 0x10) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb) + 7) <= uVar22)
          goto LAB_013da690;
          goto LAB_013da844;
        }
        if (bVar6 != 0x11) goto LAB_013daaa4;
      }
      else if (bVar6 < 0x14) {
        if ((bVar6 != 0x12) && (bVar6 != 0x13)) goto LAB_013daaa4;
      }
      else if ((bVar6 != 0x14) && (bVar6 != 0x15)) goto LAB_013daaa4;
    }
    else if (bVar6 < 0x19) {
      if (((bVar6 != 0x16) && (bVar6 != 0x17)) && (bVar6 != 0x18)) goto LAB_013daaa4;
    }
    else if (bVar6 < 0x1b) {
      if ((bVar6 != 0x19) && (bVar6 != 0x1a)) goto LAB_013daaa4;
    }
    else if (bVar6 != 0x1b) {
      if (bVar6 == 0x1c) goto LAB_013da7ac;
      goto LAB_013daaa4;
    }
    if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
       (uVar22 < *(ulong *)(uVar18 + 0x1f))) goto LAB_013da844;
LAB_013da84c:
    iVar27 = (int)uVar17;
    iVar16 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
  }
  goto LAB_013da850;
LAB_013da844:
  iVar27 = (int)uVar17;
  iVar16 = (int)*(undefined8 *)(unaff_x26 + 0xb8);
LAB_013da850:
  puVar9 = puVar8;
  if (iVar16 == (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
    uVar12 = FUN_013c0ba0(param_5,auVar30._0_8_);
    puVar9 = puVar8 + -0x20;
    *(undefined8 *)(puVar8 + -0x10) = uVar12;
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + 0x38);
    *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + 0x30);
    *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + 0x58);
    uVar12 = FUN_0133fcc0(3,*(undefined8 *)(puVar8 + 0x40));
    FUN_013e8d20(*(undefined8 *)(puVar8 + 0x40),*(undefined8 *)(puVar8 + 0x38),uVar12);
    param_4 = *(undefined8 *)(puVar8 + 0x40);
    auVar30._8_8_ = extraout_x1;
    auVar30._0_8_ = *(undefined8 *)(puVar8 + 0x38);
    iVar27 = (int)*(undefined8 *)(puVar8 + 0x30);
    param_2 = *(undefined8 *)(puVar8 + 0x20);
    param_3 = *(undefined8 *)(puVar8 + 0x18);
    param_5 = *(ulong *)(puVar8 + 0x10);
    in_stack_00000000 = *(ulong *)(puVar8 + 0x60);
    uVar15 = *(ulong *)(puVar8 + -0x18);
  }
  uVar12 = auVar30._8_8_;
  iVar16 = auVar30._0_4_;
  puVar8 = puVar9;
  if ((iVar27 == 0) || (SCARRY4(iVar16,2))) {
    if (iVar27 == 0) {
      dVar28 = *(double *)(auVar30._0_8_ + 3);
    }
    else {
      dVar28 = (double)(iVar16 >> 1);
    }
    dVar28 = dVar28 + 1.0;
    iVar16 = (int)dVar28;
    *(double *)(puVar9 + 0x58) = dVar28;
    if ((dVar28 != (double)iVar16) ||
       (((iVar16 == 0 && ((long)dVar28 < 0)) || (SCARRY4(iVar16,iVar16))))) {
      uVar17 = **(ulong **)(unaff_x26 + 0x1428);
      uVar11 = uVar17 + 0xc;
      if (uVar11 < **(ulong **)(unaff_x26 + 0x1430)) {
        auVar30._8_8_ = uVar12;
        auVar30._0_8_ = uVar17 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar11;
      }
      else {
        auVar30 = FUN_01348560(auVar30._0_8_,0xc);
        uVar15 = *(ulong *)(puVar9 + 8);
        param_4 = *(undefined8 *)(puVar9 + 0x60);
        in_stack_00000000 = *(ulong *)(puVar9 + 0x80);
        param_2 = *(undefined8 *)(puVar9 + 0x40);
        param_3 = *(undefined8 *)(puVar9 + 0x38);
        param_5 = *(ulong *)(puVar9 + 0x30);
      }
      *(int *)(auVar30._0_8_ + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
      *(undefined8 *)(auVar30._0_8_ + 3) = *(undefined8 *)(puVar9 + 0x58);
    }
    else {
      auVar30._8_8_ = uVar12;
      auVar30._0_8_ = (long)(iVar16 * 2);
    }
  }
  else {
    auVar30._8_8_ = uVar12;
    auVar30._0_8_ = (long)(iVar16 + 2);
  }
  goto LAB_013d9f90;
}

