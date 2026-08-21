
/* dtBuildTileCacheContours(dtTileCacheAlloc*, dtTileCacheLayer&, int, float,
   dtTileCacheContourSet&) */

undefined4
dtBuildTileCacheContours
          (dtTileCacheAlloc *param_1,dtTileCacheLayer *param_2,int param_3,float param_4,
          dtTileCacheContourSet *param_5)

{
  int iVar1;
  undefined2 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  dtTileCacheLayer dVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  byte bVar17;
  bool bVar18;
  uint uVar19;
  void *__s;
  byte *pbVar20;
  undefined2 *puVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  int *piVar27;
  long *plVar28;
  byte bVar29;
  int iVar30;
  byte bVar31;
  undefined2 uVar32;
  undefined4 uVar33;
  uint uVar34;
  long lVar35;
  undefined2 uVar36;
  uint uVar37;
  undefined4 uVar38;
  byte bVar39;
  uint uVar40;
  ulong uVar41;
  int iVar42;
  undefined4 uVar43;
  byte bVar44;
  uint uVar45;
  byte bVar46;
  uint uVar47;
  uint uVar48;
  ulong uVar49;
  ulong uVar50;
  undefined4 uVar51;
  char cVar52;
  char cVar53;
  long lVar54;
  ulong uVar55;
  long lVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  ulong local_a0;
  
  dVar10 = param_2[8];
  bVar11 = *(byte *)(*(long *)param_2 + 0x30);
  bVar12 = *(byte *)(*(long *)param_2 + 0x31);
  *(uint *)param_5 = (uint)(byte)dVar10;
  uVar51 = 0x80000004;
  __s = (void *)(**(code **)(*(long *)param_1 + 0x18))
                          (param_1,((uint)(byte)dVar10 + (uint)(byte)dVar10 * 2) * 8);
  *(void **)(param_5 + 8) = __s;
  if (__s != (void *)0x0) {
    memset(__s,0,(long)*(int *)param_5 * 0x18);
    iVar1 = (uint)bVar12 + (uint)bVar11;
    pbVar20 = (byte *)(**(code **)(*(long *)param_1 + 0x18))(param_1,iVar1 * 0x10);
    if (pbVar20 != (byte *)0x0) {
      puVar21 = (undefined2 *)(**(code **)(*(long *)param_1 + 0x18))(param_1,iVar1 * 8);
      if (puVar21 != (undefined2 *)0x0) {
        if (bVar12 == 0) {
          uVar51 = 0x40000000;
        }
        else {
          local_a0 = 0;
          do {
            if (bVar11 != 0) {
              uVar55 = 0;
              do {
                lVar24 = uVar55 + local_a0 * bVar11;
                bVar29 = *(byte *)(*(long *)(param_2 + 0x28) + lVar24);
                uVar50 = (ulong)bVar29;
                if (uVar50 != 0xff) {
                  lVar54 = *(long *)(param_5 + 8);
                  piVar27 = (int *)(lVar54 + uVar50 * 0x18);
                  if (*piVar27 < 1) {
                    lVar35 = lVar54 + uVar50 * 0x18;
                    *(byte *)(lVar35 + 0x10) = bVar29;
                    uVar45 = 1;
                    *(undefined1 *)(lVar35 + 0x11) =
                         *(undefined1 *)(*(long *)(param_2 + 0x18) + lVar24);
                    bVar29 = *(byte *)(*(long *)param_2 + 0x30);
                    bVar44 = *(byte *)(*(long *)param_2 + 0x31);
                    lVar24 = (ulong)((int)local_a0 * (uint)bVar29) + (uVar55 & 0xffffffff);
                    bVar39 = *(byte *)(*(long *)(param_2 + 0x20) + lVar24);
                    uVar34 = 0xffffffff;
                    do {
                      uVar37 = uVar45 + 2 & 3;
                      uVar19 = 1 << (ulong)uVar37;
                      if ((uVar19 & bVar39 & 0xf) == 0) {
                        if ((uVar19 & bVar39 >> 4) == 0) {
                          uVar19 = 0xff;
                        }
                        else {
                          uVar19 = uVar37 | 0xfffffff8;
                        }
                      }
                      else {
                        lVar35 = (ulong)uVar37 * 4;
                        uVar19 = (uint)*(byte *)(*(long *)(param_2 + 0x28) +
                                                (long)(int)(*(int *)(&BYTE_0149fdf0 + lVar35) +
                                                            (int)uVar55 +
                                                           (*(int *)(&BYTE_0149fe00 + lVar35) +
                                                           (int)local_a0) * (uint)bVar29));
                      }
                      uVar40 = (uint)*(byte *)(*(long *)(param_2 + 0x28) + lVar24);
                      if (uVar40 != (uVar19 & 0xff)) {
                        uVar34 = uVar37;
                      }
                    } while ((uVar45 < 4) && (uVar45 = uVar45 + 1, uVar40 == (uVar19 & 0xff)));
                    if (uVar34 == 0xffffffff) {
                      uVar45 = 0;
                      uVar32 = 0;
                      uVar36 = 0;
LAB_01197540:
                      *puVar21 = uVar36;
                      puVar21[1] = uVar32;
                      uVar34 = 2;
                      uVar37 = 2;
                    }
                    else {
                      uVar45 = 0;
                      uVar41 = local_a0 & 0xffffffff;
                      uVar26 = uVar55 & 0xffffffff;
                      iVar23 = 0;
                      uVar37 = uVar34;
                      do {
                        iVar30 = iVar23;
                        uVar49 = uVar26;
                        uVar22 = uVar41;
                        uVar19 = (uint)uVar22;
                        uVar40 = (uint)uVar49;
                        if ((uint)bVar44 * (uint)bVar29 == iVar30) break;
                        bVar39 = *(byte *)(*(long *)(param_2 + 0x20) +
                                          (long)(int)uVar40 +
                                          (long)(int)uVar19 *
                                          (ulong)*(byte *)(*(long *)param_2 + 0x30));
                        uVar47 = 1 << (ulong)(uVar37 & 0x1f);
                        if ((bVar39 & uVar47 & 0xf) == 0) {
                          if ((uVar47 & bVar39 >> 4) == 0) {
                            uVar47 = 0xff;
                          }
                          else {
                            uVar47 = uVar37 - 8;
                          }
                        }
                        else {
                          lVar24 = (ulong)(uVar37 & 3) * 4;
                          uVar47 = (uint)*(byte *)(*(long *)(param_2 + 0x28) +
                                                  (long)(int)(*(int *)(&BYTE_0149fdf0 + lVar24) +
                                                              uVar40 + (*(int *)(&BYTE_0149fe00 +
                                                                                lVar24) + uVar19) *
                                                                       (uint)*(byte *)(*(long *)
                                                  param_2 + 0x30)));
                        }
                        lVar24 = (long)(int)uVar40 + (long)(int)uVar19 * (ulong)bVar29;
                        if ((uint)*(byte *)(*(long *)(param_2 + 0x28) + lVar24) == (uVar47 & 0xff))
                        {
                          lVar24 = (ulong)(uVar37 & 3) * 4;
                          iVar23 = 3;
                          uVar41 = (ulong)(*(int *)(&BYTE_0149fe00 + lVar24) + uVar19);
                          uVar26 = (ulong)(*(int *)(&BYTE_0149fdf0 + lVar24) + uVar40);
                        }
                        else {
                          if (uVar37 == 2) {
                            uVar40 = uVar40 + 1;
                          }
                          else if (uVar37 == 1) {
                            uVar40 = uVar40 + 1;
                            uVar19 = uVar19 + 1;
                          }
                          else if (uVar37 == 0) {
                            uVar19 = uVar19 + 1;
                          }
                          bVar39 = *(byte *)(*(long *)(param_2 + 0x10) + lVar24);
                          if ((int)uVar45 < 2) {
LAB_01197384:
                            if (iVar1 * 4 <= (int)uVar45) {
                              uVar51 = 0x80000010;
                              goto joined_r0x01197aa8;
                            }
                            pbVar3 = pbVar20 + (long)(int)uVar45 * 4;
                            uVar45 = uVar45 + 1;
                            *pbVar3 = (byte)uVar40;
                            pbVar3[1] = bVar39;
                            pbVar3[2] = (byte)uVar19;
                            pbVar3[3] = (byte)uVar47;
                          }
                          else {
                            pbVar3 = pbVar20 + (int)(uVar45 * 4 + -4);
                            if ((uint)pbVar3[3] != (uVar47 & 0xff)) goto LAB_01197384;
                            if (((uint)pbVar20[(int)(uVar45 * 4 + -8)] == (uint)*pbVar3) &&
                               (uVar40 == *pbVar3)) {
                              pbVar3[1] = bVar39;
                              pbVar3[2] = (byte)uVar19;
                            }
                            else {
                              if (((uint)(pbVar20 + (int)(uVar45 * 4 + -8))[2] != (uint)pbVar3[2])
                                 || (uVar19 != pbVar3[2])) goto LAB_01197384;
                              *pbVar3 = (byte)uVar40;
                              pbVar3[1] = bVar39;
                            }
                          }
                          iVar23 = 1;
                          uVar41 = uVar22;
                          uVar26 = uVar49;
                        }
                        uVar19 = uVar37 + iVar23 & 3;
                        bVar18 = uVar37 != uVar34;
                        iVar23 = iVar30 + 1;
                        uVar37 = uVar19;
                      } while ((((bVar18) || (local_a0 != uVar22)) || (iVar30 == 0)) ||
                              (uVar55 != uVar49));
                      if (pbVar20[(int)(uVar45 * 4 + -4)] == *pbVar20) {
                        uVar45 = uVar45 - ((pbVar20 + (int)(uVar45 * 4 + -4))[2] == pbVar20[2]);
                      }
                      if ((int)uVar45 < 1) {
LAB_01197534:
                        uVar32 = 0;
                        uVar36 = 0;
                        goto LAB_01197540;
                      }
                      uVar41 = 0;
                      uVar34 = 0;
                      uVar37 = 0;
                      lVar24 = 0;
                      do {
                        lVar35 = lVar24 + 1;
                        iVar23 = 0;
                        if (uVar45 != 0) {
                          iVar23 = (int)lVar35 / (int)uVar45;
                        }
                        if (pbVar20[(ulong)(((int)lVar35 - iVar23 * uVar45) * 4) | 3] !=
                            pbVar20[uVar41 & 0xfffffffc | 3]) {
                          uVar34 = uVar37 + 1;
                          puVar21[(int)uVar37] = (short)lVar24;
                          uVar37 = uVar34;
                        }
                        uVar41 = uVar41 + 4;
                        lVar24 = lVar35;
                      } while ((int)uVar45 != lVar35);
                      if ((int)uVar37 < 2) {
                        if (1 < (int)uVar45) {
                          bVar29 = *pbVar20;
                          bVar44 = pbVar20[2];
                          uVar38 = 0;
                          uVar34 = 6;
                          uVar41 = 1;
                          uVar51 = 0;
                          bVar39 = bVar44;
                          bVar46 = bVar29;
                          do {
                            bVar13 = pbVar20[uVar34 - 2];
                            bVar31 = pbVar20[uVar34];
                            uVar43 = (undefined4)uVar41;
                            if ((bVar13 < bVar29) || ((bVar29 == bVar13 && (bVar31 < bVar39)))) {
                              uVar38 = uVar43;
                              bVar39 = bVar31;
                              bVar29 = bVar13;
                            }
                            uVar36 = (undefined2)uVar38;
                            uVar33 = uVar43;
                            bVar16 = bVar31;
                            bVar17 = bVar13;
                            if (((bVar13 <= bVar46) &&
                                (uVar33 = uVar51, bVar16 = bVar44, bVar17 = bVar46, bVar46 == bVar13
                                )) && (uVar33 = uVar43, bVar16 = bVar31, bVar17 = bVar13,
                                      bVar31 <= bVar44)) {
                              uVar33 = uVar51;
                              bVar16 = bVar44;
                              bVar17 = bVar46;
                            }
                            bVar46 = bVar17;
                            bVar44 = bVar16;
                            uVar32 = (undefined2)uVar33;
                            uVar41 = uVar41 + 1;
                            uVar34 = uVar34 + 4;
                            uVar51 = uVar33;
                          } while (uVar45 != uVar41);
                          goto LAB_01197540;
                        }
                        goto LAB_01197534;
                      }
                    }
                    iVar23 = 0;
                    do {
                      while( true ) {
                        lVar24 = (long)iVar23 + 1;
                        iVar30 = 0;
                        iVar42 = (int)lVar24;
                        if (uVar37 != 0) {
                          iVar30 = iVar42 / (int)uVar37;
                        }
                        uVar26 = (ulong)(ushort)puVar21[iVar23];
                        uVar22 = (ulong)(ushort)puVar21[(int)(iVar42 - iVar30 * uVar37)];
                        lVar35 = uVar26 * 4;
                        uVar41 = uVar26 << 2;
                        uVar19 = (uint)pbVar20[lVar35];
                        iVar15 = pbVar20[uVar22 * 4] - uVar19;
                        if ((uVar19 <= pbVar20[uVar22 * 4] && iVar15 != 0) ||
                           ((iVar15 == 0 && (pbVar20[uVar41 | 2] < pbVar20[uVar22 << 2 | 2])))) {
                          iVar30 = (ushort)puVar21[iVar23] + 1;
                          uVar26 = uVar22;
                          iVar25 = 1;
                        }
                        else {
                          iVar30 = (uVar45 - 1) +
                                   (uint)(ushort)puVar21[(int)(iVar42 - iVar30 * uVar37)];
                          iVar25 = uVar45 - 1;
                        }
                        iVar14 = 0;
                        if (uVar45 != 0) {
                          iVar14 = iVar30 / (int)uVar45;
                        }
                        uVar40 = iVar30 - iVar14 * uVar45;
                        if (uVar40 != (uint)uVar26) break;
LAB_0119755c:
                        iVar23 = iVar42;
                        if ((int)uVar37 <= iVar42) goto LAB_01197700;
                      }
                      uVar48 = (uint)pbVar20[uVar41 | 2];
                      fVar57 = (float)iVar15;
                      fVar59 = (float)(int)(pbVar20[uVar22 << 2 | 2] - uVar48);
                      fVar60 = fVar57 * fVar57 + fVar59 * fVar59;
                      fVar58 = 0.0;
                      uVar47 = 0xffffffff;
                      do {
                        fVar62 = fVar57 * (float)(int)((uint)pbVar20[-(ulong)(uVar40 >> 0x1f) &
                                                                     0xfffffffc00000000 |
                                                                     (ulong)uVar40 << 2] -
                                                      (uint)pbVar20[lVar35]) +
                                 fVar59 * (float)(int)(pbVar20[(long)(int)((ulong)uVar40 << 2) | 2]
                                                      - uVar48);
                        fVar61 = fVar62 / fVar60;
                        if (fVar60 <= 0.0) {
                          fVar61 = fVar62;
                        }
                        fVar62 = 0.0;
                        if ((0.0 <= fVar61) && (fVar62 = fVar61, 1.0 < fVar61)) {
                          fVar62 = 1.0;
                        }
                        fVar63 = (fVar62 * fVar57 + (float)uVar19) -
                                 (float)pbVar20[-(ulong)(uVar40 >> 0x1f) & 0xfffffffc00000000 |
                                                (ulong)uVar40 << 2];
                        fVar61 = (fVar62 * fVar59 + (float)uVar48) -
                                 (float)pbVar20[(long)(int)((ulong)uVar40 << 2) | 2];
                        fVar61 = fVar63 * fVar63 + fVar61 * fVar61;
                        iVar30 = 0;
                        if (uVar45 != 0) {
                          iVar30 = (int)(uVar40 + iVar25) / (int)uVar45;
                        }
                        uVar5 = uVar40;
                        if (fVar61 <= fVar58) {
                          uVar5 = uVar47;
                        }
                        uVar40 = (uVar40 + iVar25) - iVar30 * uVar45;
                        if (fVar61 <= fVar58) {
                          fVar61 = fVar58;
                        }
                        fVar58 = fVar61;
                        uVar47 = uVar5;
                      } while (uVar40 != (uint)uVar26);
                      if ((fVar61 <= param_4 * param_4) || (uVar5 == 0xffffffff)) goto LAB_0119755c;
                      uVar34 = uVar37 + 1;
                      if (iVar23 < (int)uVar37) {
                        lVar35 = (long)(int)uVar37;
                        do {
                          puVar2 = puVar21 + lVar35;
                          lVar35 = lVar35 + -1;
                          *puVar2 = puVar2[-1];
                        } while (iVar23 < lVar35);
                      }
                      puVar21[lVar24] = (short)uVar5;
                      uVar37 = uVar34;
                    } while (iVar23 < (int)uVar34);
LAB_01197700:
                    if ((int)uVar37 < 2) {
                      iVar23 = 0;
                    }
                    else {
                      uVar41 = 1;
                      iVar30 = 0;
                      do {
                        iVar23 = (int)uVar41;
                        if ((ushort)puVar21[iVar30] <= (ushort)puVar21[uVar41]) {
                          iVar23 = iVar30;
                        }
                        uVar41 = uVar41 + 1;
                        iVar30 = iVar23;
                      } while (uVar37 != uVar41);
                    }
                    if ((int)uVar37 < 1) {
                      *piVar27 = 0;
                    }
                    else {
                      iVar30 = 0;
                      if (uVar37 != 0) {
                        iVar30 = iVar23 / (int)uVar37;
                      }
                      pbVar3 = pbVar20 + (ulong)(ushort)puVar21[(int)(iVar23 - iVar30 * uVar37)] * 4
                      ;
                      *pbVar20 = *pbVar3;
                      pbVar20[1] = pbVar3[1];
                      pbVar20[2] = pbVar3[2];
                      pbVar20[3] = pbVar3[3];
                      if ((int)uVar34 < 2) {
                        uVar41 = 0;
                        iVar30 = 1;
                      }
                      else {
                        uVar26 = 4;
                        uVar22 = 1;
                        do {
                          uVar41 = uVar22;
                          iVar30 = iVar23 + (int)uVar41;
                          iVar42 = 0;
                          if (uVar34 != 0) {
                            iVar42 = iVar30 / (int)uVar34;
                          }
                          pbVar3 = pbVar20 + (uVar26 & 0xfffffffc);
                          pbVar4 = pbVar20 + (ulong)(ushort)puVar21[(int)(iVar30 - iVar42 * uVar34)]
                                             * 4;
                          iVar30 = (int)(uVar41 + 1);
                          uVar26 = uVar26 + 4;
                          *pbVar3 = *pbVar4;
                          pbVar3[1] = pbVar4[1];
                          pbVar3[2] = pbVar4[2];
                          pbVar3[3] = pbVar4[3];
                          uVar22 = uVar41 + 1;
                        } while (iVar30 < (int)uVar34);
                      }
                      *piVar27 = iVar30;
                      lVar24 = (**(code **)(*(long *)param_1 + 0x18))(param_1,iVar30 << 2);
                      plVar28 = (long *)(lVar54 + uVar50 * 0x18 + 8);
                      *plVar28 = lVar24;
                      if (lVar24 == 0) {
                        uVar51 = 0x80000004;
                        goto LAB_01197ab4;
                      }
                      uVar50 = 0;
                      uVar26 = uVar41;
                      while( true ) {
                        uVar22 = uVar50;
                        uVar26 = (ulong)(uint)((int)uVar26 << 2);
                        pbVar3 = pbVar20 + uVar26;
                        bVar29 = pbVar3[2];
                        bVar13 = pbVar20[(ulong)(uint)((int)uVar22 << 2) + 3];
                        bVar44 = *pbVar3;
                        uVar50 = (ulong)bVar44;
                        bVar39 = *(byte *)(*(long *)param_2 + 0x30);
                        bVar46 = *(byte *)(*(long *)param_2 + 0x31);
                        lVar6 = *(long *)(param_2 + 0x10);
                        lVar8 = *(long *)(param_2 + 0x18);
                        lVar7 = *(long *)(param_2 + 0x20);
                        lVar9 = *(long *)(param_2 + 0x28);
                        lVar56 = (ulong)bVar29 - 1;
                        uVar34 = 0;
                        uVar45 = 0xf;
                        lVar35 = uVar50 - 1;
                        lVar54 = lVar56 * (ulong)bVar39;
                        cVar52 = -1;
                        uVar19 = (uint)lVar56;
                        uVar37 = (uint)pbVar3[1];
                        if ((bVar46 < bVar29) || (bVar39 < bVar44)) {
                          uVar40 = 0;
                        }
                        else {
                          uVar40 = 0;
                          if (-1 < (int)(uVar19 | (uint)lVar35)) {
                            lVar56 = lVar54 + lVar35;
                            uVar34 = (uint)*(byte *)(lVar6 + lVar56);
                            iVar30 = uVar34 - uVar37;
                            iVar23 = -iVar30;
                            if (-1 < iVar30) {
                              iVar23 = iVar30;
                            }
                            if ((param_3 < iVar23) || (*(char *)(lVar8 + lVar56) == '\0')) {
                              uVar40 = 0;
                              uVar34 = 0;
                              uVar45 = 0xf;
                              cVar52 = -1;
                            }
                            else {
                              cVar52 = *(char *)(lVar9 + lVar56);
                              uVar45 = (uint)(*(byte *)(lVar7 + lVar56) >> 4);
                              uVar40 = 1;
                            }
                          }
                        }
                        bVar18 = true;
                        if (((bVar29 <= bVar46) && (bVar44 < bVar39)) && (-1 < (int)uVar19)) {
                          lVar54 = lVar54 + uVar50;
                          bVar31 = *(byte *)(lVar6 + lVar54);
                          iVar30 = bVar31 - uVar37;
                          iVar23 = -iVar30;
                          if (-1 < iVar30) {
                            iVar23 = iVar30;
                          }
                          if ((param_3 < iVar23) || (*(char *)(lVar8 + lVar54) == '\0')) {
                            bVar18 = true;
                          }
                          else {
                            if (uVar34 < bVar31 || uVar34 == bVar31) {
                              uVar34 = (uint)bVar31;
                            }
                            uVar45 = uVar45 & *(byte *)(lVar7 + lVar54) >> 4;
                            bVar18 = cVar52 == -1 || cVar52 == *(char *)(lVar9 + lVar54);
                            uVar40 = uVar40 + 1;
                            cVar52 = *(char *)(lVar9 + lVar54);
                          }
                        }
                        pbVar4 = (byte *)(lVar24 + uVar26);
                        lVar24 = (ulong)bVar39 * (ulong)bVar29;
                        cVar53 = cVar52;
                        if (((bVar29 < bVar46) && (-1 < (int)(uint)lVar35)) && (bVar44 <= bVar39)) {
                          lVar35 = lVar24 + lVar35;
                          bVar31 = *(byte *)(lVar6 + lVar35);
                          iVar30 = bVar31 - uVar37;
                          iVar23 = -iVar30;
                          if (-1 < iVar30) {
                            iVar23 = iVar30;
                          }
                          if ((iVar23 <= param_3) && (*(char *)(lVar8 + lVar35) != '\0')) {
                            cVar53 = *(char *)(lVar9 + lVar35);
                            if (uVar34 < bVar31 || uVar34 == bVar31) {
                              uVar34 = (uint)bVar31;
                            }
                            uVar45 = uVar45 & *(byte *)(lVar7 + lVar35) >> 4;
                            if (cVar52 != -1) {
                              bVar18 = (bool)(bVar18 & cVar52 == cVar53);
                            }
                            uVar40 = uVar40 + 1;
                          }
                        }
                        bVar31 = (byte)uVar34;
                        if ((bVar44 < bVar39) && (bVar29 < bVar46)) {
                          lVar24 = lVar24 + uVar50;
                          bVar29 = *(byte *)(lVar6 + lVar24);
                          iVar30 = bVar29 - uVar37;
                          iVar23 = -iVar30;
                          if (-1 < iVar30) {
                            iVar23 = iVar30;
                          }
                          if ((iVar23 <= param_3) && (*(char *)(lVar8 + lVar24) != '\0')) {
                            if (uVar34 < bVar29 || uVar34 == bVar29) {
                              bVar31 = bVar29;
                            }
                            uVar45 = uVar45 & *(byte *)(lVar7 + lVar24) >> 4;
                            if (cVar53 != -1) {
                              bVar18 = (bool)(bVar18 & cVar53 == *(char *)(lVar9 + lVar24));
                            }
                            uVar40 = uVar40 + 1;
                          }
                        }
                        *pbVar4 = bVar44;
                        pbVar4[1] = bVar31;
                        pbVar4[2] = pbVar3[2];
                        bVar29 = bVar13 + 8;
                        if (bVar13 < 0xf8 || bVar13 == 0xff) {
                          bVar29 = 0xf;
                        }
                        bVar44 = bVar29 | 0x80;
                        if (!(bool)(bVar18 & (1 < uVar40 &&
                                             (uVar45 >> 1 & 1) + (uVar45 & 1) + (uVar45 >> 2 & 1) +
                                             (uVar45 >> 3) == 1))) {
                          bVar44 = bVar29;
                        }
                        pbVar4[3] = bVar44;
                        if (uVar22 + 1 == (ulong)((int)uVar41 + 1)) break;
                        lVar24 = *plVar28;
                        uVar50 = uVar22 + 1;
                        uVar26 = uVar22;
                      }
                    }
                  }
                }
                uVar55 = uVar55 + 1;
              } while (uVar55 != bVar11);
            }
            local_a0 = local_a0 + 1;
          } while (local_a0 != bVar12);
          uVar51 = 0x40000000;
joined_r0x01197aa8:
          if (param_1 == (dtTileCacheAlloc *)0x0) {
            return uVar51;
          }
        }
      }
LAB_01197ab4:
      (**(code **)(*(long *)param_1 + 0x20))(param_1,puVar21);
    }
    (**(code **)(*(long *)param_1 + 0x20))(param_1,pbVar20);
  }
  return uVar51;
}

