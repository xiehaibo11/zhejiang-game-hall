
/* WARNING: Removing unreachable block (ram,0x013758bc) */
/* WARNING: Removing unreachable block (ram,0x013758e4) */
/* WARNING: Removing unreachable block (ram,0x013758d8) */
/* WARNING: Removing unreachable block (ram,0x013758f0) */

ulong FUN_01374c40(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  double dVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ushort uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  long unaff_x26;
  double dVar26;
  double dVar27;
  ulong local_80;
  ulong local_78;
  long local_70;
  ulong local_68;
  ulong local_60;
  double local_58;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  ulong local_38;
  double local_30;
  
  local_68 = param_2;
  local_60 = param_5;
  local_48 = param_1;
  if (&local_80 <= *(undefined1 **)(unaff_x26 + 0x60)) {
    local_80 = param_4;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2048));
  }
  local_78 = (ulong)((param_3 & 1) == 0);
  dVar15 = 0.0;
LAB_01374cac:
  bVar9 = ((ulong)dVar15 & 1) == 0;
  local_38 = (ulong)bVar9;
  if (bVar9) {
    if ((int)local_78 == 0) {
      dVar27 = *(double *)(param_3 + 3);
      dVar26 = (double)(SUB84(dVar15,0) >> 1);
      goto LAB_01374cf8;
    }
    if ((int)param_3 <= SUB84(dVar15,0)) {
      return param_4;
    }
  }
  else {
    dVar26 = *(double *)((long)dVar15 + 3);
    if ((int)local_78 == 0) {
      dVar27 = *(double *)(param_3 + 3);
    }
    else {
      dVar27 = (double)((int)param_3 >> 1);
    }
LAB_01374cf8:
    if (dVar27 <= dVar26) {
      return param_4;
    }
  }
  local_80 = param_4;
  local_30 = dVar15;
  if ((local_68 & 1) == 0) {
LAB_01375a08:
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260));
  }
  uVar12 = unaff_x26 + (ulong)*(uint *)(local_68 - 1);
  uVar19 = *(ushort *)(uVar12 + 7);
  if (uVar19 < 0xa9) goto LAB_01375a08;
  if (uVar19 == 0xa9) {
    lVar13 = thunk_FUN_01349b90(dVar15);
    if ((*(int *)(lVar13 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
       (param_4 = local_80, uVar14 = local_60, uVar16 = local_78, dVar15 = local_30,
       uVar17 = local_68, (*(uint *)(lVar13 + 7) & 1) != 0)) goto LAB_0137556c;
    iVar11 = FUN_013fd060(local_68,lVar13);
    param_4 = local_80;
    uVar14 = local_60;
    uVar16 = local_78;
    dVar15 = local_30;
    uVar17 = local_68;
  }
  else {
    uVar14 = local_60;
    uVar16 = local_78;
    uVar17 = local_68;
    uVar18 = local_68;
    if (bVar9) {
      uVar21 = ((long)dVar15 << 0x20) >> 0x21;
      uVar23 = uVar21;
    }
    else {
      uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)((long)dVar15 - 1) + 7);
      if (((uVar3 != 0x42) ||
          (uVar21 = (ulong)*(double *)((long)dVar15 + 3),
          *(double *)((long)dVar15 + 3) != (double)(long)uVar21)) ||
         (uVar23 = uVar21, 0x3ffffffffffffe < uVar21 + 0x1fffffffffffff)) {
        uVar21 = (ulong)dVar15;
        if (uVar3 == 0x40) {
LAB_01374dc8:
          do {
            iVar11 = (int)uVar21;
            if (uVar19 < 0x411) {
              if ((uVar19 != 0xaa) || ((*(byte *)(uVar12 + 9) & 0x24) != 0)) goto LAB_01375a08;
              uVar18 = unaff_x26 + (ulong)*(uint *)(uVar18 + 3);
              if ((uVar18 & 1) == 0) {
                uVar18 = *(ulong *)(unaff_x26 + 0x410);
              }
              uVar23 = (ulong)(*(uint *)(uVar21 + 3) >> 3);
              lVar13 = 0;
              while( true ) {
                uVar23 = uVar23 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                uVar1 = uVar23 + 5;
                lVar22 = unaff_x26 + (ulong)*(uint *)(uVar18 + uVar1 * 4 + 7);
                if ((int)lVar22 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (*(int *)(lVar22 + 3) == iVar11) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar18 + 3) << 0x20) >> 0x21) <= uVar1) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(0,0x1375878);
                    (*pcVar8)();
                  }
                  if (*(int *)(lVar22 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
                  goto LAB_01375564;
                  break;
                }
                lVar13 = lVar13 + 1;
                uVar23 = uVar23 + lVar13;
              }
            }
            else if ((*(uint *)(uVar12 + 0xb) >> 0x15 & 1) == 0) {
              lVar13 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0x17);
              uVar20 = *(uint *)(uVar12 + 0xb) >> 10 & 0x3ff;
              if (uVar20 != 0) {
                if (uVar20 < 0x21) {
                  lVar22 = (long)(int)uVar20 * 3;
                  while (lVar22 != 0) {
                    lVar22 = lVar22 + -3;
                    if (*(int *)(lVar13 + lVar22 * 4 + 0xf) == iVar11) goto LAB_01375564;
                  }
                }
                else {
                  iVar5 = *(short *)(lVar13 + 5) + -1;
                  iVar25 = 0;
                  iVar24 = iVar5;
                  do {
                    iVar2 = iVar25 + ((uint)(iVar24 - iVar25) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar13 + (long)(int)(((uint)(*(int *)(lVar13 + (
                                                  long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)(uVar21 + 3)) {
                      iVar25 = iVar2 + 1;
                      iVar2 = iVar24;
                    }
                    iVar24 = iVar2;
                  } while (iVar25 != iVar24);
                  for (; iVar25 <= iVar5; iVar25 = iVar25 + 1) {
                    uVar6 = (uint)(*(int *)(lVar13 + (long)(iVar25 * 3) * 4 + 0x13) >> 1) >> 9 &
                            0x3ff;
                    lVar22 = unaff_x26 + (ulong)*(uint *)(lVar13 + (long)(int)(uVar6 * 3) * 4 + 0xf)
                    ;
                    if (*(uint *)(lVar22 + 3) != *(uint *)(uVar21 + 3)) break;
                    if ((int)lVar22 == iVar11) {
                      if (uVar6 < uVar20) goto LAB_01375564;
                      break;
                    }
                  }
                }
              }
            }
            else {
              uVar18 = unaff_x26 + (ulong)*(uint *)(uVar18 + 3);
              if ((uVar18 & 1) == 0) {
                uVar18 = *(ulong *)(unaff_x26 + 0x410);
              }
              uVar23 = (ulong)(*(uint *)(uVar21 + 3) >> 3);
              lVar13 = 0;
              while( true ) {
                uVar23 = uVar23 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                iVar25 = *(int *)(uVar18 + (uVar23 * 3 + 5) * 4 + 7);
                if (iVar25 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (iVar25 == iVar11) goto LAB_01375564;
                lVar13 = lVar13 + 1;
                uVar23 = uVar23 + lVar13;
              }
            }
            if (uVar19 == 0x41b) {
              uVar19 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar21 - 1) + 7);
              uVar20 = (uint)uVar19;
              if (((uVar19 < 0x40) && (iVar11 = *(int *)(uVar21 + 7) * 2, iVar11 != 0)) &&
                 (iVar11 < 0x31)) {
                uVar18 = uVar21;
                if ((uVar19 & 7) == 0) {
                  lVar13 = 0;
                  bVar9 = false;
                }
                else {
                  lVar13 = 0;
                  while( true ) {
                    while (uVar6 = uVar20 & 7, uVar6 < 2) {
                      if (uVar6 == 0) {
                        bVar9 = false;
                        goto LAB_0137512c;
                      }
                      if ((uVar6 != 1) ||
                         (*(int *)(uVar18 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                      goto LAB_01375908;
                      uVar18 = unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar18 - 1) + 7);
                    }
                    if (uVar6 == 2) break;
                    if (uVar6 == 3) {
                      uVar23 = unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb);
                      lVar13 = lVar13 + ((long)((ulong)*(uint *)(uVar18 + 0xf) << 0x20) >> 0x21);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar23 - 1) + 7);
                      uVar18 = uVar23;
                    }
                    else {
                      if (uVar6 != 5) goto LAB_01375908;
                      uVar18 = unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar18 - 1) + 7);
                    }
                  }
                  bVar9 = true;
                }
LAB_0137512c:
                if (bVar9) {
                  if ((uVar20 >> 4 & 1) != 0) {
LAB_01375908:
                    local_50 = uVar21;
                    local_40 = uVar12;
                    /* WARNING: Subroutine does not return */
                    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
                  }
                  lVar22 = *(long *)(uVar18 + 0x13);
                  local_50 = uVar21;
                  local_40 = uVar12;
                }
                else {
                  lVar22 = uVar18 + 0xb;
                }
                if ((uVar20 >> 3 & 1) == 0) {
                  uVar19 = *(ushort *)(lVar22 + lVar13 * 2);
                }
                else {
                  uVar19 = (ushort)*(byte *)(lVar22 + lVar13);
                }
                if (((uVar19 == 0x2d) || (uVar19 == 0x49)) ||
                   ((uVar19 == 0x4e || ((0x2f < uVar19 && (uVar19 < 0x3a)))))) goto LAB_01375a08;
              }
            }
            uVar18 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf);
            if ((int)uVar18 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0137556c;
            uVar12 = unaff_x26 + (ulong)*(uint *)(uVar18 - 1);
            uVar19 = *(ushort *)(uVar12 + 7);
          } while( true );
        }
        if (0x3f < uVar3) {
          if (uVar3 != 0x43) goto LAB_01375a08;
          uVar21 = unaff_x26 + (ulong)*(uint *)((long)dVar15 + 0xb);
          goto LAB_01374dc8;
        }
        uVar20 = *(uint *)((long)dVar15 + 3);
        if ((uVar20 & 0xc0000002) != 0) {
          if ((uVar20 >> 1 & 1) == 0) goto LAB_01375a08;
          if ((uVar3 == 0x25) || (uVar3 == 0x2d)) {
            uVar21 = unaff_x26 + (ulong)*(uint *)((long)dVar15 + 0xb);
          }
          else if ((uVar3 >> 5 & 1) != 0) goto LAB_01375a08;
          goto LAB_01374dc8;
        }
        uVar21 = (ulong)(uVar20 >> 3) & 0xffffff;
        uVar23 = uVar21;
      }
    }
    while( true ) {
      local_40 = uVar23;
      local_50 = uVar12;
      if (uVar19 < 0x411) goto LAB_01375a08;
      bVar7 = *(byte *)(uVar12 + 10) >> 3;
      if (0xe < bVar7) break;
      if (bVar7 < 6) {
        if (bVar7 < 3) {
          if (((bVar7 == 0) || (bVar7 == 1)) || (bVar7 == 2)) goto LAB_01375358;
          goto LAB_01375a08;
        }
        if (bVar7 == 3) goto LAB_01375358;
        if ((bVar7 != 4) && (bVar7 != 5)) goto LAB_01375a08;
        lVar13 = unaff_x26 + (ulong)*(uint *)(uVar18 + 7);
        if (uVar21 < (ulong)((long)((ulong)*(uint *)(lVar13 + 3) << 0x20) >> 0x21)) {
          if (*(long *)(lVar13 + uVar21 * 8 + 7) == -0x8000000080001) goto LAB_013754cc;
          goto LAB_01375564;
        }
LAB_01375370:
        if (0xfffffffe < uVar21) goto LAB_01375a08;
      }
      else if (bVar7 < 9) {
        if (((bVar7 != 6) && (bVar7 != 7)) && (bVar7 != 8)) goto LAB_01375a08;
LAB_01375358:
        lVar13 = unaff_x26 + (ulong)*(uint *)(uVar18 + 7);
        if ((ulong)((long)((ulong)*(uint *)(lVar13 + 3) << 0x20) >> 0x21) <= uVar21)
        goto LAB_01375370;
        if (*(int *)(lVar13 + uVar21 * 4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
        goto LAB_01375564;
      }
      else {
        if (bVar7 < 0xb) {
          if ((bVar7 == 9) || (bVar7 == 10)) goto LAB_01375358;
          goto LAB_01375a08;
        }
        if (bVar7 == 0xb) goto LAB_01375358;
        if (bVar7 != 0xc) goto LAB_01375a08;
LAB_013753b0:
        if (0xfffffffe < uVar21) goto LAB_01375a08;
        local_70 = unaff_x26 + (ulong)*(uint *)(uVar18 + 7);
        local_58 = (double)(((long)(unaff_x26 + (ulong)*(uint *)(local_70 + 0xf) << 0x20) >> 0x21) +
                           -1);
        *(undefined8 *)(unaff_x26 + 0x40) = 0x13753f0;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        uVar12 = (**(code **)(unaff_x26 + 0x1080))();
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        uVar12 = uVar12 & 0xffffffff;
        lVar13 = 0;
        while( true ) {
          uVar18 = unaff_x26 +
                   (ulong)*(uint *)(local_70 + ((uVar12 & (ulong)local_58) * 3 + 4) * 4 + 7);
          param_4 = local_80;
          uVar14 = local_60;
          uVar16 = local_78;
          dVar15 = local_30;
          uVar17 = local_68;
          uVar21 = local_40;
          if ((int)uVar18 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if ((uVar18 & 1) == 0) {
            if ((long)(uVar18 << 0x20) >> 0x21 == local_40) goto LAB_01375564;
          }
          else if (((int)uVar18 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                  (*(double *)(uVar18 + 3) == (double)(long)local_40)) goto LAB_01375564;
          lVar13 = lVar13 + 1;
          uVar12 = (uVar12 & (ulong)local_58) + lVar13;
        }
      }
LAB_013754cc:
      uVar18 = unaff_x26 + (ulong)*(uint *)(local_50 + 0xf);
      if ((int)uVar18 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0137556c;
      uVar12 = unaff_x26 + (ulong)*(uint *)(uVar18 - 1);
      uVar19 = *(ushort *)(uVar12 + 7);
      uVar23 = local_40;
    }
    if (bVar7 < 0x16) {
      if (bVar7 < 0x12) {
        if (bVar7 == 0xf) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb) + 7) <= uVar21)
          goto LAB_01375358;
          goto LAB_01375564;
        }
        if (bVar7 == 0x10) {
          if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb) + 7) <= uVar21)
          goto LAB_013753b0;
          goto LAB_01375564;
        }
        if (bVar7 != 0x11) goto LAB_01375a08;
      }
      else if (bVar7 < 0x14) {
        if ((bVar7 != 0x12) && (bVar7 != 0x13)) goto LAB_01375a08;
      }
      else if ((bVar7 != 0x14) && (bVar7 != 0x15)) goto LAB_01375a08;
    }
    else if (bVar7 < 0x19) {
      if (((bVar7 != 0x16) && (bVar7 != 0x17)) && (bVar7 != 0x18)) goto LAB_01375a08;
    }
    else if (bVar7 < 0x1b) {
      if ((bVar7 != 0x19) && (bVar7 != 0x1a)) goto LAB_01375a08;
    }
    else if (bVar7 != 0x1b) {
      if (bVar7 == 0x1c) goto LAB_013754cc;
      goto LAB_01375a08;
    }
    if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar18 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
       (uVar21 < *(ulong *)(uVar18 + 0x1f))) goto LAB_01375564;
