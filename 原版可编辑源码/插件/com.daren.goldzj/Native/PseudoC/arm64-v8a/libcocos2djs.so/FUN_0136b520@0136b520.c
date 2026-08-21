
/* WARNING: Removing unreachable block (ram,0x0136d400) */

undefined8 FUN_0136b520(ulong param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  ulong *puVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  int iVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  int extraout_w11;
  int extraout_w11_00;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  ulong uVar36;
  ulong extraout_x12;
  ulong uVar37;
  ulong extraout_x13;
  ulong extraout_x13_00;
  long extraout_x14;
  long extraout_x14_00;
  int iVar38;
  long lVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  long unaff_x26;
  undefined8 unaff_x30;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  ulong local_c0 [8];
  long local_80;
  
  puVar9 = local_c0;
  if ((param_2 & 1) != 0) {
    local_80 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    uVar4 = *(ushort *)(local_80 + 7);
    if (uVar4 < 0xaa) {
      if ((uVar4 < 0xa9) && ((0x3f < uVar4 || (*(int *)(param_2 + 7) == 0)))) goto LAB_0136d064;
    }
    else {
      uVar22 = *(ulong *)(unaff_x26 + 0x168);
      if (((*(int *)(param_2 + 7) == (int)uVar22) ||
          (*(int *)(param_2 + 7) == (int)*(undefined8 *)(unaff_x26 + 1000))) &&
         (lVar18 = unaff_x26 + (ulong)*(uint *)(param_1 - 1),
         (*(uint *)(lVar18 + 0xb) >> 0x18 & 1) == 0)) {
        if (*(ushort *)(lVar18 + 7) < 0x411) {
          local_c0[0] = 0;
        }
        else {
          local_c0[0] = (ulong)((*(byte *)(lVar18 + 9) & 0x24) == 0);
        }
        if ((0x411 < uVar4) && ((*(uint *)(local_80 + 0xb) >> 0x15 & 1) == 0)) {
          lVar39 = unaff_x26 + (ulong)*(uint *)(local_80 + 0x17);
          lVar18 = (long)(int)((*(uint *)(local_80 + 0xb) >> 10 & 0x3ff) * 3);
          lVar33 = 0;
          uVar19 = 0;
          uVar34 = 0;
          uVar37 = 1;
          do {
            *(undefined8 *)((long)puVar9 + 0x80) = uVar19;
            *(long *)((long)puVar9 + 0x78) = lVar18;
            if (lVar33 != lVar18) {
              uVar40 = *(undefined8 *)(unaff_x26 + 0xf8);
              lVar30 = lVar18;
              lVar35 = lVar33;
LAB_0136b648:
              lVar41 = unaff_x26 + (ulong)*(uint *)(lVar39 + lVar35 * 4 + 0xf);
              iVar21 = *(int *)(lVar41 + -1);
              puVar9[0xe] = lVar35;
              puVar9[0xd] = lVar18;
              puVar9[0xc] = lVar33;
              puVar9[0xb] = uVar34;
              puVar9[10] = uVar37;
              puVar9[9] = lVar39;
              puVar9[0x11] = lVar41;
              if (iVar21 != (int)uVar40) {
                if ((int)uVar19 != 0) goto LAB_0136cf68;
LAB_0136b6c4:
                if ((int)uVar37 == 0) {
                  lVar11 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                  iVar21 = (int)lVar41;
                  if ((*(uint *)(lVar11 + 0xb) >> 0x15 & 1) == 0) {
                    lVar42 = unaff_x26 + (ulong)*(uint *)(lVar11 + 0x17);
                    uVar25 = *(uint *)(lVar11 + 0xb) >> 10 & 0x3ff;
                    if (uVar25 != 0) {
                      if (uVar25 < 0x21) {
                        lVar20 = (long)(int)uVar25 * 3;
                        uVar13 = puVar9[0x12];
                        lVar16 = puVar9[8];
                        uVar26 = *puVar9;
                        do {
                          if (lVar20 == 0) goto LAB_0136cf68;
                          lVar20 = lVar20 + -3;
                        } while (*(int *)(lVar42 + lVar20 * 4 + 0xf) != iVar21);
                        goto LAB_0136b960;
                      }
                      iVar27 = *(short *)(lVar42 + 5) + -1;
                      iVar32 = 0;
                      iVar24 = iVar27;
                      do {
                        iVar17 = iVar32 + ((uint)(iVar24 - iVar32) >> 1);
                        if (*(uint *)(unaff_x26 +
                                      (ulong)*(uint *)(lVar42 + (long)(int)(((uint)(*(int *)(lVar42 
                                                  + (long)(iVar17 * 3) * 4 + 0x13) >> 1) >> 9 &
                                                  0x3ff) * 3) * 4 + 0xf) + 3) <
                            *(uint *)(lVar41 + 3)) {
                          iVar32 = iVar17 + 1;
                          iVar17 = iVar24;
                        }
                        iVar24 = iVar17;
                      } while (iVar32 != iVar24);
                      for (; iVar32 <= iVar27; iVar32 = iVar32 + 1) {
                        uVar15 = (uint)(*(int *)(lVar42 + (long)(iVar32 * 3) * 4 + 0x13) >> 1) >> 9
                                 & 0x3ff;
                        lVar20 = (long)(int)(uVar15 * 3);
                        lVar16 = unaff_x26 + (ulong)*(uint *)(lVar42 + lVar20 * 4 + 0xf);
                        if (*(uint *)(lVar16 + 3) != *(uint *)(lVar41 + 3)) break;
                        if ((int)lVar16 == iVar21) {
                          if (uVar15 < uVar25) {
                            uVar26 = *puVar9;
                            uVar13 = puVar9[0x12];
                            uVar19 = puVar9[0x10];
                            lVar16 = puVar9[8];
                            goto LAB_0136b960;
                          }
                          break;
                        }
                      }
                    }
                  }
                  else {
                    uVar29 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                    uVar26 = *puVar9;
                    if ((uVar29 & 1) == 0) {
                      uVar29 = *(ulong *)(unaff_x26 + 0x410);
                    }
                    uVar12 = (ulong)(*(uint *)(lVar41 + 3) >> 3);
                    lVar11 = 0;
                    while( true ) {
                      uVar12 = uVar12 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar29 + 0xf) << 0x20)
                                        >> 0x21) - 1U;
                      lVar42 = uVar12 * 3;
                      lVar20 = (lVar42 + 5) * 4;
                      iVar32 = *(int *)(uVar29 + lVar20 + 7);
                      if (iVar32 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                      if (iVar32 == iVar21) {
                        uVar25 = *(int *)(uVar29 + lVar20 + 0xf) >> 1;
                        uVar12 = (ulong)uVar25;
                        if ((uVar25 >> 4 & 1) == 0) {
                          if ((ulong)((long)((ulong)*(uint *)(uVar29 + 3) << 0x20) >> 0x21) <=
                              lVar42 + 6U) {
                    /* WARNING: Does not return */
                            pcVar8 = (code *)SoftwareBreakpoint(0,0x136d094);
                            (*pcVar8)();
                          }
                          lVar18 = unaff_x26 + (ulong)*(uint *)(uVar29 + lVar20 + 0xb);
                          goto LAB_0136ba40;
                        }
                        break;
                      }
                      lVar11 = lVar11 + 1;
                      uVar12 = uVar12 + lVar11;
                    }
                  }
                  goto LAB_0136cf68;
                }
                uVar13 = puVar9[0x12];
                lVar16 = puVar9[8];
                uVar26 = *puVar9;
                lVar11 = lVar16;
                lVar42 = lVar39;
                lVar20 = lVar35;
LAB_0136b960:
                uVar25 = *(int *)(lVar42 + lVar20 * 4 + 0x13) >> 1;
                uVar12 = (ulong)uVar25;
                if ((uVar25 >> 4 & 1) != 0) goto LAB_0136cf68;
                if ((uVar25 >> 1 & 1) == 0) {
                  bVar10 = (uVar25 >> 6 & 7) == 2;
                  uVar37 = (ulong)*(byte *)(lVar11 + 4) + ((uVar12 & 0x1ff80000) >> 0x13);
                  if (uVar37 < *(byte *)(lVar11 + 3)) {
                    lVar18 = uVar37 * 4 + -1;
                    if (bVar10) {
                      uVar34 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(param_2 + lVar18) + 3);
                      goto LAB_0136b9f8;
                    }
                    lVar18 = unaff_x26 + (ulong)*(uint *)(param_2 + lVar18);
                  }
                  else {
                    uVar29 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                    if ((uVar29 & 1) == 0) {
                      uVar29 = uVar22;
                    }
                    lVar18 = unaff_x26 +
                             (ulong)*(uint *)(uVar29 + (uVar37 - *(byte *)(lVar11 + 3)) * 4 + 7);
                    if (bVar10) {
                      uVar34 = *(undefined8 *)(lVar18 + 3);
LAB_0136b9f8:
                      uVar37 = **(ulong **)(unaff_x26 + 0x1428);
                      uVar22 = uVar37 + 0xc;
                      if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
                        lVar18 = uVar37 + 1;
                        **(ulong **)(unaff_x26 + 0x1428) = uVar22;
                      }
                      else {
                        puVar9[7] = uVar12;
                        puVar9[6] = uVar34;
                        unaff_x30 = 0x136d0ac;
                        lVar18 = FUN_01348560(uVar26,param_1,0xc,uVar12,uVar13,lVar16,uVar19);
                        param_1 = puVar9[0x14];
                        param_2 = puVar9[0x13];
                        lVar41 = puVar9[0x11];
                        uVar26 = *puVar9;
                        uVar12 = puVar9[7];
                        uVar34 = puVar9[6];
                      }
                      *(int *)(lVar18 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      *(undefined8 *)(lVar18 + 3) = uVar34;
                    }
                  }
                }
                else {
                  lVar18 = unaff_x26 + (ulong)*(uint *)(lVar42 + lVar20 * 4 + 0x17);
                }
LAB_0136ba40:
                auVar45._8_8_ = param_2;
                auVar45._0_8_ = lVar18;
                if ((uVar12 & 1) != 0) {
                  if (*(int *)(lVar18 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
                    lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + 3);
                    lVar39 = unaff_x26 + (ulong)*(uint *)(lVar18 + -1);
                    if ((*(byte *)(lVar39 + 9) >> 1 & 1) == 0) {
                      if ((int)lVar39 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                        if (*(int *)(lVar18 + 0x33) != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
LAB_0136d204:
                          puVar9[-2] = lVar41;
                          puVar9[-1] = param_2;
                    /* WARNING: Subroutine does not return */
                          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
                        }
                        uVar22 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                        iVar21 = *(int *)(uVar22 - 1);
                        while (iVar21 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                          uVar22 = unaff_x26 + (ulong)*(uint *)(uVar22 + 0x13);
                          iVar21 = *(int *)(uVar22 - 1);
                        }
                        if ((uVar22 & 1) == 0) goto LAB_0136d204;
                        lVar39 = unaff_x26 + (ulong)*(uint *)(uVar22 - 1);
                        sVar5 = *(short *)(lVar39 + 7);
                        if (sVar5 != 0x439) {
                          if (sVar5 == 0x417) {
                            uVar22 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                          }
                          else {
                            uVar22 = param_2;
                            if ((int)lVar39 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                            goto LAB_0136d204;
                          }
                        }
                        uVar4 = *(ushort *)
                                 (unaff_x26 +
                                  (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar22 + 0xf) + -1)
                                 + 7);
                        if (uVar4 < 0x88 || 0x91 < uVar4) goto LAB_0136d204;
                        puVar9[-1] = 0;
                        puVar9[-2] = param_2;
                        uVar12 = 0;
                        unaff_x30 = 0x136bb50;
                        auVar45 = FUN_01341080(param_1,lVar18,0,param_2);
                        puVar9 = puVar9 + -2;
                      }
                      else {
                        auVar45._0_8_ = *(undefined8 *)(unaff_x26 + 0xa0);
                      }
                    }
                    else {
                      puVar9[-1] = 0;
                      puVar9[-2] = param_2;
                      unaff_x30 = 0x136bb7c;
                      auVar45 = FUN_0133fcc0(uVar26,0,lVar18,uVar12,param_1);
                      puVar9 = puVar9 + -2;
                    }
                  }
                  else {
                    lVar39 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                    sVar5 = *(short *)(lVar39 + 7);
                    if (sVar5 == 0x423) {
                      if (*(int *)(lVar18 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
                      goto LAB_0136d204;
                      auVar45._0_8_ = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                    }
                    else if (sVar5 == 0x439) {
                      if ((*(int *)(lVar18 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x908)) ||
                         (((bVar3 = *(byte *)(lVar39 + 9), (bVar3 & 0xc0) != 0xc0 &&
                           (3 < (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) &
                                0x1f) - 0xd)) || ((bVar3 & 1) != 0)))) goto LAB_0136d204;
                      lVar18 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b);
                      auVar45._0_8_ = lVar18;
                      if ((int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) goto LAB_0136d204;
                      if (*(int *)(lVar18 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                        auVar45._0_8_ = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf);
                      }
                    }
                    else {
                      if (((sVar5 != 0x411) ||
                          (*(int *)(lVar18 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))) ||
                         ((uVar22 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar22 & 1) == 0
                          || (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar22 - 1) + 7)))))
                      goto LAB_0136d204;
                      auVar45._4_4_ = 0;
                      auVar45._0_4_ = *(int *)(uVar22 + 7) * 2;
                    }
                  }
                }
                uVar19 = auVar45._8_8_;
                uVar22 = auVar45._0_8_;
                puVar9[7] = uVar22;
                uVar34 = *puVar9;
                if ((int)uVar34 == 0) {
                  param_1 = puVar9[0x14];
                  uVar37 = puVar9[0x11];
                  goto LAB_0136d46c;
                }
                param_1 = puVar9[0x14];
                lVar18 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
                auVar46._8_8_ = uVar19;
                auVar46._0_8_ = lVar18;
                uVar25 = *(uint *)(lVar18 + 0xb);
                iVar32 = auVar45._0_4_;
                iVar21 = (int)unaff_x26;
                uVar29 = param_1;
                if ((uVar25 >> 0x15 & 1) != 0) {
                  uVar28 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
                  if ((uVar28 & 1) == 0) {
                    uVar28 = *(ulong *)(unaff_x26 + 0x410);
                  }
                  uVar15 = *(uint *)(uVar28 + 0xf);
                  uVar37 = puVar9[0x11];
                  uVar23 = (ulong)(*(uint *)(uVar37 + 3) >> 3);
                  puVar9[6] = uVar28;
                  lVar39 = 0;
                  while( true ) {
                    uVar23 = uVar23 & ((long)(unaff_x26 + (ulong)uVar15 << 0x20) >> 0x21) - 1U;
                    lVar33 = uVar23 * 3;
                    lVar35 = (lVar33 + 5) * 4;
                    iVar27 = *(int *)(uVar28 + lVar35 + 7);
                    iVar24 = (int)uVar37;
                    if (iVar27 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                    if (iVar27 == iVar24) {
                      uVar25 = *(int *)(uVar28 + lVar35 + 0xf) >> 1;
                      if ((uVar25 >> 3 & 1) != 0) goto LAB_0136cfb0;
                      if ((uVar25 & 1) != 0) {
                        if ((ulong)((long)((ulong)*(uint *)(uVar28 + 3) << 0x20) >> 0x21) <=
                            lVar33 + 6U) {
                    /* WARNING: Does not return */
                          pcVar8 = (code *)SoftwareBreakpoint(0,0x136d330);
                          (*pcVar8)();
                        }
                        lVar33 = unaff_x26 + (ulong)*(uint *)(uVar28 + lVar35 + 0xb);
                        goto LAB_0136cc04;
                      }
                      if (((((iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x5d0)) ||
                            (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc18))) ||
                           (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x848))) ||
                          ((iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc48) ||
                           (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc70))))) ||
                         ((iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x960) ||
                          (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xa38))))) goto LAB_0136d46c;
                      uVar37 = (long)((ulong)*(uint *)(uVar28 + 3) << 0x20) >> 0x21;
                      if (uVar37 <= lVar33 + 6U) {
                    /* WARNING: Does not return */
                        pcVar8 = (code *)SoftwareBreakpoint(0,0x136d338);
                        (*pcVar8)();
                      }
                      *(int *)(uVar28 + lVar35 + 0xb) = iVar32;
                      if (((((uint)*(undefined8 *)((uVar28 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0
                           ) && ((uVar22 & 1) != 0)) &&
                         (((uint)*(undefined8 *)
                                  ((unaff_x26 + (uVar22 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
                           1 & 1) != 0)) {
                        puVar9[-4] = uVar12;
                        puVar9[-3] = param_1;
                        puVar9[-2] = uVar37;
                        puVar9[-1] = unaff_x30;
                        puVar9[-6] = lVar18;
                        puVar9[-5] = uVar19;
                        FUN_0133eb00(uVar28,uVar28 + lVar35 + 0xb,0,2);
                        param_1 = puVar9[-3];
                        unaff_x30 = puVar9[-1];
                      }
                      goto LAB_0136ceb0;
                    }
                    lVar39 = lVar39 + 1;
                    uVar23 = uVar23 + lVar39;
                  }
                  if (((*(short *)(lVar18 + 7) == 0x41b) ||
                      (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x5d0))) ||
                     ((iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc18) ||
                      ((((iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x848) ||
                         (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc48))) ||
                        (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc70))) ||
                       ((iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x960) ||
                        (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xa38)))))))))
                  goto LAB_0136d46c;
                  iVar32 = (int)*(undefined8 *)(unaff_x26 + 0xf8);
                  if ((*(int *)(uVar37 - 1) == iVar32) && ((*(uint *)(uVar37 + 7) & 1) != 0)) {
                    if ((*(uint *)(uVar37 + 7) >> 4 & 1) != 0) goto LAB_0136d46c;
                  }
                  else if ((uVar25 >> 0x1b & 1) == 0) goto LAB_0136d46c;
                  uVar29 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf);
                  uVar25 = *(uint *)(uVar29 - 1);
                  while( true ) {
                    lVar39 = unaff_x26 + (ulong)uVar25;
                    iVar27 = (int)*(undefined8 *)(unaff_x26 + 0xb0);
                    if ((int)uVar29 == iVar27) break;
                    uVar4 = *(ushort *)(lVar39 + 7);
                    if (uVar4 < 0x411) {
                      if ((uVar4 != 0xaa) || ((*(byte *)(lVar39 + 9) & 0x24) != 0))
                      goto LAB_0136d46c;
                      uVar23 = unaff_x26 + (ulong)*(uint *)(uVar29 + 3);
                      if ((uVar23 & 1) == 0) {
                        uVar23 = *(ulong *)(unaff_x26 + 0x410);
                      }
                      uVar36 = (ulong)(*(uint *)(uVar37 + 3) >> 3);
                      lVar33 = 0;
                      while( true ) {
                        uVar36 = uVar36 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar23 + 0xf) << 0x20
                                                 ) >> 0x21) - 1U;
                        lVar30 = (uVar36 + 5) * 4;
                        lVar35 = unaff_x26 + (ulong)*(uint *)(uVar23 + lVar30 + 7);
                        if ((int)lVar35 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                        if (*(int *)(lVar35 + 3) == iVar24) {
                          if ((ulong)((long)((ulong)*(uint *)(uVar23 + 3) << 0x20) >> 0x21) <=
                              uVar36 + 6) {
                    /* WARNING: Does not return */
                            pcVar8 = (code *)SoftwareBreakpoint(0,0x136d380);
                            (*pcVar8)();
                          }
                          lVar35 = unaff_x26 + (ulong)*(uint *)(uVar23 + lVar30 + 0xb);
                          lVar33 = unaff_x26 + (ulong)*(uint *)(lVar35 + 0xb);
                          if ((int)lVar33 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                            uVar25 = *(int *)(lVar35 + 7) >> 1;
                            if ((uVar25 >> 3 & 1) != 0) goto LAB_0136cfb0;
                            if ((uVar25 & 1) == 0) goto LAB_0136cc8c;
                            goto LAB_0136cc04;
                          }
                          break;
                        }
                        lVar33 = lVar33 + 1;
                        uVar36 = uVar36 + lVar33;
                      }
                    }
                    else if ((*(uint *)(lVar39 + 0xb) >> 0x15 & 1) == 0) {
                      lVar33 = unaff_x26 + (ulong)*(uint *)(lVar39 + 0x17);
                      uVar25 = *(uint *)(lVar39 + 0xb) >> 10 & 0x3ff;
                      if (uVar25 != 0) {
                        if (uVar25 < 0x21) {
                          lVar30 = (long)(int)uVar25 * 3;
                          while (lVar30 != 0) {
                            lVar30 = lVar30 + -3;
                            if (*(int *)(lVar33 + lVar30 * 4 + 0xf) == iVar24) goto LAB_0136cad8;
                          }
                        }
                        else {
                          iVar31 = *(short *)(lVar33 + 5) + -1;
                          iVar17 = 0;
                          iVar38 = iVar31;
                          do {
                            iVar2 = iVar17 + ((uint)(iVar38 - iVar17) >> 1);
                            if (*(uint *)(unaff_x26 +
                                          (ulong)*(uint *)(lVar33 + (long)(int)(((uint)(*(int *)(
                                                  lVar33 + (long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9
                                                  & 0x3ff) * 3) * 4 + 0xf) + 3) <
                                *(uint *)(uVar37 + 3)) {
                              iVar17 = iVar2 + 1;
                              iVar2 = iVar38;
                            }
                            iVar38 = iVar2;
                          } while (iVar17 != iVar38);
                          for (; iVar17 <= iVar31; iVar17 = iVar17 + 1) {
                            uVar15 = (uint)(*(int *)(lVar33 + (long)(iVar17 * 3) * 4 + 0x13) >> 1)
                                     >> 9 & 0x3ff;
                            lVar30 = (long)(int)(uVar15 * 3);
                            lVar35 = unaff_x26 + (ulong)*(uint *)(lVar33 + lVar30 * 4 + 0xf);
                            if (*(uint *)(lVar35 + 3) != *(uint *)(uVar37 + 3)) break;
                            if ((int)lVar35 == iVar24) {
                              if (uVar15 < uVar25) goto LAB_0136cad8;
                              break;
                            }
                          }
                        }
                      }
                    }
                    else {
                      uVar23 = unaff_x26 + (ulong)*(uint *)(uVar29 + 3);
                      if ((uVar23 & 1) == 0) {
                        uVar23 = *(ulong *)(unaff_x26 + 0x410);
                      }
                      uVar36 = (ulong)(*(uint *)(uVar37 + 3) >> 3);
                      lVar33 = 0;
                      while( true ) {
                        uVar36 = uVar36 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar23 + 0xf) << 0x20
                                                 ) >> 0x21) - 1U;
                        lVar35 = uVar36 * 3;
                        lVar30 = (lVar35 + 5) * 4;
                        iVar17 = *(int *)(uVar23 + lVar30 + 7);
                        if (iVar17 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                        if (iVar17 == iVar24) {
                          uVar25 = *(int *)(uVar23 + lVar30 + 0xf) >> 1;
                          if ((uVar25 >> 3 & 1) != 0) goto LAB_0136cfb0;
                          if ((uVar25 & 1) == 0) goto LAB_0136cc8c;
                          if ((ulong)((long)((ulong)*(uint *)(uVar23 + 3) << 0x20) >> 0x21) <=
                              lVar35 + 6U) {
                    /* WARNING: Does not return */
                            pcVar8 = (code *)SoftwareBreakpoint(0,0x136d3bc);
                            (*pcVar8)();
                          }
                          lVar33 = unaff_x26 + (ulong)*(uint *)(uVar23 + lVar30 + 0xb);
                          goto LAB_0136cc04;
                        }
                        lVar33 = lVar33 + 1;
                        uVar36 = uVar36 + lVar33;
                      }
                    }
                    if (uVar4 == 0x41b) goto LAB_0136d46c;
                    uVar29 = unaff_x26 + (ulong)*(uint *)(lVar39 + 0xf);
                    if ((int)uVar29 == iVar27) break;
                    uVar25 = *(uint *)(uVar29 - 1);
                  }
                  goto LAB_0136cc8c;
                }
                lVar39 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0x17);
                uVar25 = uVar25 >> 10 & 0x3ff;
                iVar27 = iVar32 >> 1;
                if (uVar25 == 0) {
                  uVar37 = puVar9[0x11];
                }
                else if (uVar25 < 0x21) {
                  lVar35 = (long)(int)uVar25 * 3;
                  if (lVar35 == 0) {
                    uVar37 = puVar9[0x11];
                  }
                  else {
                    do {
                      lVar35 = lVar35 + -3;
                      uVar37 = puVar9[0x11];
                      if (*(int *)(lVar39 + lVar35 * 4 + 0xf) == (int)uVar37) goto LAB_0136bcc8;
                    } while (lVar35 != 0);
                  }
                }
                else {
                  uVar37 = puVar9[0x11];
                  iVar17 = *(short *)(lVar39 + 5) + -1;
                  iVar24 = 0;
                  iVar31 = iVar17;
                  do {
                    iVar38 = iVar24 + ((uint)(iVar31 - iVar24) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar39 + (long)(int)(((uint)(*(int *)(lVar39 + (
                                                  long)(iVar38 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff)
                                                  * 3) * 4 + 0xf) + 3) < *(uint *)(uVar37 + 3)) {
                      iVar24 = iVar38 + 1;
                      iVar38 = iVar31;
                    }
                    iVar31 = iVar38;
                  } while (iVar24 != iVar31);
                  for (; iVar24 <= iVar17; iVar24 = iVar24 + 1) {
                    uVar15 = (uint)(*(int *)(lVar39 + (long)(iVar24 * 3) * 4 + 0x13) >> 1) >> 9 &
                             0x3ff;
                    lVar35 = (long)(int)(uVar15 * 3);
                    lVar33 = unaff_x26 + (ulong)*(uint *)(lVar39 + lVar35 * 4 + 0xf);
                    if (*(uint *)(lVar33 + 3) != *(uint *)(uVar37 + 3)) break;
                    if ((int)lVar33 == (int)uVar37) {
                      if (uVar15 < uVar25) goto LAB_0136bcc8;
                      break;
                    }
                  }
                }
                iVar24 = (int)uVar37;
                if (((((iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x5d0)) ||
                      (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc18))) ||
                     (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x848))) ||
                    ((iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc48) ||
                     (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc70))))) ||
                   ((iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x960) ||
                    (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xa38))))) goto LAB_0136d46c;
                uVar29 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0x23);
                if (((uVar29 & 1) == 0) || ((uint)uVar29 == 3)) goto LAB_0136d46c;
                if (((uint)uVar29 & 3) == 1) {
                  if (*(int *)(uVar29 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x148))
                  goto LAB_0136d46c;
                  bVar10 = (ulong)((long)((ulong)*(uint *)(uVar29 + 3) << 0x20) >> 0x21) < 2;
                  if (bVar10) {
                    uVar25 = 0;
                  }
                  else {
                    uVar25 = *(int *)(uVar29 + 0xb) >> 1;
                  }
                  if (uVar25 == 0) goto LAB_0136d46c;
                  if (uVar25 < 0x21) {
                    lVar39 = (long)(int)uVar25 * 2 + 2;
                    do {
                      if (lVar39 == 2) goto LAB_0136d46c;
                      lVar39 = lVar39 + -2;
                    } while (*(int *)(uVar29 + lVar39 * 4 + 7) != iVar24);
                  }
                  else {
                    if (bVar10) {
                      iVar17 = 0;
                    }
                    else {
                      iVar17 = *(int *)(uVar29 + 0xb) >> 1;
                    }
                    uVar15 = 0;
                    uVar14 = iVar17 - 1U;
                    do {
                      uVar1 = uVar15 + (uVar14 - uVar15 >> 1);
                      if (*(uint *)(unaff_x26 +
                                    (ulong)*(uint *)(uVar29 + (long)(int)(uVar1 * 2) * 4 + 0xf) + 3)
                          < *(uint *)(uVar37 + 3)) {
                        uVar15 = uVar1 + 1;
                        uVar1 = uVar14;
                      }
                      uVar14 = uVar1;
                    } while (uVar15 != uVar14);
                    while( true ) {
                      if ((int)(iVar17 - 1U) < (int)uVar15) goto LAB_0136d46c;
                      lVar39 = unaff_x26 +
                               (ulong)*(uint *)(uVar29 + (long)(int)(uVar15 << 1) * 4 + 0xf);
                      if (*(uint *)(lVar39 + 3) != *(uint *)(uVar37 + 3)) goto LAB_0136d46c;
                      if ((int)lVar39 == iVar24) break;
                      uVar15 = uVar15 + 1;
                    }
                    if (uVar25 <= uVar15) goto LAB_0136d46c;
                    lVar39 = (long)(int)(uVar15 << 1) + 2;
                  }
                  uVar29 = unaff_x26 + (ulong)*(uint *)(uVar29 + lVar39 * 4 + 0xb);
                }
                uVar28 = uVar29 & 0xfffffffffffffffd;
                lVar39 = unaff_x26 + (ulong)*(uint *)(uVar28 + 0x1f);
                if ((((int)lVar39 != 0) && (*(int *)(lVar39 + 3) != 0)) ||
                   ((*(uint *)(uVar28 + 0xb) >> 0x18 & 1) != 0)) goto LAB_0136d46c;
                lVar39 = unaff_x26 + (ulong)*(uint *)(uVar28 + 0x17);
                lVar33 = (((ulong)(*(uint *)(uVar28 + 0xb) >> 10) & 0x3ff) * 3 + -3) * 4;
                if (*(int *)(lVar39 + lVar33 + 0xf) != iVar24) goto LAB_0136d46c;
                uVar25 = *(int *)(lVar39 + lVar33 + 0x13) >> 1;
                if ((uVar25 & 0x29) != 0) goto LAB_0136d46c;
                if (*(int *)(uVar37 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) {
                  bVar10 = (*(uint *)(uVar37 + 7) & 1) != 0;
                }
                else {
                  bVar10 = false;
                }
                if (((uVar25 & 0x10) != 0) != bVar10) goto LAB_0136d46c;
                if ((uVar25 >> 1 & 1) == 0) {
                  uVar15 = uVar25 >> 6 & 7;
                  if (uVar15 == 1) {
                    if ((uVar22 & 1) != 0) goto LAB_0136d46c;
                  }
                  else if (uVar15 == 2) {
                    if (((uVar22 & 1) != 0) &&
                       (*(int *)(uVar22 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
                    goto LAB_0136d46c;
                  }
                  else if (uVar15 == 3) {
                    if ((((uVar22 & 1) == 0) ||
                        (uVar14 = iVar21 + *(int *)(lVar39 + lVar33 + 0x17), uVar14 == 4)) ||
                       ((uVar14 != 2 &&
                        ((uVar14 == 3 || (*(uint *)(uVar22 - 1) != (uVar14 & 0xfffffffd)))))))
                    goto LAB_0136d46c;
                  }
                  else if (uVar15 == 0) goto LAB_0136d46c;
                  uVar23 = (ulong)*(byte *)(uVar28 + 3);
                  uVar37 = (ulong)*(byte *)(uVar28 + 4) + (((ulong)uVar25 & 0x1ff80000) >> 0x13);
                  if (uVar37 < uVar23) {
                    lVar39 = uVar37 * 4 + -1;
                    if (uVar15 == 2) {
                      if ((uVar22 & 1) == 0) {
                        dVar44 = (double)iVar27;
                      }
                      else {
                        dVar44 = *(double *)(uVar22 + 3);
                      }
                      uVar37 = **(ulong **)(unaff_x26 + 0x1428);
                      uVar22 = uVar37 + 0xc;
                      if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
                        uVar37 = uVar37 + 1;
                        **(ulong **)(unaff_x26 + 0x1428) = uVar22;
                      }
                      else {
                        puVar9[0x11] = lVar39;
                        puVar9[6] = uVar28;
                        puVar9[7] = (ulong)dVar44;
                        unaff_x30 = 0x136d30c;
                        auVar46 = FUN_01348560(lVar18,0xc);
                        uVar37 = auVar46._0_8_;
                        param_1 = puVar9[0x14];
                        lVar39 = puVar9[0x11];
                        uVar28 = puVar9[6];
                        dVar44 = (double)puVar9[7];
                        uVar34 = *puVar9;
                      }
                      *(int *)(uVar37 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      *(double *)(uVar37 + 3) = dVar44;
                      *(int *)(param_1 - 1) = (int)uVar28;
                      if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0
                          ) && (uVar28 = unaff_x26 + (uVar28 & 0xffffffff),
                               ((uint)*(undefined8 *)((uVar28 & 0xfffffffffffc0000) + 8) >> 1 & 1)
                               != 0)) {
                        puVar9[-4] = uVar12;
                        puVar9[-3] = param_1;
                        puVar9[-2] = uVar28;
                        puVar9[-1] = unaff_x30;
                        *(undefined1 (*) [16])(puVar9 + -6) = auVar46;
                        FUN_0133eb00(param_1,param_1 - 1,2,2,uVar28,lVar39,uVar34);
                        uVar12 = puVar9[-4];
                        param_1 = puVar9[-3];
                        auVar46 = *(undefined1 (*) [16])(puVar9 + -6);
                        uVar28 = puVar9[-2];
                        unaff_x30 = puVar9[-1];
                        uVar37 = extraout_x8_01;
                      }
                      *(int *)(param_1 + lVar39) = (int)uVar37;
                      if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) !=
                            0) && ((uVar37 & 1) != 0)) &&
                         (((uint)*(undefined8 *)
                                  ((unaff_x26 + (uVar37 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
                           1 & 1) != 0)) {
                        puVar9[-4] = uVar12;
                        puVar9[-3] = param_1;
                        puVar9[-2] = uVar28;
                        puVar9[-1] = unaff_x30;
                        *(undefined1 (*) [16])(puVar9 + -6) = auVar46;
                        FUN_0133eb00(param_1,param_1 + lVar39,0,2);
                        param_1 = puVar9[-3];
                        unaff_x30 = puVar9[-1];
                      }
                    }
                    else {
                      *(int *)(param_1 - 1) = (int)uVar28;
                      if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0
                          ) && (uVar28 = unaff_x26 + (uVar29 & 0xfffffffd),
                               ((uint)*(undefined8 *)((uVar28 & 0xfffffffffffc0000) + 8) >> 1 & 1)
                               != 0)) {
                        puVar9[-4] = uVar12;
                        puVar9[-3] = param_1;
                        puVar9[-2] = uVar28;
                        puVar9[-1] = unaff_x30;
                        puVar9[-6] = lVar18;
                        puVar9[-5] = uVar19;
                        FUN_0133eb00(param_1,param_1 - 1,2,2);
                        uVar12 = puVar9[-4];
                        param_1 = puVar9[-3];
                        lVar18 = puVar9[-6];
                        uVar19 = puVar9[-5];
                        uVar28 = puVar9[-2];
                        unaff_x30 = puVar9[-1];
                      }
                      *(int *)(param_1 + lVar39) = iVar32;
                      if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) !=
                            0) && ((uVar22 & 1) != 0)) &&
                         (((uint)*(undefined8 *)
                                  ((unaff_x26 + (uVar22 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
                           1 & 1) != 0)) {
                        puVar9[-4] = uVar12;
                        puVar9[-3] = param_1;
                        puVar9[-2] = uVar28;
                        puVar9[-1] = unaff_x30;
                        puVar9[-6] = lVar18;
                        puVar9[-5] = uVar19;
                        FUN_0133eb00(param_1,param_1 + lVar39,0,2);
                        param_1 = puVar9[-3];
                        unaff_x30 = puVar9[-1];
                      }
                    }
                  }
                  else {
                    if (uVar15 == 2) {
                      if ((uVar22 & 1) == 0) {
                        dVar44 = (double)iVar27;
                      }
                      else {
                        dVar44 = *(double *)(uVar22 + 3);
                      }
                      uVar29 = **(ulong **)(unaff_x26 + 0x1428);
                      uVar22 = uVar29 + 0xc;
                      if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
                        lVar39 = uVar29 + 1;
                        **(ulong **)(unaff_x26 + 0x1428) = uVar22;
                      }
                      else {
                        puVar9[6] = uVar28;
                        puVar9[0x11] = uVar37;
                        puVar9[3] = uVar23;
                        puVar9[7] = (ulong)dVar44;
                        unaff_x30 = 0x136d27c;
                        auVar46 = FUN_01348560(lVar18,0xc);
                        lVar39 = auVar46._0_8_;
                        param_1 = puVar9[0x14];
                        uVar28 = puVar9[6];
                        uVar37 = puVar9[0x11];
                        uVar23 = puVar9[3];
                        dVar44 = (double)puVar9[7];
                        uVar34 = *puVar9;
                      }
                      auVar45._8_8_ = auVar46._8_8_;
                      auVar45._0_8_ = lVar39;
                      lVar18 = auVar46._0_8_;
                      *(int *)(lVar39 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      *(double *)(lVar39 + 3) = dVar44;
                    }
                    uVar19 = auVar45._0_8_;
                    uVar22 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
                    if ((uVar22 & 1) == 0) {
                      uVar25 = ((int)uVar22 >> 1) << 10;
                      uVar29 = 0;
                      uVar22 = *(ulong *)(unaff_x26 + 0x168);
                    }
                    else {
                      uVar15 = *(int *)(uVar22 + 3) >> 1;
                      uVar25 = uVar15 & 0x3ffffc00;
                      uVar29 = (ulong)(int)(uVar15 & 0x3ff);
                    }
                    uVar37 = uVar37 - uVar23;
                    if (uVar29 <= uVar37) {
                      uVar36 = **(ulong **)(unaff_x26 + 0x1428);
                      lVar39 = uVar29 + 3;
                      lVar33 = lVar39 * 4;
                      auVar47._8_8_ = lVar33 + 8;
                      auVar47._0_8_ = lVar18;
                      uVar23 = uVar36 + lVar33 + 8;
                      if (uVar23 < **(ulong **)(unaff_x26 + 0x1430)) {
                        **(ulong **)(unaff_x26 + 0x1428) = uVar23;
                        uVar23 = uVar22;
                        uVar22 = uVar36 + 1;
                      }
                      else {
                        puVar9[6] = uVar28;
                        puVar9[7] = uVar19;
                        puVar9[0x11] = uVar37;
                        puVar9[5] = uVar22;
                        puVar9[4] = (ulong)uVar25;
                        puVar9[3] = lVar33;
                        puVar9[2] = uVar29;
                        puVar9[1] = lVar39;
                        unaff_x30 = 0x136d2c4;
                        auVar47 = FUN_01348560();
                        uVar22 = auVar47._0_8_;
                        param_1 = puVar9[0x14];
                        uVar28 = puVar9[6];
                        uVar19 = puVar9[7];
                        uVar37 = puVar9[0x11];
                        uVar23 = puVar9[5];
                        uVar25 = (uint)puVar9[4];
                        lVar33 = puVar9[3];
                        uVar29 = puVar9[2];
                        lVar39 = puVar9[1];
                        uVar34 = *puVar9;
                      }
                      uVar40 = auVar47._8_8_;
                      auVar7._8_8_ = uVar40;
                      auVar7._0_8_ = uVar19;
                      auVar6._8_8_ = uVar40;
                      auVar6._0_8_ = uVar19;
                      auVar45._8_8_ = uVar40;
                      auVar45._0_8_ = uVar19;
                      lVar18 = auVar47._0_8_;
                      *(int *)(uVar22 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x248);
                      *(uint *)(uVar22 + 3) = (uint)lVar39 * 2;
                      lVar33 = lVar33 + 7;
                      lVar35 = uVar29 * 4 + 7;
                      if (lVar33 != lVar35) {
                        uVar40 = *(undefined8 *)(unaff_x26 + 0xa0);
                        do {
                          lVar33 = lVar33 + -4;
                          *(int *)(uVar22 + lVar33) = (int)uVar40;
                        } while (lVar33 != lVar35);
                      }
                      while (lVar35 != 7) {
                        lVar35 = lVar35 + -4;
                        *(undefined4 *)(uVar22 + lVar35) = *(undefined4 *)(uVar23 + lVar35);
                      }
                      *(uint *)(uVar22 + 3) = (uVar25 | (uint)lVar39) * 2;
                      *(int *)(param_1 + 3) = (int)uVar22;
                      if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) !=
                            0) && (auVar45 = auVar6, (uVar22 & 1) != 0)) &&
                         (uVar22 = unaff_x26 + (uVar22 & 0xffffffff), auVar45 = auVar7,
                         ((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
                      {
                        puVar9[-4] = uVar12;
                        puVar9[-3] = param_1;
                        puVar9[-2] = uVar28;
                        puVar9[-1] = unaff_x30;
                        *(undefined1 (*) [16])(puVar9 + -6) = auVar47;
                        FUN_0133eb00(param_1,param_1 + 3,0,2,uVar28,uVar37,uVar34);
                        uVar12 = puVar9[-4];
                        param_1 = puVar9[-3];
                        lVar18 = puVar9[-6];
                        auVar45._8_8_ = puVar9[-5];
                        uVar28 = puVar9[-2];
                        unaff_x30 = puVar9[-1];
                        uVar22 = extraout_x12;
                      }
                    }
                    uVar19 = auVar45._8_8_;
                    lVar39 = uVar37 * 4 + 7;
                    *(int *)(uVar22 + lVar39) = auVar45._0_4_;
                    if (((((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((auVar45._0_8_ & 1) != 0)) &&
                       (((uint)*(undefined8 *)
                                ((unaff_x26 + (auVar45._0_8_ & 0xffffffff) & 0xfffffffffffc0000) + 8
                                ) >> 1 & 1) != 0)) {
                      puVar9[-4] = uVar12;
                      puVar9[-3] = param_1;
                      puVar9[-2] = uVar28;
                      puVar9[-1] = unaff_x30;
                      puVar9[-6] = lVar18;
                      puVar9[-5] = uVar19;
                      FUN_0133eb00(uVar22,uVar22 + lVar39,0,2);
                      uVar12 = puVar9[-4];
                      param_1 = puVar9[-3];
                      lVar18 = puVar9[-6];
                      uVar19 = puVar9[-5];
                      uVar28 = puVar9[-2];
                      unaff_x30 = puVar9[-1];
                    }
                    *(int *)(param_1 - 1) = (int)uVar28;
                    if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                       && (uVar22 = unaff_x26 + (uVar28 & 0xffffffff),
                          ((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
                    {
                      puVar9[-4] = uVar12;
                      puVar9[-3] = param_1;
                      puVar9[-2] = uVar22;
                      puVar9[-1] = unaff_x30;
                      puVar9[-6] = lVar18;
                      puVar9[-5] = uVar19;
                      FUN_0133eb00(param_1,param_1 - 1,2,2);
                      param_1 = puVar9[-3];
                      unaff_x30 = puVar9[-1];
                    }
                  }
                }
                else {
                  if (iVar32 != *(int *)(lVar39 + lVar33 + 0x17)) goto LAB_0136d46c;
                  *(int *)(param_1 - 1) = (int)uVar28;
                  if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                     (uVar22 = unaff_x26 + (uVar29 & 0xfffffffd),
                     ((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                    puVar9[-4] = uVar12;
                    puVar9[-3] = param_1;
                    puVar9[-2] = uVar22;
                    puVar9[-1] = unaff_x30;
                    puVar9[-6] = lVar18;
                    puVar9[-5] = uVar19;
                    FUN_0133eb00(param_1,param_1 - 1,2,2);
                    param_1 = puVar9[-3];
                    unaff_x30 = puVar9[-1];
                  }
                }
                goto LAB_0136ceb0;
              }
              if ((int)uVar19 != 0) goto LAB_0136b6c4;
              lVar18 = lVar35;
              if ((int)uVar34 == 0) {
                uVar34 = 1;
                lVar33 = lVar35;
              }
              goto LAB_0136cf68;
            }
LAB_0136cf9c:
            uVar19 = 1;
            if (((int)*(undefined8 *)((long)puVar9 + 0x80) != 0) || ((int)uVar34 == 0))
            goto LAB_0136d064;
            lVar18 = lVar18 + 3;
          } while( true );
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2310));
  }
LAB_0136d064:
  return *(undefined8 *)(unaff_x26 + 0xa0);
LAB_0136bcc8:
  lVar35 = lVar35 * 4;
  uVar25 = *(int *)(lVar39 + lVar35 + 0x13) >> 1;
  if ((uVar25 >> 3 & 1) != 0) {
LAB_0136cfb0:
    if (((param_1 & 1) == 0) ||
       (lVar18 = unaff_x26 + (ulong)*(uint *)(param_1 - 1),
       (int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
      lVar18 = *(long *)(unaff_x26 + 0x890);
    }
    else {
      uVar4 = *(ushort *)(lVar18 + 7);
      if (uVar4 == 0x43) {
        lVar18 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x13);
      }
      else if ((*(byte *)(lVar18 + 9) & 0x12) == 2) {
        lVar18 = *(long *)(unaff_x26 + 0x6e0);
      }
      else if ((*(byte *)(lVar18 + 9) & 0x12) == 0) {
        if (uVar4 < 0xa9) {
          if (uVar4 < 0x40) {
            lVar18 = *(long *)(unaff_x26 + 0xa00);
          }
          else if (uVar4 == 0x41) {
            lVar18 = *(long *)(unaff_x26 + 0x520);
          }
          else {
            lVar18 = *(long *)(unaff_x26 + 0xa20);
          }
        }
        else {
          lVar18 = *(long *)(unaff_x26 + 0x8a8);
        }
      }
      else {
        lVar18 = *(long *)(unaff_x26 + 0xaa8);
      }
    }
    puVar9[-2] = uVar37;
    puVar9[-1] = 0x14a;
    puVar9[-4] = param_1;
    puVar9[-3] = lVar18;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  if ((uVar25 & 1) == 0) {
    iVar24 = (int)uVar37;
    if ((((((iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x5d0)) ||
           (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc18))) ||
          (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x848))) ||
         ((iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc48) ||
          (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xc70))))) ||
        (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0x960))) ||
       (iVar24 == (int)*(undefined8 *)(unaff_x26 + 0xa38))) goto LAB_0136d46c;
    if ((uVar25 >> 1 & 1) != 0) {
      if (iVar32 == *(int *)(lVar39 + lVar35 + 0x17)) goto LAB_0136ceb0;
      goto LAB_0136d46c;
    }
    uVar15 = uVar25 >> 6 & 7;
    if (uVar15 == 1) {
      if ((uVar22 & 1) != 0) goto LAB_0136d46c;
    }
    else if (uVar15 == 2) {
      if (((uVar22 & 1) != 0) && (*(int *)(uVar22 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
      goto LAB_0136d46c;
    }
    else if (uVar15 == 3) {
      if ((((uVar22 & 1) == 0) || (uVar14 = iVar21 + *(int *)(lVar39 + lVar35 + 0x17), uVar14 == 4))
         || ((uVar14 != 2 && ((uVar14 == 3 || (*(uint *)(uVar22 - 1) != (uVar14 & 0xfffffffd)))))))
      goto LAB_0136d46c;
    }
    else if (uVar15 == 0) goto LAB_0136d46c;
    bVar10 = (uVar25 >> 2 & 1) != 1;
    uVar29 = (ulong)*(byte *)(lVar18 + 4) + (((ulong)uVar25 & 0x1ff80000) >> 0x13);
    if (uVar29 < *(byte *)(lVar18 + 3)) {
      lVar39 = uVar29 * 4 + -1;
      if (uVar15 == 2) {
        if ((uVar22 & 1) == 0) {
          dVar44 = (double)iVar27;
        }
        else {
          dVar44 = *(double *)(uVar22 + 3);
        }
        lVar18 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar39);
        if (bVar10) {
          *(double *)(lVar18 + 3) = dVar44;
          goto LAB_0136ceb0;
        }
        dVar43 = *(double *)(lVar18 + 3);
        if (dVar43 == dVar44) {
          if ((int)((ulong)dVar43 >> 0x20) != (int)((ulong)dVar44 >> 0x20)) goto LAB_0136d46c;
          goto LAB_0136ceb0;
        }
      }
      else {
        if (bVar10) {
          *(int *)(param_1 + lVar39) = iVar32;
          if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar22 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (uVar22 & 0xffffffff) & 0xfffffffffffc0000) + 8)
               >> 1 & 1) != 0)) {
            puVar9[-4] = uVar12;
            puVar9[-3] = param_1;
            puVar9[-2] = lVar39;
            puVar9[-1] = unaff_x30;
            puVar9[-6] = lVar18;
            puVar9[-5] = uVar19;
            FUN_0133eb00(param_1,param_1 + lVar39,0,2);
            param_1 = puVar9[-3];
            unaff_x30 = puVar9[-1];
          }
          goto LAB_0136ceb0;
        }
        uVar29 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar39);
        if ((int)uVar29 == iVar32) goto LAB_0136ceb0;
        bVar10 = (uVar22 & 1) == 0;
        if ((uVar29 & 1) == 0) {
          if ((bVar10) || (*(int *)(uVar22 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
          goto LAB_0136d46c;
          dVar44 = *(double *)(uVar22 + 3);
          dVar43 = (double)((int)uVar29 >> 1);
        }
        else if (bVar10) {
          if (*(int *)(uVar29 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_0136d46c;
          dVar43 = *(double *)(uVar29 + 3);
          dVar44 = (double)iVar27;
        }
        else {
          iVar21 = (int)*(undefined8 *)(unaff_x26 + 0x140);
          if ((*(int *)(uVar29 - 1) != iVar21) || (*(int *)(uVar22 - 1) != iVar21))
          goto LAB_0136d46c;
          dVar43 = *(double *)(uVar29 + 3);
          dVar44 = *(double *)(uVar22 + 3);
        }
        if (dVar43 == dVar44) {
          if ((int)((ulong)dVar43 >> 0x20) != (int)((ulong)dVar44 >> 0x20)) goto LAB_0136d46c;
          goto LAB_0136ceb0;
        }
      }
      if ((NAN(dVar43)) && (NAN(dVar44))) goto LAB_0136ceb0;
      goto LAB_0136d46c;
    }
    uVar28 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
    if ((uVar28 & 1) == 0) {
      uVar28 = *(ulong *)(unaff_x26 + 0x168);
    }
    lVar39 = (uVar29 - *(byte *)(lVar18 + 3)) * 4 + 7;
    if (uVar15 == 2) {
      lVar18 = unaff_x26 + (ulong)*(uint *)(uVar28 + lVar39);
      if ((uVar22 & 1) == 0) {
        dVar44 = (double)iVar27;
      }
      else {
        dVar44 = *(double *)(uVar22 + 3);
      }
      if (bVar10) {
        *(double *)(lVar18 + 3) = dVar44;
        goto LAB_0136ceb0;
      }
      dVar43 = *(double *)(lVar18 + 3);
      if (dVar43 == dVar44) {
        if ((int)((ulong)dVar43 >> 0x20) != (int)((ulong)dVar44 >> 0x20)) goto LAB_0136d46c;
        goto LAB_0136ceb0;
      }
    }
    else {
      if (bVar10) {
        *(int *)(uVar28 + lVar39) = iVar32;
        if (((((uint)*(undefined8 *)((uVar28 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar22 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (uVar22 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
             1 & 1) != 0)) {
          puVar9[-4] = uVar12;
          puVar9[-3] = param_1;
          puVar9[-2] = lVar39;
          puVar9[-1] = unaff_x30;
          puVar9[-6] = lVar18;
          puVar9[-5] = uVar19;
          FUN_0133eb00(uVar28,uVar28 + lVar39,0,2);
          param_1 = puVar9[-3];
          unaff_x30 = puVar9[-1];
        }
        goto LAB_0136ceb0;
      }
      uVar29 = unaff_x26 + (ulong)*(uint *)(uVar28 + lVar39);
      if ((int)uVar29 == iVar32) goto LAB_0136ceb0;
      bVar10 = (uVar22 & 1) == 0;
      if ((uVar29 & 1) == 0) {
        if ((bVar10) || (*(int *)(uVar22 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
        goto LAB_0136d46c;
        dVar44 = *(double *)(uVar22 + 3);
        dVar43 = (double)((int)uVar29 >> 1);
      }
      else if (bVar10) {
        if (*(int *)(uVar29 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_0136d46c;
        dVar43 = *(double *)(uVar29 + 3);
        dVar44 = (double)iVar27;
      }
      else {
        iVar21 = (int)*(undefined8 *)(unaff_x26 + 0x140);
        if ((*(int *)(uVar29 - 1) != iVar21) || (*(int *)(uVar22 - 1) != iVar21)) goto LAB_0136d46c;
        dVar43 = *(double *)(uVar29 + 3);
        dVar44 = *(double *)(uVar22 + 3);
      }
      if (dVar43 == dVar44) {
        if ((int)((ulong)dVar43 >> 0x20) != (int)((ulong)dVar44 >> 0x20)) goto LAB_0136d46c;
        goto LAB_0136ceb0;
      }
    }
    if ((!NAN(dVar43)) || (!NAN(dVar44))) goto LAB_0136d46c;
    goto LAB_0136ceb0;
  }
  if ((uVar25 >> 1 & 1) == 0) {
    bVar10 = (uVar25 >> 6 & 7) == 2;
    uVar12 = (ulong)*(byte *)(lVar18 + 4) + (((ulong)uVar25 & 0x1ff80000) >> 0x13);
    if (uVar12 < *(byte *)(lVar18 + 3)) {
      lVar39 = uVar12 * 4 + -1;
      if (bVar10) {
        uVar19 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(param_1 + lVar39) + 3);
        goto LAB_0136bd64;
      }
      lVar33 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar39);
    }
    else {
      uVar28 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
      if ((uVar28 & 1) == 0) {
        uVar28 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar33 = unaff_x26 + (ulong)*(uint *)(uVar28 + (uVar12 - *(byte *)(lVar18 + 3)) * 4 + 7);
      if (bVar10) {
        uVar19 = *(undefined8 *)(lVar33 + 3);
LAB_0136bd64:
        uVar12 = **(ulong **)(unaff_x26 + 0x1428);
        uVar29 = uVar12 + 0xc;
        if (uVar29 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar33 = uVar12 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar29;
        }
        else {
          puVar9[6] = uVar19;
          lVar33 = FUN_01348560(lVar18,0xc);
          param_1 = puVar9[0x14];
          uVar37 = puVar9[0x11];
          uVar22 = puVar9[7];
          uVar19 = puVar9[6];
        }
        *(int *)(lVar33 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(undefined8 *)(lVar33 + 3) = uVar19;
        uVar29 = param_1;
      }
    }
  }
  else {
    lVar33 = unaff_x26 + (ulong)*(uint *)(lVar39 + lVar35 + 0x17);
  }
LAB_0136cc04:
  if ((*(int *)(lVar33 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xcc0)) ||
     (lVar18 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar33 + 7) + -1),
     (int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xca8))) {
LAB_0136d46c:
    puVar9[-1] = 0;
    puVar9[-3] = uVar37;
    puVar9[-2] = param_1;
    puVar9[-4] = uVar22;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x2318));
  }
  if ((*(byte *)(lVar18 + 9) >> 1 & 1) == 0) {
    puVar9[-1] = 0;
    puVar9[-3] = uVar37;
    puVar9[-2] = 0xac;
    puVar9[-4] = uVar29;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  puVar9[-2] = uVar22;
  puVar9[-1] = param_1;
  unaff_x30 = 0x136cc80;
  FUN_0133fcc0(1);
  param_1 = puVar9[0x12];
  puVar9 = puVar9 + -2;
LAB_0136ceb0:
  uVar37 = *(ulong *)((long)puVar9 + 0x50);
  if ((int)uVar37 == 0) {
    uVar34 = *(undefined8 *)((long)puVar9 + 0x58);
    lVar39 = *(long *)((long)puVar9 + 0x48);
    param_2 = *(ulong *)((long)puVar9 + 0x98);
    lVar30 = *(long *)((long)puVar9 + 0x78);
    lVar35 = *(long *)((long)puVar9 + 0x70);
    uVar40 = *(undefined8 *)(unaff_x26 + 0xf8);
    uVar22 = *(ulong *)(unaff_x26 + 0x168);
    lVar18 = *(long *)((long)puVar9 + 0x68);
    lVar33 = *(long *)((long)puVar9 + 0x60);
  }
  else {
    param_2 = *(ulong *)((long)puVar9 + 0x98);
    lVar39 = unaff_x26 + (ulong)*(uint *)(*(long *)((long)puVar9 + 0x40) + 0x17);
    uVar37 = (ulong)(*(int *)(param_2 - 1) == (int)*(long *)((long)puVar9 + 0x40));
    uVar34 = *(undefined8 *)((long)puVar9 + 0x58);
    lVar30 = *(long *)((long)puVar9 + 0x78);
    lVar35 = *(long *)((long)puVar9 + 0x70);
    uVar40 = *(undefined8 *)(unaff_x26 + 0xf8);
    uVar22 = *(ulong *)(unaff_x26 + 0x168);
    lVar18 = *(long *)((long)puVar9 + 0x68);
    lVar33 = *(long *)((long)puVar9 + 0x60);
  }
LAB_0136cf68:
  lVar35 = lVar35 + 3;
  if (lVar35 == lVar30) goto LAB_0136cf9c;
  uVar19 = *(undefined8 *)((long)puVar9 + 0x80);
  goto LAB_0136b648;
LAB_0136cad8:
  uVar25 = *(int *)(lVar33 + lVar30 * 4 + 0x13) >> 1;
  if ((uVar25 >> 3 & 1) != 0) goto LAB_0136cfb0;
  if ((uVar25 & 1) != 0) {
    if ((uVar25 >> 1 & 1) != 0) {
      lVar33 = unaff_x26 + (ulong)*(uint *)(lVar33 + lVar30 * 4 + 0x17);
      goto LAB_0136cc04;
    }
    bVar10 = (uVar25 >> 6 & 7) != 2;
    uVar12 = (ulong)*(byte *)(lVar39 + 4) + (((ulong)uVar25 & 0x1ff80000) >> 0x13);
    if (uVar12 < *(byte *)(lVar39 + 3)) {
      lVar39 = uVar12 * 4 + -1;
      if (bVar10) {
        lVar33 = unaff_x26 + (ulong)*(uint *)(uVar29 + lVar39);
        goto LAB_0136cc04;
      }
      uVar19 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar29 + lVar39) + 3);
    }
    else {
      uVar28 = unaff_x26 + (ulong)*(uint *)(uVar29 + 3);
      if ((uVar28 & 1) == 0) {
        uVar28 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar33 = unaff_x26 + (ulong)*(uint *)(uVar28 + (uVar12 - *(byte *)(lVar39 + 3)) * 4 + 7);
      if (bVar10) goto LAB_0136cc04;
      uVar19 = *(undefined8 *)(lVar33 + 3);
    }
    uVar28 = **(ulong **)(unaff_x26 + 0x1428);
    uVar12 = uVar28 + 0xc;
    if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar33 = uVar28 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar12;
    }
    else {
      puVar9[5] = uVar29;
      puVar9[6] = uVar19;
      lVar33 = FUN_01348560(lVar18,0xc);
      param_1 = puVar9[0x14];
      uVar37 = puVar9[0x11];
      uVar22 = puVar9[7];
      uVar29 = puVar9[5];
      uVar19 = puVar9[6];
    }
    *(int *)(lVar33 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(undefined8 *)(lVar33 + 3) = uVar19;
    goto LAB_0136cc04;
  }
LAB_0136cc8c:
  if (((*(uint *)(lVar18 + 0xb) >> 0x14 & 1) != 0) &&
     (uVar22 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0x23), (uVar22 & 1) != 0)) {
    pcVar8 = *(code **)(unaff_x26 + 0x11a0);
    puVar9[-2] = uVar28;
    puVar9[-1] = uVar22;
    *(undefined8 *)(unaff_x26 + 0x40) = 0x136cca8;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    uVar19 = puVar9[-1];
    unaff_x30 = 0x136ccc4;
    auVar45 = (*pcVar8)();
    lVar18 = auVar45._0_8_;
    puVar9[-2] = 0;
    puVar9[-1] = uVar19;
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
    param_1 = puVar9[0x14];
    uVar37 = puVar9[0x11];
    auVar45._8_8_ = auVar45._8_8_;
    auVar45._0_8_ = puVar9[7];
    uVar28 = puVar9[6];
    iVar32 = (int)*(undefined8 *)(unaff_x26 + 0xf8);
  }
  uVar19 = auVar45._8_8_;
  uVar29 = auVar45._0_8_;
  uVar25 = iVar21 + *(int *)(uVar28 + 0xf);
  uVar22 = (long)((ulong)*(uint *)(uVar28 + 3) << 0x20) >> 0x21;
  if (uVar22 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(0,0x136d3ec);
    (*pcVar8)();
  }
  uVar15 = iVar21 + *(int *)(uVar28 + 7) + 2;
  if (uVar15 + (uVar15 >> 1 & 0xfffffffe) <= uVar25) {
    if (uVar22 < 2) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0,0x136d3f4);
      (*pcVar8)();
    }
    if ((uint)(iVar21 + *(int *)(uVar28 + 0xb)) <= (uVar25 - uVar15 >> 1 & 0xfffffffe)) {
      if (uVar22 < 4) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0,0x136d3fc);
        (*pcVar8)();
      }
      lVar39 = unaff_x26 + (ulong)*(uint *)(uVar28 + 0x13);
      uVar25 = (int)lVar39 + 2;
      if (uVar25 < 0xffffff) {
        *(uint *)(uVar28 + 0x13) = uVar25;
        if ((long)((ulong)*(uint *)(uVar28 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0,0x136d40c);
          (*pcVar8)();
        }
        *(uint *)(uVar28 + 7) = uVar15;
        uVar22 = (ulong)(*(uint *)(uVar37 + 3) >> 3);
        lVar33 = 0;
        while( true ) {
          uVar22 = uVar22 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar28 + 0xf) << 0x20) >> 0x21) -
                            1U;
          uVar23 = uVar22 * 3 + 5;
          lVar30 = uVar23 * 4;
          lVar35 = lVar30 + 7;
          if ((*(int *)(uVar28 + lVar35) == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
             (*(int *)(uVar28 + lVar35) == (int)*(undefined8 *)(unaff_x26 + 0xa8))) break;
          lVar33 = lVar33 + 1;
          uVar22 = uVar22 + lVar33;
        }
        uVar22 = (long)((ulong)*(uint *)(uVar28 + 3) << 0x20) >> 0x21;
        if (uVar22 <= uVar23) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0,0x136d414);
          (*pcVar8)();
        }
        *(int *)(uVar28 + lVar35) = (int)uVar37;
        if (((((uint)*(undefined8 *)((uVar28 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar37 & 1) != 0)) &&
           (uVar37 = unaff_x26 + (uVar37 & 0xffffffff),
           ((uint)*(undefined8 *)((uVar37 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
          puVar9[-4] = uVar12;
          puVar9[-3] = param_1;
          puVar9[-2] = uVar22;
          puVar9[-1] = unaff_x30;
          puVar9[-6] = lVar18;
          puVar9[-5] = uVar19;
          FUN_0133eb00(uVar28,uVar28 + lVar35,0,2);
          uVar12 = puVar9[-4];
          param_1 = puVar9[-3];
          lVar18 = puVar9[-6];
          uVar19 = puVar9[-5];
          unaff_x30 = puVar9[-1];
          lVar39 = extraout_x8_00;
          uVar23 = extraout_x13_00;
          lVar30 = extraout_x14_00;
          iVar32 = extraout_w11_00;
        }
        if ((ulong)((long)((ulong)*(uint *)(uVar28 + 3) << 0x20) >> 0x21) <= uVar23 + 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0,0x136d41c);
          (*pcVar8)();
        }
        lVar33 = lVar30 + 0xb;
        *(int *)(uVar28 + lVar33) = auVar45._0_4_;
        if (((((uint)*(undefined8 *)((uVar28 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar29 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (uVar29 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
             1 & 1) != 0)) {
          puVar9[-4] = uVar12;
          puVar9[-3] = param_1;
          puVar9[-2] = lVar33;
          puVar9[-1] = unaff_x30;
          puVar9[-6] = lVar18;
          puVar9[-5] = uVar19;
          FUN_0133eb00(uVar28,uVar28 + lVar33,0,2);
          param_1 = puVar9[-3];
          unaff_x30 = puVar9[-1];
          lVar39 = extraout_x8;
          uVar23 = extraout_x13;
          lVar30 = extraout_x14;
          iVar32 = extraout_w11;
        }
        uVar15 = (uint)(lVar39 << 8);
        uVar25 = uVar15 | 0x180;
        if ((*(int *)(uVar37 - 1) == iVar32) && ((*(uint *)(uVar37 + 7) & 1) != 0)) {
          uVar25 = uVar15 | 0x1a0;
        }
        if ((ulong)((long)((ulong)*(uint *)(uVar28 + 3) << 0x20) >> 0x21) <= uVar23 + 2) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0,0x136d424);
          (*pcVar8)();
        }
        *(uint *)(uVar28 + lVar30 + 0xf) = uVar25;
        goto LAB_0136ceb0;
      }
    }
  }
  puVar9[-1] = 0;
  puVar9[-3] = uVar37;
  puVar9[-2] = param_1;
  puVar9[-4] = uVar29;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21a0));
}

