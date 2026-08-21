
ulong FUN_010a763c(undefined8 *param_1,uint param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  ushort uVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  uint uVar9;
  char cVar10;
  short sVar11;
  short sVar12;
  long *plVar13;
  bool bVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  undefined8 uVar22;
  short *psVar23;
  long lVar24;
  ulong uVar25;
  ulong *puVar26;
  short *psVar27;
  ushort *puVar28;
  ulong uVar29;
  byte bVar30;
  ushort uVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  byte *pbVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  short *psVar41;
  ulong uVar42;
  long lVar43;
  short *psVar44;
  ulong uVar45;
  int *piVar46;
  byte *pbVar47;
  byte *pbVar48;
  short *__src;
  undefined8 uVar49;
  short *psVar50;
  ulong *puVar51;
  uint local_64;
  
                    /* try { // try from 010a7658 to 011a7663 has its CatchHandler @ 010a76a0 */
  uVar45 = (ulong)param_2;
  piVar46 = (int *)(param_1 + uVar45 * 5 + 9);
                    /* try { // try from 010a7664 to 011a76a7 has its CatchHandler @ 010a7540 */
  iVar20 = *piVar46;
  puVar51 = param_1 + uVar45 * 5 + 10;
  pbVar47 = (byte *)*puVar51;
  uVar15 = FUN_010a50f8();
  if ((int)uVar15 != 0) {
    return uVar15;
  }
  if (0 < iVar20) {
    pbVar35 = pbVar47;
    do {
      puVar8 = *(ushort **)(pbVar35 + 0x50);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a7608 with catch @ 010a76a0
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7630 with catch @ 010a76a0
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7658 with catch @ 010a76a0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a75a8 with catch @ 010a76a4
                       catch(type#1 @ 00000000) { ... } // from try @ 010a75d4 with catch @ 010a76a4
                        */
      bVar30 = *pbVar35 & 0xfe;
      puVar28 = *(ushort **)(pbVar35 + 0x48);
      uVar31 = **(ushort **)(pbVar35 + 0x48) & 3;
      while (puVar28 != puVar8) {
        puVar28 = *(ushort **)(puVar28 + 0x20);
        uVar4 = *puVar28 & 3;
        if ((uVar31 == 0) && ((*puVar28 & 3) == 0)) break;
        uVar31 = uVar4;
        if (puVar28 == puVar8) {
          bVar30 = bVar30 | 1;
          puVar28 = puVar8;
        }
      }
      pbVar48 = pbVar35 + 0x58;
      *pbVar35 = bVar30;
      pbVar35 = pbVar48;
    } while (pbVar48 < pbVar47 + (long)iVar20 * 0x58);
  }
  uVar15 = *puVar51;
  iVar33 = *piVar46;
  iVar20 = *(int *)(param_1 + uVar45 * 5 + 0xd);
  puVar6 = param_1 + 1;
  if (param_2 != 0) {
    puVar6 = param_1 + 3;
  }
  uVar9 = *(uint *)(param_1[0x14] + 0x48);
  lVar16 = FT_DivFix(0xc0,*puVar6);
  if (0 < iVar33) {
    lVar24 = 0;
    uVar21 = uVar15 + (long)iVar33 * 0x58;
    uVar29 = uVar15;
    do {
      if (iVar20 == *(char *)(uVar29 + 1)) {
        lVar32 = 0;
        do {
          if ((lVar24 != lVar32) && (iVar20 + *(char *)(uVar15 + lVar32 + 1) == 0)) {
            lVar36 = uVar15 + lVar32;
            lVar34 = (long)*(short *)(lVar36 + 2) - (long)*(short *)(uVar29 + 2);
            if (-1 < lVar34) {
              sVar11 = *(short *)(lVar36 + 4);
              if (*(short *)(lVar36 + 4) <= *(short *)(uVar29 + 4)) {
                sVar11 = *(short *)(uVar29 + 4);
              }
                    /* catch() { ... } // from try @ 010a77cc with catch @ 010a779c */
              sVar12 = *(short *)(lVar36 + 6);
              if (*(short *)(uVar29 + 6) <= *(short *)(lVar36 + 6)) {
                sVar12 = *(short *)(uVar29 + 6);
              }
              lVar36 = (long)sVar12 - (long)sVar11;
              if ((long)(ulong)(uVar9 >> 8) <= lVar36) {
                lVar38 = lVar34 * 8;
                    /* try { // try from 010a77c4 to 011a77cb has its CatchHandler @ 010a7820 */
                    /* try { // try from 010a77cc to 011a783b has its CatchHandler @ 010a779c */
                if ((lVar38 < *(long *)(uVar29 + 0x38) * 9) &&
                   ((lVar38 < *(long *)(uVar29 + 0x38) * 7 || (*(long *)(uVar29 + 0x40) < lVar36))))
                {
                  *(long *)(uVar29 + 0x38) = lVar34;
                  *(long *)(uVar29 + 0x40) = lVar36;
                  *(ulong *)(uVar29 + 0x20) = uVar15 + lVar32;
                }
                lVar18 = uVar15 + lVar32;
                if ((lVar38 < *(long *)(lVar18 + 0x38) * 9) &&
                   ((lVar38 < *(long *)(lVar18 + 0x38) * 7 || (*(long *)(lVar18 + 0x40) < lVar36))))
                {
                  *(long *)(lVar18 + 0x38) = lVar34;
                  *(long *)(lVar18 + 0x40) = lVar36;
                    /* catch() { ... } // from try @ 010a77c4 with catch @ 010a7820 */
                  *(ulong *)(uVar15 + lVar32 + 0x20) = uVar29;
                }
              }
            }
          }
          lVar32 = lVar32 + 0x58;
        } while (uVar15 + lVar32 < uVar21);
      }
      uVar29 = uVar29 + 0x58;
                    /* catch() { ... } // from try @ 010a7890 with catch @ 010a783c */
      lVar24 = lVar24 + 0x58;
      uVar25 = uVar15;
    } while (uVar29 < uVar21);
    do {
      uVar29 = *(ulong *)(uVar25 + 0x20);
      if ((uVar29 != 0) && (*(ulong *)(uVar29 + 0x20) == uVar25)) {
        sVar11 = *(short *)(uVar29 + 2);
        sVar12 = *(short *)(uVar25 + 2);
                    /* try { // try from 010a787c to 011a788f has its CatchHandler @ 010a7974 */
        if ((sVar12 < sVar11) && (lVar24 = *(long *)(uVar25 + 0x38), lVar24 < lVar16)) {
                    /* try { // try from 010a7890 to 011a79ab has its CatchHandler @ 010a783c */
          uVar37 = uVar15;
          do {
            if ((((((uVar25 != uVar37) && (*(short *)(uVar37 + 2) <= sVar12)) &&
                  (uVar39 = *(ulong *)(uVar37 + 0x20), uVar39 != 0)) &&
                 ((*(ulong *)(uVar39 + 0x20) == uVar37 && (sVar11 <= *(short *)(uVar39 + 2))))) &&
                ((sVar12 != *(short *)(uVar37 + 2) || (sVar11 != *(short *)(uVar39 + 2))))) &&
               ((lVar32 = *(long *)(uVar37 + 0x38), lVar24 < lVar32 &&
                (lVar24 * 4 - lVar32 != 0 && lVar32 <= lVar24 * 4)))) {
              uVar40 = uVar15;
              if (*(long *)(uVar25 + 0x40) < *(long *)(uVar37 + 0x40) * 3) {
                *(undefined8 *)(uVar29 + 0x20) = 0;
                *(undefined8 *)(uVar25 + 0x20) = 0;
                break;
              }
              do {
                uVar42 = uVar29;
                if ((*(ulong *)(uVar40 + 0x20) == uVar37) ||
                   (uVar42 = uVar25, *(ulong *)(uVar40 + 0x20) == uVar39)) {
                  *(undefined8 *)(uVar40 + 0x20) = 0;
                  *(ulong *)(uVar40 + 0x28) = uVar42;
                }
                uVar40 = uVar40 + 0x58;
              } while (uVar40 < uVar21);
            }
            uVar37 = uVar37 + 0x58;
          } while (uVar37 < uVar21);
        }
      }
      uVar25 = uVar25 + 0x58;
    } while (uVar25 < uVar21);
    do {
      lVar24 = *(long *)(uVar15 + 0x20);
      if (lVar24 != 0) {
        lVar32 = *(long *)(lVar24 + 0x30);
        *(long *)(lVar24 + 0x30) = lVar32 + 1;
        if (uVar15 != *(ulong *)(lVar24 + 0x20)) {
          *(undefined8 *)(uVar15 + 0x20) = 0;
                    /* catch() { ... } // from try @ 010a787c with catch @ 010a7974 */
          if ((*(long *)(lVar24 + 0x38) < lVar16) ||
             (*(long *)(uVar15 + 0x38) < *(long *)(lVar24 + 0x38) * 4)) {
            *(undefined8 *)(uVar15 + 0x28) = *(undefined8 *)(lVar24 + 0x20);
          }
          else {
            *(long *)(lVar24 + 0x30) = lVar32;
          }
        }
      }
      uVar15 = uVar15 + 0x58;
    } while (uVar15 < uVar21);
  }
  uVar22 = *param_1;
                    /* catch() { ... } // from try @ 010a79dc with catch @ 010a79ac */
  lVar24 = param_1[0x14];
  uVar15 = *puVar51;
  iVar20 = *piVar46;
  piVar46 = (int *)(param_1 + uVar45 * 5 + 0xb);
  *piVar46 = 0;
  uVar49 = *puVar6;
  lVar24 = lVar24 + uVar45 * 0x9d8;
                    /* try { // try from 010a79d4 to 011a79db has its CatchHandler @ 010a7a30 */
  lVar16 = FT_MulFix(*(undefined8 *)(lVar24 + 0x1e8),uVar49);
                    /* try { // try from 010a79dc to 011a7a4b has its CatchHandler @ 010a79ac */
  if (lVar16 < 0x11) {
    lVar16 = *(long *)(lVar24 + 0x1e8);
  }
  else {
    lVar16 = FT_DivFix(0x10,uVar49);
  }
  if (iVar20 < 1) {
    puVar51 = param_1 + uVar45 * 5 + 0xc;
  }
  else {
    uVar29 = uVar15 + (long)iVar20 * 0x58;
                    /* catch() { ... } // from try @ 010a79d4 with catch @ 010a7a30 */
    piVar2 = (int *)((long)param_1 + uVar45 * 0x28 + 0x5c);
    puVar51 = param_1 + uVar45 * 5 + 0xc;
    do {
      iVar20 = *piVar46;
      if (iVar20 < 1) {
        cVar10 = *(char *)(uVar15 + 1);
LAB_010a7b38:
        sVar11 = *(short *)(uVar15 + 2);
        local_64 = 0;
        iVar33 = *piVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a7bbc with catch @ 010a7b4c
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7bec with catch @ 010a7b4c
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7c1c with catch @ 010a7b4c
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7c44 with catch @ 010a7b4c
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7c70 with catch @ 010a7b4c
                        */
        if (iVar20 < iVar33) {
          psVar41 = (short *)*puVar51;
        }
        else {
          if (0x1745d16 < iVar33) {
            return 0x40;
          }
          iVar20 = iVar33 + (iVar33 >> 2) + 4;
          iVar5 = 0x1745d17;
          if (iVar20 < 0x1745d18 && -5 < iVar33 >> 2) {
            iVar5 = iVar20;
          }
          psVar41 = (short *)ft_mem_realloc(uVar22,0x58,(long)iVar33,(long)iVar5,*puVar51,&local_64)
          ;
          *puVar51 = (ulong)psVar41;
          if (local_64 != 0) {
            return (ulong)local_64;
          }
          *piVar2 = iVar5;
          iVar20 = *piVar46;
        }
                    /* try { // try from 010a7bb4 to 011a7bbb has its CatchHandler @ 010a7cb0 */
        psVar23 = psVar41 + (long)iVar20 * 0x2c;
                    /* try { // try from 010a7bbc to 011a7bdf has its CatchHandler @ 010a7b4c */
        if (0 < iVar20) {
          psVar50 = psVar23;
          psVar27 = psVar41 + (long)iVar20 * 0x2c;
          while( true ) {
            __src = psVar27 + -0x2c;
            psVar44 = psVar50 + -0x2c;
            psVar23 = psVar27;
            if (*__src < sVar11) break;
                    /* try { // try from 010a7be0 to 011a7beb has its CatchHandler @ 010a7cb0 */
                    /* try { // try from 010a7bec to 011a7c13 has its CatchHandler @ 010a7b4c */
            if (((*__src == sVar11) &&
                (psVar23 = psVar50, *(int *)(param_1 + uVar45 * 5 + 0xd) == (int)cVar10)) ||
               (memcpy(psVar27,__src,0x58), psVar50 = psVar44, psVar23 = psVar44, psVar27 = __src,
               __src <= psVar41)) break;
          }
                    /* try { // try from 010a7c1c to 011a7c3b has its CatchHandler @ 010a7b4c */
          iVar20 = *piVar46;
        }
                    /* try { // try from 010a7c3c to 011a7c43 has its CatchHandler @ 010a7cac */
        *piVar46 = iVar20 + 1;
        memset(psVar23,0,0x48);
                    /* try { // try from 010a7c44 to 011a7c63 has its CatchHandler @ 010a7b4c */
        *(ulong *)(psVar23 + 0x24) = uVar15;
        *(ulong *)(psVar23 + 0x28) = uVar15;
        *(undefined1 *)((long)psVar23 + 0x19) = *(undefined1 *)(uVar15 + 1);
        sVar11 = *(short *)(uVar15 + 2);
        *psVar23 = sVar11;
        uVar17 = FT_MulFix((long)sVar11,uVar49);
        *(undefined8 *)(psVar23 + 4) = uVar17;
        *(undefined8 *)(psVar23 + 8) = uVar17;
                    /* try { // try from 010a7c64 to 011a7c6f has its CatchHandler @ 010a7cac */
        puVar26 = (ulong *)(uVar15 + 0x18);
      }
      else {
        cVar10 = *(char *)(uVar15 + 1);
        lVar24 = 0;
        psVar41 = (short *)0x0;
        lVar32 = 0xffff;
        do {
          psVar23 = (short *)(*puVar51 + lVar24 * 0x58);
          if (*(char *)((long)psVar23 + 0x19) == cVar10) {
            lVar34 = (long)*(short *)(uVar15 + 2) - (long)*psVar23;
            lVar36 = -lVar34;
            if (-1 < lVar34) {
              lVar36 = lVar34;
            }
            if ((lVar36 < lVar16) && (lVar36 < lVar32)) {
              lVar34 = *(long *)(uVar15 + 0x20);
              if (lVar34 != 0) {
                lVar43 = *(long *)(*puVar51 + lVar24 * 0x58 + 0x48);
                lVar18 = 0;
                lVar38 = lVar43;
                do {
                  lVar19 = *(long *)(lVar38 + 0x20);
                  if (lVar19 != 0) {
                    sVar11 = *(short *)(lVar34 + 2);
                    sVar12 = *(short *)(lVar19 + 2);
                    if (sVar11 <= sVar12) {
                      lVar19 = lVar34;
                    }
                    if (sVar11 <= sVar12) {
                      sVar11 = sVar12;
                    }
                    lVar18 = (long)sVar11 - (long)*(short *)(lVar19 + 2);
                    if (lVar16 <= lVar18) break;
                  }
                  lVar38 = *(long *)(lVar38 + 0x18);
                } while (lVar38 != lVar43);
                if (lVar16 <= lVar18) goto LAB_010a7b0c;
              }
              psVar41 = psVar23;
              lVar32 = lVar36;
            }
          }
LAB_010a7b0c:
          lVar24 = lVar24 + 1;
        } while (lVar24 != iVar20);
        if (psVar41 == (short *)0x0) goto LAB_010a7b38;
        *(undefined8 *)(uVar15 + 0x18) = *(undefined8 *)(psVar41 + 0x24);
        puVar26 = (ulong *)(psVar41 + 0x28);
        *(ulong *)(*puVar26 + 0x18) = uVar15;
      }
      *puVar26 = uVar15;
                    /* try { // try from 010a7c70 to 011a7cb3 has its CatchHandler @ 010a7b4c */
      uVar15 = uVar15 + 0x58;
    } while (uVar15 < uVar29);
  }
  if (0 < *piVar46) {
    psVar23 = (short *)*puVar51;
    psVar27 = psVar23 + (long)*piVar46 * 0x2c;
    psVar41 = psVar23;
    do {
      lVar24 = *(long *)(psVar41 + 0x24);
      lVar16 = lVar24;
      if (lVar24 != 0) {
        do {
          *(short **)(lVar16 + 0x10) = psVar41;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a7c14 with catch @ 010a7cac
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7c3c with catch @ 010a7cac
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7c64 with catch @ 010a7cac
                        */
          plVar1 = (long *)(lVar16 + 0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a7bb4 with catch @ 010a7cb0
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7be0 with catch @ 010a7cb0
                        */
          lVar16 = *plVar1;
                    /* catch() { ... } // from try @ 010a7d84 with catch @ 010a7cb4 */
        } while (*plVar1 != lVar24);
      }
      psVar41 = psVar41 + 0x2c;
    } while (psVar41 < psVar27);
    do {
      pbVar35 = *(byte **)(psVar23 + 0x24);
      iVar20 = 0;
      iVar33 = 0;
      plVar1 = (long *)(psVar23 + 0x18);
      plVar3 = (long *)(psVar23 + 0x1c);
      pbVar47 = pbVar35;
      do {
        lVar16 = *(long *)(pbVar47 + 0x28);
        bVar14 = false;
        if (lVar16 != 0) {
          bVar14 = *(short **)(lVar16 + 0x10) != psVar23;
        }
        iVar20 = iVar20 + (*pbVar47 & 1);
        iVar33 = iVar33 + (*pbVar47 & 1 ^ 1);
        if ((bVar14) || (*(long *)(pbVar47 + 0x20) != 0)) {
          pbVar48 = pbVar47 + 0x28;
          plVar13 = plVar3;
          if (!bVar14) {
            pbVar48 = pbVar47 + 0x20;
            plVar13 = plVar1;
          }
          psVar41 = (short *)*plVar13;
                    /* try { // try from 010a7d28 to 011a7d2f has its CatchHandler @ 010a7e38 */
          pbVar48 = *(byte **)pbVar48;
          if (psVar41 == (short *)0x0) {
LAB_010a7d68:
            psVar41 = *(short **)(pbVar48 + 0x10);
          }
          else {
            sVar11 = *(short *)(pbVar47 + 2);
            sVar12 = *(short *)(pbVar48 + 2);
            lVar24 = (long)*psVar23 - (long)*psVar41;
            lVar16 = -lVar24;
            if (-1 < lVar24) {
              lVar16 = lVar24;
            }
            pbVar7 = pbVar48;
            if (sVar11 <= sVar12) {
              pbVar7 = pbVar47;
            }
            if (sVar11 <= sVar12) {
              sVar11 = sVar12;
            }
            if ((long)sVar11 - (long)*(short *)(pbVar7 + 2) < lVar16) goto LAB_010a7d68;
          }
                    /* try { // try from 010a7d6c to 011a7d83 has its CatchHandler @ 010a7e00 */
          if (bVar14) {
            *plVar3 = (long)psVar41;
            *(byte *)(psVar41 + 0xc) = *(byte *)(psVar41 + 0xc) | 2;
          }
          else {
                    /* try { // try from 010a7d84 to 011a7e53 has its CatchHandler @ 010a7cb4 */
            *plVar1 = (long)psVar41;
          }
        }
        pbVar47 = *(byte **)(pbVar47 + 0x18);
      } while (pbVar47 != pbVar35);
      *(bool *)(psVar23 + 0xc) = 0 < iVar20 && iVar33 <= iVar20;
      if ((*(long *)(psVar23 + 0x1c) != 0) && (*plVar1 != 0)) {
        *plVar3 = 0;
      }
      psVar23 = psVar23 + 0x2c;
    } while (psVar23 < psVar27);
  }
  return 0;
}