LAB_0137556c:
    iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
  }
  goto LAB_01375570;
LAB_01375564:
  iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xb8);
LAB_01375570:
  if (iVar11 != (int)*(undefined8 *)(unaff_x26 + 0xb8)) goto LAB_013757a4;
  local_50 = FUN_013c0ba0(uVar17,dVar15,param_3,param_4,uVar14,uVar16,0);
  iVar11 = (int)local_60;
  bVar9 = (local_60 & 1) == 0;
  dVar15 = (double)(ulong)bVar9;
  local_58 = dVar15;
  if (bVar9) {
    if (0 < iVar11) goto LAB_013755c8;
  }
  else if (0.0 < *(double *)(local_60 + 3)) {
LAB_013755c8:
    if ((local_50 & 1) != 0) {
      sVar4 = *(short *)(unaff_x26 + (ulong)*(uint *)(local_50 - 1) + 7);
      if (sVar4 == 0x423) {
        uVar12 = unaff_x26 + (ulong)*(uint *)(local_50 + 0xb);
        if (bVar9) {
          if (SBORROW4(iVar11,2)) {
            local_58 = (double)(iVar11 >> 1);
            goto LAB_01375650;
          }
          lVar13 = (long)(iVar11 + -2);
        }
        else {
          local_58 = *(double *)(local_60 + 3);
LAB_01375650:
          uVar16 = **(ulong **)(unaff_x26 + 0x1428);
          uVar14 = uVar16 + 0xc;
          if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar13 = uVar16 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar14;
            dVar26 = local_58;
            local_58 = dVar15;
          }
          else {
            local_40 = uVar12;
            lVar13 = FUN_01348560(local_50,0xc);
            uVar12 = local_40;
            dVar26 = local_58;
          }
          *(int *)(lVar13 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(double *)(lVar13 + 3) = dVar26 + -1.0;
        }
        param_4 = FUN_01374c40(local_48,local_50,uVar12,local_80,lVar13,local_60);
LAB_013757a4:
        if ((int)local_38 == 0) {
          local_30 = *(double *)((long)local_30 + 3);
        }
        else {
          iVar11 = SUB84(local_30,0);
          if (!SCARRY4(iVar11,2)) {
            dVar15 = (double)(long)(iVar11 + 2);
            goto LAB_01374cac;
          }
          local_30 = (double)(iVar11 >> 1);
        }
        uVar14 = **(ulong **)(unaff_x26 + 0x1428);
        uVar12 = uVar14 + 0xc;
        local_80 = param_4;
        if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
          dVar15 = (double)(uVar14 + 1);
          **(ulong **)(unaff_x26 + 0x1428) = uVar12;
        }
        else {
          dVar15 = (double)FUN_01348560(param_4,0xc);
        }
        *(int *)((long)dVar15 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)((long)dVar15 + 3) = local_30 + 1.0;
        param_4 = local_80;
        goto LAB_01374cac;
      }
      if (sVar4 == 0xa9) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 7000));
      }
    }
  }
  bVar9 = (local_80 & 1) == 0;
  local_40 = (ulong)bVar9;
  uVar12 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x1b);
  bVar10 = (uVar12 & 1) == 0;
  if (bVar9) {
    if (bVar10) {
      if ((int)uVar12 <= (int)local_80) goto LAB_01375b98;
      goto LAB_0137570c;
    }
    dVar26 = *(double *)(uVar12 + 3);
    dVar15 = (double)((int)local_80 >> 1);
  }
  else {
    dVar15 = *(double *)(local_80 + 3);
    if (bVar10) {
      dVar26 = (double)((int)uVar12 >> 1);
    }
    else {
      dVar26 = *(double *)(uVar12 + 3);
    }
  }
  if (dVar26 <= dVar15) {
LAB_01375b98:
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
LAB_0137570c:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21e8));
}

