
undefined8 FUN_01422d60(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int extraout_w8;
  long lVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  int iVar19;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  long lVar20;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  ulong uVar21;
  ulong extraout_x10;
  long extraout_x10_00;
  ulong uVar22;
  long lVar23;
  long extraout_x11;
  ulong extraout_x11_00;
  long lVar24;
  long extraout_x12;
  ulong extraout_x12_00;
  int extraout_w13;
  ulong extraout_x13;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long unaff_x26;
  undefined1 auVar28 [16];
  long alStack_140 [21];
  ulong local_98 [13];
  long local_30;
  
  lVar12 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x2f);
  iVar7 = *(int *)(param_1 + 0x2b);
  lVar20 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x33);
  uVar10 = (param_2 << 0x21) >> 0x21;
  uVar27 = (long)((ulong)*(uint *)(lVar12 + 3) << 0x20) >> 0x21;
  local_98[9] = param_1;
  if (uVar27 <= uVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0,0x1422db4);
    (*pcVar4)();
  }
  local_98[0xb] = unaff_x26 + (ulong)*(uint *)(lVar12 + uVar10 * 4 + 7);
  uVar10 = (long)((ulong)((int)(param_2 << 1) + 2) << 0x20) >> 0x21;
  if (uVar27 <= uVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0,0x1422ddc);
    (*pcVar4)();
  }
  lVar17 = uVar10 * 4 + 7;
  local_30 = unaff_x26 + (ulong)*(uint *)(lVar12 + lVar17);
  iVar8 = (int)param_2;
  uVar10 = ((long)(iVar8 + 2) << 0x21) >> 0x21;
  if (uVar27 <= uVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0,0x1422e0c);
    (*pcVar4)();
  }
  lVar15 = uVar10 * 4 + 7;
  local_98[4] = unaff_x26 + (ulong)*(uint *)(lVar12 + lVar15);
  uVar14 = (long)((ulong)((int)((long)(iVar8 + 2) << 1) + 2) << 0x20) >> 0x21;
  if (uVar27 <= uVar14) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0,0x1422e34);
    (*pcVar4)();
  }
  lVar18 = uVar14 * 4 + 7;
  local_98[6] = unaff_x26 + (ulong)*(uint *)(lVar12 + lVar18);
  *(int *)(lVar12 + lVar17) = (int)local_30 + (int)local_98[6];
  if (iVar8 == iVar7 + -6) {
    uVar27 = ((long)(iVar8 + 4) << 0x21) >> 0x21;
    uVar21 = (long)((ulong)*(uint *)(lVar12 + 3) << 0x20) >> 0x21;
    if (uVar21 <= uVar27) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1422e84);
      (*pcVar4)();
    }
    uVar22 = (long)((ulong)((int)((long)(iVar8 + 4) << 1) + 2) << 0x20) >> 0x21;
    if (uVar21 <= uVar22) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1422ea4);
      (*pcVar4)();
    }
    uVar1 = *(undefined4 *)(lVar12 + uVar22 * 4 + 7);
    if (uVar21 <= uVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1422ebc);
      (*pcVar4)();
    }
    *(undefined4 *)(lVar12 + lVar15) = *(undefined4 *)(lVar12 + uVar27 * 4 + 7);
    if ((ulong)((long)((ulong)*(uint *)(lVar12 + 3) << 0x20) >> 0x21) <= uVar14) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1422ed4);
      (*pcVar4)();
    }
    *(undefined4 *)(lVar12 + lVar18) = uVar1;
  }
  *(int *)(param_1 + 0x2b) = iVar7 + -2;
  local_98[10] = (long)(local_98[4] << 0x20) >> 0x21;
  if ((ulong)((long)((ulong)*(uint *)(lVar20 + 3) << 0x20) >> 0x21) <= local_98[10]) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0,0x1422f00);
    (*pcVar4)();
  }
  local_98[0xc] = local_98[10] * 4 + 7;
  alStack_140[0x11] = 0;
  alStack_140[0x10] = 0;
  iVar7 = FUN_01424c80(param_1,lVar20,unaff_x26 + (ulong)*(uint *)(lVar20 + local_98[0xc]),
                       local_98[0xb],local_30);
  if ((int)local_98[0xb] != iVar7) {
    uVar2 = (int)local_98[0xb] - iVar7;
    local_98[0xb] = (ulong)uVar2;
    uVar13 = (int)local_98[9] + iVar7;
    local_98[9] = (ulong)uVar13;
    local_98[6] = (ulong)((uVar13 + uVar2) - 2);
    local_98[3] = (long)(local_98[6] << 0x20) >> 0x21;
    if ((ulong)((long)((ulong)*(uint *)(local_30 + 3) << 0x20) >> 0x21) <= local_98[3]) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1422f8c);
      (*pcVar4)();
    }
    local_98[5] = local_98[3] * 4 + 7;
    alStack_140[0xe] = (long)((int)local_98[4] + -2);
    plVar5 = alStack_140 + 0xe;
    plVar6 = alStack_140 + 0xe;
    alStack_140[0xf] = 0;
    local_98[2] = FUN_014248a0(local_98[7],local_30,
                               unaff_x26 + (ulong)*(uint *)(local_30 + local_98[5]));
    iVar7 = (int)local_98[2];
    if (iVar7 != 0) {
      iVar8 = (int)local_98[9];
      if (iVar7 < iVar8) {
        lVar12 = local_98[2];
        if (iVar7 < 0x41) {
          lVar12 = 0x40;
        }
        uVar10 = unaff_x26 + (ulong)*(uint *)(local_98[5] + 0x37);
        local_98[0xb] = unaff_x26 + (ulong)*(uint *)(local_98[5] + 0x33);
        if (*(int *)(uVar10 + 3) < (int)lVar12) {
          uVar13 = (int)lVar12 >> 1;
          if (0x7fffffd < (long)(int)uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
          }
          lVar12 = (long)(int)uVar13 * 4;
          uVar10 = lVar12 + 8;
          uVar27 = **(long **)(unaff_x26 + 0x1428) + uVar10;
          if ((uVar27 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar10 < 0x20000)) {
            alStack_140[0xf] = **(long **)(unaff_x26 + 0x1428) + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar27;
          }
          else {
            local_98[6] = (ulong)uVar13;
            local_98[8] = lVar12;
            alStack_140[0xf] = FUN_01348500();
            uVar13 = (uint)local_98[6];
          }
          *(int *)(alStack_140[0xf] - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
          *(uint *)(alStack_140[0xf] + 3) = uVar13 * 2;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x1423094;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          (**(code **)(unaff_x26 + 0x11e0))(alStack_140[0xf] + 7,0);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          *(int *)(local_98[5] + 0x37) = (int)alStack_140[0xf];
          uVar10 = alStack_140[0xf];
          if (((((uint)*(undefined8 *)((local_98[5] & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((alStack_140[0xf] & 1U) != 0)) &&
             (uVar10 = unaff_x26 + (alStack_140[0xf] & 0xffffffffU),
             ((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(local_98[5],local_98[5] + 0x37,0,2);
            uVar10 = extraout_x8_02;
          }
        }
        lVar12 = 0;
        uVar27 = local_98[2];
        alStack_140[0xf] = uVar10;
        FUN_01422ba0(local_98[0xb],local_98[0]);
        uVar10 = local_98[2];
        iVar8 = (int)local_98[2];
        iVar7 = (int)local_98[0] + iVar8;
        uVar14 = (long)((ulong)(iVar7 - 2) << 0x20) >> 0x21;
        uVar21 = (long)((ulong)*(uint *)(local_98[0xb] + 3) << 0x20) >> 0x21;
        if (uVar21 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0,0x142313c);
          (*pcVar4)();
        }
        if (uVar21 <= local_98[1]) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0,0x142314c);
          (*pcVar4)();
        }
        uVar13 = *(uint *)(local_98[0xb] + local_98[3]);
        lVar20 = uVar14 * 4 + 7;
        iVar19 = (int)local_98[9] + -2;
        lVar17 = (long)(iVar7 + -4);
        *(uint *)(local_98[0xb] + lVar20) = uVar13;
        uVar14 = local_98[0xb];
        if (((((uint)*(undefined8 *)((local_98[0xb] & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar13 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >> 1 & 1)
            != 0)) {
          FUN_0133eb00(local_98[0xb],local_98[0xb] + lVar20,0,2);
          iVar19 = extraout_w9_01;
        }
        plVar5 = alStack_140 + 0xe;
        if (iVar19 == 0) {
LAB_0142392c:
          if (0 < (int)uVar10) {
            FUN_01422ba0(*(undefined8 *)((long)plVar5 + 8),0,uVar14,
                         (long)((int)lVar17 - ((int)uVar10 + -2)),uVar10);
          }
        }
        else {
          iVar7 = (int)local_98[4] + -2;
          lVar20 = (long)iVar19;
          lVar15 = (long)(iVar8 + -2);
          lVar18 = (long)iVar7;
          plVar5 = alStack_140 + 0xe;
          if (iVar8 != 2) {
            uVar22 = (ulong)*(uint *)(local_98[5] + 0x27);
            plVar5 = alStack_140 + 0xe;
            lVar16 = lVar20;
            uVar21 = local_98[5];
LAB_014231dc:
            lVar20 = 0;
            *(ulong *)((long)plVar5 + 0x68) = uVar22;
            lVar25 = 0;
            do {
              uVar13 = *(uint *)(*(long *)((long)plVar5 + 8) + 3);
              uVar22 = (lVar15 << 0x20) >> 0x21;
              *(ulong *)((long)plVar5 + 0x48) = uVar10;
              *(long *)((long)plVar5 + 0x80) = lVar16;
              *(long *)((long)plVar5 + 0x78) = lVar18;
              *(long *)((long)plVar5 + 0x20) = lVar15;
              *(long *)((long)plVar5 + 0x58) = lVar20;
              *(long *)((long)plVar5 + 0x30) = lVar25;
              *(long *)((long)plVar5 + 0x10) = lVar17;
              *(ulong *)((long)plVar5 + 0x18) = uVar22;
              if ((ulong)((long)((ulong)uVar13 << 0x20) >> 0x21) <= uVar22) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(0,0x14237cc);
                (*pcVar4)();
              }
              uVar13 = *(uint *)(uVar14 + 3);
              lVar20 = uVar22 * 4 + 7;
              uVar2 = *(uint *)(*(long *)((long)plVar5 + 8) + lVar20);
              uVar10 = (lVar18 << 0x20) >> 0x21;
              *(long *)((long)plVar5 + 0x28) = lVar20;
              *(ulong *)((long)plVar5 + 0x38) = uVar10;
              if ((ulong)((long)((ulong)uVar13 << 0x20) >> 0x21) <= uVar10) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(0,0x14237d0);
                (*pcVar4)();
              }
              lVar20 = uVar10 * 4 + 7;
              iVar7 = *(int *)(uVar21 + 0x13);
              uVar13 = *(uint *)(uVar21 + 0xf);
              lVar18 = unaff_x26 + (ulong)*(uint *)(uVar14 + lVar20);
              *(long *)((long)plVar5 + 0x50) = lVar20;
              *(long *)((long)plVar5 + 0x40) = (lVar17 << 0x20) >> 0x21;
              auVar28 = (**(code **)(unaff_x26 + (long)iVar7 * 4 + 0x2c78))
                                  (unaff_x26 + (ulong)uVar13,unaff_x26 + (ulong)uVar2);
              if ((auVar28._0_8_ & 1) == 0) {
                if (auVar28._0_4_ < 0) goto LAB_01423380;
LAB_014232e4:
                uVar14 = *(ulong *)((long)plVar5 + 0x90);
                if ((ulong)((long)((ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21) <=
                    *(ulong *)((long)plVar5 + 0x40)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(0,0x14237d4);
                  (*pcVar4)();
                }
                if ((ulong)((long)((ulong)*(uint *)(*(long *)((long)plVar5 + 8) + 3) << 0x20) >>
                           0x21) <= *(ulong *)((long)plVar5 + 0x18)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(0,0x14237d8);
                  (*pcVar4)();
                }
                uVar13 = *(uint *)(*(long *)((long)plVar5 + 8) + *(long *)((long)plVar5 + 0x28));
                lVar20 = *(ulong *)((long)plVar5 + 0x40) * 4 + 7;
                uVar9 = *(undefined8 *)((long)plVar5 + 0x48);
                iVar7 = (int)uVar9 + -2;
                lVar15 = (long)((int)*(undefined8 *)((long)plVar5 + 0x20) + -2);
                *(uint *)(uVar14 + lVar20) = uVar13;
                if (((((uint)*(undefined8 *)((uVar14 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar13 & 1) != 0)) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  *(long *)((long)plVar5 + -0x20) = lVar18;
                  *(long *)((long)plVar5 + -0x18) = lVar12;
                  *(ulong *)((long)plVar5 + -0x10) = uVar27;
                  *(undefined8 *)((long)plVar5 + -8) = 0x14232cc;
                  *(undefined8 *)((long)plVar5 + -0x30) = uVar9;
                  *(long *)((long)plVar5 + -0x28) = auVar28._8_8_;
                  FUN_0133eb00(uVar14,uVar14 + lVar20,0,2);
                  lVar12 = *(long *)((long)plVar5 + -0x18);
                  uVar27 = *(long *)((long)plVar5 + -0x10);
                  lVar15 = extraout_x9_05;
                  iVar7 = extraout_w10_03;
                }
                if (iVar7 == 2) {
                  lVar17 = (long)((int)*(undefined8 *)((long)plVar5 + 0x10) + -2);
                  lVar20 = *(long *)((long)plVar5 + 0x80);
                  iVar7 = (int)*(undefined8 *)((long)plVar5 + 0x78);
                  break;
                }
                uVar10 = (ulong)iVar7;
                lVar25 = (long)((int)*(undefined8 *)((long)plVar5 + 0x30) + 2);
                iVar7 = (int)*(undefined8 *)((long)plVar5 + 0x68);
                if (iVar7 <= (int)*(undefined8 *)((long)plVar5 + 0x30) + 2) goto LAB_0142341c;
                iVar8 = (int)*(undefined8 *)((long)plVar5 + 0x10);
                lVar20 = 0;
                lVar16 = *(long *)((long)plVar5 + 0x80);
                lVar18 = *(long *)((long)plVar5 + 0x78);
              }
              else {
                if (0.0 <= *(double *)(auVar28._0_8_ + 3)) goto LAB_014232e4;
LAB_01423380:
                uVar14 = *(ulong *)((long)plVar5 + 0x90);
                uVar10 = (long)((ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21;
                if (uVar10 <= *(ulong *)((long)plVar5 + 0x40)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(0,0x1423800);
                  (*pcVar4)();
                }
                if (uVar10 <= *(ulong *)((long)plVar5 + 0x38)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(0,0x1423804);
                  (*pcVar4)();
                }
                uVar13 = *(uint *)(uVar14 + *(long *)((long)plVar5 + 0x50));
                lVar20 = *(ulong *)((long)plVar5 + 0x40) * 4 + 7;
                iVar8 = (int)*(undefined8 *)((long)plVar5 + 0x10);
                iVar7 = (int)*(undefined8 *)((long)plVar5 + 0x80) + -2;
                lVar17 = (long)(iVar8 + -2);
                *(uint *)(uVar14 + lVar20) = uVar13;
                if (((((uint)*(undefined8 *)((uVar14 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar13 & 1) != 0)) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  *(long *)((long)plVar5 + -0x20) = lVar18;
                  *(long *)((long)plVar5 + -0x18) = lVar12;
                  *(ulong *)((long)plVar5 + -0x10) = uVar27;
                  *(undefined8 *)((long)plVar5 + -8) = 0x14232cc;
                  *(undefined1 (*) [16])((long)plVar5 + -0x30) = auVar28;
                  FUN_0133eb00(uVar14,uVar14 + lVar20,0,2);
                  lVar12 = *(long *)((long)plVar5 + -0x18);
                  uVar27 = *(long *)((long)plVar5 + -0x10);
                  lVar17 = extraout_x9_04;
                  iVar7 = extraout_w10_02;
                  iVar8 = extraout_w8;
                }
                if (iVar7 == 0) {
                  uVar10 = *(long *)((long)plVar5 + 0x48);
                  goto LAB_0142392c;
                }
                lVar16 = (long)iVar7;
                lVar18 = (long)((int)*(undefined8 *)((long)plVar5 + 0x78) + -2);
                lVar20 = (long)((int)*(undefined8 *)((long)plVar5 + 0x58) + 2);
                iVar7 = (int)*(undefined8 *)((long)plVar5 + 0x68);
                if (iVar7 <= (int)*(undefined8 *)((long)plVar5 + 0x58) + 2) {
                  lVar25 = 0;
                  uVar10 = *(long *)((long)plVar5 + 0x48);
                  lVar15 = *(long *)((long)plVar5 + 0x20);
                  goto LAB_01423444;
                }
                uVar10 = *(long *)((long)plVar5 + 0x48);
                lVar15 = *(long *)((long)plVar5 + 0x20);
                lVar25 = 0;
              }
              lVar17 = (long)(iVar8 + -2);
              uVar21 = *(ulong *)((long)plVar5 + 0x60);
            } while( true );
          }
LAB_01423890:
          uVar13 = (int)lVar17 - (int)lVar20;
          lVar12 = (long)(int)(uVar13 + 2);
          *(long *)((long)plVar5 + 0x80) = lVar15;
          *(ulong *)((long)plVar5 + 0x78) = (ulong)uVar13;
          auVar28 = FUN_01422ba0(uVar14,(long)((iVar7 - (int)lVar20) + 2),uVar14);
          uVar10 = *(ulong *)((long)plVar5 + 0x90);
          if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <=
              (ulong)((*(long *)((long)plVar5 + 0x78) << 0x20) >> 0x21)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0,0x14238e4);
            (*pcVar4)();
          }
          if ((ulong)((long)((ulong)*(uint *)(*(long *)((long)plVar5 + 8) + 3) << 0x20) >> 0x21) <=
              (ulong)((*(long *)((long)plVar5 + 0x80) << 0x20) >> 0x21)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0,0x1423904);
            (*pcVar4)();
          }
          uVar13 = *(uint *)(*(long *)((long)plVar5 + 8) +
                            ((*(long *)((long)plVar5 + 0x80) << 0x20) >> 0x21) * 4 + 7);
          lVar17 = ((*(long *)((long)plVar5 + 0x78) << 0x20) >> 0x21) * 4 + 7;
          *(uint *)(uVar10 + lVar17) = uVar13;
          if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar13 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >> 1 & 1)
              != 0)) {
            *(ulong *)((long)plVar5 + -0x20) = uVar10;
            *(long *)((long)plVar5 + -0x18) = lVar12;
            *(long *)((long)plVar5 + -0x10) = lVar20;
            *(undefined8 *)((long)plVar5 + -8) = 0x14238c4;
            *(undefined1 (*) [16])((long)plVar5 + -0x30) = auVar28;
            FUN_0133eb00(uVar10,uVar10 + lVar17,0,2);
          }
        }
      }
      else {
        if (iVar8 < 0x41) {
          iVar8 = 0x40;
        }
        uVar10 = unaff_x26 + (ulong)*(uint *)(local_98[5] + 0x37);
        local_98[0xb] = unaff_x26 + (ulong)*(uint *)(local_98[5] + 0x33);
        if (*(int *)(uVar10 + 3) < iVar8) {
          uVar13 = iVar8 >> 1;
          if (0x7fffffd < (long)(int)uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
          }
          lVar12 = (long)(int)uVar13 * 4;
          uVar10 = lVar12 + 8;
          uVar27 = **(long **)(unaff_x26 + 0x1428) + uVar10;
          if ((uVar27 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar10 < 0x20000)) {
            alStack_140[0x10] = **(long **)(unaff_x26 + 0x1428) + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar27;
          }
          else {
            local_98[3] = (ulong)uVar13;
            local_98[4] = lVar12;
            alStack_140[0x10] = FUN_01348500();
            uVar13 = (uint)local_98[3];
          }
          *(int *)(alStack_140[0x10] - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
          *(uint *)(alStack_140[0x10] + 3) = uVar13 * 2;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x1423a14;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          (**(code **)(unaff_x26 + 0x11e0))(alStack_140[0x10] + 7,0);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          *(int *)(local_98[5] + 0x37) = (int)alStack_140[0x10];
          uVar10 = alStack_140[0x10];
          if (((((uint)*(undefined8 *)((local_98[5] & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((alStack_140[0x10] & 1U) != 0)) &&
             (uVar10 = unaff_x26 + (alStack_140[0x10] & 0xffffffffU),
             ((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(local_98[5],local_98[5] + 0x37,0,2);
            uVar10 = extraout_x9_02;
          }
        }
        lVar12 = (long)(int)local_98[9];
        lVar20 = 0;
        alStack_140[0x10] = uVar10;
        FUN_01422ba0(local_98[2],local_98[0xb],(long)(int)local_98[7]);
        uVar10 = (long)(local_98[7] << 0x20) >> 0x21;
        uVar27 = (long)((ulong)*(uint *)(local_98[0xb] + 3) << 0x20) >> 0x21;
        if (uVar27 <= uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0,0x1423ab8);
          (*pcVar4)();
        }
        if (uVar27 <= local_98[6]) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0,0x1423ac8);
          (*pcVar4)();
        }
        uVar13 = *(uint *)(local_98[0xb] + local_98[8]);
        lVar17 = uVar10 * 4 + 7;
        iVar7 = (int)local_98[2] + -2;
        lVar15 = (long)((int)local_98[7] + 2);
        *(uint *)(local_98[0xb] + lVar17) = uVar13;
        uVar10 = local_98[0xb];
        if (((((uint)*(undefined8 *)((local_98[0xb] & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar13 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >> 1 & 1)
            != 0)) {
          FUN_0133eb00(local_98[0xb],local_98[0xb] + lVar17,0,2);
          iVar7 = extraout_w9_00;
        }
        iVar8 = (int)local_98[9];
        if (iVar7 == 0) {
          lVar12 = (long)iVar8;
          lVar17 = 0;
LAB_014242c0:
          if (0 < (int)lVar12) {
            FUN_01422ba0(*(undefined8 *)((long)plVar5 + 0x10),lVar17,uVar10,lVar15,lVar12);
          }
        }
        else {
          lVar18 = (long)iVar7;
          lVar16 = (long)((int)local_98[0] + 2);
          if (iVar8 != 2) {
            uVar21 = (ulong)*(uint *)(local_98[5] + 0x27);
            lVar23 = (long)iVar8;
            lVar25 = 0;
            plVar6 = alStack_140 + 0xe;
            uVar14 = local_98[5];
            uVar27 = alStack_140[0x10];
LAB_01423b88:
            *(ulong *)((long)plVar6 + 0x58) = uVar21;
            lVar26 = 0;
            lVar17 = 0;
            do {
              uVar13 = *(uint *)(uVar10 + 3);
              uVar21 = (lVar16 << 0x20) >> 0x21;
              *(long *)((long)plVar6 + 0x80) = lVar23;
              *(long *)((long)plVar6 + 0x78) = lVar25;
              *(long *)((long)plVar6 + 0x70) = lVar18;
              *(long *)((long)plVar6 + 0x68) = lVar16;
              *(long *)((long)plVar6 + 0x50) = lVar17;
              *(long *)((long)plVar6 + 0x20) = lVar26;
              *(long *)((long)plVar6 + 0x18) = lVar15;
              *(ulong *)((long)plVar6 + 0x38) = uVar21;
              if ((ulong)((long)((ulong)uVar13 << 0x20) >> 0x21) <= uVar21) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(0,0x1424150);
                (*pcVar4)();
              }
              uVar13 = *(uint *)(uVar27 + 3);
              lVar17 = uVar21 * 4 + 7;
              uVar2 = *(uint *)(uVar10 + lVar17);
              uVar10 = (lVar25 << 0x20) >> 0x21;
              *(long *)((long)plVar6 + 0x48) = lVar17;
              *(ulong *)((long)plVar6 + 0x28) = uVar10;
              if ((ulong)((long)((ulong)uVar13 << 0x20) >> 0x21) <= uVar10) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(0,0x1424154);
                (*pcVar4)();
              }
              lVar17 = uVar10 * 4 + 7;
              iVar7 = *(int *)(uVar14 + 0x13);
              uVar13 = *(uint *)(uVar14 + 0xf);
              lVar18 = unaff_x26 + (ulong)*(uint *)(uVar27 + lVar17);
              *(long *)((long)plVar6 + 0x30) = lVar17;
              *(long *)((long)plVar6 + 0x40) = (lVar15 << 0x20) >> 0x21;
              auVar28 = (**(code **)(unaff_x26 + (long)iVar7 * 4 + 0x2c78))
                                  (unaff_x26 + (ulong)uVar13,unaff_x26 + (ulong)uVar2);
              if ((auVar28._0_8_ & 1) == 0) {
                if (auVar28._0_4_ < 0) goto LAB_01423d44;
LAB_01423ca0:
                uVar10 = *(ulong *)((long)plVar6 + 0x90);
                if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <=
                    *(ulong *)((long)plVar6 + 0x40)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(0,0x1424158);
                  (*pcVar4)();
                }
                uVar27 = *(ulong *)((long)plVar6 + 0x10);
                if ((ulong)((long)((ulong)*(uint *)(uVar27 + 3) << 0x20) >> 0x21) <=
                    *(ulong *)((long)plVar6 + 0x28)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(0,0x142415c);
                  (*pcVar4)();
                }
                uVar13 = *(uint *)(uVar27 + *(long *)((long)plVar6 + 0x30));
                lVar17 = *(ulong *)((long)plVar6 + 0x40) * 4 + 7;
                iVar7 = (int)*(undefined8 *)((long)plVar6 + 0x80) + -2;
                lVar25 = (long)((int)*(undefined8 *)((long)plVar6 + 0x78) + 2);
                *(uint *)(uVar10 + lVar17) = uVar13;
                if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar13 & 1) != 0)) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  *(long *)((long)plVar6 + -0x20) = lVar18;
                  *(long *)((long)plVar6 + -0x18) = lVar20;
                  *(long *)((long)plVar6 + -0x10) = lVar12;
                  *(undefined8 *)((long)plVar6 + -8) = 0x1423c88;
                  *(undefined1 (*) [16])((long)plVar6 + -0x30) = auVar28;
                  FUN_0133eb00(uVar10,uVar10 + lVar17,0,2);
                  lVar20 = *(long *)((long)plVar6 + -0x18);
                  lVar12 = *(long *)((long)plVar6 + -0x10);
                  lVar25 = extraout_x9_01;
                  iVar7 = extraout_w10_00;
                }
                if (iVar7 == 2) {
                  lVar15 = (long)((int)*(undefined8 *)((long)plVar6 + 0x18) + 2);
                  lVar18 = *(long *)((long)plVar6 + 0x70);
                  lVar16 = *(long *)((long)plVar6 + 0x68);
                  goto LAB_01424218;
                }
                lVar23 = (long)iVar7;
                lVar26 = (long)((int)*(undefined8 *)((long)plVar6 + 0x20) + 2);
                iVar7 = (int)*(undefined8 *)((long)plVar6 + 0x58);
                if (iVar7 <= (int)*(undefined8 *)((long)plVar6 + 0x20) + 2) goto LAB_01423de0;
                lVar18 = *(long *)((long)plVar6 + 0x70);
                iVar8 = (int)*(undefined8 *)((long)plVar6 + 0x18);
                lVar16 = *(long *)((long)plVar6 + 0x68);
                lVar17 = 0;
              }
              else {
                if (0.0 <= *(double *)(auVar28._0_8_ + 3)) goto LAB_01423ca0;
LAB_01423d44:
                uVar10 = *(ulong *)((long)plVar6 + 0x90);
                uVar27 = (long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21;
                if (uVar27 <= *(ulong *)((long)plVar6 + 0x40)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(0,0x1424184);
                  (*pcVar4)();
                }
                if (uVar27 <= *(ulong *)((long)plVar6 + 0x38)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(0,0x1424188);
                  (*pcVar4)();
                }
                uVar13 = *(uint *)(uVar10 + *(long *)((long)plVar6 + 0x48));
                lVar17 = *(ulong *)((long)plVar6 + 0x40) * 4 + 7;
                iVar8 = (int)*(undefined8 *)((long)plVar6 + 0x18);
                iVar7 = (int)*(undefined8 *)((long)plVar6 + 0x70) + -2;
                lVar15 = (long)(iVar8 + 2);
                *(uint *)(uVar10 + lVar17) = uVar13;
                if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar13 & 1) != 0)) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  *(long *)((long)plVar6 + -0x20) = lVar18;
                  *(long *)((long)plVar6 + -0x18) = lVar20;
                  *(long *)((long)plVar6 + -0x10) = lVar12;
                  *(undefined8 *)((long)plVar6 + -8) = 0x1423c88;
                  *(undefined1 (*) [16])((long)plVar6 + -0x30) = auVar28;
                  FUN_0133eb00(uVar10,uVar10 + lVar17,0,2);
                  lVar20 = *(long *)((long)plVar6 + -0x18);
                  lVar12 = *(long *)((long)plVar6 + -0x10);
                  lVar15 = extraout_x8_00;
                  iVar7 = extraout_w9;
                  iVar8 = extraout_w10;
                }
                if (iVar7 == 0) {
                  lVar12 = *(long *)((long)plVar6 + 0x80);
                  lVar17 = *(long *)((long)plVar6 + 0x78);
                  plVar5 = plVar6;
                  goto LAB_014242c0;
                }
                lVar18 = (long)iVar7;
                lVar16 = (long)((int)*(undefined8 *)((long)plVar6 + 0x68) + 2);
                lVar17 = (long)((int)*(undefined8 *)((long)plVar6 + 0x50) + 2);
                iVar7 = (int)*(undefined8 *)((long)plVar6 + 0x58);
                if (iVar7 <= (int)*(undefined8 *)((long)plVar6 + 0x50) + 2) {
                  uVar27 = *(ulong *)((long)plVar6 + 0x10);
                  lVar26 = 0;
                  lVar25 = *(long *)((long)plVar6 + 0x78);
                  lVar23 = *(long *)((long)plVar6 + 0x80);
                  goto LAB_01423e18;
                }
                lVar23 = *(long *)((long)plVar6 + 0x80);
                lVar25 = *(long *)((long)plVar6 + 0x78);
                lVar26 = 0;
              }
              lVar15 = (long)(iVar8 + 2);
              uVar14 = *(ulong *)((long)plVar6 + 0x60);
              uVar27 = *(ulong *)((long)plVar6 + 0x10);
            } while( true );
          }
          lVar25 = 0;
LAB_01424218:
          *(long *)((long)plVar6 + 0x80) = lVar25;
          *(ulong *)((long)plVar6 + 0x78) = (ulong)(uint)((int)lVar15 + (int)lVar18);
          FUN_01422ba0(uVar10,lVar16,uVar10);
          uVar10 = *(ulong *)((long)plVar6 + 0x90);
          if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <=
              (ulong)((*(long *)((long)plVar6 + 0x78) << 0x20) >> 0x21)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0,0x1424264);
            (*pcVar4)();
          }
          lVar12 = *(long *)((long)plVar6 + 0x10);
          if ((ulong)((long)((ulong)*(uint *)(lVar12 + 3) << 0x20) >> 0x21) <=
              (ulong)((*(long *)((long)plVar6 + 0x80) << 0x20) >> 0x21)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0,0x1424284);
            (*pcVar4)();
          }
          uVar13 = *(uint *)(lVar12 + ((*(long *)((long)plVar6 + 0x80) << 0x20) >> 0x21) * 4 + 7);
          lVar20 = ((*(long *)((long)plVar6 + 0x78) << 0x20) >> 0x21) * 4 + 7;
          *(uint *)(uVar10 + lVar20) = uVar13;
          if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar13 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >> 1 & 1)
              != 0)) {
            *(ulong *)((long)plVar6 + -0x20) = uVar10;
            *(long *)((long)plVar6 + -0x18) = lVar15;
            *(long *)((long)plVar6 + -0x10) = lVar18;
            *(undefined8 *)((long)plVar6 + -8) = 0x1424244;
            *(long *)((long)plVar6 + -0x30) = lVar12;
            *(undefined8 *)((long)plVar6 + -0x28) = extraout_x1_04;
            FUN_0133eb00(uVar10,uVar10 + lVar20,0,2);
          }
        }
      }
    }
  }
  return 0;
