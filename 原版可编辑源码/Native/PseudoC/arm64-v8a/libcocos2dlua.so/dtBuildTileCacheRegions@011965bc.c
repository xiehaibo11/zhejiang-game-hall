
/* dtBuildTileCacheRegions(dtTileCacheAlloc*, dtTileCacheLayer&, int) */

undefined4 dtBuildTileCacheRegions(dtTileCacheAlloc *param_1,dtTileCacheLayer *param_2,int param_3)

{
  undefined2 *puVar1;
  short *psVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  long lVar9;
  dtTileCacheLayer dVar10;
  void *__s;
  void *__s_00;
  ulong uVar11;
  dtTileCacheLayer dVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  char *pcVar16;
  ulong uVar17;
  byte bVar18;
  byte bVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  byte *pbVar25;
  long lVar26;
  byte *pbVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  int *piVar32;
  int iVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  undefined4 uVar37;
  ulong uVar38;
  ulong uVar39;
  byte bVar40;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  byte abStack_170 [256];
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  bVar5 = *(byte *)(*(long *)param_2 + 0x30);
  uVar39 = (ulong)bVar5;
  bVar6 = *(byte *)(*(long *)param_2 + 0x31);
  uVar35 = (ulong)bVar6;
  memset(*(void **)(param_2 + 0x28),0xff,uVar35 * uVar39);
  uVar37 = 0x80000004;
  __s = (void *)(**(code **)(*(long *)param_1 + 0x18))(param_1,(ulong)bVar5 << 2);
  if (__s != (void *)0x0) {
    memset(__s,0,uVar39 << 2);
    if (bVar6 == 0) {
      uVar42 = 0;
    }
    else {
      lVar36 = 0;
      uVar38 = 0;
      uVar42 = 0;
      lVar34 = -uVar39;
LAB_011966b4:
      if (bVar5 != 0) {
        uVar17 = 0;
        bVar19 = 0;
        do {
          lVar20 = *(long *)(param_2 + 0x18);
          pcVar16 = (char *)(lVar20 + lVar36 + uVar17);
          cVar7 = *pcVar16;
          if (cVar7 != '\0') {
            if ((uVar17 == 0) || (cVar7 != *(char *)(lVar20 + lVar36 + uVar17 + -1))) {
LAB_0119675c:
              puVar1 = (undefined2 *)((long)__s + (ulong)bVar19 * 4);
              bVar40 = bVar19 + 1;
              *(undefined1 *)((long)puVar1 + 3) = 0xff;
              *puVar1 = 0;
              bVar18 = bVar19;
            }
            else {
              pbVar27 = (byte *)(*(long *)(param_2 + 0x10) + lVar36 + uVar17);
              iVar14 = (uint)*pbVar27 - (uint)pbVar27[-1];
              iVar13 = -iVar14;
              if (-1 < iVar14) {
                iVar13 = iVar14;
              }
              if ((param_3 < iVar13) ||
                 (bVar18 = *(byte *)(*(long *)(param_2 + 0x28) + lVar36 + uVar17 + -1),
                 bVar40 = bVar19, bVar18 == 0xff)) goto LAB_0119675c;
            }
            if ((uVar38 != 0) && (*pcVar16 == *(char *)(lVar20 + lVar34 + uVar17))) {
              iVar14 = (uint)*(byte *)(*(long *)(param_2 + 0x10) + lVar36 + uVar17) -
                       (uint)*(byte *)(*(long *)(param_2 + 0x10) + lVar34 + uVar17);
              iVar13 = -iVar14;
              if (-1 < iVar14) {
                iVar13 = iVar14;
              }
              if (iVar13 <= param_3) {
                bVar19 = *(byte *)(*(long *)(param_2 + 0x28) + lVar34 + uVar17);
                uVar21 = (ulong)bVar19;
                if (uVar21 != 0xff) {
                  psVar2 = (short *)((long)__s + (ulong)bVar18 * 4);
                  if (*psVar2 == 0) {
                    *(byte *)((long)psVar2 + 3) = bVar19;
                  }
                  else if (*(byte *)((long)psVar2 + 3) != bVar19) {
                    *(undefined1 *)((long)__s + (ulong)bVar18 * 4 + 3) = 0xff;
                    goto LAB_011966dc;
                  }
                  *psVar2 = *psVar2 + 1;
                  abStack_170[uVar21] = abStack_170[uVar21] + 1;
                }
              }
            }
LAB_011966dc:
            *(byte *)(*(long *)(param_2 + 0x28) + lVar36 + uVar17) = bVar18;
            bVar19 = bVar40;
          }
          uVar17 = uVar17 + 1;
        } while (uVar39 != uVar17);
        if (bVar19 != 0) {
          uVar17 = (ulong)bVar19;
          pbVar27 = (byte *)((long)__s + 2);
          do {
            bVar40 = (byte)uVar42;
            bVar19 = pbVar27[1];
            if (((ulong)bVar19 == 0xff) ||
               ((ushort)abStack_170[bVar19] != *(ushort *)(pbVar27 + -2))) {
              if ((~(uint)uVar42 & 0xff) == 0) {
                uVar37 = 0x80000010;
                if (param_1 == (dtTileCacheAlloc *)0x0) goto LAB_01196f60;
                goto LAB_01196f4c;
              }
              uVar42 = (ulong)((uint)uVar42 + 1);
              bVar19 = bVar40;
            }
            uVar17 = uVar17 - 1;
            *pbVar27 = bVar19;
            pbVar27 = pbVar27 + 4;
          } while (uVar17 != 0);
        }
        if (bVar5 != 0) {
          uVar17 = 0;
          do {
            uVar21 = (ulong)*(byte *)(*(long *)(param_2 + 0x28) + lVar36 + uVar17);
            if (uVar21 != 0xff) {
              *(undefined1 *)(*(long *)(param_2 + 0x28) + lVar36 + uVar17) =
                   *(undefined1 *)((long)__s + uVar21 * 4 + 2);
            }
            uVar17 = uVar17 + 1;
          } while (uVar39 != uVar17);
        }
      }
      uVar38 = uVar38 + 1;
      lVar36 = lVar36 + uVar39;
      lVar34 = lVar34 + uVar39;
      if (uVar38 != uVar35) {
        if ((uVar42 & 0xff) != 0) {
          __memset_chk(abStack_170,0,uVar42 & 0xff,0x100);
        }
        goto LAB_011966b4;
      }
    }
    uVar41 = (uint)uVar42;
    __s_00 = (void *)(**(code **)(*(long *)param_1 + 0x18))
                               (param_1,((uVar41 & 0xff) + (uVar41 & 0xff) * 2) * 8);
    uVar37 = 0x80000004;
    if (__s_00 != (void *)0x0) {
      uVar38 = uVar42 & 0xff;
      memset(__s_00,0,(uVar38 + (uVar42 & 0xff) * 2) * 8);
      if ((uVar42 & 0xff) != 0) {
        if ((uVar41 & 0xff) == 1) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar42 & 0xfe;
          puVar15 = (undefined1 *)((long)__s_00 + 0x2d);
          uVar17 = uVar21;
          do {
            puVar15[-0x18] = 0xff;
            *puVar15 = 0xff;
            uVar17 = uVar17 - 2;
            puVar15 = puVar15 + 0x30;
          } while (uVar17 != 0);
          if (uVar21 == (uVar42 & 0xff)) goto LAB_0119694c;
        }
        lVar36 = uVar38 - uVar21;
        puVar15 = (undefined1 *)((long)__s_00 + uVar21 * 0x18 + 0x15);
        do {
          lVar36 = lVar36 + -1;
          *puVar15 = 0xff;
          puVar15 = puVar15 + 0x18;
        } while (lVar36 != 0);
      }
LAB_0119694c:
      if (bVar6 != 0) {
        lVar36 = 0;
        uVar17 = 0;
        lVar34 = -uVar39;
        do {
          if (bVar5 != 0) {
            uVar21 = 0;
            do {
              lVar20 = *(long *)(param_2 + 0x28);
              bVar6 = *(byte *)(lVar20 + lVar36 + uVar21);
              uVar22 = (ulong)bVar6;
              if (uVar22 != 0xff) {
                piVar32 = (int *)((long)__s_00 + uVar22 * 0x18);
                *piVar32 = *piVar32 + 1;
                lVar26 = *(long *)(param_2 + 0x18);
                lVar3 = lVar26 + lVar36;
                *(undefined1 *)((long)piVar32 + 0x16) = *(undefined1 *)(lVar3 + uVar21);
                if ((uVar17 != 0) &&
                   (*(char *)(lVar3 + uVar21) == *(char *)(lVar26 + lVar34 + lVar36 + uVar21))) {
                  iVar14 = (uint)*(byte *)(*(long *)(param_2 + 0x10) + lVar36 + uVar21) -
                           (uint)*(byte *)(*(long *)(param_2 + 0x10) + lVar34 + lVar36 + uVar21);
                  iVar13 = -iVar14;
                  if (-1 < iVar14) {
                    iVar13 = iVar14;
                  }
                  if (iVar13 <= param_3) {
                    bVar19 = *(byte *)(lVar20 + lVar34 + lVar36 + uVar21);
                    uVar23 = (ulong)bVar19;
                    if ((uVar23 != 0xff) && (bVar19 != bVar6)) {
                      pbVar27 = (byte *)((long)__s_00 + uVar22 * 0x18 + 0x14);
                      uVar29 = (ulong)*pbVar27;
                      if ((uVar29 == 0) ||
                         (*(byte *)((long)__s_00 + uVar29 + uVar22 * 0x18 + 3) != bVar19)) {
                        *(byte *)((long)__s_00 + uVar29 + uVar22 * 0x18 + 4) = bVar19;
                        *pbVar27 = *pbVar27 + 1;
                      }
                      pbVar27 = (byte *)((long)__s_00 + uVar23 * 0x18 + 0x14);
                      uVar22 = (ulong)*pbVar27;
                      if ((uVar22 == 0) ||
                         (*(byte *)((long)__s_00 + uVar22 + uVar23 * 0x18 + 3) != bVar6)) {
                        *(byte *)((long)__s_00 + uVar22 + uVar23 * 0x18 + 4) = bVar6;
                        *pbVar27 = *pbVar27 + 1;
                      }
                    }
                  }
                }
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 != uVar39);
          }
          uVar17 = uVar17 + 1;
          lVar36 = lVar36 + uVar39;
        } while (uVar17 != uVar35);
      }
      if ((uVar42 & 0xff) == 0) {
LAB_01196d68:
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
      }
      else {
        uVar17 = uVar42 & 0xff;
        if ((uVar41 & 0xff) == 1) {
          uVar22 = 0;
          iVar13 = 0;
LAB_01196aec:
          lVar36 = uVar38 - uVar22;
          puVar15 = (undefined1 *)((long)__s_00 + uVar22 * 0x18 + 0x15);
          do {
            *puVar15 = (char)iVar13;
            lVar36 = lVar36 + -1;
            iVar13 = iVar13 + 1;
            puVar15 = puVar15 + 0x18;
          } while (lVar36 != 0);
        }
        else {
          uVar22 = uVar42 & 0xfe;
          uVar21 = 0;
          iVar13 = (int)uVar22;
          pbVar27 = (byte *)((long)__s_00 + 0x2d);
          do {
            bVar5 = (byte)uVar21;
            pbVar27[-0x18] = bVar5;
            uVar21 = uVar21 + 2;
            *pbVar27 = bVar5 | 1;
            pbVar27 = pbVar27 + 0x30;
          } while (uVar22 != uVar21);
          if (uVar22 != uVar17) goto LAB_01196aec;
        }
        if ((uVar42 & 0xff) == 0) goto LAB_01196d68;
        uVar22 = uVar42 & 0xfe;
        uVar21 = 0;
        do {
          uVar23 = (ulong)*(byte *)((long)__s_00 + uVar21 * 0x18 + 0x14);
          if (uVar23 != 0) {
            cVar7 = *(char *)((long)__s_00 + uVar21 * 0x18 + 0x15);
            uVar29 = 0;
            iVar13 = 0;
            uVar31 = 0xffffffff;
            do {
              bVar5 = *(byte *)((long)__s_00 + uVar29 + uVar21 * 0x18 + 4);
              uVar11 = (ulong)bVar5;
              cVar8 = *(char *)((long)__s_00 + uVar11 * 0x18 + 0x15);
              iVar14 = iVar13;
              uVar30 = uVar31;
              if (((cVar7 != cVar8) &&
                  (*(char *)((long)__s_00 + uVar21 * 0x18 + 0x16) ==
                   *(char *)((long)__s_00 + uVar11 * 0x18 + 0x16))) &&
                 (iVar4 = *(int *)((long)__s_00 + uVar11 * 0x18), iVar13 < iVar4)) {
                uVar11 = 0;
                iVar33 = 0;
                pbVar27 = (byte *)((long)__s_00 + 5);
                lVar36 = (long)__s_00 + 4;
                do {
                  if (*(char *)((long)__s_00 + uVar11 * 0x18 + 0x15) == cVar7) {
                    bVar6 = *(byte *)((long)__s_00 + uVar11 * 0x18 + 0x14);
                    uVar43 = (ulong)bVar6;
                    if (uVar43 != 0) {
                      if (bVar6 == 1) {
                        uVar28 = 0;
                      }
                      else {
                        uVar28 = uVar43 & 0xfe;
                        iVar14 = 0;
                        uVar24 = uVar28;
                        pbVar25 = pbVar27;
                        do {
                          if (*(char *)((long)__s_00 + (ulong)pbVar25[-1] * 0x18 + 0x15) == cVar8) {
                            iVar33 = iVar33 + 1;
                          }
                          if (*(char *)((long)__s_00 + (ulong)*pbVar25 * 0x18 + 0x15) == cVar8) {
                            iVar14 = iVar14 + 1;
                          }
                          uVar24 = uVar24 - 2;
                          pbVar25 = pbVar25 + 2;
                        } while (uVar24 != 0);
                        iVar33 = iVar14 + iVar33;
                        if (uVar28 == uVar43) goto LAB_01196bf8;
                      }
                      lVar34 = uVar43 - uVar28;
                      pbVar25 = (byte *)(lVar36 + uVar28);
                      do {
                        if (*(char *)((long)__s_00 + (ulong)*pbVar25 * 0x18 + 0x15) == cVar8) {
                          iVar33 = iVar33 + 1;
                        }
                        lVar34 = lVar34 + -1;
                        pbVar25 = pbVar25 + 1;
                      } while (lVar34 != 0);
                    }
                  }
LAB_01196bf8:
                  uVar11 = uVar11 + 1;
                  pbVar27 = pbVar27 + 0x18;
                  lVar36 = lVar36 + 0x18;
                } while (uVar11 != uVar38);
                iVar14 = iVar4;
                uVar30 = (uint)bVar5;
                if (iVar33 != 1) {
                  iVar14 = iVar13;
                  uVar30 = uVar31;
                }
              }
              iVar13 = iVar14;
              uVar29 = uVar29 + 1;
              uVar31 = uVar30;
            } while (uVar29 < uVar23);
            if (uVar30 != 0xffffffff) {
              cVar7 = *(char *)((long)__s_00 + uVar21 * 0x18 + 0x15);
              cVar8 = *(char *)((long)__s_00 + (long)(int)uVar30 * 0x18 + 0x15);
              uVar23 = uVar22;
              pcVar16 = (char *)((long)__s_00 + 0x2d);
              if ((uVar41 & 0xff) < 2) {
                uVar23 = 0;
              }
              else {
                do {
                  if (pcVar16[-0x18] == cVar7) {
                    pcVar16[-0x18] = cVar8;
                  }
                  if (*pcVar16 == cVar7) {
                    *pcVar16 = cVar8;
                  }
                  uVar23 = uVar23 - 2;
                  pcVar16 = pcVar16 + 0x30;
                } while (uVar23 != 0);
                uVar23 = uVar22;
                if (uVar22 == uVar17) goto LAB_01196b50;
              }
              pcVar16 = (char *)((long)__s_00 + uVar23 * 0x18 + 0x15);
              lVar36 = uVar38 - uVar23;
              do {
                if (*pcVar16 == cVar7) {
                  *pcVar16 = cVar8;
                }
                lVar36 = lVar36 + -1;
                pcVar16 = pcVar16 + 0x18;
              } while (lVar36 != 0);
            }
          }
LAB_01196b50:
          uVar21 = uVar21 + 1;
        } while (uVar21 != (uVar42 & 0xff));
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        if ((uVar42 & 0xff) != 0) {
          if ((uVar41 & 0xff) == 1) {
            uVar22 = 0;
          }
          else {
            uVar22 = uVar42 & 0xfe;
            pbVar27 = (byte *)((long)__s_00 + 0x2d);
            uVar21 = uVar22;
            do {
              bVar5 = *pbVar27;
              uVar21 = uVar21 - 2;
              *(undefined1 *)((long)&uStack_270 + (ulong)pbVar27[-0x18]) = 1;
              *(undefined1 *)((long)&uStack_270 + (ulong)bVar5) = 1;
              pbVar27 = pbVar27 + 0x30;
            } while (uVar21 != 0);
            if (uVar22 == uVar17) goto LAB_01196e30;
          }
          lVar36 = uVar38 - uVar22;
          pbVar27 = (byte *)((long)__s_00 + uVar22 * 0x18 + 0x15);
          do {
            lVar36 = lVar36 + -1;
            *(undefined1 *)((long)&uStack_270 + (ulong)*pbVar27) = 1;
            pbVar27 = pbVar27 + 0x18;
          } while (lVar36 != 0);
        }
      }
LAB_01196e30:
      lVar36 = 0;
      dVar10 = (dtTileCacheLayer)0x0;
      cVar7 = (char)uStack_270;
      while( true ) {
        dVar12 = dVar10;
        if (cVar7 != '\0') {
          dVar12 = (dtTileCacheLayer)((char)dVar10 + '\x01');
          *(dtTileCacheLayer *)((long)&uStack_270 + lVar36) = dVar10;
        }
        if (lVar36 + 1 == 0x100) break;
        cVar7 = *(char *)((long)&uStack_270 + lVar36 + 1);
        lVar36 = lVar36 + 1;
        dVar10 = dVar12;
      }
      if ((uVar42 & 0xff) != 0) {
        if ((uVar41 & 0xff) == 1) {
          uVar42 = 0;
        }
        else {
          uVar42 = uVar42 & 0xfe;
          pbVar27 = (byte *)((long)__s_00 + 0x2d);
          uVar17 = uVar42;
          do {
            uVar17 = uVar17 - 2;
            bVar5 = *(byte *)((long)&uStack_270 + (ulong)*pbVar27);
            pbVar27[-0x18] = *(byte *)((long)&uStack_270 + (ulong)pbVar27[-0x18]);
            *pbVar27 = bVar5;
            pbVar27 = pbVar27 + 0x30;
          } while (uVar17 != 0);
          if (uVar42 == uVar38) goto LAB_01196ee4;
        }
        lVar36 = uVar38 - uVar42;
        pbVar27 = (byte *)((long)__s_00 + uVar42 * 0x18 + 0x15);
        do {
          lVar36 = lVar36 + -1;
          *pbVar27 = *(byte *)((long)&uStack_270 + (ulong)*pbVar27);
          pbVar27 = pbVar27 + 0x18;
        } while (lVar36 != 0);
      }
LAB_01196ee4:
      param_2[8] = dVar12;
      if ((int)(uVar35 * uVar39) != 0) {
        lVar36 = 0;
        do {
          uVar42 = (ulong)*(byte *)(*(long *)(param_2 + 0x28) + lVar36);
          if (uVar42 != 0xff) {
            *(undefined1 *)(*(long *)(param_2 + 0x28) + lVar36) =
                 *(undefined1 *)((long)__s_00 + uVar42 * 0x18 + 0x15);
          }
          lVar36 = lVar36 + 1;
        } while (uVar35 * uVar39 - lVar36 != 0);
      }
      uVar37 = 0x40000000;
      if (param_1 == (dtTileCacheAlloc *)0x0) goto LAB_01196f60;
    }
    (**(code **)(*(long *)param_1 + 0x20))(param_1,__s_00);
  }
LAB_01196f4c:
  (**(code **)(*(long *)param_1 + 0x20))(param_1,__s);
LAB_01196f60:
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar37;
}

