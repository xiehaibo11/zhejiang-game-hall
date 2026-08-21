
/* WARNING: Removing unreachable block (ram,0x013dcf50) */
/* WARNING: Removing unreachable block (ram,0x013dcfb4) */
/* WARNING: Removing unreachable block (ram,0x013dcf6c) */
/* WARNING: Removing unreachable block (ram,0x013dcfc0) */

undefined8
FUN_013dc560(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

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
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ushort uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  long unaff_x26;
  double dVar25;
  undefined1 local_70 [40];
  ulong local_48;
  undefined8 local_40;
  
  local_48 = param_4;
  local_40 = param_2;
  uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
  puVar8 = local_70;
LAB_013dc594:
  bVar10 = (param_5 & 1) == 0;
  uVar14 = (ulong)bVar10;
  *(undefined8 *)(puVar8 + 0x48) = param_3;
  *(ulong *)(puVar8 + 0x40) = param_5;
  *(ulong *)(puVar8 + 0x38) = uVar14;
  if (bVar10) {
    if ((int)param_5 < 0) goto LAB_013dceac;
  }
  else if (*(double *)(param_5 + 3) < 0.0) {
LAB_013dceac:
    if ((int)param_3 != (int)uVar13) {
      return param_3;
    }
    *(ulong *)(puVar8 + -0x10) = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x177);
    *(undefined8 *)(puVar8 + -8) = 0x130;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  if ((param_4 & 1) == 0) {
LAB_013dd0c0:
    *(ulong *)(puVar8 + -0x10) = param_5;
    *(ulong *)(puVar8 + -8) = param_4;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260),param_3,param_4,2);
  }
  lVar12 = unaff_x26 + (ulong)*(uint *)(param_4 - 1);
  uVar16 = *(ushort *)(lVar12 + 7);
  if (uVar16 < 0xa9) goto LAB_013dd0c0;
  if (uVar16 == 0xa9) {
    lVar12 = thunk_FUN_01349b90(param_5);
    if ((*(int *)(lVar12 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
       ((*(uint *)(lVar12 + 7) & 1) != 0)) {
      param_3 = *(undefined8 *)(puVar8 + 0x48);
      uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
      param_5 = *(ulong *)(puVar8 + 0x40);
      uVar14 = *(ulong *)(puVar8 + 0x38);
      param_2 = *(undefined8 *)(puVar8 + 0x30);
      param_4 = *(ulong *)(puVar8 + 0x28);
      goto LAB_013dce08;
    }
    iVar11 = FUN_013fd060(*(undefined8 *)(puVar8 + 0x28),lVar12);
    param_3 = *(undefined8 *)(puVar8 + 0x48);
    uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
    param_5 = *(ulong *)(puVar8 + 0x40);
    iVar24 = (int)*(undefined8 *)(puVar8 + 0x38);
    param_2 = *(undefined8 *)(puVar8 + 0x30);
    param_4 = *(ulong *)(puVar8 + 0x28);
  }
  else {
    if (bVar10) {
      uVar19 = (long)(param_5 << 0x20) >> 0x21;
    }
    else {
      uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_5 - 1) + 7);
      if (((uVar3 != 0x42) ||
          (uVar19 = (ulong)*(double *)(param_5 + 3),
          *(double *)(param_5 + 3) != (double)(long)uVar19)) ||
         (0x3ffffffffffffe < uVar19 + 0x1fffffffffffff)) {
        uVar19 = param_5;
        if (uVar3 == 0x40) {
LAB_013dc67c:
          uVar21 = *(ulong *)(unaff_x26 + 0x410);
          uVar15 = param_4;
          do {
            iVar11 = (int)uVar19;
            if (uVar16 < 0x411) {
              if ((uVar16 != 0xaa) || ((*(byte *)(lVar12 + 9) & 0x24) != 0)) goto LAB_013dd0c0;
              uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 3);
              if ((uVar15 & 1) == 0) {
                uVar15 = uVar21;
              }
              uVar22 = (ulong)(*(uint *)(uVar19 + 3) >> 3);
              lVar18 = 0;
              while( true ) {
                uVar22 = uVar22 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                uVar1 = uVar22 + 5;
                lVar20 = unaff_x26 + (ulong)*(uint *)(uVar15 + uVar1 * 4 + 7);
                if ((int)lVar20 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (*(int *)(lVar20 + 3) == iVar11) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar15 + 3) << 0x20) >> 0x21) <= uVar1) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(0,0x13dcf0c);
                    (*pcVar7)();
                  }
                  if (*(int *)(lVar20 + 0xb) != (int)uVar13) goto LAB_013dce00;
                  break;
                }
                lVar18 = lVar18 + 1;
                uVar22 = uVar22 + lVar18;
              }
            }
            else if ((*(uint *)(lVar12 + 0xb) >> 0x15 & 1) == 0) {
              lVar18 = unaff_x26 + (ulong)*(uint *)(lVar12 + 0x17);
              uVar17 = *(uint *)(lVar12 + 0xb) >> 10 & 0x3ff;
              if (uVar17 != 0) {
                if (uVar17 < 0x21) {
                  lVar20 = (long)(int)uVar17 * 3;
                  while (lVar20 != 0) {
                    lVar20 = lVar20 + -3;
                    if (*(int *)(lVar18 + lVar20 * 4 + 0xf) == iVar11) goto LAB_013dce00;
                  }
                }
                else {
                  iVar4 = *(short *)(lVar18 + 5) + -1;
                  iVar24 = 0;
                  iVar23 = iVar4;
                  do {
                    iVar2 = iVar24 + ((uint)(iVar23 - iVar24) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar18 + (long)(int)(((uint)(*(int *)(lVar18 + (
                                                  long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)(uVar19 + 3)) {
                      iVar24 = iVar2 + 1;
                      iVar2 = iVar23;
                    }
                    iVar23 = iVar2;
                  } while (iVar24 != iVar23);
                  for (; iVar24 <= iVar4; iVar24 = iVar24 + 1) {
                    uVar5 = (uint)(*(int *)(lVar18 + (long)(iVar24 * 3) * 4 + 0x13) >> 1) >> 9 &
                            0x3ff;
                    lVar20 = unaff_x26 + (ulong)*(uint *)(lVar18 + (long)(int)(uVar5 * 3) * 4 + 0xf)
                    ;
                    if (*(uint *)(lVar20 + 3) != *(uint *)(uVar19 + 3)) break;
                    if ((int)lVar20 == iVar11) {
                      if (uVar5 < uVar17) goto LAB_013dce00;
                      break;
                    }
                  }
                }
              }
            }
            else {
              uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 3);
              if ((uVar15 & 1) == 0) {
                uVar15 = uVar21;
              }
              uVar22 = (ulong)(*(uint *)(uVar19 + 3) >> 3);
              lVar18 = 0;
              while( true ) {
                uVar22 = uVar22 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                iVar24 = *(int *)(uVar15 + (uVar22 * 3 + 5) * 4 + 7);
                if (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (iVar24 == iVar11) goto LAB_013dce00;
                lVar18 = lVar18 + 1;
                uVar22 = uVar22 + lVar18;
              }
            }
            if (uVar16 == 0x41b) {
              uVar16 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar19 - 1) + 7);
              uVar17 = (uint)uVar16;
              if (((uVar16 < 0x40) && (iVar11 = *(int *)(uVar19 + 7) * 2, iVar11 != 0)) &&
                 (iVar11 < 0x31)) {
                uVar15 = uVar19;
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
                        goto LAB_013dc9e4;
                      }
                      if (uVar5 != 1) goto LAB_013dcf10;
                      if (*(int *)(uVar15 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)) {
                        *(long *)(puVar8 + 0x20) = lVar12;
                        *(ulong *)(puVar8 + 0x18) = uVar19;
                        goto LAB_013dcfd0;
                      }
                      uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
                      uVar17 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar15 - 1) + 7);
                    }
                    if (uVar5 == 2) break;
                    if (uVar5 == 3) {
                      uVar22 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
                      lVar18 = lVar18 + ((long)((ulong)*(uint *)(uVar15 + 0xf) << 0x20) >> 0x21);
                      uVar17 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar22 - 1) + 7);
                      uVar15 = uVar22;
                    }
                    else {
                      if (uVar5 != 5) {
LAB_013dcf10:
                        *(long *)(puVar8 + 0x20) = lVar12;
                        *(ulong *)(puVar8 + 0x18) = uVar19;
                        goto LAB_013dcfd0;
                      }
                      uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
                      uVar17 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar15 - 1) + 7);
                    }
                  }
                  bVar10 = true;
                }
