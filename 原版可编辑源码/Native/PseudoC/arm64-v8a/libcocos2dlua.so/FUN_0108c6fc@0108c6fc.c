
undefined8 FUN_0108c6fc(long param_1,long param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  bool bVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  ulong uVar24;
  byte *pbVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 uVar33;
  uint uVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  int iVar37;
  undefined8 uVar38;
  int *piVar39;
  ushort uVar40;
  long *plVar41;
  uint *puVar42;
  byte *pbVar43;
  long *plVar44;
  undefined8 *puVar45;
  long lVar46;
  long lVar47;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 0108c748 with catch @ 0108c708 */
  lVar46 = *(long *)(param_1 + 8);
  uVar30 = 0;
  if (param_3 != 0) {
    uVar30 = param_3 - 1;
  }
  if ((lVar46 != 0) && (uVar30 < *(uint *)(lVar46 + 0x248))) {
                    /* try { // try from 0108c744 to 0118c747 has its CatchHandler @ 0108c75c */
                    /* try { // try from 0108c748 to 0118c80f has its CatchHandler @ 0108c708 */
    if (((param_4 & 9) == 0) && (*(uint *)(lVar46 + 0x220) != 0)) {
      lVar18 = *(long *)(lVar46 + 0xc0);
      lVar47 = *(long *)(lVar46 + 600);
      uVar20 = 0;
      puVar42 = (uint *)(*(long *)(lVar46 + 0x228) + 0x1c);
      do {
        if ((puVar42[-7] == (uint)*(ushort *)(param_2 + 0x18)) &&
           (puVar42[-6] == (uint)*(ushort *)(param_2 + 0x1a))) {
          uVar20 = puVar42[-5];
          iVar13 = FT_Stream_Seek(lVar18,*(long *)(lVar46 + 0x278) + (ulong)puVar42[-1]);
          if ((iVar13 == 0) &&
             (iVar13 = FT_Stream_EnterFrame
                                 (lVar18,*puVar42 *
                                         ((uVar20 & 1 | 4) + (uVar20 >> 1 & 1) + (uVar20 >> 2 & 1)))
             , iVar13 == 0)) {
            uVar20 = *puVar42;
            if (uVar20 == 0) goto LAB_0108ca58;
            uVar34 = puVar42[-5];
            uVar8 = *(uint *)(lVar47 + (ulong)uVar30 * 0x10);
            uVar31 = uVar34 & 2;
            uVar32 = uVar34 & 4;
            uVar26 = (uVar34 & 1 | 4) + (uVar31 >> 1) + (uVar32 >> 2);
            if ((uVar34 & 1) == 0) {
              uVar34 = 0;
              goto LAB_0108c9d8;
            }
            uVar34 = 0;
            goto LAB_0108ca18;
          }
          break;
        }
        uVar20 = uVar20 + 1;
        puVar42 = puVar42 + 10;
      } while (uVar20 < *(uint *)(lVar46 + 0x220));
    }
    goto joined_r0x0108ca64;
  }
  goto LAB_0108ca68;
  while( true ) {
                    /* catch() { ... } // from try @ 0108ca00 with catch @ 0108ca44 */
    if (CONCAT11(*puVar22,puVar22[1]) == uVar8) {
      pbVar25 = puVar22 + 2;
      if (uVar31 != 0) goto LAB_0108cab8;
      goto LAB_0108ca94;
    }
    uVar2 = uVar11;
    if (uVar8 <= CONCAT11(*puVar22,puVar22[1])) {
      uVar2 = uVar34;
      uVar20 = uVar11;
    }
    uVar34 = uVar2;
    if (uVar20 <= uVar2) break;
LAB_0108ca18:
    uVar11 = uVar20 + uVar34 >> 1;
    puVar22 = (undefined1 *)(*(long *)(lVar18 + 0x40) + (ulong)(uVar11 * uVar26));
    if (*(byte **)(lVar18 + 0x48) < puVar22 + uVar26) break;
  }
  goto LAB_0108ca58;
LAB_0108ca94:
  pbVar23 = pbVar25 + 1;
  uVar40 = (ushort)*pbVar25;
  uVar24 = (ulong)*pbVar23;
  if (uVar32 == 0) goto LAB_0108caa4;
LAB_0108cad0:
  uVar24 = uVar24 << 0x10 | (ulong)pbVar23[1] << 8;
  lVar19 = 2;
  goto LAB_0108cae0;
LAB_0108c9d8:
  uVar11 = uVar20 + uVar34 >> 1;
  pbVar25 = (byte *)(*(long *)(lVar18 + 0x40) + (ulong)(uVar11 * uVar26));
  if (*(byte **)(lVar18 + 0x48) < pbVar25 + uVar26) goto LAB_0108ca58;
  if (uVar8 != *pbVar25) {
    uVar2 = uVar11;
                    /* try { // try from 0108ca00 to 0118ca0b has its CatchHandler @ 0108ca44 */
    if (uVar8 < *pbVar25) {
      uVar2 = uVar34;
      uVar20 = uVar11;
    }
    uVar34 = uVar2;
                    /* try { // try from 0108ca0c to 0118ca5f has its CatchHandler @ 0108c810 */
    if (uVar20 <= uVar2) goto LAB_0108ca58;
    goto LAB_0108c9d8;
  }
  pbVar25 = pbVar25 + 1;
  if (uVar31 == 0) goto LAB_0108ca94;
LAB_0108cab8:
  pbVar23 = pbVar25 + 2;
  uVar40 = CONCAT11(*pbVar25,pbVar25[1]);
  uVar24 = (ulong)*pbVar23;
  if (uVar32 != 0) goto LAB_0108cad0;
LAB_0108caa4:
  uVar24 = uVar24 << 8;
  lVar19 = 1;
LAB_0108cae0:
  bVar10 = pbVar23[lVar19];
  FT_Stream_ExitFrame(lVar18);
  if (uVar40 != 0) {
                    /* try { // try from 0108caf4 to 0118cc1f has its CatchHandler @ 0108caf4
                       catch(type#1 @ 00000000) { ... } // from try @ 0108caf4 with catch @ 0108caf4
                       catch(type#1 @ 00000000) { ... } // from try @ 0108cc28 with catch @ 0108caf4
                        */
    piVar39 = (int *)(lVar47 + (ulong)uVar30 * 0x10 + 4);
    iVar17 = *piVar39;
    iVar13 = *(int *)(lVar46 + 0x1ac);
    lVar47 = (long)iVar17;
    if (iVar13 != *(int *)(lVar46 + 0x1a8)) {
      lVar47 = FT_MulDiv();
      iVar17 = *piVar39;
      iVar13 = *(int *)(lVar46 + 0x1ac);
    }
    *(long *)(param_1 + 0x70) = lVar47;
    uVar15 = FT_MulDiv((ulong)*(ushort *)(param_2 + 0x18) << 8,(long)iVar17,iVar13);
    iVar13 = FT_Stream_Seek(lVar18,(uVar24 | bVar10) + (ulong)*(uint *)(lVar46 + 0x130));
    if ((iVar13 == 0) && (iVar13 = FT_Stream_EnterFrame(lVar18,uVar40), iVar13 == 0)) {
      pbVar25 = *(byte **)(lVar18 + 0x40);
      pbVar23 = *(byte **)(lVar18 + 0x48);
      if (pbVar25 + 1 <= pbVar23) {
        bVar9 = *pbVar25;
        bVar10 = bVar9 & 3;
        if (bVar10 == 1) {
          pbVar43 = pbVar25 + 3;
          if (pbVar43 <= pbVar23) {
            uVar24 = (ulong)(char)pbVar25[1];
            uVar21 = (ulong)(char)pbVar25[2];
            goto LAB_0108cc3c;
          }
        }
        else if (bVar10 == 2) {
          pbVar43 = pbVar25 + 5;
          if (pbVar43 <= pbVar23) {
            uVar24 = (ulong)CONCAT11(pbVar25[1],pbVar25[2]);
            uVar21 = (ulong)CONCAT11(pbVar25[3],pbVar25[4]);
            goto LAB_0108cc3c;
          }
        }
        else if (bVar10 == 3) {
          pbVar43 = pbVar25 + 7;
          if (pbVar43 <= pbVar23) {
            uVar24 = (ulong)pbVar25[1] << 0x10 | (ulong)pbVar25[2] << 8 | (ulong)pbVar25[3];
            uVar21 = (ulong)pbVar25[4] << 0x10 | (ulong)pbVar25[5] << 8 | (ulong)pbVar25[6];
LAB_0108cc3c:
            bVar10 = bVar9 >> 2 & 3;
            if (bVar10 == 3) {
              pbVar25 = pbVar43 + 4;
              if (pbVar23 < pbVar25) goto LAB_0108ca58;
              uVar29 = (ulong)CONCAT11(*pbVar43,pbVar43[1]);
              uVar27 = (ulong)CONCAT11(pbVar43[2],pbVar43[3]);
            }
            else if (bVar10 == 2) {
              pbVar25 = pbVar43 + 2;
              if (pbVar23 < pbVar25) goto LAB_0108ca58;
              uVar29 = (ulong)*pbVar43;
              uVar27 = (ulong)pbVar43[1];
            }
            else if (bVar10 == 1) {
              if (pbVar23 < pbVar43 + 1) goto LAB_0108ca58;
              uVar29 = (ulong)((uint)(int)(char)*pbVar43 >> 4 & 0xf);
              uVar27 = (ulong)((int)(char)*pbVar43 & 0xf);
              pbVar25 = pbVar43 + 1;
            }
            else {
              uVar29 = 0;
              uVar27 = 0;
              pbVar25 = pbVar43;
            }
            bVar10 = bVar9 >> 4 & 3;
            if (bVar10 == 3) {
              pbVar43 = pbVar25 + 3;
              if (pbVar23 < pbVar43) goto LAB_0108ca58;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0108cc20 with catch @ 0108cd10
                        */
              uVar15 = (ulong)*pbVar25 << 0x10 | (ulong)pbVar25[1] << 8 | (ulong)pbVar25[2];
            }
            else if (bVar10 == 2) {
              pbVar43 = pbVar25 + 2;
              if (pbVar23 < pbVar43) goto LAB_0108ca58;
              uVar15 = (ulong)CONCAT11(*pbVar25,pbVar25[1]);
            }
            else {
              pbVar43 = pbVar25;
              if (bVar10 == 1) {
                pbVar43 = pbVar25 + 1;
                if (pbVar23 < pbVar43) goto LAB_0108ca58;
                uVar15 = (long)(char)*pbVar25 << 8;
              }
            }
            if ((uVar24 + 0x80000000 >> 0x20 == 0) && (uVar27 + uVar21 + 0x80000000 >> 0x20 == 0)) {
              iVar13 = (int)uVar27;
              *(int *)(param_1 + 0x98) = iVar13;
              *(int *)(param_1 + 0x9c) = (int)uVar29;
              *(undefined4 *)(param_1 + 0x90) = 0x62697473;
              *(undefined1 *)(param_1 + 0xb2) = 1;
              *(ulong *)(param_1 + 0x30) = uVar29 * 0x40;
              *(ulong *)(param_1 + 0x38) = uVar27 << 6;
              *(ulong *)(param_1 + 0x40) = uVar24 << 6;
              *(ulong *)(param_1 + 0x48) = uVar21 << 6;
              uVar20 = (int)uVar29 + 7U >> 3;
              *(uint *)(param_1 + 0xa0) = uVar20;
              *(ulong *)(param_1 + 0x50) = ((long)uVar15 >> 2) + 0x20U & 0xffffffffffffffc0;
              *(long *)(param_1 + 0x58) = (long)(uVar29 * -0x40) >> 1;
              *(undefined8 *)(param_1 + 0x60) = 0;
              uVar38 = *(undefined8 *)(param_2 + 0x40);
              *(int *)(param_1 + 0xc0) = (int)uVar24;
              *(int *)(param_1 + 0xc4) = (int)uVar21 + iVar13;
              *(undefined8 *)(param_1 + 0x68) = uVar38;
              iVar13 = ft_glyphslot_alloc_bitmap(param_1,uVar20 * iVar13);
              if (iVar13 == 0) {
                iVar13 = *(int *)(param_1 + 0x98);
                if ((iVar13 == 0) || (iVar17 = *(int *)(param_1 + 0x9c), iVar17 == 0))
                goto LAB_0108d04c;
                pbVar25 = *(byte **)(lVar18 + 0x48);
                puVar22 = *(undefined1 **)(param_1 + 0xa8);
                iVar28 = *(int *)(param_1 + 0xa0);
                uVar20 = iVar17 * iVar13;
                if ((*(uint *)(lVar46 + 0x144) >> 1 & 1) == 0) {
                  puVar22 = puVar22 + (uint)(iVar28 * (iVar13 + -1));
                  iVar28 = -iVar28;
                }
                bVar9 = bVar9 >> 6;
                puVar35 = puVar22;
                if (bVar9 == 2) {
                  if ((int)uVar20 < 1) goto LAB_0108d04c;
                  uVar26 = 0;
                  uVar31 = 0;
                  bVar16 = true;
                  uVar30 = 0x80;
                  bVar12 = true;
                  iVar13 = iVar17;
                  do {
                    pbVar23 = pbVar43;
                    uVar32 = uVar31;
                    if (bVar16) {
                      do {
                        pbVar43 = pbVar23;
                        uVar32 = uVar31;
                        if (pbVar25 <= pbVar23) break;
                        pbVar43 = pbVar23 + 1;
                        uVar31 = (uint)*pbVar23;
                        bVar12 = (bool)(bVar12 ^ 1);
                        pbVar23 = pbVar43;
                        uVar32 = uVar31;
                      } while (uVar31 == 0);
                    }
                    uVar31 = 0;
                    if (bVar12) {
                      uVar31 = uVar30;
                    }
                    iVar37 = iVar13 + -1;
                    uVar26 = uVar31 | uVar26;
                    if (iVar37 == 0 || iVar13 < 1) {
                      puVar22 = puVar22 + iVar28;
                      *puVar35 = (char)uVar26;
                      puVar36 = puVar22;
                      iVar37 = iVar17;
LAB_0108cf48:
                      uVar30 = 0x80;
                      uVar26 = 0;
                      puVar35 = puVar36;
                    }
                    else {
                      uVar30 = uVar30 >> 1;
                      if (uVar30 == 0) {
                        puVar36 = puVar35 + 1;
                        *puVar35 = (char)uVar26;
                        goto LAB_0108cf48;
                      }
                    }
                    uVar33 = (undefined1)uVar26;
                    uVar31 = uVar32 - 1;
                    bVar16 = (int)uVar32 < 2;
                    uVar32 = uVar20 - 1;
                    bVar1 = 0 < (int)uVar20;
                    uVar20 = uVar32;
                    iVar13 = iVar37;
                  } while (uVar32 != 0 && bVar1);
                }
                else {
                  if (bVar9 == 1) {
                    if (0 < (int)uVar20) {
                      uVar32 = 0;
                      uVar26 = 0;
                      uVar30 = 0;
                      bVar16 = true;
                      uVar31 = 0x80;
                      bVar12 = true;
                      iVar13 = iVar17;
                      do {
                        pbVar23 = pbVar43;
                        uVar8 = uVar26;
                        uVar34 = uVar30;
                        if (bVar16) {
                          do {
                            while (uVar26 = uVar8, pbVar43 = pbVar23, !bVar12) {
                              uVar30 = 0;
                              bVar12 = true;
                              uVar8 = 0;
                              uVar34 = uVar26;
                              if (uVar26 != 0) goto LAB_0108cfec;
                            }
                            uVar34 = uVar30;
                            if (pbVar25 <= pbVar23) break;
                            pbVar43 = pbVar23 + 1;
                            bVar12 = false;
                            uVar30 = 0;
                            bVar10 = *pbVar23 >> 4;
                            uVar34 = (uint)bVar10;
                            uVar26 = *pbVar23 & 0xf;
                            pbVar23 = pbVar43;
                            uVar8 = uVar26;
                          } while (bVar10 == 0);
                        }
LAB_0108cfec:
                        uVar30 = 0;
                        if (bVar12) {
                          uVar30 = uVar31;
                        }
                        iVar37 = iVar13 + -1;
                        uVar32 = uVar30 | uVar32;
                        if (iVar37 == 0 || iVar13 < 1) {
                          puVar22 = puVar22 + iVar28;
                          *puVar35 = (char)uVar32;
                          puVar36 = puVar22;
                          iVar37 = iVar17;
LAB_0108d028:
                          uVar31 = 0x80;
                          uVar32 = 0;
                          puVar35 = puVar36;
                        }
                        else {
                          uVar31 = uVar31 >> 1;
                          if (uVar31 == 0) {
                            puVar36 = puVar35 + 1;
                            *puVar35 = (char)uVar32;
                            goto LAB_0108d028;
                          }
                        }
                        uVar30 = uVar34 - 1;
                        bVar16 = (int)uVar34 < 2;
                        uVar34 = uVar20 - 1;
                        bVar1 = 0 < (int)uVar20;
                        uVar20 = uVar34;
                        iVar13 = iVar37;
                      } while (uVar34 != 0 && bVar1);
                      if (uVar31 != 0x80) {
                        *puVar35 = (char)uVar32;
                      }
                    }
                    goto LAB_0108d04c;
                  }
                  if (bVar9 != 0) goto LAB_0108ca58;
                  uVar30 = ((int)pbVar25 - (int)pbVar43) * 8;
                  if ((int)uVar30 <= (int)uVar20) {
                    uVar20 = uVar30;
                  }
                  if ((int)uVar20 < 1) goto LAB_0108d04c;
                  uVar31 = 0;
                  uVar26 = 0;
                  uVar30 = 0x80;
                  uVar32 = uVar20;
                  iVar13 = iVar17;
                  do {
                    pbVar25 = pbVar43;
                    if (((uVar32 ^ uVar20) & 7) == 0) {
                      pbVar25 = pbVar43 + 1;
                      uVar26 = (uint)*pbVar43;
                    }
                    iVar37 = iVar13 + -1;
                    uVar31 = uVar30 & (int)(uVar26 << 0x18) >> 0x1f | uVar31;
                    uVar26 = uVar26 << 1;
                    if (iVar37 == 0 || iVar13 < 1) {
                      puVar22 = puVar22 + iVar28;
                      *puVar35 = (char)uVar31;
                      puVar36 = puVar22;
                      iVar37 = iVar17;
LAB_0108ceb4:
                      uVar30 = 0x80;
                      uVar31 = 0;
                      puVar35 = puVar36;
                    }
                    else {
                      uVar30 = uVar30 >> 1;
                      if (uVar30 == 0) {
                        puVar36 = puVar35 + 1;
                        *puVar35 = (char)uVar31;
                        goto LAB_0108ceb4;
                      }
                    }
                    uVar33 = (undefined1)uVar31;
                    uVar34 = uVar32 - 1;
                    bVar16 = 0 < (int)uVar32;
                    pbVar43 = pbVar25;
                    uVar32 = uVar34;
                    iVar13 = iVar37;
                  } while (uVar34 != 0 && bVar16);
                }
                if (uVar30 != 0x80) {
                  *puVar35 = uVar33;
                }
LAB_0108d04c:
                FT_Stream_ExitFrame(lVar18);
                return 0;
              }
            }
          }
        }
        else {
                    /* try { // try from 0108cc20 to 0118cc27 has its CatchHandler @ 0108cd10 */
          pbVar43 = pbVar25 + 2;
                    /* try { // try from 0108cc28 to 0118cd13 has its CatchHandler @ 0108caf4 */
          if (pbVar43 <= pbVar23) {
            bVar10 = pbVar25[1];
            uVar24 = ((long)(char)bVar10 << 0x20) >> 0x24;
            uVar21 = (long)((ulong)(uint)((int)(char)bVar10 << 0x1c) << 0x20) >> 0x3c;
            goto LAB_0108cc3c;
          }
        }
      }
LAB_0108ca58:
      FT_Stream_ExitFrame(lVar18);
    }
  }
joined_r0x0108ca64:
  if ((param_4 >> 0xe & 1) == 0) {
                    /* catch() { ... } // from try @ 0108c744 with catch @ 0108c75c */
    lVar47 = *(long *)(lVar46 + 600);
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
    lVar18 = lVar47 + (ulong)uVar30 * 0x10;
    uVar7 = *(undefined4 *)(lVar46 + 0x130);
    uVar38 = *(undefined8 *)(lVar46 + 0xc0);
    uVar4 = *(undefined4 *)(lVar18 + 8);
    uVar5 = *(undefined4 *)(lVar18 + 0xc);
    FT_GlyphLoader_Rewind(*(undefined8 *)(param_1 + 0x158));
    *(undefined4 *)(param_1 + 0x148) = 0;
    uVar38 = FUN_0108da1c(param_1 + 0x130,uVar38,uVar7,uVar5,uVar4);
    if ((int)uVar38 == 0) {
      lVar18 = *(long *)(param_1 + 0x158);
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar18 + 0x38);
      uVar38 = *(undefined8 *)(lVar18 + 0x28);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar18 + 0x30);
      *(undefined8 *)(param_1 + 0xd8) = uVar38;
      uVar38 = *(undefined8 *)(lVar18 + 0x18);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar18 + 0x20);
      *(undefined8 *)(param_1 + 200) = uVar38;
      uVar20 = *(uint *)(param_1 + 0xe8) & 0xfffffffa;
      *(uint *)(param_1 + 0xe8) = uVar20 | 4;
      if ((param_2 != 0) && (*(ushort *)(param_2 + 0x1a) < 0x18)) {
        *(uint *)(param_1 + 0xe8) = uVar20 | 0x104;
      }
      plVar41 = (long *)(param_1 + 0x68);
      *plVar41 = 0;
      plVar44 = (long *)(param_1 + 0x50);
      *plVar44 = 0;
                    /* try { // try from 0108c810 to 0118c9ff has its CatchHandler @ 0108c810
                       catch() { ... } // from try @ 0108c810 with catch @ 0108c810
                       catch() { ... } // from try @ 0108ca0c with catch @ 0108c810 */
      lVar18 = (long)*(int *)(lVar47 + (ulong)uVar30 * 0x10 + 4);
      if (*(int *)(lVar46 + 0x1ac) != *(int *)(lVar46 + 0x1a8)) {
        lVar18 = FT_MulDiv();
      }
      plVar3 = plVar41;
      if ((*(uint *)(lVar46 + 0x1d0) & 1) == 0) {
        plVar3 = plVar44;
      }
      *plVar3 = lVar18;
      lVar46 = *(long *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(long *)(param_1 + 0x70) = lVar46;
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x68);
      if ((param_4 & 1) == 0) {
        uVar38 = *(undefined8 *)(param_2 + 0x20);
        uVar6 = *(undefined8 *)(param_2 + 0x28);
        if (0 < *(short *)(param_1 + 0xca)) {
          puVar45 = *(undefined8 **)(param_1 + 0xd0);
          iVar13 = 0;
          do {
            uVar14 = FT_MulFix(*puVar45,uVar38);
            *puVar45 = uVar14;
            uVar14 = FT_MulFix(puVar45[1],uVar6);
            puVar45[1] = uVar14;
            iVar13 = iVar13 + 1;
            puVar45 = puVar45 + 2;
          } while (iVar13 < *(short *)(param_1 + 0xca));
          lVar46 = *plVar44;
        }
        lVar46 = FT_MulFix(lVar46,uVar38);
        *plVar44 = lVar46;
        lVar46 = FT_MulFix(*plVar41,uVar6);
        *plVar41 = lVar46;
      }
      FT_Outline_Get_CBox((undefined8 *)(param_1 + 200),&local_80);
      uVar38 = 0;
      *(long *)(param_1 + 0x30) = lStack_70 - local_80;
      *(long *)(param_1 + 0x48) = local_78;
      *(long *)(param_1 + 0x38) = local_68 - local_78;
      *(long *)(param_1 + 0x40) = local_80;
    }
  }
  else {
LAB_0108ca68:
    uVar38 = 6;
  }
  return uVar38;
}

