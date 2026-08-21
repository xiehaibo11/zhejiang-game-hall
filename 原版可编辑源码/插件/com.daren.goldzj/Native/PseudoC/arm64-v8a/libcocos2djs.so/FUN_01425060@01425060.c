
/* WARNING: Removing unreachable block (ram,0x01425e90) */
/* WARNING: Removing unreachable block (ram,0x01425140) */
/* WARNING: Removing unreachable block (ram,0x01425150) */
/* WARNING: Removing unreachable block (ram,0x01425148) */

undefined8 FUN_01425060(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  undefined4 uVar23;
  undefined4 extraout_w9;
  ulong uVar24;
  long lVar25;
  long extraout_x9;
  uint uVar26;
  uint extraout_w10;
  long lVar27;
  ulong uVar28;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long extraout_x10_01;
  ulong uVar29;
  long lVar30;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  long lVar31;
  long extraout_x12;
  long lVar32;
  long unaff_x26;
  
  uVar11 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x33);
  uVar16 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  iVar9 = *(int *)(param_1 + 0x17);
  bVar7 = (uVar16 & 1) != 0;
  uVar10 = uVar16;
  if (bVar7) {
    uVar10 = 0x7ffffffe;
  }
  uVar21 = (long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21;
  iVar14 = 0;
  uVar29 = 0;
  lVar32 = 0;
  do {
    uVar23 = (undefined4)uVar10;
    lVar27 = 0;
    iVar22 = (int)lVar32;
    if (bVar7) {
      if (*(double *)(uVar16 + 3) <= (double)(iVar22 >> 1)) break;
    }
    else if ((int)uVar16 <= iVar22) break;
    uVar28 = (**(code **)(unaff_x26 + (long)iVar9 * 4 + 0x2c78))(param_1,lVar32);
    iVar13 = (int)uVar28;
    iVar12 = (int)*(undefined8 *)(unaff_x26 + 0xa8);
    if (iVar13 != iVar12) {
      uVar15 = *(undefined8 *)(unaff_x26 + 0xa0);
      if (iVar13 == (int)uVar15) {
        iVar14 = iVar14 + 2;
      }
      else {
        uVar24 = uVar11;
        if (uVar21 == uVar29) {
          iVar18 = *(int *)(uVar11 - 1);
          uVar21 = uVar21 + ((long)uVar21 >> 1) + 0x10;
          if (uVar21 == 0) {
            uVar24 = *(ulong *)(unaff_x26 + 0x168);
          }
          else {
            if (iVar18 == (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
              iVar18 = (int)*(undefined8 *)(unaff_x26 + 0xe0);
            }
            if (0x7fffffd < (long)uVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
            }
            uVar24 = **(ulong **)(unaff_x26 + 0x1428);
            uVar2 = uVar21 * 4 + 8;
            uVar3 = uVar24 + uVar2;
            if ((uVar3 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar2 < 0x20000)) {
              uVar24 = uVar24 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar3;
            }
            else {
              uVar24 = FUN_01348500();
              uVar15 = *(undefined8 *)(unaff_x26 + 0xa0);
              iVar12 = (int)*(undefined8 *)(unaff_x26 + 0xa8);
            }
            *(int *)(uVar24 - 1) = iVar18;
            *(int *)(uVar24 + 3) = (int)uVar21 * 2;
            lVar32 = uVar21 * 4 + 7;
            while (lVar32 != uVar29 * 4 + 7) {
              lVar32 = lVar32 + -4;
              *(int *)(uVar24 + lVar32) = iVar12;
            }
            if (((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
              *(undefined8 *)(unaff_x26 + 0x40) = 0x14252c8;
              *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
              (**(code **)(unaff_x26 + 0x11d0))
                        (uVar24 + 7,uVar11 + 7,uVar29 * 4,uVar28,uVar15,uVar11);
              *(undefined8 *)(unaff_x26 + 0x38) = 0;
            }
            else {
              lVar32 = uVar29 * 4 + 7;
              if (lVar32 != 7) {
                lVar27 = 7;
                do {
                  lVar20 = lVar27 + 4;
                  *(undefined4 *)(uVar24 + lVar27) = *(undefined4 *)(uVar11 + lVar27);
                  lVar27 = lVar20;
                } while (lVar20 != lVar32);
              }
            }
          }
        }
        if ((ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21) <= uVar29) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x1425e90);
          (*pcVar6)();
        }
        lVar32 = uVar29 * 4 + 7;
        *(int *)(uVar24 + lVar32) = iVar13;
        if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar28 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (uVar28 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
             1 & 1) != 0)) {
          FUN_0133eb00(uVar24,uVar24 + lVar32,0,2);
          uVar29 = extraout_x11_03;
        }
        uVar29 = uVar29 + 1;
        uVar11 = uVar24;
      }
    }
    lVar32 = (long)(iVar22 + 2);
  } while( true );
  *(int *)(param_1 + 0x33) = (int)uVar11;
  if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar11 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (uVar11 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
      != 0)) {
    FUN_0133eb00(param_1,param_1 + 0x33,0,2);
    lVar27 = extraout_x10_01;
    uVar29 = extraout_x11_02;
    uVar23 = extraout_w9;
  }
  uVar5 = (int)uVar29 * 2;
  uVar16 = (ulong)uVar5;
  *(undefined4 *)(param_1 + 0x3b) = uVar23;
  *(int *)(param_1 + 0x3f) = iVar14;
  lVar32 = lVar27;
  uVar11 = uVar16;
  if (3 < (int)uVar5) {
    while( true ) {
      uVar19 = (uint)uVar11;
      if ((int)uVar19 < 0x80) break;
      lVar32 = (long)(int)((uint)lVar32 | uVar19 & 2);
      uVar11 = (long)(uVar11 << 0x20) >> 0x21 & 0xfffffffffffffffe;
    }
    while( true ) {
      iVar9 = 2;
      iVar22 = (int)uVar16;
      iVar14 = (int)unaff_x26;
      if (iVar22 == 0) break;
      uVar11 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x33);
      iVar13 = (int)lVar27;
      uVar26 = iVar13 + 2;
      lVar20 = lVar27;
      if (uVar26 != iVar13 + iVar22) {
        uVar10 = (long)((ulong)uVar26 << 0x20) >> 0x21;
        uVar21 = (long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21;
        if (uVar21 <= uVar10) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x1425ca0);
          (*pcVar6)();
        }
        uVar29 = (lVar27 << 0x20) >> 0x21;
        if (uVar21 <= uVar29) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x1425ca4);
          (*pcVar6)();
        }
        uVar10 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x13) * 4 + 0x2c78))
                           (unaff_x26 + (ulong)*(uint *)(param_1 + 0xf),
                            unaff_x26 + (ulong)*(uint *)(uVar11 + uVar10 * 4 + 7),
                            unaff_x26 + (ulong)*(uint *)(uVar11 + uVar29 * 4 + 7));
        if ((uVar10 & 1) == 0) {
          if (-1 < (int)uVar10) goto LAB_014254dc;
LAB_014254e4:
          bVar7 = true;
        }
        else {
          if (*(double *)(uVar10 + 3) < 0.0) goto LAB_014254e4;
LAB_014254dc:
          bVar7 = false;
        }
        iVar9 = 4;
        while( true ) {
          uVar26 = uVar26 + 2;
          if (iVar13 + iVar22 <= (int)uVar26) break;
          uVar10 = ((long)(int)uVar26 << 0x20) >> 0x21;
          if ((ulong)((long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x1425ca8);
            (*pcVar6)();
          }
          uVar10 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x13) * 4 + 0x2c78))
                             (unaff_x26 + (ulong)*(uint *)(uVar11 + uVar10 * 4 + 7),
                              unaff_x26 + (ulong)*(uint *)(param_1 + 0xf));
          bVar8 = (uVar10 & 1) == 0;
          if (bVar7) {
            if (bVar8) {
              if (-1 < (int)uVar10) break;
            }
            else if (0.0 <= *(double *)(uVar10 + 3)) break;
          }
          else if (bVar8) {
            if ((int)uVar10 < 0) break;
          }
          else if (*(double *)(uVar10 + 3) < 0.0) break;
          iVar9 = iVar9 + 2;
        }
        if (bVar7) {
          iVar13 = iVar13 + iVar9;
          lVar17 = lVar27;
          while( true ) {
            iVar13 = iVar13 + -2;
            iVar12 = (int)lVar17;
            if (iVar13 <= iVar12) break;
            uVar10 = (lVar17 << 0x20) >> 0x21;
            uVar21 = (long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21;
            if (uVar21 <= uVar10) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cac);
              (*pcVar6)();
            }
            lVar17 = uVar10 * 4 + 7;
            uVar26 = *(uint *)(uVar11 + lVar17);
            uVar10 = ((long)iVar13 << 0x20) >> 0x21;
            if (uVar21 <= uVar10) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cb0);
              (*pcVar6)();
            }
            lVar30 = uVar10 * 4 + 7;
            uVar1 = *(uint *)(uVar11 + lVar30);
            *(uint *)(uVar11 + lVar17) = uVar1;
            if (((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((uVar1 & 1) != 0)) &&
               (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar1 & 0xfffffffffffc0000) + 8) >> 1 & 1
                ) != 0)) {
              FUN_0133eb00(uVar11,uVar11 + lVar17,0,2);
              lVar30 = extraout_x8_01;
              uVar10 = extraout_x11_01;
              uVar26 = extraout_w10;
            }
            if ((ulong)((long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cb4);
              (*pcVar6)();
            }
            *(uint *)(uVar11 + lVar30) = uVar26;
            if (((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((uVar26 & 1) != 0)) &&
               (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar26 & 0xfffffffffffc0000) + 8) >> 1 &
                1) != 0)) {
              FUN_0133eb00(uVar11,uVar11 + lVar30,0,2);
            }
            lVar17 = (long)(iVar12 + 2);
          }
        }
      }
      iVar13 = uVar19 + (uint)lVar32;
      uVar11 = uVar16;
      if (iVar9 < iVar13) {
        if (iVar22 <= iVar13) {
          iVar13 = iVar22;
        }
        iVar12 = (int)lVar20;
        iVar22 = iVar12 + iVar9;
        if (iVar12 == iVar22) {
          iVar22 = iVar22 + 2;
        }
        uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x33);
        uVar28 = (ulong)(uint)(iVar12 + iVar13);
        uVar21 = uVar10;
        uVar29 = uVar28;
        while (lVar17 = (long)iVar22, iVar9 = iVar13, iVar22 < (int)uVar29) {
          uVar24 = (lVar17 << 0x20) >> 0x21;
          if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) <= uVar24) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x1425ce8);
            (*pcVar6)();
          }
          uVar24 = unaff_x26 + (ulong)*(uint *)(uVar21 + uVar24 * 4 + 7);
          lVar30 = lVar17;
          lVar31 = lVar20;
          while( true ) {
            iVar9 = (int)lVar31;
            lVar25 = lVar17;
            if ((int)lVar30 <= iVar9) break;
            uVar26 = iVar9 + ((int)lVar30 - iVar9 >> 1 & 0xfffffffeU);
            if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) <=
                (ulong)((long)((ulong)uVar26 << 0x20) >> 0x21)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cf8);
              (*pcVar6)();
            }
            uVar11 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x13) * 4 + 0x2c78))
                               (unaff_x26 + (ulong)*(uint *)(param_1 + 0xf));
            if ((uVar11 & 1) == 0) {
              if (-1 < (int)uVar11) goto LAB_01425840;
LAB_01425854:
              lVar30 = (long)(int)uVar26;
              lVar20 = lVar27;
              uVar11 = uVar16;
              uVar21 = uVar10;
              uVar29 = uVar28;
            }
            else {
              if (*(double *)(uVar11 + 3) < 0.0) goto LAB_01425854;
LAB_01425840:
              lVar31 = (long)(int)(uVar26 + 2);
              lVar20 = lVar27;
              uVar11 = uVar16;
              uVar21 = uVar10;
              uVar29 = uVar28;
            }
          }
          while ((int)lVar31 < (int)lVar25) {
            uVar2 = (lVar25 << 0x20) >> 0x21;
            uVar3 = (long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21;
            if (uVar3 <= uVar2) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cf0);
              (*pcVar6)();
            }
            uVar26 = (int)lVar25 - 2;
            uVar4 = (long)((ulong)uVar26 << 0x20) >> 0x21;
            if (uVar3 <= uVar4) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cf4);
              (*pcVar6)();
            }
            uVar1 = *(uint *)(uVar21 + uVar4 * 4 + 7);
            lVar30 = uVar2 * 4 + 7;
            lVar25 = (long)(int)uVar26;
            *(uint *)(uVar21 + lVar30) = uVar1;
            if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((uVar1 & 1) != 0)) &&
               (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar1 & 0xfffffffffffc0000) + 8) >> 1 & 1
                ) != 0)) {
              FUN_0133eb00(uVar21,uVar21 + lVar30,0,2);
              uVar11 = extraout_x8;
              lVar25 = extraout_x9;
              uVar29 = extraout_x10;
              uVar21 = extraout_x11;
              lVar31 = extraout_x12;
            }
          }
          uVar2 = (lVar31 << 0x20) >> 0x21;
          if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) <= uVar2) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cec);
            (*pcVar6)();
          }
          lVar30 = uVar2 * 4 + 7;
          iVar22 = (int)lVar17 + 2;
          *(int *)(uVar21 + lVar30) = (int)uVar24;
          if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar24 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (uVar24 & 0xffffffff) & 0xfffffffffffc0000) + 8)
               >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar21,uVar21 + lVar30,0,2);
            uVar11 = extraout_x8_00;
            uVar21 = extraout_x11_00;
            uVar29 = extraout_x10_00;
          }
        }
      }
      lVar17 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x2f);
      uVar26 = *(uint *)(param_1 + 0x2b);
      uVar10 = (long)((ulong)uVar26 << 0x21) >> 0x21;
      if ((ulong)((long)((ulong)*(uint *)(lVar17 + 3) << 0x20) >> 0x21) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cb8);
        (*pcVar6)();
      }
      *(int *)(lVar17 + uVar10 * 4 + 7) = (int)lVar20;
      uVar10 = (long)((ulong)(uVar26 * 2 + 2) << 0x20) >> 0x21;
      if ((ulong)((long)((ulong)*(uint *)(lVar17 + 3) << 0x20) >> 0x21) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cbc);
        (*pcVar6)();
      }
      *(int *)(lVar17 + uVar10 * 4 + 7) = iVar9;
      *(uint *)(param_1 + 0x2b) = uVar26 + 2;
      lVar17 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x2f);
      while (iVar22 = *(int *)(param_1 + 0x2b), 2 < iVar22) {
        iVar12 = iVar22 + -4;
        iVar13 = iVar22 + -2;
        if (iVar13 < 4) {
          bVar7 = true;
        }
        else {
          uVar10 = (long)((ulong)(iVar13 * 2 + 2) << 0x20) >> 0x21;
          uVar21 = (long)((ulong)*(uint *)(lVar17 + 3) << 0x20) >> 0x21;
          if (uVar21 <= uVar10) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cc0);
            (*pcVar6)();
          }
          uVar29 = (long)((ulong)((iVar22 + -4) * 2 + 2) << 0x20) >> 0x21;
          if (uVar21 <= uVar29) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cc4);
            (*pcVar6)();
          }
          uVar28 = (long)((ulong)((iVar22 + -6) * 2 + 2) << 0x20) >> 0x21;
          if (uVar21 <= uVar28) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cc8);
            (*pcVar6)();
          }
          bVar7 = iVar14 * 2 + *(int *)(lVar17 + uVar29 * 4 + 7) + *(int *)(lVar17 + uVar10 * 4 + 7)
                  < iVar14 + *(int *)(lVar17 + uVar28 * 4 + 7);
        }
        if (bVar7) {
          if (iVar12 < 4) {
            bVar7 = true;
          }
          else {
            uVar10 = (long)((ulong)(iVar12 * 2 + 2) << 0x20) >> 0x21;
            uVar21 = (long)((ulong)*(uint *)(lVar17 + 3) << 0x20) >> 0x21;
            if (uVar21 <= uVar10) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0,0x1425ccc);
              (*pcVar6)();
            }
            uVar29 = (long)((ulong)((iVar22 + -6) * 2 + 2) << 0x20) >> 0x21;
            if (uVar21 <= uVar29) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cd0);
              (*pcVar6)();
            }
            uVar28 = (long)((ulong)((iVar22 + -8) * 2 + 2) << 0x20) >> 0x21;
            if (uVar21 <= uVar28) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cd4);
              (*pcVar6)();
            }
            bVar7 = iVar14 * 2 + *(int *)(lVar17 + uVar29 * 4 + 7) +
                    *(int *)(lVar17 + uVar10 * 4 + 7) < iVar14 + *(int *)(lVar17 + uVar28 * 4 + 7);
          }
          if (!bVar7) goto LAB_01425b4c;
          uVar10 = (long)((ulong)(iVar12 * 2 + 2) << 0x20) >> 0x21;
          uVar21 = (long)((ulong)*(uint *)(lVar17 + 3) << 0x20) >> 0x21;
          if (uVar21 <= uVar10) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cd8);
            (*pcVar6)();
          }
          uVar29 = (long)((ulong)(iVar13 * 2 + 2) << 0x20) >> 0x21;
          if (uVar21 <= uVar29) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x1425cdc);
            (*pcVar6)();
          }
          if (iVar14 + *(int *)(lVar17 + uVar29 * 4 + 7) <
              iVar14 + *(int *)(lVar17 + uVar10 * 4 + 7)) break;
          FUN_01422d60(param_1,(long)iVar12);
          lVar20 = lVar27;
          uVar11 = uVar16;
        }
        else {
LAB_01425b4c:
          uVar11 = (long)((ulong)((iVar22 + -6) * 2 + 2) << 0x20) >> 0x21;
          uVar10 = (long)((ulong)*(uint *)(lVar17 + 3) << 0x20) >> 0x21;
          if (uVar10 <= uVar11) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x1425ce0);
            (*pcVar6)();
          }
          uVar21 = (long)((ulong)(iVar13 * 2 + 2) << 0x20) >> 0x21;
          if (uVar10 <= uVar21) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x1425ce4);
            (*pcVar6)();
          }
          if (iVar14 + *(int *)(lVar17 + uVar11 * 4 + 7) <
              iVar14 + *(int *)(lVar17 + uVar21 * 4 + 7)) {
            iVar12 = iVar22 + -6;
          }
          FUN_01422d60(param_1,(long)iVar12);
          lVar20 = lVar27;
          uVar11 = uVar16;
        }
      }
      lVar27 = (long)((int)lVar20 + iVar9);
      uVar16 = (ulong)((int)uVar11 - iVar9);
    }
    lVar32 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x2f);
    while (iVar9 = *(int *)(param_1 + 0x2b), 2 < iVar9) {
      if (iVar9 + -4 < 1) {
LAB_01425c8c:
        lVar27 = (long)(iVar9 + -4);
      }
      else {
        lVar27 = (long)(iVar9 + -6);
        uVar11 = (long)((ulong)((int)(lVar27 << 1) + 2) << 0x20) >> 0x21;
        uVar16 = (long)((ulong)*(uint *)(lVar32 + 3) << 0x20) >> 0x21;
        if (uVar16 <= uVar11) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x1425c98);
          (*pcVar6)();
        }
        uVar10 = (long)((ulong)((iVar9 + -2) * 2 + 2) << 0x20) >> 0x21;
        if (uVar16 <= uVar10) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x1425c9c);
          (*pcVar6)();
        }
        if (iVar14 + *(int *)(lVar32 + uVar10 * 4 + 7) <= iVar14 + *(int *)(lVar32 + uVar11 * 4 + 7)
           ) goto LAB_01425c8c;
      }
      FUN_01422d60(param_1,lVar27);
    }
  }
  iVar9 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x23) * 4 + 0x2c78))
                    (unaff_x26 + (ulong)*(uint *)(param_1 + 3),
                     unaff_x26 + (ulong)*(uint *)(param_1 + 7),
                     unaff_x26 + (ulong)*(uint *)(param_1 + 0xb));
  if (iVar9 == (int)*(undefined8 *)(unaff_x26 + 0xc0)) {
    *(undefined4 *)(param_1 + 0x17) = 0x760;
    *(undefined4 *)(param_1 + 0x1b) = 0x762;
    *(undefined4 *)(param_1 + 0x1f) = 0x764;
  }
  iVar9 = *(int *)(param_1 + 0x1b);
  lVar32 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x33);
  lVar27 = 0;
  while( true ) {
    if ((int)uVar5 <= (int)lVar27) {
      iVar14 = *(int *)(param_1 + 0x3f);
      for (; (int)lVar27 < (int)(iVar14 + uVar5); lVar27 = (long)((int)lVar27 + 2)) {
        (**(code **)(unaff_x26 + (long)iVar9 * 4 + 0x2c78))
                  (param_1,lVar27,*(undefined8 *)(unaff_x26 + 0xa0));
      }
      iVar9 = *(int *)(param_1 + 0x3b);
      iVar14 = *(int *)(param_1 + 0x1f);
      for (; (int)lVar27 < iVar9; lVar27 = (long)((int)lVar27 + 2)) {
        (**(code **)(unaff_x26 + (long)iVar14 * 4 + 0x2c78))();
      }
      return 0;
    }
    uVar11 = (lVar27 << 0x20) >> 0x21;
    if ((ulong)((long)((ulong)*(uint *)(lVar32 + 3) << 0x20) >> 0x21) <= uVar11) break;
    (**(code **)(unaff_x26 + (long)iVar9 * 4 + 0x2c78))
              (param_1,lVar27,unaff_x26 + (ulong)*(uint *)(lVar32 + uVar11 * 4 + 7));
    lVar27 = (long)((int)lVar27 + 2);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(0,0x1425e8c);
  (*pcVar6)();
}