LAB_013dc9e4:
                if (bVar10) {
                  *(long *)(puVar8 + 0x20) = lVar12;
                  *(ulong *)(puVar8 + 0x18) = uVar19;
                  if ((uVar17 >> 4 & 1) != 0) {
LAB_013dcfd0:
                    *(undefined8 *)(puVar8 + -0x10) = 0;
                    *(ulong *)(puVar8 + -8) = uVar19;
                    /* WARNING: Subroutine does not return */
                    FUN_013be7e0(1,2,*(undefined8 *)(unaff_x26 + 0x2580),param_3,param_4,param_5,
                                 param_2,0,uVar13);
                  }
                  lVar20 = *(long *)(uVar15 + 0x13);
                }
                else {
                  lVar20 = uVar15 + 0xb;
                }
                if ((uVar17 >> 3 & 1) == 0) {
                  uVar16 = *(ushort *)(lVar20 + lVar18 * 2);
                }
                else {
                  uVar16 = (ushort)*(byte *)(lVar20 + lVar18);
                }
                if (((uVar16 == 0x2d) || (uVar16 == 0x49)) ||
                   ((uVar16 == 0x4e || ((0x2f < uVar16 && (uVar16 < 0x3a)))))) goto LAB_013dd0c0;
              }
            }
            uVar15 = unaff_x26 + (ulong)*(uint *)(lVar12 + 0xf);
            if ((int)uVar15 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013dce08;
            lVar12 = unaff_x26 + (ulong)*(uint *)(uVar15 - 1);
            uVar16 = *(ushort *)(lVar12 + 7);
          } while( true );
        }
        if (0x3f < uVar3) {
          if (uVar3 != 0x43) goto LAB_013dd0c0;
          uVar19 = unaff_x26 + (ulong)*(uint *)(param_5 + 0xb);
          goto LAB_013dc67c;
        }
        uVar17 = *(uint *)(param_5 + 3);
        if ((uVar17 & 0xc0000002) != 0) {
          if ((uVar17 >> 1 & 1) == 0) goto LAB_013dd0c0;
          if ((uVar3 == 0x25) || (uVar3 == 0x2d)) {
            uVar19 = unaff_x26 + (ulong)*(uint *)(param_5 + 0xb);
          }
          else if ((uVar3 >> 5 & 1) != 0) goto LAB_013dd0c0;
          goto LAB_013dc67c;
        }
        uVar19 = (ulong)(uVar17 >> 3) & 0xffffff;
      }
    }
    *(ulong *)(puVar8 + 0x20) = uVar19;
    uVar15 = param_4;
    while( true ) {
      *(long *)(puVar8 + 0x18) = lVar12;
      if (uVar16 < 0x411) goto LAB_013dd0c0;
      bVar6 = *(byte *)(lVar12 + 10) >> 3;
      if (0xe < bVar6) break;
      if (bVar6 < 6) {
        if (bVar6 < 3) {
          if (((bVar6 == 0) || (bVar6 == 1)) || (bVar6 == 2)) goto LAB_013dcc10;
          goto LAB_013dd0c0;
        }
        if (bVar6 == 3) goto LAB_013dcc10;
        if ((bVar6 != 4) && (bVar6 != 5)) goto LAB_013dd0c0;
        lVar18 = unaff_x26 + (ulong)*(uint *)(uVar15 + 7);
        if (uVar19 < (ulong)((long)((ulong)*(uint *)(lVar18 + 3) << 0x20) >> 0x21)) {
          if (*(long *)(lVar18 + uVar19 * 8 + 7) == -0x8000000080001) goto LAB_013dcd78;
          goto LAB_013dce00;
        }
LAB_013dcc28:
        if (0xfffffffe < uVar19) goto LAB_013dd0c0;
      }
      else if (bVar6 < 9) {
        if (((bVar6 != 6) && (bVar6 != 7)) && (bVar6 != 8)) goto LAB_013dd0c0;
LAB_013dcc10:
        lVar18 = unaff_x26 + (ulong)*(uint *)(uVar15 + 7);
        if ((ulong)((long)((ulong)*(uint *)(lVar18 + 3) << 0x20) >> 0x21) <= uVar19)
        goto LAB_013dcc28;
        if (*(int *)(lVar18 + uVar19 * 4 + 7) != (int)uVar13) goto LAB_013dce00;
      }
      else {
        if (bVar6 < 0xb) {
          if ((bVar6 == 9) || (bVar6 == 10)) goto LAB_013dcc10;
          goto LAB_013dd0c0;
        }
        if (bVar6 == 0xb) goto LAB_013dcc10;
        if (bVar6 != 0xc) goto LAB_013dd0c0;
LAB_013dcc64:
        if (0xfffffffe < uVar19) goto LAB_013dd0c0;
        lVar12 = unaff_x26 + (ulong)*(uint *)(uVar15 + 7);
        uVar17 = *(uint *)(lVar12 + 0xf);
        *(long *)(puVar8 + 8) = lVar12;
        *(long *)(puVar8 + 0x10) = ((long)(unaff_x26 + (ulong)uVar17 << 0x20) >> 0x21) + -1;
        pcVar7 = *(code **)(unaff_x26 + 0x1080);
        *(undefined8 *)(puVar8 + -0x10) = param_2;
        *(ulong *)(puVar8 + -8) = param_5;
        *(undefined8 *)(unaff_x26 + 0x40) = 0x13dcca4;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        uVar13 = *(undefined8 *)(puVar8 + -8);
        uVar14 = (*pcVar7)();
        *(undefined8 *)(puVar8 + -0x10) = 0;
        *(undefined8 *)(puVar8 + -8) = uVar13;
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        uVar14 = uVar14 & 0xffffffff;
        lVar12 = 0;
        uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
        uVar19 = *(ulong *)(puVar8 + 0x20);
        while( true ) {
          uVar15 = unaff_x26 +
                   (ulong)*(uint *)(*(long *)(puVar8 + 8) +
                                   ((uVar14 & *(ulong *)(puVar8 + 0x10)) * 3 + 4) * 4 + 7);
          if ((int)uVar15 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if ((uVar15 & 1) == 0) {
            if ((long)(uVar15 << 0x20) >> 0x21 == uVar19) {
              param_3 = *(undefined8 *)(puVar8 + 0x48);
              param_5 = *(ulong *)(puVar8 + 0x40);
              uVar14 = *(ulong *)(puVar8 + 0x38);
              param_2 = *(undefined8 *)(puVar8 + 0x30);
              param_4 = *(ulong *)(puVar8 + 0x28);
              goto LAB_013dce00;
            }
          }
          else if (((int)uVar15 != (int)uVar13) && (*(double *)(uVar15 + 3) == (double)(long)uVar19)
                  ) {
            param_3 = *(undefined8 *)(puVar8 + 0x48);
            param_5 = *(ulong *)(puVar8 + 0x40);
            uVar14 = *(ulong *)(puVar8 + 0x38);
            param_2 = *(undefined8 *)(puVar8 + 0x30);
            param_4 = *(ulong *)(puVar8 + 0x28);
            goto LAB_013dce00;
          }
          lVar12 = lVar12 + 1;
          uVar14 = (uVar14 & *(ulong *)(puVar8 + 0x10)) + lVar12;
        }
        param_3 = *(undefined8 *)(puVar8 + 0x48);
        param_5 = *(ulong *)(puVar8 + 0x40);
        uVar14 = *(ulong *)(puVar8 + 0x38);
        param_2 = *(undefined8 *)(puVar8 + 0x30);
        param_4 = *(ulong *)(puVar8 + 0x28);
        lVar12 = *(long *)(puVar8 + 0x18);
      }
LAB_013dcd78:
      uVar15 = unaff_x26 + (ulong)*(uint *)(lVar12 + 0xf);
      if ((int)uVar15 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013dce08;
      lVar12 = unaff_x26 + (ulong)*(uint *)(uVar15 - 1);
      uVar16 = *(ushort *)(lVar12 + 7);
    }
    if (bVar6 < 0x16) {
      if (bVar6 < 0x12) {
        if (bVar6 == 0xf) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb) + 7) <= uVar19)
          goto LAB_013dcc10;
          goto LAB_013dce00;
        }
        if (bVar6 == 0x10) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb) + 7) <= uVar19)
          goto LAB_013dcc64;
          goto LAB_013dce00;
        }
        if (bVar6 != 0x11) goto LAB_013dd0c0;
      }
      else if (bVar6 < 0x14) {
        if ((bVar6 != 0x12) && (bVar6 != 0x13)) goto LAB_013dd0c0;
      }
      else if ((bVar6 != 0x14) && (bVar6 != 0x15)) goto LAB_013dd0c0;
    }
    else if (bVar6 < 0x19) {
      if (((bVar6 != 0x16) && (bVar6 != 0x17)) && (bVar6 != 0x18)) goto LAB_013dd0c0;
    }
    else if (bVar6 < 0x1b) {
      if ((bVar6 != 0x19) && (bVar6 != 0x1a)) goto LAB_013dd0c0;
    }
    else if (bVar6 != 0x1b) {
      if (bVar6 == 0x1c) goto LAB_013dcd78;
      goto LAB_013dd0c0;
    }
    if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
       (uVar19 < *(ulong *)(uVar15 + 0x1f))) goto LAB_013dce00;