LAB_01423de0:
  lVar17 = 0;
  iVar8 = (int)*(undefined8 *)((long)plVar6 + 0x18);
  lVar18 = *(long *)((long)plVar6 + 0x70);
  lVar16 = *(long *)((long)plVar6 + 0x68);
LAB_01423e18:
  lVar15 = (long)(iVar8 + 2);
  lVar24 = (long)(iVar7 + 2);
  bVar3 = true;
  plVar5 = plVar6;
  while( true ) {
    uVar14 = plVar5[0xc];
    plVar5[0xe] = lVar18;
    plVar5[0xd] = lVar16;
    plVar5[3] = lVar15;
    plVar5[0xf] = lVar25;
    plVar5[0x10] = lVar23;
    if ((((int)lVar26 < 0xe) && ((int)lVar17 < 0xe)) && (!bVar3)) break;
    iVar7 = (int)lVar24 + -2;
    if (iVar7 < 3) {
      lVar12 = 2;
    }
    else {
      lVar12 = (long)iVar7;
    }
    *(int *)(uVar14 + 0x27) = (int)lVar12;
    uVar21 = (lVar16 << 0x20) >> 0x21;
    uVar13 = *(uint *)(uVar10 + 3);
    plVar5[5] = lVar12;
    plVar5[10] = uVar21;
    if ((ulong)((long)((ulong)uVar13 << 0x20) >> 0x21) <= uVar21) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x142418c);
      (*pcVar4)();
    }
    lVar12 = uVar21 * 4 + 7;
    lVar20 = unaff_x26 + (ulong)*(uint *)(uVar10 + lVar12);
    plVar6 = plVar5 + -2;
    plVar5[-1] = 0;
    plVar5[-2] = 0;
    plVar5[0xb] = lVar12;
    lVar18 = 0x1423efc;
    auVar28 = FUN_01424c80(uVar14,uVar27);
    lVar15 = auVar28._0_8_;
    plVar5[2] = lVar15;
    if (auVar28._0_4_ < 1) {
      lVar16 = plVar5[1];
      lVar17 = plVar5[0xd];
      lVar12 = plVar5[0xe];
      lVar15 = lVar23;
    }
    else {
      lVar25 = plVar5[1];
      plVar5[7] = (long)((int)lVar25 + auVar28._0_4_);
      lVar20 = plVar5[0x10];
      lVar18 = 0x1423f48;
      auVar28 = FUN_01422ba0(*plVar5,plVar5[0xd]);
      iVar8 = (int)plVar5[2];
      iVar7 = (int)plVar5[0xe] - iVar8;
      lVar17 = (long)((int)plVar5[0xd] + iVar8);
      if (iVar7 == 2) {
        lVar18 = plVar5[0xc];
        lVar15 = plVar5[7];
        lVar16 = plVar5[0xb];
        uVar10 = plVar5[0x10];
        lVar25 = lVar17;
        goto LAB_01424218;
      }
      lVar12 = (long)iVar7;
      if ((int)plVar5[0xe] == iVar8) {
        uVar10 = plVar5[0x10];
        lVar15 = plVar5[7];
        plVar5 = plVar5 + -2;
        goto LAB_014242c0;
      }
      lVar16 = plVar5[7];
    }
    uVar10 = plVar5[0x10];
    uVar27 = (lVar16 << 0x20) >> 0x21;
    uVar14 = (long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21;
    plVar5[0xe] = lVar12;
    plVar5[0xd] = lVar17;
    plVar5[1] = lVar16;
    if (uVar14 <= uVar27) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1424190);
      (*pcVar4)();
    }
    if (uVar14 <= (ulong)plVar5[8]) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1424194);
      (*pcVar4)();
    }
    uVar13 = *(uint *)(uVar10 + plVar5[9]);
    lVar23 = uVar27 * 4 + 7;
    uVar27 = (ulong)((int)plVar5[0xc] - 2);
    *(uint *)(uVar10 + lVar23) = uVar13;
    if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar13 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)
       ) {
      plVar5[-6] = lVar20;
      plVar5[-5] = lVar25;
      plVar5[-4] = lVar15;
      plVar5[-3] = lVar18;
      *(undefined1 (*) [16])(plVar5 + -8) = auVar28;
      FUN_0133eb00(uVar10,uVar10 + lVar23,0,2);
      lVar12 = extraout_x9_00;
      uVar27 = extraout_x11_00;
    }
    plVar5[6] = uVar27;
    if ((int)uVar27 == 0) {
      lVar15 = (long)((int)lVar16 + 2);
      plVar5 = plVar5 + -2;
      goto LAB_014242c0;
    }
    uVar13 = *(uint *)(*plVar5 + 3);
    uVar14 = (lVar17 << 0x20) >> 0x21;
    plVar5[8] = uVar14;
    if ((ulong)((long)((ulong)uVar13 << 0x20) >> 0x21) <= uVar14) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1424198);
      (*pcVar4)();
    }
    lVar12 = uVar14 * 4 + 7;
    lVar23 = unaff_x26 + (ulong)*(uint *)(*plVar5 + lVar12);
    uVar13 = (int)plVar5[0xb] + 2;
    lVar17 = (long)(int)uVar27;
    plVar6 = plVar5 + -4;
    plVar5[-3] = 0;
    plVar5[-4] = 0;
    plVar5[9] = lVar12;
    plVar5[7] = (ulong)uVar13;
    plVar5[0xc] = lVar17;
    plVar5[0xb] = (long)(int)uVar13;
    lVar26 = 0x1424054;
    auVar28 = FUN_014248a0(plVar5[10],uVar10,lVar23,(long)(int)uVar13);
    lVar12 = auVar28._0_8_;
    lVar20 = (long)(int)((int)plVar5[-1] + 2U);
    plVar5[2] = lVar12;
    plVar5[3] = (ulong)((int)plVar5[-1] + 2U);
    if (auVar28._0_4_ < 1) {
      lVar18 = plVar5[10];
      lVar16 = plVar5[9];
      lVar12 = lVar17;
    }
    else {
      lVar23 = plVar5[0xe];
      lVar26 = 0x142409c;
      FUN_01422ba0(lVar23,plVar5[9]);
      auVar28._8_8_ = extraout_x1_03;
      auVar28._0_8_ = plVar5[2];
      iVar7 = (int)plVar5[2];
      lVar20 = (long)((int)plVar5[3] + iVar7);
      if ((int)plVar5[4] == iVar7) {
        lVar12 = plVar5[0xc];
        lVar17 = plVar5[0xb];
        uVar10 = plVar5[0xe];
        plVar5 = plVar5 + -4;
        lVar15 = lVar20;
        goto LAB_014242c0;
      }
      lVar18 = (long)((int)plVar5[4] - iVar7);
      lVar16 = (long)((int)plVar5[5] + iVar7);
    }
    lVar17 = auVar28._0_8_;
    uVar10 = plVar5[0xe];
    uVar14 = (lVar20 << 0x20) >> 0x21;
    if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= uVar14) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x142419c);
      (*pcVar4)();
    }
    uVar27 = plVar5[-2];
    if ((ulong)((long)((ulong)*(uint *)(uVar27 + 3) << 0x20) >> 0x21) <= (ulong)plVar5[6]) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x14241a0);
      (*pcVar4)();
    }
    uVar13 = *(uint *)(uVar27 + plVar5[7]);
    lVar24 = uVar14 * 4 + 7;
    iVar7 = (int)plVar5[0xc] + -2;
    lVar15 = (long)((int)lVar20 + 2);
    lVar25 = (long)((int)plVar5[0xb] + 2);
    *(uint *)(uVar10 + lVar24) = uVar13;
    if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar13 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)
       ) {
      plVar5[-8] = lVar23;
      plVar5[-7] = lVar20;
      plVar5[-6] = lVar12;
      plVar5[-5] = lVar26;
      plVar5[-10] = uVar27;
      plVar5[-9] = auVar28._8_8_;
      FUN_0133eb00(uVar10,uVar10 + lVar24,0,2);
      lVar20 = plVar5[-7];
      uVar27 = plVar5[-10];
      lVar12 = plVar5[-6];
      lVar18 = extraout_x8;
      lVar25 = extraout_x9;
      uVar10 = extraout_x10;
      lVar16 = extraout_x11;
      lVar17 = extraout_x12;
      iVar7 = extraout_w13;
    }
    if (iVar7 == 2) goto LAB_01424218;
    lVar23 = (long)iVar7;
    lVar26 = *plVar5;
    bVar3 = false;
    lVar24 = plVar5[1];
    plVar5 = plVar5 + -4;
  }
  iVar7 = (int)lVar24 + 2;
  uVar21 = (ulong)iVar7;
  *(int *)(uVar14 + 0x27) = iVar7;
  plVar6 = plVar5;
  goto LAB_01423b88;
