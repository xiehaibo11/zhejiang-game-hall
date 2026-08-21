
/* WARNING: Removing unreachable block (ram,0x01376968) */
/* WARNING: Removing unreachable block (ram,0x01376994) */
/* WARNING: Removing unreachable block (ram,0x01376984) */
/* WARNING: Removing unreachable block (ram,0x013769a0) */

double FUN_01375ce0(undefined8 param_1,double param_2,double param_3,double param_4,double param_5)

{
  ulong uVar1;
  int iVar2;
  double dVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  code *pcVar9;
  double *pdVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  double dVar16;
  ushort uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  long unaff_x26;
  double dVar25;
  double dVar26;
  double dVar27;
  double local_c0 [18];
  double local_28;
  undefined8 local_18;
  
  pdVar10 = local_c0 + 8;
  local_18 = 0x1a;
  uVar15 = (ulong)(((ulong)param_3 & 1) == 0);
  local_c0[10] = param_2;
  local_28 = param_3;
  local_c0[0xe] = (double)param_1;
  local_c0[0xb] = param_5;
  local_c0[8] = (double)uVar15;
  dVar16 = 0.0;
LAB_01375d3c:
  bVar11 = ((ulong)dVar16 & 1) == 0;
  pdVar10[0xc] = param_4;
  pdVar10[9] = dVar16;
  pdVar10[8] = (double)(ulong)bVar11;
  if (bVar11) {
    if ((int)uVar15 == 0) {
      dVar26 = *(double *)((long)param_3 + 3);
      dVar25 = (double)(SUB84(dVar16,0) >> 1);
      goto LAB_01375d90;
    }
    if (SUB84(param_3,0) <= SUB84(dVar16,0)) {
      return param_4;
    }
  }
  else {
    dVar25 = *(double *)((long)dVar16 + 3);
    if ((int)uVar15 == 0) {
      dVar26 = *(double *)((long)param_3 + 3);
    }
    else {
      dVar26 = (double)(SUB84(param_3,0) >> 1);
    }
LAB_01375d90:
    if (dVar26 <= dVar25) {
      return param_4;
    }
  }
  if (((ulong)param_2 & 1) == 0) {
LAB_01376ad4:
    pdVar10[-2] = dVar16;
    pdVar10[-1] = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260));
  }
  dVar25 = (double)(unaff_x26 + (ulong)*(uint *)((long)param_2 - 1));
  uVar17 = *(ushort *)((long)dVar25 + 7);
  if (uVar17 < 0xa9) goto LAB_01376ad4;
  if (uVar17 == 0xa9) {
    lVar14 = thunk_FUN_01349b90(dVar16);
    if ((*(int *)(lVar14 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
       ((*(uint *)(lVar14 + 7) & 1) != 0)) {
      param_4 = pdVar10[0xc];
      param_3 = pdVar10[0xb];
      dVar16 = pdVar10[9];
      param_5 = pdVar10[3];
      param_2 = pdVar10[2];
      uVar15 = (ulong)*pdVar10;
      goto LAB_01376620;
    }
    iVar13 = FUN_013fd060(pdVar10[2],lVar14);
    param_4 = pdVar10[0xc];
    param_3 = pdVar10[0xb];
    dVar16 = pdVar10[9];
    param_5 = pdVar10[3];
    param_2 = pdVar10[2];
    uVar15 = (ulong)*pdVar10;
  }
  else {
    if (bVar11) {
      dVar26 = (double)(((long)dVar16 << 0x20) >> 0x21);
    }
    else {
      uVar4 = *(ushort *)(unaff_x26 + (ulong)*(uint *)((long)dVar16 - 1) + 7);
      if (((uVar4 != 0x42) ||
          (dVar26 = (double)(long)*(double *)((long)dVar16 + 3),
          *(double *)((long)dVar16 + 3) != (double)(long)dVar26)) ||
         (0x3ffffffffffffe < (long)dVar26 + 0x1fffffffffffffU)) {
        dVar26 = dVar16;
        if (uVar4 == 0x40) {
LAB_01375e60:
          uVar20 = *(ulong *)(unaff_x26 + 0x410);
          dVar27 = param_2;
          do {
            iVar13 = SUB84(dVar26,0);
            if (uVar17 < 0x411) {
              if ((uVar17 != 0xaa) || ((*(byte *)((long)dVar25 + 9) & 0x24) != 0))
              goto LAB_01376ad4;
              uVar19 = unaff_x26 + (ulong)*(uint *)((long)dVar27 + 3);
              if ((uVar19 & 1) == 0) {
                uVar19 = uVar20;
              }
              uVar22 = (ulong)(*(uint *)((long)dVar26 + 3) >> 3);
              lVar14 = 0;
              while( true ) {
                uVar22 = uVar22 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                uVar1 = uVar22 + 5;
                lVar21 = unaff_x26 + (ulong)*(uint *)(uVar19 + uVar1 * 4 + 7);
                if ((int)lVar21 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (*(int *)(lVar21 + 3) == iVar13) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar19 + 3) << 0x20) >> 0x21) <= uVar1) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(0,0x1376924);
                    (*pcVar9)();
                  }
                  if (*(int *)(lVar21 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
                  goto LAB_01376618;
                  break;
                }
                lVar14 = lVar14 + 1;
                uVar22 = uVar22 + lVar14;
              }
            }
            else if ((*(uint *)((long)dVar25 + 0xb) >> 0x15 & 1) == 0) {
              lVar14 = unaff_x26 + (ulong)*(uint *)((long)dVar25 + 0x17);
              uVar18 = *(uint *)((long)dVar25 + 0xb) >> 10 & 0x3ff;
              if (uVar18 != 0) {
                if (uVar18 < 0x21) {
                  lVar21 = (long)(int)uVar18 * 3;
                  while (lVar21 != 0) {
                    lVar21 = lVar21 + -3;
                    if (*(int *)(lVar14 + lVar21 * 4 + 0xf) == iVar13) goto LAB_01376618;
                  }
                }
                else {
                  iVar6 = *(short *)(lVar14 + 5) + -1;
                  iVar24 = 0;
                  iVar23 = iVar6;
                  do {
                    iVar2 = iVar24 + ((uint)(iVar23 - iVar24) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar14 + (long)(int)(((uint)(*(int *)(lVar14 + (
                                                  long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)((long)dVar26 + 3))
                    {
                      iVar24 = iVar2 + 1;
                      iVar2 = iVar23;
                    }
                    iVar23 = iVar2;
                  } while (iVar24 != iVar23);
                  for (; iVar24 <= iVar6; iVar24 = iVar24 + 1) {
                    uVar7 = (uint)(*(int *)(lVar14 + (long)(iVar24 * 3) * 4 + 0x13) >> 1) >> 9 &
                            0x3ff;
                    lVar21 = unaff_x26 + (ulong)*(uint *)(lVar14 + (long)(int)(uVar7 * 3) * 4 + 0xf)
                    ;
                    if (*(uint *)(lVar21 + 3) != *(uint *)((long)dVar26 + 3)) break;
                    if ((int)lVar21 == iVar13) {
                      if (uVar7 < uVar18) goto LAB_01376618;
                      break;
                    }
                  }
                }
              }
            }
            else {
              uVar19 = unaff_x26 + (ulong)*(uint *)((long)dVar27 + 3);
              if ((uVar19 & 1) == 0) {
                uVar19 = uVar20;
              }
              uVar22 = (ulong)(*(uint *)((long)dVar26 + 3) >> 3);
              lVar14 = 0;
              while( true ) {
                uVar22 = uVar22 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                iVar24 = *(int *)(uVar19 + (uVar22 * 3 + 5) * 4 + 7);
                if (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (iVar24 == iVar13) goto LAB_01376618;
                lVar14 = lVar14 + 1;
                uVar22 = uVar22 + lVar14;
              }
            }
            if (uVar17 == 0x41b) {
              uVar17 = *(ushort *)(unaff_x26 + (ulong)*(uint *)((long)dVar26 - 1) + 7);
              uVar18 = (uint)uVar17;
              if (((uVar17 < 0x40) && (iVar13 = *(int *)((long)dVar26 + 7) * 2, iVar13 != 0)) &&
                 (iVar13 < 0x31)) {
                dVar27 = dVar26;
                if ((uVar17 & 7) == 0) {
                  lVar14 = 0;
                  bVar11 = false;
                }
                else {
                  lVar14 = 0;
                  while( true ) {
                    while (uVar7 = uVar18 & 7, uVar7 < 2) {
                      if (uVar7 == 0) {
                        bVar11 = false;
                        goto LAB_013761c4;
                      }
                      if (uVar7 != 1) goto LAB_01376928;
                      if (*(int *)((long)dVar27 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)) {
                        pdVar10[7] = dVar25;
                        pdVar10[5] = dVar26;
                        goto LAB_01376954;
                      }
                      dVar27 = (double)(unaff_x26 + (ulong)*(uint *)((long)dVar27 + 0xb));
                      uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)((long)dVar27 - 1) + 7)
                      ;
                    }
                    if (uVar7 == 2) break;
                    if (uVar7 == 3) {
                      dVar3 = (double)(unaff_x26 + (ulong)*(uint *)((long)dVar27 + 0xb));
                      lVar14 = lVar14 + ((long)((ulong)*(uint *)((long)dVar27 + 0xf) << 0x20) >>
                                        0x21);
                      uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)((long)dVar3 - 1) + 7);
                      dVar27 = dVar3;
                    }
                    else {
                      if (uVar7 != 5) {
LAB_01376928:
                        pdVar10[7] = dVar25;
                        pdVar10[5] = dVar26;
                        goto LAB_01376954;
                      }
                      dVar27 = (double)(unaff_x26 + (ulong)*(uint *)((long)dVar27 + 0xb));
                      uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)((long)dVar27 - 1) + 7)
                      ;
                    }
                  }
                  bVar11 = true;
                }
LAB_013761c4:
                if (bVar11) {
                  pdVar10[7] = dVar25;
                  pdVar10[5] = dVar26;
                  if ((uVar18 >> 4 & 1) != 0) {
LAB_01376954:
                    pdVar10[-2] = 0.0;
                    pdVar10[-1] = pdVar10[5];
                    /* WARNING: Subroutine does not return */
                    FUN_013be7e0(pdVar10[6],2,*(undefined8 *)(unaff_x26 + 0x2580));
                  }
                  lVar21 = *(long *)((long)dVar27 + 0x13);
                }
                else {
                  lVar21 = (long)dVar27 + 0xb;
                }
                if ((uVar18 >> 3 & 1) == 0) {
                  uVar17 = *(ushort *)(lVar21 + lVar14 * 2);
                }
                else {
                  uVar17 = (ushort)*(byte *)(lVar21 + lVar14);
                }
                if (((uVar17 == 0x2d) || (uVar17 == 0x49)) ||
                   ((uVar17 == 0x4e || ((0x2f < uVar17 && (uVar17 < 0x3a)))))) goto LAB_01376ad4;
              }
            }
            dVar27 = (double)(unaff_x26 + (ulong)*(uint *)((long)dVar25 + 0xf));
            if (SUB84(dVar27,0) == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_01376620;
            dVar25 = (double)(unaff_x26 + (ulong)*(uint *)((long)dVar27 - 1));
            uVar17 = *(ushort *)((long)dVar25 + 7);
          } while( true );
        }
        if (0x3f < uVar4) {
          if (uVar4 != 0x43) goto LAB_01376ad4;
          dVar26 = (double)(unaff_x26 + (ulong)*(uint *)((long)dVar16 + 0xb));
          goto LAB_01375e60;
        }
        uVar18 = *(uint *)((long)dVar16 + 3);
        if ((uVar18 & 0xc0000002) != 0) {
          if ((uVar18 >> 1 & 1) == 0) goto LAB_01376ad4;
          if ((uVar4 == 0x25) || (uVar4 == 0x2d)) {
            dVar26 = (double)(unaff_x26 + (ulong)*(uint *)((long)dVar16 + 0xb));
          }
          else if ((uVar4 >> 5 & 1) != 0) goto LAB_01376ad4;
          goto LAB_01375e60;
        }
        dVar26 = (double)((ulong)(uVar18 >> 3) & 0xffffff);
      }
    }
    pdVar10[7] = dVar26;
    dVar27 = param_2;
    while( true ) {
      pdVar10[5] = dVar25;
      if (uVar17 < 0x411) goto LAB_01376ad4;
      bVar8 = *(byte *)((long)dVar25 + 10) >> 3;
      if (0xe < bVar8) break;
      if (bVar8 < 6) {
        if (bVar8 < 3) {
          if (((bVar8 == 0) || (bVar8 == 1)) || (bVar8 == 2)) goto LAB_013763f0;
          goto LAB_01376ad4;
        }
        if (bVar8 == 3) goto LAB_013763f0;
        if ((bVar8 != 4) && (bVar8 != 5)) goto LAB_01376ad4;
        lVar14 = unaff_x26 + (ulong)*(uint *)((long)dVar27 + 7);
        if ((ulong)dVar26 < (ulong)((long)((ulong)*(uint *)(lVar14 + 3) << 0x20) >> 0x21)) {
          if (*(long *)(lVar14 + (long)dVar26 * 8 + 7) == -0x8000000080001) goto LAB_01376570;
          goto LAB_01376618;
        }
LAB_01376408:
        if (0xfffffffe < (ulong)dVar26) goto LAB_01376ad4;
      }
      else if (bVar8 < 9) {
        if (((bVar8 != 6) && (bVar8 != 7)) && (bVar8 != 8)) goto LAB_01376ad4;
LAB_013763f0:
        lVar14 = unaff_x26 + (ulong)*(uint *)((long)dVar27 + 7);
        if ((ulong)((long)((ulong)*(uint *)(lVar14 + 3) << 0x20) >> 0x21) <= (ulong)dVar26)
        goto LAB_01376408;
        if (*(int *)(lVar14 + (long)dVar26 * 4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
        goto LAB_01376618;
      }
      else {
        if (bVar8 < 0xb) {
          if ((bVar8 == 9) || (bVar8 == 10)) goto LAB_013763f0;
          goto LAB_01376ad4;
        }
        if (bVar8 == 0xb) goto LAB_013763f0;
        if (bVar8 != 0xc) goto LAB_01376ad4;
LAB_01376448:
        if (0xfffffffe < (ulong)dVar26) goto LAB_01376ad4;
        dVar16 = (double)(unaff_x26 + (ulong)*(uint *)((long)dVar27 + 7));
        uVar18 = *(uint *)((long)dVar16 + 0xf);
        pdVar10[1] = dVar16;
        pdVar10[4] = (double)(((long)(unaff_x26 + (ulong)uVar18 << 0x20) >> 0x21) - 1);
        pcVar9 = *(code **)(unaff_x26 + 0x1080);
        pdVar10[-2] = (double)uVar15;
        pdVar10[-1] = param_5;
        *(undefined8 *)(unaff_x26 + 0x40) = 0x137648c;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        dVar16 = pdVar10[-1];
        uVar15 = (*pcVar9)(0);
        pdVar10[-2] = 0.0;
        pdVar10[-1] = dVar16;
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        uVar15 = uVar15 & 0xffffffff;
        lVar14 = 0;
        dVar26 = pdVar10[7];
        while( true ) {
          uVar20 = unaff_x26 +
                   (ulong)*(uint *)((long)pdVar10[1] +
                                   ((uVar15 & (ulong)pdVar10[4]) * 3 + 4) * 4 + 7);
          if ((int)uVar20 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if ((uVar20 & 1) == 0) {
            if ((double)((long)(uVar20 << 0x20) >> 0x21) == dVar26) {
              param_4 = pdVar10[0xc];
              param_3 = pdVar10[0xb];
              dVar16 = pdVar10[9];
              param_5 = pdVar10[3];
              param_2 = pdVar10[2];
              uVar15 = (ulong)*pdVar10;
              goto LAB_01376618;
            }
          }
          else if (((int)uVar20 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                  (*(double *)(uVar20 + 3) == (double)(long)dVar26)) {
            param_4 = pdVar10[0xc];
            param_3 = pdVar10[0xb];
            dVar16 = pdVar10[9];
            param_5 = pdVar10[3];
            param_2 = pdVar10[2];
            uVar15 = (ulong)*pdVar10;
            goto LAB_01376618;
          }
          lVar14 = lVar14 + 1;
          uVar15 = (uVar15 & (ulong)pdVar10[4]) + lVar14;
        }
        param_4 = pdVar10[0xc];
        param_3 = pdVar10[0xb];
        dVar16 = pdVar10[9];
        param_5 = pdVar10[3];
        param_2 = pdVar10[2];
        dVar25 = pdVar10[5];
        uVar15 = (ulong)*pdVar10;
      }
LAB_01376570:
      dVar27 = (double)(unaff_x26 + (ulong)*(uint *)((long)dVar25 + 0xf));
      if (SUB84(dVar27,0) == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_01376620;
      dVar25 = (double)(unaff_x26 + (ulong)*(uint *)((long)dVar27 - 1));
      uVar17 = *(ushort *)((long)dVar25 + 7);
    }
    if (bVar8 < 0x16) {
      if (bVar8 < 0x12) {
        if (bVar8 == 0xf) {
          if ((ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)((long)dVar27 + 0xb) + 7) <=
              (ulong)dVar26) goto LAB_013763f0;
          goto LAB_01376618;
        }
        if (bVar8 == 0x10) {
          if ((ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)((long)dVar27 + 0xb) + 7) <=
              (ulong)dVar26) goto LAB_01376448;
          goto LAB_01376618;
        }
        if (bVar8 != 0x11) goto LAB_01376ad4;
      }
      else if (bVar8 < 0x14) {
        if ((bVar8 != 0x12) && (bVar8 != 0x13)) goto LAB_01376ad4;
      }
      else if ((bVar8 != 0x14) && (bVar8 != 0x15)) goto LAB_01376ad4;
    }
    else if (bVar8 < 0x19) {
      if (((bVar8 != 0x16) && (bVar8 != 0x17)) && (bVar8 != 0x18)) goto LAB_01376ad4;
    }
    else if (bVar8 < 0x1b) {
      if ((bVar8 != 0x19) && (bVar8 != 0x1a)) goto LAB_01376ad4;
    }
    else if (bVar8 != 0x1b) {
      if (bVar8 == 0x1c) goto LAB_01376570;
      goto LAB_01376ad4;
    }
    if (((*(uint *)(unaff_x26 + (ulong)*(uint *)((long)dVar27 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
       ((ulong)dVar26 < (ulong)*(double *)((long)dVar27 + 0x1f))) goto LAB_01376618;
LAB_01376620:
    iVar13 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
  }
  goto LAB_01376624;
LAB_01376618:
  iVar13 = (int)*(undefined8 *)(unaff_x26 + 0xb8);
LAB_01376624:
  if (iVar13 == (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
    dVar16 = (double)FUN_013c0ba0(0,param_2,dVar16,param_3,param_4,param_5,uVar15,0);
    pdVar10[-2] = dVar16;
    pdVar10[-1] = pdVar10[0x10];
    pdVar10[-4] = pdVar10[2];
    pdVar10[-3] = pdVar10[9];
    dVar16 = (double)FUN_0133fcc0(3,3,pdVar10[0x11]);
    dVar25 = pdVar10[-1];
    iVar13 = SUB84(dVar25,0);
    bVar11 = ((ulong)dVar25 & 1) == 0;
    pdVar10[1] = dVar16;
    *pdVar10 = (double)(ulong)bVar11;
    if (bVar11) {
      if (0 < iVar13) goto LAB_013766ac;
    }
    else if (0.0 < *(double *)((long)dVar25 + 3)) {
LAB_013766ac:
      if (((ulong)dVar16 & 1) != 0) {
        sVar5 = *(short *)(unaff_x26 + (ulong)*(uint *)((long)dVar16 - 1) + 7);
        if (sVar5 == 0x423) {
          dVar26 = (double)(unaff_x26 + (ulong)*(uint *)((long)dVar16 + 0xb));
          if (bVar11) {
            if (SBORROW4(iVar13,2)) {
              dVar27 = (double)(iVar13 >> 1);
              goto LAB_01376734;
            }
            lVar14 = (long)(iVar13 + -2);
          }
          else {
            dVar27 = *(double *)((long)dVar25 + 3);
LAB_01376734:
            uVar20 = **(ulong **)(unaff_x26 + 0x1428);
            uVar15 = uVar20 + 0xc;
            if (uVar15 < **(ulong **)(unaff_x26 + 0x1430)) {
              lVar14 = uVar20 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar15;
            }
            else {
              pdVar10[3] = dVar26;
              *pdVar10 = dVar27;
              lVar14 = FUN_01348560(dVar16,0xc);
              dVar16 = pdVar10[1];
              dVar26 = pdVar10[3];
              dVar27 = *pdVar10;
              dVar25 = pdVar10[-1];
            }
            *(int *)(lVar14 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(double *)(lVar14 + 3) = dVar27 + -1.0;
          }
          param_4 = (double)FUN_01374c40(pdVar10[2],dVar16,dVar26,pdVar10[8],lVar14,dVar25);
          pdVar10 = pdVar10 + -4;
          goto LAB_01376888;
        }
        if (sVar5 == 0xa9) {
          pdVar10[-5] = 0.0;
          pdVar10[-6] = dVar16;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 7000));
        }
      }
    }
    dVar25 = pdVar10[8];
    bVar11 = ((ulong)dVar25 & 1) == 0;
    uVar15 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x1f);
    bVar12 = (uVar15 & 1) == 0;
    pdVar10[3] = (double)(ulong)bVar11;
    if (bVar11) {
      if (bVar12) {
        if ((int)uVar15 <= SUB84(dVar25,0)) goto LAB_01376c70;
        goto LAB_013767f0;
      }
      dVar27 = *(double *)(uVar15 + 3);
      dVar26 = (double)(SUB84(dVar25,0) >> 1);
    }
    else {
      dVar26 = *(double *)((long)dVar25 + 3);
      if (bVar12) {
        dVar27 = (double)((int)uVar15 >> 1);
      }
      else {
        dVar27 = *(double *)(uVar15 + 3);
      }
    }
    if (dVar27 <= dVar26) {
LAB_01376c70:
      pdVar10[-5] = 0.0;
      pdVar10[-7] = pdVar10[7];
      pdVar10[-6] = 2.77664892962781e-321;
      pdVar10[-8] = dVar25;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
LAB_013767f0:
    pdVar10[-5] = 0.0;
    pdVar10[-7] = dVar25;
    pdVar10[-6] = pdVar10[2];
    pdVar10[-8] = dVar16;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21e8));
  }
LAB_01376888:
  if (SUB84(pdVar10[8],0) == 0) {
    dVar25 = *(double *)((long)pdVar10[9] + 3);
  }
  else {
    iVar13 = SUB84(pdVar10[9],0);
    if (!SCARRY4(iVar13,2)) {
      dVar16 = (double)(long)(iVar13 + 2);
      goto LAB_01375d1c;
    }
    dVar25 = (double)(iVar13 >> 1);
  }
  uVar20 = **(ulong **)(unaff_x26 + 0x1428);
  uVar15 = uVar20 + 0xc;
  if (uVar15 < **(ulong **)(unaff_x26 + 0x1430)) {
    dVar16 = (double)(uVar20 + 1);
    **(ulong **)(unaff_x26 + 0x1428) = uVar15;
  }
  else {
    pdVar10[9] = dVar25;
    pdVar10[0xc] = param_4;
    dVar16 = (double)FUN_01348560(param_4,0xc);
    dVar25 = pdVar10[9];
    param_4 = pdVar10[0xc];
  }
  *(int *)((long)dVar16 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(double *)((long)dVar16 + 3) = dVar25 + 1.0;
LAB_01375d1c:
  param_3 = pdVar10[0xb];
  param_5 = pdVar10[3];
  uVar15 = (ulong)*pdVar10;
  param_2 = pdVar10[2];
  goto LAB_01375d3c;
}