LAB_013dce08:
    iVar24 = (int)uVar14;
    iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
  }
  goto LAB_013dce0c;
LAB_013dce00:
  iVar24 = (int)uVar14;
  iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xb8);
LAB_013dce0c:
  puVar9 = puVar8;
  if (iVar11 == (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
    param_3 = FUN_013c0ba0(param_4,param_5);
    uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
    if ((int)*(undefined8 *)(puVar8 + 0x48) != (int)uVar13) {
      puVar9 = puVar8 + -0x30;
      *(undefined8 *)(puVar8 + -8) = 0;
      uVar13 = *(undefined8 *)(unaff_x26 + 0xa0);
      *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + 0x48);
      *(undefined8 *)(puVar8 + -0x10) = uVar13;
      *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + 0x40);
      *(undefined8 *)(puVar8 + -0x20) = param_3;
      *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + 0x28);
      param_3 = FUN_0133fb80(4,*(undefined8 *)(puVar8 + 0x30));
      uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
    }
    param_5 = *(ulong *)(puVar9 + 0x40);
    iVar24 = (int)*(undefined8 *)(puVar9 + 0x38);
    param_2 = *(undefined8 *)(puVar9 + 0x30);
    param_4 = *(ulong *)(puVar9 + 0x28);
  }
  iVar11 = (int)param_5;
  puVar8 = puVar9;
  if ((iVar24 == 0) || (SBORROW4(iVar11,2))) {
    *(undefined8 *)(puVar9 + 0x48) = param_3;
    if (iVar24 == 0) {
      dVar25 = *(double *)(param_5 + 3);
    }
    else {
      dVar25 = (double)(iVar11 >> 1);
    }
    dVar25 = dVar25 - 1.0;
    iVar11 = (int)dVar25;
    *(double *)(puVar9 + 0x40) = dVar25;
    if ((dVar25 != (double)iVar11) ||
       (((iVar11 == 0 && ((long)dVar25 < 0)) || (SCARRY4(iVar11,iVar11))))) {
      param_5 = **(ulong **)(unaff_x26 + 0x1428);
      uVar14 = param_5 + 0xc;
      if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
        param_5 = param_5 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar14;
      }
      else {
        param_5 = FUN_01348560(2,0xc);
        uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
        param_3 = *(undefined8 *)(puVar9 + 0x48);
        param_2 = *(undefined8 *)(puVar9 + 0x30);
        param_4 = *(ulong *)(puVar9 + 0x28);
      }
      *(int *)(param_5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
      *(undefined8 *)(param_5 + 3) = *(undefined8 *)(puVar9 + 0x40);
    }
    else {
      param_5 = (ulong)(iVar11 * 2);
    }
  }
  else {
    param_5 = (ulong)(iVar11 + -2);
  }
  goto LAB_013dc594;
}