LAB_0142341c:
  iVar8 = (int)*(undefined8 *)((long)plVar5 + 0x10);
  lVar20 = 0;
  lVar18 = *(long *)((long)plVar5 + 0x78);
  lVar16 = *(long *)((long)plVar5 + 0x80);
LAB_01423444:
  lVar17 = (long)(iVar8 + -2);
  lVar23 = (long)(iVar7 + 2);
  bVar3 = true;
  plVar6 = plVar5;
  while( true ) {
    uVar21 = plVar6[0xc];
    lVar26 = plVar6[0xe];
    plVar6[9] = uVar10;
    plVar6[2] = lVar17;
    plVar6[0x10] = lVar16;
    plVar6[0xf] = lVar18;
    plVar6[4] = lVar15;
    if ((((int)lVar20 < 0xe) && ((int)lVar25 < 0xe)) && (!bVar3)) break;
    iVar7 = (int)lVar23 + -2;
    if (iVar7 < 3) {
      lVar12 = 2;
    }
    else {
      lVar12 = (long)iVar7;
    }
    *(int *)(uVar21 + 0x27) = (int)lVar12;
    uVar10 = (lVar15 << 0x20) >> 0x21;
    uVar13 = *(uint *)(plVar6[1] + 3);
    plVar6[5] = lVar12;
    plVar6[0xb] = uVar10;
    if ((ulong)((long)((ulong)uVar13 << 0x20) >> 0x21) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1423808);
      (*pcVar4)();
    }
    lVar12 = uVar10 * 4 + 7;
    lVar15 = unaff_x26 + (ulong)*(uint *)(plVar6[1] + lVar12);
    lVar18 = (long)(int)lVar26;
    plVar5 = plVar6 + -2;
    plVar6[-1] = 0;
    plVar6[-2] = (long)((int)lVar16 + -2);
    plVar6[0xd] = lVar12;
    lVar12 = 0x1423570;
    iVar7 = FUN_01424c80(uVar21,uVar14);
    lVar20 = plVar6[0xe];
    uVar13 = (int)lVar20 - iVar7;
    plVar6[8] = (ulong)uVar13;
    if ((int)uVar13 < 1) {
      lVar17 = *plVar6;
      lVar23 = plVar6[0xd];
      lVar25 = extraout_x1;
    }
    else {
      lVar20 = plVar6[0xd];
      lVar16 = (long)(int)uVar13;
      lVar18 = (long)(int)(((int)*plVar6 - uVar13) + 2);
      plVar6[6] = (ulong)((int)*plVar6 - uVar13);
      plVar6[0xd] = (ulong)((int)lVar20 - uVar13);
      lVar15 = plVar6[0x10];
      lVar12 = 0x14235cc;
      FUN_01422ba0(lVar15,(long)(int)(((int)lVar20 - uVar13) + 2));
      lVar17 = (long)(int)plVar6[6];
      if ((int)plVar6[0xe] == (int)plVar6[8]) {
        uVar10 = plVar6[7];
        uVar14 = plVar6[0x10];
        goto LAB_0142392c;
      }
      lVar23 = (long)(int)plVar6[0xd];
      lVar20 = (long)((int)plVar6[0xe] - (int)plVar6[8]);
      lVar25 = extraout_x1_00;
    }
    uVar14 = plVar6[0x10];
    uVar13 = *(uint *)(uVar14 + 3);
    uVar10 = (lVar17 << 0x20) >> 0x21;
    plVar6[0xe] = lVar20;
    plVar6[0xd] = lVar23;
    *plVar6 = lVar17;
    if ((ulong)((long)((ulong)uVar13 << 0x20) >> 0x21) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x142380c);
      (*pcVar4)();
    }
    lVar26 = plVar6[-1];
    if ((ulong)((long)((ulong)*(uint *)(lVar26 + 3) << 0x20) >> 0x21) <= (ulong)plVar6[9]) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1423810);
      (*pcVar4)();
    }
    uVar13 = *(uint *)(lVar26 + plVar6[0xb]);
    lVar24 = uVar10 * 4 + 7;
    lVar11 = plVar6[7];
    uVar10 = (ulong)((int)lVar11 - 2);
    *(uint *)(uVar14 + lVar24) = uVar13;
    if (((((uint)*(undefined8 *)((uVar14 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar13 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)
       ) {
      plVar6[-6] = lVar15;
      plVar6[-5] = lVar18;
      plVar6[-4] = lVar16;
      plVar6[-3] = lVar12;
      plVar6[-8] = lVar11;
      plVar6[-7] = lVar25;
      FUN_0133eb00(uVar14,uVar14 + lVar24,0,2);
      lVar23 = extraout_x8_01;
      lVar20 = extraout_x9_03;
      lVar26 = extraout_x10_00;
      uVar10 = extraout_x13;
    }
    iVar7 = (int)lVar23;
    plVar6[4] = uVar10;
    iVar8 = (int)uVar10;
    if (iVar8 == 2) {
      lVar17 = (long)((int)lVar17 + -2);
      lVar15 = (long)((int)plVar6[2] + -2);
      plVar5 = plVar6 + -2;
      goto LAB_01423890;
    }
    uVar13 = *(uint *)(uVar14 + 3);
    uVar10 = (lVar23 << 0x20) >> 0x21;
    plVar6[5] = uVar10;
    if ((ulong)((long)((ulong)uVar13 << 0x20) >> 0x21) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1423814);
      (*pcVar4)();
    }
    lVar12 = uVar10 * 4 + 7;
    lVar20 = unaff_x26 + (ulong)*(uint *)(uVar14 + lVar12);
    uVar27 = (ulong)iVar8;
    plVar5 = plVar6 + -4;
    plVar6[-3] = 0;
    plVar6[-4] = (long)(iVar8 + -2);
    plVar6[6] = lVar12;
    plVar6[7] = uVar27;
    lVar12 = 0;
    lVar18 = 0x14236c4;
    iVar7 = FUN_014248a0(plVar6[10],lVar26);
    uVar13 = (int)plVar6[2] - iVar7;
    iVar7 = (int)*plVar6 + -2;
    plVar6[7] = (ulong)uVar13;
    if ((int)uVar13 < 1) {
      lVar17 = (long)((int)plVar6[-2] + -2);
      uVar10 = plVar6[5];
      lVar16 = extraout_x1_01;
    }
    else {
      iVar8 = ((int)plVar6[-2] + -2) - uVar13;
      uVar27 = (ulong)(int)uVar13;
      lVar12 = (long)(iVar8 + 2);
      plVar6[9] = (ulong)(iVar7 - uVar13);
      plVar6[5] = (long)iVar8;
      lVar20 = plVar6[0xe];
      lVar18 = 0x142373c;
      FUN_01422ba0(plVar6[-3],(long)(int)((iVar7 - uVar13) + 2));
      uVar13 = (uint)plVar6[7];
      iVar7 = (uint)plVar6[2] - uVar13;
      if (iVar7 == 2) {
        lVar15 = (long)(int)plVar6[9];
        lVar17 = plVar6[5];
        lVar20 = plVar6[0xc];
        iVar7 = (int)plVar6[0xb];
        uVar14 = plVar6[0xe];
        plVar5 = plVar6 + -4;
        goto LAB_01423890;
      }
      uVar10 = (ulong)iVar7;
      if ((uint)plVar6[2] == uVar13) {
        uVar14 = plVar6[0xe];
        lVar17 = plVar6[5];
        plVar5 = plVar6 + -4;
        goto LAB_0142392c;
      }
      iVar7 = (int)plVar6[9];
      lVar17 = plVar6[5];
      lVar16 = extraout_x1_02;
    }
    lVar15 = (long)iVar7;
    uVar14 = plVar6[0xe];
    uVar21 = (lVar17 << 0x20) >> 0x21;
    uVar22 = (long)((ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21;
    if (uVar22 <= uVar21) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1423818);
      (*pcVar4)();
    }
    if (uVar22 <= (ulong)plVar6[3]) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x142381c);
      (*pcVar4)();
    }
    uVar2 = *(uint *)(uVar14 + plVar6[4]);
    lVar25 = uVar21 * 4 + 7;
    iVar7 = (int)plVar6[0xc] + -2;
    lVar17 = (long)((int)lVar17 + -2);
    *(uint *)(uVar14 + lVar25) = uVar2;
    if (((((uint)*(undefined8 *)((uVar14 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar2 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
    {
      plVar6[-8] = lVar20;
      plVar6[-7] = lVar12;
      plVar6[-6] = uVar27;
      plVar6[-5] = lVar18;
      plVar6[-10] = uVar10;
      plVar6[-9] = lVar16;
      FUN_0133eb00(uVar14,uVar14 + lVar25,0,2);
      lVar12 = plVar6[-7];
      uVar10 = plVar6[-10];
      uVar27 = plVar6[-6];
      uVar14 = extraout_x12_00;
      iVar7 = extraout_w10_01;
    }
    if (iVar7 == 0) goto LAB_0142392c;
    lVar20 = (long)(int)plVar6[6];
    lVar25 = (long)(int)uVar13;
    lVar16 = (long)iVar7;
    lVar18 = (long)((int)plVar6[0xb] + -2);
    bVar3 = false;
    lVar23 = plVar6[1];
    plVar6 = plVar6 + -4;
  }
  iVar7 = (int)lVar23 + 2;
  uVar22 = (ulong)iVar7;
  *(int *)(uVar21 + 0x27) = iVar7;
  plVar5 = plVar6;
  goto LAB_014231dc;
}

