
/* WARNING: Removing unreachable block (ram,0x013e3480) */
/* WARNING: Removing unreachable block (ram,0x013e34a8) */
/* WARNING: Removing unreachable block (ram,0x013e349c) */
/* WARNING: Removing unreachable block (ram,0x013e34b4) */

undefined8
FUN_013e2a20(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  code *pcVar8;
  ulong *puVar9;
  ulong *puVar10;
  bool bVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
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
  undefined1 auVar31 [16];
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong local_90 [9];
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined8 local_18;
  
  auVar31._8_8_ = param_2;
  auVar31._0_8_ = in_stack_00000010;
  local_18 = 0x1a;
  uVar16 = (ulong)((in_stack_00000008 & 1) == 0);
  local_40 = param_5;
  local_30 = param_2;
  local_38 = param_3;
  local_90[4] = uVar16;
  uVar17 = *(undefined8 *)(unaff_x26 + 0xc0);
  puVar9 = local_90 + 4;
  do {
    uVar12 = auVar31._0_8_;
    auVar30._8_8_ = auVar31._8_8_;
    auVar30._0_8_ = uVar17;
    bVar11 = (uVar12 & 1) == 0;
    puVar9[10] = uVar12;
    puVar9[9] = (ulong)bVar11;
    if (bVar11) {
      if ((int)uVar16 == 0) {
        dVar29 = *(double *)(in_stack_00000008 + 3);
        dVar28 = (double)(auVar31._0_4_ >> 1);
        goto LAB_013e2acc;
      }
      if ((int)in_stack_00000008 <= auVar31._0_4_) {
        return uVar17;
      }
    }
    else {
      dVar28 = *(double *)(uVar12 + 3);
      if ((int)uVar16 == 0) {
        dVar29 = *(double *)(in_stack_00000008 + 3);
      }
      else {
        dVar29 = (double)((int)in_stack_00000008 >> 1);
      }
LAB_013e2acc:
      if (dVar29 <= dVar28) {
        return uVar17;
      }
    }
    if ((param_5 & 1) == 0) {
LAB_013e35c8:
      puVar9[-2] = uVar12;
      puVar9[-1] = param_5;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260));
    }
    uVar15 = unaff_x26 + (ulong)*(uint *)(param_5 - 1);
    uVar19 = *(ushort *)(uVar15 + 7);
    if (uVar19 < 0xa9) goto LAB_013e35c8;
    if (uVar19 == 0xa9) {
      auVar31 = thunk_FUN_01349b90(uVar12,auVar31._8_8_,param_3,param_2);
      lVar21 = auVar31._0_8_;
      if ((*(int *)(lVar21 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
         ((*(uint *)(lVar21 + 7) & 1) != 0)) {
        uVar17 = *(undefined8 *)(unaff_x26 + 0xc0);
        auVar30._8_8_ = auVar31._8_8_;
        auVar30._0_8_ = uVar17;
        uVar12 = puVar9[10];
        param_2 = puVar9[8];
        param_3 = puVar9[7];
        param_5 = puVar9[6];
        in_stack_00000008 = puVar9[0xf];
        uVar16 = *puVar9;
      }
      else {
        auVar30 = FUN_013fd060(puVar9[6],lVar21);
        uVar17 = *(undefined8 *)(unaff_x26 + 0xc0);
        uVar12 = puVar9[10];
        param_2 = puVar9[8];
        param_3 = puVar9[7];
        param_5 = puVar9[6];
        in_stack_00000008 = puVar9[0xf];
        uVar16 = *puVar9;
      }
    }
    else {
      if (bVar11) {
        uVar22 = (long)(uVar12 << 0x20) >> 0x21;
      }
      else {
        uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7);
        if (((uVar3 != 0x42) ||
            (uVar22 = (ulong)*(double *)(uVar12 + 3),
            *(double *)(uVar12 + 3) != (double)(long)uVar22)) ||
           (0x3ffffffffffffe < uVar22 + 0x1fffffffffffff)) {
          uVar22 = uVar12;
          if (uVar3 == 0x40) {
LAB_013e2b9c:
            uVar24 = *(ulong *)(unaff_x26 + 0x410);
            uVar18 = param_5;
            do {
              iVar14 = (int)uVar22;
              if (uVar19 < 0x411) {
                if ((uVar19 != 0xaa) || ((*(byte *)(uVar15 + 9) & 0x24) != 0)) goto LAB_013e35c8;
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
                  if (*(int *)(lVar23 + 3) == iVar14) {
                    if ((ulong)((long)((ulong)*(uint *)(uVar18 + 3) << 0x20) >> 0x21) <= uVar1) {
                    /* WARNING: Does not return */
                      pcVar8 = (code *)SoftwareBreakpoint(0,0x13e343c);
                      (*pcVar8)();
                    }
                    if (*(int *)(lVar23 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
                    goto LAB_013e3340;
                    break;
                  }
                  lVar21 = lVar21 + 1;
                  uVar25 = uVar25 + lVar21;
                }
              }
              else if ((*(uint *)(uVar15 + 0xb) >> 0x15 & 1) == 0) {
                lVar21 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0x17);
                uVar20 = *(uint *)(uVar15 + 0xb) >> 10 & 0x3ff;
                if (uVar20 != 0) {
                  if (uVar20 < 0x21) {
                    lVar23 = (long)(int)uVar20 * 3;
                    while (lVar23 != 0) {
                      lVar23 = lVar23 + -3;
                      if (*(int *)(lVar21 + lVar23 * 4 + 0xf) == iVar14) goto LAB_013e3340;
                    }
                  }
                  else {
                    iVar4 = *(short *)(lVar21 + 5) + -1;
                    iVar27 = 0;
                    iVar26 = iVar4;
                    do {
                      iVar2 = iVar27 + ((uint)(iVar26 - iVar27) >> 1);
                      if (*(uint *)(unaff_x26 +
                                    (ulong)*(uint *)(lVar21 + (long)(int)(((uint)(*(int *)(lVar21 + 
                                                  (long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff)
                                                  * 3) * 4 + 0xf) + 3) < *(uint *)(uVar22 + 3)) {
                        iVar27 = iVar2 + 1;
                        iVar2 = iVar26;
                      }
                      iVar26 = iVar2;
                    } while (iVar27 != iVar26);
                    for (; iVar27 <= iVar4; iVar27 = iVar27 + 1) {
                      uVar5 = (uint)(*(int *)(lVar21 + (long)(iVar27 * 3) * 4 + 0x13) >> 1) >> 9 &
                              0x3ff;
                      lVar23 = unaff_x26 +
                               (ulong)*(uint *)(lVar21 + (long)(int)(uVar5 * 3) * 4 + 0xf);
                      if (*(uint *)(lVar23 + 3) != *(uint *)(uVar22 + 3)) break;
                      if ((int)lVar23 == iVar14) {
                        if (uVar5 < uVar20) goto LAB_013e3340;
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
                  if (iVar27 == iVar14) goto LAB_013e3340;
                  lVar21 = lVar21 + 1;
                  uVar25 = uVar25 + lVar21;
                }
              }
              if (uVar19 == 0x41b) {
                uVar19 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar22 - 1) + 7);
                uVar20 = (uint)uVar19;
                if (((uVar19 < 0x40) && (iVar14 = *(int *)(uVar22 + 7) * 2, iVar14 != 0)) &&
                   (iVar14 < 0x31)) {
                  uVar18 = uVar22;
                  if ((uVar19 & 7) == 0) {
                    lVar21 = 0;
                    bVar11 = false;
                  }
                  else {
                    lVar21 = 0;
                    while( true ) {
                      while (uVar5 = uVar20 & 7, uVar5 < 2) {
                        if (uVar5 == 0) {
                          bVar11 = false;
                          goto LAB_013e2f08;
                        }
                        if (uVar5 != 1) goto LAB_013e3440;
                        if (*(int *)(uVar18 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)) {
                          puVar9[4] = uVar15;
                          puVar9[3] = uVar22;
                          goto LAB_013e346c;
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
LAB_013e3440:
                          puVar9[4] = uVar15;
                          puVar9[3] = uVar22;
                          goto LAB_013e346c;
                        }
                        uVar18 = unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb);
                        uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar18 - 1) + 7);
                      }
                    }
                    bVar11 = true;
                  }
LAB_013e2f08:
                  if (bVar11) {
                    puVar9[4] = uVar15;
                    puVar9[3] = uVar22;
                    if ((uVar20 >> 4 & 1) != 0) {
LAB_013e346c:
                      puVar9[-2] = 0;
                      puVar9[-1] = puVar9[3];
                    /* WARNING: Subroutine does not return */
                      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580),puVar9[10],puVar9[5]);
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
                     ((uVar19 == 0x4e || ((0x2f < uVar19 && (uVar19 < 0x3a)))))) goto LAB_013e35c8;
                }
              }
              uVar18 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xf);
              if ((int)uVar18 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013e334c;
              uVar15 = unaff_x26 + (ulong)*(uint *)(uVar18 - 1);
              uVar19 = *(ushort *)(uVar15 + 7);
            } while( true );
          }
          if (0x3f < uVar3) {
            if (uVar3 != 0x43) goto LAB_013e35c8;
            uVar22 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
            goto LAB_013e2b9c;
          }
          uVar20 = *(uint *)(uVar12 + 3);
          if ((uVar20 & 0xc0000002) != 0) {
            if ((uVar20 >> 1 & 1) == 0) goto LAB_013e35c8;
            if ((uVar3 == 0x25) || (uVar3 == 0x2d)) {
              uVar22 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
            }
            else if ((uVar3 >> 5 & 1) != 0) goto LAB_013e35c8;
            goto LAB_013e2b9c;
          }
          uVar22 = (ulong)(uVar20 >> 3) & 0xffffff;
        }
      }
      puVar9[4] = uVar22;
      uVar18 = param_5;
      while( true ) {
        uVar12 = auVar31._0_8_;
        auVar7._8_8_ = auVar31._8_8_;
        auVar7._0_8_ = uVar17;
        auVar30._8_8_ = auVar31._8_8_;
        auVar30._0_8_ = uVar17;
        puVar9[3] = uVar15;
        if (uVar19 < 0x411) goto LAB_013e35c8;
        bVar6 = *(byte *)(uVar15 + 10) >> 3;
        if (0xe < bVar6) break;
        if (bVar6 < 6) {
          if (bVar6 < 3) {
            if (((bVar6 == 0) || (bVar6 == 1)) || (bVar6 == 2)) goto LAB_013e3134;
            goto LAB_013e35c8;
          }
          if (bVar6 == 3) goto LAB_013e3134;
          if ((bVar6 != 4) && (bVar6 != 5)) goto LAB_013e35c8;
          lVar21 = unaff_x26 + (ulong)*(uint *)(uVar18 + 7);
          if (uVar22 < (ulong)((long)((ulong)*(uint *)(lVar21 + 3) << 0x20) >> 0x21)) {
            if (*(long *)(lVar21 + uVar22 * 8 + 7) == -0x8000000080001) goto LAB_013e32a8;
            goto LAB_013e3340;
          }
LAB_013e314c:
          if (0xfffffffe < uVar22) goto LAB_013e35c8;
        }
        else if (bVar6 < 9) {
          if (((bVar6 != 6) && (bVar6 != 7)) && (bVar6 != 8)) goto LAB_013e35c8;
LAB_013e3134:
          lVar21 = unaff_x26 + (ulong)*(uint *)(uVar18 + 7);
          if ((ulong)((long)((ulong)*(uint *)(lVar21 + 3) << 0x20) >> 0x21) <= uVar22)
          goto LAB_013e314c;
          if (*(int *)(lVar21 + uVar22 * 4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
          goto LAB_013e3340;
        }
        else {
          if (bVar6 < 0xb) {
            if ((bVar6 == 9) || (bVar6 == 10)) goto LAB_013e3134;
            goto LAB_013e35c8;
          }
          if (bVar6 == 0xb) goto LAB_013e3134;
          if (bVar6 != 0xc) goto LAB_013e35c8;
LAB_013e318c:
          if (0xfffffffe < uVar22) goto LAB_013e35c8;
          uVar16 = unaff_x26 + (ulong)*(uint *)(uVar18 + 7);
          uVar20 = *(uint *)(uVar16 + 0xf);
          puVar9[1] = uVar16;
          puVar9[2] = ((long)(unaff_x26 + (ulong)uVar20 << 0x20) >> 0x21) - 1;
          pcVar8 = *(code **)(unaff_x26 + 0x1080);
          puVar9[-2] = in_stack_00000008;
          puVar9[-1] = param_5;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x13e31cc;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          uVar16 = puVar9[-1];
          auVar31 = (*pcVar8)(1);
          uVar13 = auVar31._8_8_;
          puVar9[-2] = 0;
          puVar9[-1] = uVar16;
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          uVar16 = auVar31._0_8_ & 0xffffffff;
          lVar21 = 0;
          uVar22 = puVar9[4];
          while( true ) {
            uVar12 = unaff_x26 +
                     (ulong)*(uint *)(puVar9[1] + ((uVar16 & puVar9[2]) * 3 + 4) * 4 + 7);
            if ((int)uVar12 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
            if ((uVar12 & 1) == 0) {
              if ((long)(uVar12 << 0x20) >> 0x21 == uVar22) {
                uVar17 = *(undefined8 *)(unaff_x26 + 0xc0);
                auVar31._8_8_ = uVar13;
                auVar31._0_8_ = puVar9[10];
                param_2 = puVar9[8];
                param_3 = puVar9[7];
                param_5 = puVar9[6];
                in_stack_00000008 = puVar9[0xf];
                uVar16 = *puVar9;
                goto LAB_013e3340;
              }
            }
            else if (((int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                    (*(double *)(uVar12 + 3) == (double)(long)uVar22)) {
              uVar17 = *(undefined8 *)(unaff_x26 + 0xc0);
              auVar31._8_8_ = uVar13;
              auVar31._0_8_ = puVar9[10];
              param_2 = puVar9[8];
              param_3 = puVar9[7];
              param_5 = puVar9[6];
              in_stack_00000008 = puVar9[0xf];
              uVar16 = *puVar9;
              goto LAB_013e3340;
            }
            lVar21 = lVar21 + 1;
            uVar16 = (uVar16 & puVar9[2]) + lVar21;
          }
          uVar17 = *(undefined8 *)(unaff_x26 + 0xc0);
          auVar31._8_8_ = uVar13;
          auVar31._0_8_ = puVar9[10];
          param_2 = puVar9[8];
          param_3 = puVar9[7];
          param_5 = puVar9[6];
          uVar15 = puVar9[3];
          in_stack_00000008 = puVar9[0xf];
          uVar16 = *puVar9;
        }
LAB_013e32a8:
        uVar12 = auVar31._0_8_;
        auVar30._8_8_ = auVar31._8_8_;
        auVar30._0_8_ = uVar17;
        uVar18 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xf);
        if ((int)uVar18 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013e334c;
        uVar15 = unaff_x26 + (ulong)*(uint *)(uVar18 - 1);
        uVar19 = *(ushort *)(uVar15 + 7);
      }
      if (bVar6 < 0x16) {
        if (bVar6 < 0x12) {
          if (bVar6 == 0xf) {
            if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb) + 7) <= uVar22)
            goto LAB_013e3134;
            goto LAB_013e3340;
          }
          if (bVar6 == 0x10) {
            if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb) + 7) <= uVar22)
            goto LAB_013e318c;
            goto LAB_013e3340;
          }
          if (bVar6 != 0x11) goto LAB_013e35c8;
        }
        else if (bVar6 < 0x14) {
          if ((bVar6 != 0x12) && (bVar6 != 0x13)) goto LAB_013e35c8;
        }
        else if ((bVar6 != 0x14) && (bVar6 != 0x15)) goto LAB_013e35c8;
      }
      else if (bVar6 < 0x19) {
        if (((bVar6 != 0x16) && (bVar6 != 0x17)) && (bVar6 != 0x18)) goto LAB_013e35c8;
      }
      else if (bVar6 < 0x1b) {
        if ((bVar6 != 0x19) && (bVar6 != 0x1a)) goto LAB_013e35c8;
      }
      else if (bVar6 != 0x1b) {
        if (bVar6 == 0x1c) goto LAB_013e32a8;
        goto LAB_013e35c8;
      }
      if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
         (auVar30 = auVar7, uVar22 < *(ulong *)(uVar18 + 0x1f))) {
LAB_013e3340:
        uVar12 = auVar31._0_8_;
        auVar30._8_8_ = auVar31._8_8_;
        auVar30._0_8_ = *(undefined8 *)(unaff_x26 + 0xb8);
      }
    }
