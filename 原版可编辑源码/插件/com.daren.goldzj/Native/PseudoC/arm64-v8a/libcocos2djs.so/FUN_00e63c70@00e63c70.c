
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00e63c70(undefined8 *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  ushort uVar11;
  long *plVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  byte *pbVar29;
  ulong uVar30;
  ushort *puVar31;
  long lVar32;
  short *psVar33;
  ulong uVar34;
  short *psVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  short *psVar42;
  long lVar43;
  ulong uVar44;
  byte *pbVar45;
  ulong uVar46;
  ulong *puVar47;
  undefined8 uVar48;
  int *piVar49;
  ulong uVar50;
  short *local_68;
  
  iVar10 = *(int *)(param_1 + (ulong)param_2 * 0x13d + 9);
  uVar44 = (ulong)param_2;
  puVar47 = param_1 + (ulong)param_2 * 0x13d + 10;
  pbVar45 = (byte *)*puVar47;
  uVar17 = FUN_00e62d8c();
  if ((int)uVar17 == 0) {
    if (0 < iVar10) {
      pbVar29 = pbVar45 + (long)iVar10 * 0x50;
      do {
        puVar31 = *(ushort **)(pbVar45 + 0x40);
        bVar5 = *pbVar45;
        uVar7 = *puVar31;
        *pbVar45 = bVar5 & 0xfe;
        if (puVar31 != *(ushort **)(pbVar45 + 0x48)) {
          do {
            uVar11 = uVar7 & 3;
            puVar31 = *(ushort **)(puVar31 + 0x20);
            uVar7 = *puVar31;
            if ((uVar7 & 3) == 0 && uVar11 == 0) goto LAB_00e63d14;
          } while (puVar31 != *(ushort **)(pbVar45 + 0x48));
          *pbVar45 = bVar5 | 1;
        }
LAB_00e63d14:
        pbVar45 = pbVar45 + 0x50;
      } while (pbVar45 < pbVar29);
    }
    iVar10 = *(int *)(param_1 + (ulong)param_2 * 0x13d + 9);
    lVar19 = 8;
    if (param_2 != 0) {
      lVar19 = 0x18;
    }
    uVar46 = *puVar47;
    iVar23 = *(int *)(param_1 + uVar44 * 0x13d + 0xd);
    uVar36 = *(uint *)(param_1[0x284] + 0x48);
    lVar18 = FT_DivFix(0xc0,*(undefined8 *)((long)param_1 + lVar19));
    if (0 < iVar10) {
      lVar32 = 0;
      uVar30 = uVar46 + (long)iVar10 * 0x50;
      uVar50 = uVar46;
      do {
        if (iVar23 == *(char *)(uVar50 + 1)) {
          lVar37 = 0;
          do {
            if ((lVar32 != lVar37) && (iVar23 + *(char *)(uVar46 + lVar37 + 1) == 0)) {
              lVar41 = uVar46 + lVar37;
              lVar20 = (long)*(short *)(lVar41 + 2) - (long)*(short *)(uVar50 + 2);
              if (-1 < lVar20) {
                sVar8 = *(short *)(lVar41 + 6);
                if (*(short *)(lVar41 + 6) <= *(short *)(uVar50 + 6)) {
                  sVar8 = *(short *)(uVar50 + 6);
                }
                sVar9 = *(short *)(lVar41 + 8);
                if (*(short *)(uVar50 + 8) <= *(short *)(lVar41 + 8)) {
                  sVar9 = *(short *)(uVar50 + 8);
                }
                lVar41 = (long)sVar9 - (long)sVar8;
                if ((long)(ulong)(uVar36 >> 8) <= lVar41) {
                  lVar43 = lVar20 * 8;
                  if ((lVar43 < *(long *)(uVar50 + 0x30) * 9) &&
                     ((lVar43 < *(long *)(uVar50 + 0x30) * 7 || (*(long *)(uVar50 + 0x38) < lVar41))
                     )) {
                    *(long *)(uVar50 + 0x30) = lVar20;
                    *(long *)(uVar50 + 0x38) = lVar41;
                    *(ulong *)(uVar50 + 0x20) = uVar46 + lVar37;
                  }
                  lVar3 = uVar46 + lVar37;
                  if ((lVar43 < *(long *)(lVar3 + 0x30) * 9) &&
                     ((lVar43 < *(long *)(lVar3 + 0x30) * 7 || (*(long *)(lVar3 + 0x38) < lVar41))))
                  {
                    *(long *)(lVar3 + 0x30) = lVar20;
                    *(long *)(lVar3 + 0x38) = lVar41;
                    *(ulong *)(uVar46 + lVar37 + 0x20) = uVar50;
                  }
                }
              }
            }
            lVar37 = lVar37 + 0x50;
          } while (uVar46 + lVar37 < uVar30);
        }
        uVar50 = uVar50 + 0x50;
        lVar32 = lVar32 + 0x50;
      } while (uVar50 < uVar30);
      uVar50 = uVar30;
      if (uVar30 <= uVar46 + 0x50) {
        uVar50 = uVar46 + 0x50;
      }
      uVar50 = (uVar50 + ~uVar46) / 0x50 + 1;
      uVar34 = uVar50 & 0x7fffffffffffffe;
      uVar39 = uVar46;
      do {
        uVar40 = *(ulong *)(uVar39 + 0x20);
        if ((uVar40 != 0) && (*(ulong *)(uVar40 + 0x20) == uVar39)) {
          sVar8 = *(short *)(uVar40 + 2);
          sVar9 = *(short *)(uVar39 + 2);
          if ((sVar9 < sVar8) && (lVar32 = *(long *)(uVar39 + 0x30), lVar32 < lVar18)) {
            uVar22 = uVar46;
            do {
              if ((((((uVar39 != uVar22) && (*(short *)(uVar22 + 2) <= sVar9)) &&
                    (uVar24 = *(ulong *)(uVar22 + 0x20), uVar24 != 0)) &&
                   ((*(ulong *)(uVar24 + 0x20) == uVar22 && (sVar8 <= *(short *)(uVar24 + 2))))) &&
                  ((sVar9 != *(short *)(uVar22 + 2) || (sVar8 != *(short *)(uVar24 + 2))))) &&
                 ((lVar37 = *(long *)(uVar22 + 0x30), lVar32 < lVar37 &&
                  (lVar32 * 4 - lVar37 != 0 && lVar37 <= lVar32 * 4)))) {
                if (*(long *)(uVar39 + 0x38) < *(long *)(uVar22 + 0x38) * 3) {
                  *(undefined8 *)(uVar40 + 0x20) = 0;
                  *(undefined8 *)(uVar39 + 0x20) = 0;
                  break;
                }
                uVar27 = uVar46;
                uVar25 = uVar34;
                puVar26 = (ulong *)(uVar46 + 0x70);
                if (1 < uVar50) {
                  do {
                    while( true ) {
                      uVar28 = puVar26[-10];
                      uVar27 = *puVar26;
                      bVar13 = uVar28 == uVar22;
                      bVar14 = uVar27 == uVar22;
                      bVar15 = uVar28 != uVar24;
                      bVar16 = uVar27 != uVar24;
                      if (bVar15 || bVar13) break;
                      puVar26[-10] = 0;
                      if (!bVar16 && !bVar14) goto LAB_00e63fe4;
LAB_00e63fa4:
                      if (bVar15 || bVar13) goto LAB_00e63fa8;
LAB_00e63fec:
                      puVar26[-9] = uVar39;
                      if (!bVar16 && !bVar14) goto LAB_00e63ff4;
LAB_00e63fac:
                      if (uVar28 != uVar22) goto LAB_00e63fb4;
LAB_00e64000:
                      puVar26[-10] = 0;
                      if (uVar27 == uVar22) goto LAB_00e6400c;
LAB_00e63fbc:
                      if (uVar28 != uVar22) goto LAB_00e63fc4;
LAB_00e64018:
                      puVar26[-9] = uVar40;
                      if (uVar27 == uVar22) goto LAB_00e64024;
LAB_00e63fcc:
                      uVar25 = uVar25 - 2;
                      puVar26 = puVar26 + 0x14;
                      if (uVar25 == 0) goto LAB_00e64034;
                    }
                    if (bVar16 || bVar14) goto LAB_00e63fa4;
LAB_00e63fe4:
                    *puVar26 = 0;
                    if (!bVar15 && !bVar13) goto LAB_00e63fec;
LAB_00e63fa8:
                    if (bVar16 || bVar14) goto LAB_00e63fac;
LAB_00e63ff4:
                    puVar26[1] = uVar39;
                    if (uVar28 == uVar22) goto LAB_00e64000;
LAB_00e63fb4:
                    if (uVar27 != uVar22) goto LAB_00e63fbc;
LAB_00e6400c:
                    *puVar26 = 0;
                    if (uVar28 == uVar22) goto LAB_00e64018;
LAB_00e63fc4:
                    if (uVar27 != uVar22) goto LAB_00e63fcc;
LAB_00e64024:
                    puVar26[1] = uVar40;
                    uVar25 = uVar25 - 2;
                    puVar26 = puVar26 + 0x14;
                  } while (uVar25 != 0);
LAB_00e64034:
                  uVar27 = uVar46 + uVar34 * 0x50;
                  if (uVar50 == uVar34) goto LAB_00e6407c;
                }
                do {
                  while ((uVar25 = uVar40, *(ulong *)(uVar27 + 0x20) != uVar22 &&
                         (uVar25 = uVar39, *(ulong *)(uVar27 + 0x20) != uVar24))) {
                    uVar27 = uVar27 + 0x50;
                    if (uVar30 <= uVar27) goto LAB_00e6407c;
                  }
                  *(undefined8 *)(uVar27 + 0x20) = 0;
                  *(ulong *)(uVar27 + 0x28) = uVar25;
                  uVar27 = uVar27 + 0x50;
                } while (uVar27 < uVar30);
              }
LAB_00e6407c:
              uVar22 = uVar22 + 0x50;
            } while (uVar22 < uVar30);
          }
        }
        uVar39 = uVar39 + 0x50;
      } while (uVar39 < uVar30);
      do {
        lVar32 = *(long *)(uVar46 + 0x20);
        if ((lVar32 != 0) && (uVar46 != *(ulong *)(lVar32 + 0x20))) {
          *(undefined8 *)(uVar46 + 0x20) = 0;
          if ((*(long *)(lVar32 + 0x30) < lVar18) ||
             (*(long *)(uVar46 + 0x30) < *(long *)(lVar32 + 0x30) * 4)) {
            *(undefined8 *)(uVar46 + 0x28) = *(undefined8 *)(lVar32 + 0x20);
          }
        }
        uVar46 = uVar46 + 0x50;
      } while (uVar46 < uVar30);
    }
    iVar10 = *(int *)(param_1 + uVar44 * 0x13d + 9);
    lVar18 = param_1[0x284];
    uVar17 = *param_1;
    uVar46 = *puVar47;
    piVar49 = (int *)(param_1 + uVar44 * 0x13d + 0xb);
    *piVar49 = 0;
    lVar18 = lVar18 + uVar44 * 0x38a8;
    uVar48 = *(undefined8 *)((long)param_1 + lVar19);
    lVar19 = FT_MulFix(*(undefined8 *)(lVar18 + 0x1e8),uVar48);
    if (lVar19 < 0x11) {
      lVar19 = *(long *)(lVar18 + 0x1e8);
    }
    else {
      lVar19 = FT_DivFix(0x10,uVar48);
    }
    if (0 < iVar10) {
      uVar50 = uVar46 + (long)iVar10 * 0x50;
LAB_00e64170:
      do {
        if (*piVar49 < 1) {
          cVar6 = *(char *)(uVar46 + 1);
        }
        else {
          uVar30 = param_1[uVar44 * 0x13d + 0xc];
          cVar6 = *(char *)(uVar46 + 1);
          lVar18 = 0;
          psVar35 = (short *)0x0;
          lVar32 = 0xffff;
          do {
            psVar42 = (short *)(uVar30 + lVar18 * 0x58);
            if (*(char *)((long)psVar42 + 0x19) == cVar6) {
              lVar41 = (long)*(short *)(uVar46 + 2) - (long)*psVar42;
              lVar37 = -lVar41;
              if (-1 < lVar41) {
                lVar37 = lVar41;
              }
              if ((lVar37 < lVar19) && (lVar37 < lVar32)) {
                if (*(long *)(uVar46 + 0x20) != 0) {
                  lVar20 = *(long *)(uVar30 + lVar18 * 0x58 + 0x48);
                  lVar43 = 0;
                  lVar41 = lVar20;
                  do {
                    if (*(long *)(lVar41 + 0x20) != 0) {
                      sVar8 = *(short *)(*(long *)(uVar46 + 0x20) + 2);
                      iVar23 = (int)*(short *)(*(long *)(lVar41 + 0x20) + 2);
                      iVar10 = sVar8 - iVar23;
                      if (sVar8 - iVar23 == 0 || sVar8 < iVar23) {
                        iVar10 = iVar23 - sVar8;
                      }
                      lVar43 = (long)iVar10;
                      if (lVar19 <= lVar43) break;
                    }
                    lVar41 = *(long *)(lVar41 + 0x18);
                  } while (lVar41 != lVar20);
                  if (lVar19 <= lVar43) goto LAB_00e64220;
                }
                psVar35 = psVar42;
                lVar32 = lVar37;
              }
            }
LAB_00e64220:
            lVar18 = lVar18 + 1;
          } while (lVar18 != *piVar49);
          if (psVar35 != (short *)0x0) {
            *(undefined8 *)(uVar46 + 0x18) = *(undefined8 *)(psVar35 + 0x24);
            *(ulong *)(*(long *)(psVar35 + 0x28) + 0x18) = uVar46;
            *(ulong *)(psVar35 + 0x28) = uVar46;
            uVar46 = uVar46 + 0x50;
            if (uVar50 <= uVar46) break;
            goto LAB_00e64170;
          }
        }
        uVar21 = FUN_00e6566c(param_1 + uVar44 * 0x13d + 9,(long)*(short *)(uVar46 + 2),(int)cVar6,0
                              ,uVar17,&local_68);
        psVar35 = local_68;
        if ((int)uVar21 != 0) {
          return uVar21;
        }
        local_68[0x14] = 0;
        local_68[0x15] = 0;
        local_68[0x16] = 0;
        local_68[0x17] = 0;
        local_68[0x10] = 0;
        local_68[0x11] = 0;
        local_68[0x12] = 0;
        local_68[0x13] = 0;
        local_68[0x1c] = 0;
        local_68[0x1d] = 0;
        local_68[0x1e] = 0;
        local_68[0x1f] = 0;
        local_68[0x18] = 0;
        local_68[0x19] = 0;
        local_68[0x1a] = 0;
        local_68[0x1b] = 0;
        local_68[4] = 0;
        local_68[5] = 0;
        local_68[6] = 0;
        local_68[7] = 0;
        local_68[0] = 0;
        local_68[1] = 0;
        local_68[2] = 0;
        local_68[3] = 0;
        local_68[0xc] = 0;
        local_68[0xd] = 0;
        local_68[0xe] = 0;
        local_68[0xf] = 0;
        local_68[8] = 0;
        local_68[9] = 0;
        local_68[10] = 0;
        local_68[0xb] = 0;
        local_68[0x20] = 0;
        local_68[0x21] = 0;
        local_68[0x22] = 0;
        local_68[0x23] = 0;
        *(ulong *)(local_68 + 0x24) = uVar46;
        *(ulong *)(local_68 + 0x28) = uVar46;
        *(undefined1 *)((long)local_68 + 0x19) = *(undefined1 *)(uVar46 + 1);
        sVar8 = *(short *)(uVar46 + 2);
        *local_68 = sVar8;
        uVar21 = FT_MulFix((long)sVar8,uVar48);
        *(undefined8 *)(psVar35 + 4) = uVar21;
        *(undefined8 *)(psVar35 + 8) = uVar21;
        *(ulong *)(uVar46 + 0x18) = uVar46;
        uVar46 = uVar46 + 0x50;
      } while (uVar46 < uVar50);
    }
    if (0 < *piVar49) {
      psVar42 = (short *)param_1[uVar44 * 0x13d + 0xc];
      psVar33 = psVar42 + (long)*piVar49 * 0x2c;
      psVar35 = psVar42;
      do {
        lVar18 = *(long *)(psVar35 + 0x24);
        lVar19 = lVar18;
        if (lVar18 != 0) {
          do {
            *(short **)(lVar19 + 0x10) = psVar35;
            plVar1 = (long *)(lVar19 + 0x18);
            lVar19 = *plVar1;
          } while (*plVar1 != lVar18);
        }
        psVar35 = psVar35 + 0x2c;
      } while (psVar35 < psVar33);
      do {
        pbVar29 = *(byte **)(psVar42 + 0x24);
        uVar36 = 0;
        uVar38 = 0;
        plVar1 = (long *)(psVar42 + 0x18);
        plVar2 = (long *)(psVar42 + 0x1c);
        pbVar45 = pbVar29;
        do {
          while( true ) {
            lVar19 = *(long *)(pbVar45 + 0x28);
            bVar13 = false;
            if (lVar19 != 0) {
              bVar13 = *(short **)(lVar19 + 0x10) != psVar42;
            }
            uVar36 = uVar36 + (*pbVar45 & 1);
            uVar38 = uVar38 + (*pbVar45 & 1 ^ 1);
            if ((bVar13) || (*(long *)(pbVar45 + 0x20) != 0)) break;
            pbVar45 = *(byte **)(pbVar45 + 0x18);
joined_r0x00e643cc:
            if (pbVar45 == pbVar29) goto LAB_00e643e4;
          }
          pbVar4 = pbVar45 + 0x28;
          plVar12 = plVar2;
          if (!bVar13) {
            pbVar4 = pbVar45 + 0x20;
            plVar12 = plVar1;
          }
          psVar35 = (short *)*plVar12;
          if (psVar35 == (short *)0x0) {
LAB_00e643ac:
            psVar35 = *(short **)(*(long *)pbVar4 + 0x10);
          }
          else {
            sVar8 = *(short *)(pbVar45 + 2);
            lVar18 = (long)*psVar42 - (long)*psVar35;
            lVar19 = -lVar18;
            if (-1 < lVar18) {
              lVar19 = lVar18;
            }
            iVar23 = (int)*(short *)(*(long *)pbVar4 + 2);
            iVar10 = sVar8 - iVar23;
            if (sVar8 - iVar23 == 0 || sVar8 < iVar23) {
              iVar10 = iVar23 - sVar8;
            }
            if (iVar10 < lVar19) goto LAB_00e643ac;
          }
          if (bVar13) {
            *plVar2 = (long)psVar35;
            *(byte *)(psVar35 + 0xc) = *(byte *)(psVar35 + 0xc) | 2;
            pbVar45 = *(byte **)(pbVar45 + 0x18);
            goto joined_r0x00e643cc;
          }
          *plVar1 = (long)psVar35;
          pbVar45 = *(byte **)(pbVar45 + 0x18);
        } while (pbVar45 != pbVar29);
LAB_00e643e4:
        *(bool *)(psVar42 + 0xc) = uVar36 != 0 && uVar38 <= uVar36;
        if ((*(long *)(psVar42 + 0x1c) != 0) && (*plVar1 != 0)) {
          *plVar2 = 0;
        }
        psVar42 = psVar42 + 0x2c;
      } while (psVar42 < psVar33);
    }
    uVar17 = 0;
  }
  return uVar17;
}