LAB_013e334c:
    uVar13 = auVar30._8_8_;
    puVar10 = puVar9;
    if (auVar30._0_4_ == (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
      uVar16 = FUN_013c0ba0(1,param_5,uVar12,param_3,param_2,param_5,in_stack_00000008,uVar16,0);
      puVar9[-2] = uVar16;
      puVar9[-1] = puVar9[7];
      puVar9[-4] = puVar9[6];
      puVar9[-3] = puVar9[10];
      auVar31 = FUN_0133fcc0(3,puVar9[8],puVar9[7],puVar9[6],puVar9[10]);
      uVar13 = auVar31._8_8_;
      uVar16 = auVar31._0_8_;
      uVar17 = *(undefined8 *)(unaff_x26 + 0xc0);
      uVar20 = auVar31._0_4_;
      puVar10 = puVar9 + -4;
      if (uVar20 != (uint)uVar17) {
        if ((uVar16 & 1) == 0) {
joined_r0x013e33e8:
          puVar10 = puVar9 + -4;
          if (uVar20 != 0) goto LAB_013e341c;
        }
        else {
          puVar10 = puVar9 + -4;
          if ((uVar20 != (uint)*(undefined8 *)(unaff_x26 + 200)) &&
             (lVar21 = unaff_x26 + (ulong)*(uint *)(uVar16 - 1), puVar10 = puVar9 + -4,
             (*(byte *)(lVar21 + 9) >> 4 & 1) == 0)) {
            if ((int)lVar21 != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
              if (*(short *)(lVar21 + 7) == 0x41) {
                uVar20 = *(uint *)(uVar16 + 3) >> 1 & 0x3fffffff;
                goto joined_r0x013e33e8;
              }
LAB_013e341c:
              return *(undefined8 *)(unaff_x26 + 0xb8);
            }
            puVar10 = puVar9 + -4;
            if (0.0 < ABS(*(double *)(uVar16 + 3))) goto LAB_013e341c;
          }
        }
      }
    }
    if ((int)puVar10[9] == 0) {
      uVar16 = puVar10[10];
LAB_013e364c:
      if ((int)puVar10[9] == 0) {
        dVar28 = *(double *)(uVar16 + 3);
      }
      else {
        dVar28 = (double)((int)uVar16 >> 1);
      }
      dVar28 = dVar28 + 1.0;
      iVar14 = (int)dVar28;
      puVar10[10] = (ulong)dVar28;
      if ((dVar28 != (double)iVar14) ||
         (((iVar14 == 0 && ((long)dVar28 < 0)) || (SCARRY4(iVar14,iVar14))))) {
        uVar15 = **(ulong **)(unaff_x26 + 0x1428);
        uVar12 = uVar15 + 0xc;
        if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
          auVar31._8_8_ = uVar13;
          auVar31._0_8_ = uVar15 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar12;
        }
        else {
          auVar31 = FUN_01348560(uVar16,0xc);
          uVar17 = *(undefined8 *)(unaff_x26 + 0xc0);
        }
        *(int *)(auVar31._0_8_ + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(ulong *)(auVar31._0_8_ + 3) = puVar10[10];
      }
      else {
        auVar31._8_8_ = uVar13;
        auVar31._0_8_ = (long)(iVar14 * 2);
      }
    }
    else {
      uVar16 = puVar10[10];
      if (SCARRY4((int)uVar16,2)) goto LAB_013e364c;
      auVar31._8_8_ = uVar13;
      auVar31._0_8_ = (long)((int)uVar16 + 2);
    }
    param_2 = puVar10[8];
    param_3 = puVar10[7];
    param_5 = puVar10[6];
    uVar16 = *puVar10;
    in_stack_00000008 = puVar10[0xf];
    puVar9 = puVar10;
  } while( true );
}

