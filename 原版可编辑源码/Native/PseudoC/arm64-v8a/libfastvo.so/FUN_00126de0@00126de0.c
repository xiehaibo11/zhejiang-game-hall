
void FUN_00126de0(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  bool bVar13;
  undefined2 uVar14;
  void *pvVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  code *pcVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  void *pvVar34;
  int iVar35;
  uint uVar36;
  ulong uVar37;
  uint uVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  
  uVar36 = *(uint *)(param_1 + 0xc);
  uVar22 = *(uint *)(param_1 + 8);
  lVar27 = (long)*(int *)(param_1 + 0x10);
  uVar32 = *(uint *)(&DAT_0014b908 + lVar27 * 0x18);
  uVar30 = *(uint *)(&DAT_0014b90c + lVar27 * 0x18);
  uVar4 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x30) = uVar30;
  *(uint *)(param_1 + 0x18) = uVar32;
  if (uVar36 < uVar22) {
    fVar39 = *(float *)(&DAT_0014b910 + lVar27 * 0x18);
    uVar38 = 0;
    if (uVar36 != 0) {
      uVar38 = (uVar22 * uVar32) / uVar36;
    }
    uVar32 = uVar38 & 0xfffffffc;
    bVar13 = uVar36 << 1 < uVar22;
    uVar30 = ((uVar30 >> bVar13) >> (uVar36 << 2 < uVar22)) >> (uVar36 << 3 < uVar22);
    *(uint *)(param_1 + 0x18) = uVar32;
    *(float *)(param_1 + 0x2c) = (fVar39 * (float)uVar36) / (float)uVar22;
    if (((bVar13) || (uVar36 << 2 < uVar22)) || (uVar36 << 3 < uVar22)) {
      *(uint *)(param_1 + 0x30) = uVar30;
    }
    bVar13 = uVar36 << 4 < uVar22;
    uVar22 = uVar30 >> bVar13;
    if ((bVar13) || (uVar22 == 0)) {
      if (uVar22 == 0) {
        uVar22 = 1;
      }
      *(uint *)(param_1 + 0x30) = uVar22;
      uVar30 = uVar22;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(&DAT_0014b914 + lVar27 * 0x18);
  }
  pvVar15 = *(void **)(param_1 + 0x60);
  if (uVar30 < uVar36) {
    if (pvVar15 == (void *)0x0) {
      iVar35 = uVar32 * uVar30;
      pvVar15 = calloc((long)(iVar35 * 2 + 0x10),1);
      *(void **)(param_1 + 0x60) = pvVar15;
    }
    else {
      iVar35 = uVar32 * uVar30;
      if (*(uint *)(param_1 + 0x68) < iVar35 + 8U) {
        pvVar15 = realloc(pvVar15,(long)(int)((iVar35 + 8U) * 2));
        uVar32 = *(uint *)(param_1 + 0x18);
        uVar30 = *(uint *)(param_1 + 0x30);
        *(void **)(param_1 + 0x60) = pvVar15;
        iVar35 = uVar30 * uVar32;
        *(int *)(param_1 + 0x68) = iVar35 + 8;
      }
    }
    if (-4 < iVar35 + 4) {
      lVar27 = 0;
      do {
        uVar14 = FUN_0012896c(*(undefined4 *)(param_1 + 0x2c),
                              (float)((int)lVar27 + -4) / (float)uVar30 - (float)(uVar32 >> 1),
                              uVar32,(&PTR_PTR_0014b918)[(long)*(int *)(param_1 + 0x10) * 3]);
        *(undefined2 *)(*(long *)(param_1 + 0x60) + lVar27 * 2) = uVar14;
        uVar30 = *(uint *)(param_1 + 0x30);
        uVar32 = *(uint *)(param_1 + 0x18);
        lVar24 = lVar27 + -3;
        lVar27 = lVar27 + 1;
      } while (lVar24 < (int)(uVar32 * uVar30 + 4));
    }
    uVar36 = *(uint *)(param_1 + 0xc);
    pcVar25 = FUN_00128d80;
  }
  else {
    if (pvVar15 == (void *)0x0) {
      pvVar15 = calloc((long)(int)(uVar36 * uVar32 * 2),1);
      *(void **)(param_1 + 0x60) = pvVar15;
    }
    else if (*(uint *)(param_1 + 0x68) < uVar32 * uVar36) {
      pvVar15 = realloc(pvVar15,(long)(int)(uVar32 * uVar36 * 2));
      uVar32 = *(uint *)(param_1 + 0x18);
      uVar36 = *(uint *)(param_1 + 0xc);
      *(void **)(param_1 + 0x60) = pvVar15;
      *(uint *)(param_1 + 0x68) = uVar36 * uVar32;
    }
    if (uVar36 != 0) {
      uVar30 = 0;
      uVar22 = uVar32;
      do {
        if (uVar22 != 0) {
          uVar32 = uVar22;
          uVar38 = 0;
          do {
            uVar22 = uVar32;
            if ((int)uVar32 < 0) {
              uVar22 = uVar32 + 1;
            }
            uVar21 = uVar38 + 1;
            uVar14 = FUN_0012896c(*(undefined4 *)(param_1 + 0x2c),
                                  (float)(int)((uVar38 - ((int)uVar22 >> 1)) + 1) -
                                  (float)uVar30 / (float)uVar36,uVar32,
                                  (&PTR_PTR_0014b918)[(long)*(int *)(param_1 + 0x10) * 3]);
            uVar32 = *(uint *)(param_1 + 0x18);
            *(undefined2 *)(*(long *)(param_1 + 0x60) + (ulong)(uVar38 + uVar30 * uVar32) * 2) =
                 uVar14;
            uVar36 = *(uint *)(param_1 + 0xc);
            uVar38 = uVar21;
            uVar22 = uVar32;
          } while (uVar21 < uVar32);
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 < uVar36);
    }
    pcVar25 = FUN_00128c7c;
  }
  *(code **)(param_1 + 0x70) = pcVar25;
  pvVar15 = *(void **)(param_1 + 0x58);
  uVar30 = 0;
  if (uVar36 != 0) {
    uVar30 = *(uint *)(param_1 + 8) / uVar36;
  }
  *(uint *)(param_1 + 0x24) = uVar30;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 8) - uVar30 * uVar36;
  if (pvVar15 == (void *)0x0) {
    iVar35 = uVar32 + *(int *)(param_1 + 0x20) + -1;
    uVar32 = *(int *)(param_1 + 0x14) * iVar35;
    *(int *)(param_1 + 0x1c) = iVar35;
    pvVar15 = calloc((long)(int)(uVar32 * 2),1);
    *(void **)(param_1 + 0x58) = pvVar15;
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0) {
      if (uVar32 <= uVar4) {
        if (uVar4 <= uVar32) {
          return;
        }
        if (*(int *)(param_1 + 0x14) == 0) {
          return;
        }
        lVar27 = *(long *)(param_1 + 0x50);
        uVar16 = 0;
        do {
          iVar35 = *(int *)(lVar27 + uVar16 * 4);
          uVar32 = uVar4 - uVar32 >> 1;
          *(uint *)(lVar27 + uVar16 * 4) = uVar32;
          iVar35 = uVar32 + iVar35;
          iVar26 = iVar35 + -1;
          if (iVar26 + *(int *)(param_1 + 0x18) != 0) {
            iVar8 = *(int *)(param_1 + 0x1c);
            uVar36 = iVar26 + *(int *)(param_1 + 0x18);
            uVar31 = (ulong)uVar36;
            uVar19 = uVar31;
            if (uVar36 < 2) {
              uVar19 = 1;
            }
            iVar26 = (int)uVar16;
            if (uVar19 < 0x10) {
LAB_00127204:
              uVar23 = 0;
            }
            else {
              uVar37 = uVar31;
              if (uVar31 < 2) {
                uVar37 = 1;
              }
              uVar36 = iVar8 * iVar26;
              uVar30 = (uint)(uVar37 - 1);
              uVar23 = 0;
              if (((!CARRY4(uVar36,uVar30)) && (uVar37 - 1 >> 0x20 == 0)) &&
                 (!CARRY4(uVar32 + uVar36,uVar30))) {
                uVar37 = uVar31;
                if (uVar31 < 2) {
                  uVar37 = 1;
                }
                if (((void *)((long)pvVar15 + (ulong)uVar36 * 2) <
                     (void *)((long)pvVar15 + (uVar37 + (uVar32 + uVar36)) * 2)) &&
                   ((void *)((long)pvVar15 + (ulong)(uVar32 + uVar36) * 2) <
                    (void *)((long)pvVar15 + (uVar37 + uVar36) * 2))) goto LAB_00127204;
                uVar23 = uVar19 & 0xfffffff0;
                uVar36 = iVar8 * iVar26;
                uVar37 = uVar23;
                do {
                  puVar2 = (undefined8 *)((long)pvVar15 + (ulong)(uVar32 + uVar36) * 2);
                  uVar40 = *puVar2;
                  uVar42 = puVar2[3];
                  uVar41 = puVar2[2];
                  puVar3 = (undefined8 *)((long)pvVar15 + (ulong)uVar36 * 2);
                  uVar37 = uVar37 - 0x10;
                  uVar36 = uVar36 + 0x10;
                  puVar3[1] = puVar2[1];
                  *puVar3 = uVar40;
                  puVar3[3] = uVar42;
                  puVar3[2] = uVar41;
                } while (uVar37 != 0);
                if (uVar19 == uVar23) goto LAB_0012722c;
              }
            }
            do {
              iVar29 = (int)uVar23;
              uVar23 = uVar23 + 1;
              *(undefined2 *)((long)pvVar15 + (ulong)(uint)(iVar8 * iVar26 + iVar29) * 2) =
                   *(undefined2 *)((long)pvVar15 + (ulong)(uVar32 + iVar8 * iVar26 + iVar29) * 2);
            } while (uVar23 < uVar31);
          }
LAB_0012722c:
          *(int *)(lVar27 + uVar16 * 4) = iVar35;
          uVar16 = uVar16 + 1;
          if (*(uint *)(param_1 + 0x14) <= uVar16) {
            return;
          }
          uVar32 = *(uint *)(param_1 + 0x18);
        } while( true );
      }
      uVar36 = *(uint *)(param_1 + 0x1c);
      uVar32 = (uVar32 + *(int *)(param_1 + 0x20)) - 1;
      if (uVar36 < uVar32) {
        *(uint *)(param_1 + 0x1c) = uVar32;
        pvVar15 = realloc(pvVar15,(long)(int)(uVar32 * *(int *)(param_1 + 0x14) * 2));
        *(void **)(param_1 + 0x58) = pvVar15;
      }
      iVar35 = *(int *)(param_1 + 0x14) + -1;
      if (iVar35 < 0) {
        return;
      }
      lVar27 = *(long *)(param_1 + 0x50);
      lVar24 = (long)iVar35;
      iVar35 = uVar36 * iVar35;
      iVar8 = uVar4 + iVar35 + -2;
      iVar26 = 0;
      iVar29 = uVar4 - 2;
      iVar9 = uVar4 - 1;
      iVar10 = 1 - uVar4;
      iVar11 = iVar8;
      do {
        uVar32 = *(uint *)(lVar27 + lVar24 * 4);
        uVar16 = (ulong)uVar32;
        iVar6 = uVar32 * 2;
        iVar28 = (int)lVar24;
        if (-1 < (int)(iVar29 + uVar32)) {
          iVar18 = iVar10 - uVar32;
          iVar5 = *(int *)(param_1 + 0x1c);
          if (iVar18 < 0) {
            iVar18 = -1;
          }
          uVar30 = iVar9 + uVar32 + iVar18;
          uVar19 = (ulong)uVar30 + 1;
          uVar31 = (ulong)(iVar29 + uVar32);
          if (0xf < uVar19) {
            iVar18 = iVar10 - uVar32;
            if (iVar18 < 0) {
              iVar18 = -1;
            }
            uVar22 = iVar9 + uVar32 + iVar18;
            uVar38 = iVar29 + iVar5 * iVar28 + iVar6;
            if (uVar22 <= uVar38) {
              iVar7 = iVar8 + iVar26 * -uVar36;
              iVar18 = uVar32 + iVar7;
              if ((((int)(iVar18 - uVar22) <= iVar18) &&
                  (pvVar1 = (void *)((long)pvVar15 + (ulong)uVar38 * 2),
                  pvVar34 = (void *)((ulong)uVar22 * 2),
                  pvVar34 < pvVar1 || (long)pvVar34 - (long)pvVar1 == 0)) &&
                 (pvVar1 = (void *)((long)pvVar15 + (long)iVar18 * 2),
                 pvVar34 < pvVar1 || (long)pvVar34 - (long)pvVar1 == 0)) {
                iVar18 = iVar10 - uVar32;
                uVar37 = (ulong)(uint)(iVar29 + iVar5 * iVar28 + iVar6);
                if (iVar18 < 0) {
                  iVar18 = -1;
                }
                uVar23 = (ulong)(iVar9 + uVar32 + iVar18);
                iVar7 = uVar32 + iVar7;
                if (((void *)((long)pvVar15 + (long)iVar7 * 2 + 2) <=
                     (void *)((long)pvVar15 + (uVar37 - uVar23) * 2)) ||
                   ((void *)((long)pvVar15 + uVar37 * 2 + 2) <=
                    (void *)((long)pvVar15 + ((long)iVar7 - uVar23) * 2))) {
                  uVar22 = uVar30 + 1 & 0xf;
                  iVar18 = uVar32 + iVar11;
                  uVar31 = uVar31 + (uVar22 - uVar19);
                  lVar20 = ((ulong)uVar30 + 1) - (ulong)uVar22;
                  uVar30 = iVar29 + iVar5 * iVar28 + uVar32 * 2;
                  do {
                    lVar12 = (long)iVar18;
                    uVar40 = *(undefined8 *)((long)pvVar15 + (long)iVar18 * 2 + -0xe);
                    uVar42 = *(undefined8 *)((long)pvVar15 + (long)iVar18 * 2 + -0x16);
                    uVar41 = *(undefined8 *)((long)pvVar15 + (long)iVar18 * 2 + -0x1e);
                    iVar18 = iVar18 + -0x10;
                    lVar20 = lVar20 + -0x10;
                    *(undefined8 *)((long)pvVar15 + (ulong)uVar30 * 2 + -6) =
                         *(undefined8 *)((long)pvVar15 + lVar12 * 2 + -6);
                    *(undefined8 *)((long)pvVar15 + (ulong)uVar30 * 2 + -0xe) = uVar40;
                    *(undefined8 *)((long)pvVar15 + (ulong)uVar30 * 2 + -0x16) = uVar42;
                    *(undefined8 *)((long)pvVar15 + (ulong)uVar30 * 2 + -0x1e) = uVar41;
                    uVar30 = uVar30 - 0x10;
                  } while (lVar20 != 0);
                  if (uVar22 == 0) goto LAB_00127484;
                }
              }
            }
          }
          do {
            iVar18 = (int)uVar31;
            uVar31 = (ulong)(iVar18 - 1);
            *(undefined2 *)((long)pvVar15 + (ulong)(uVar32 + iVar5 * iVar28 + iVar18) * 2) =
                 *(undefined2 *)((long)pvVar15 + (long)(iVar35 + iVar18) * 2);
          } while (0 < iVar18);
        }
LAB_00127484:
        uVar30 = iVar6 + uVar4;
        if (uVar32 != 0) {
          iVar18 = *(int *)(param_1 + 0x1c);
          if (uVar32 < 0x10) {
            uVar19 = 0;
          }
          else {
            uVar19 = 0;
            if ((!CARRY4(iVar18 * iVar28,(uint)(uVar16 - 1))) && (uVar16 - 1 >> 0x20 == 0)) {
              uVar19 = uVar16 & 0xfffffff0;
              uVar32 = iVar18 * iVar28;
              uVar31 = uVar19;
              do {
                puVar2 = (undefined8 *)((long)pvVar15 + (ulong)uVar32 * 2);
                uVar31 = uVar31 - 0x10;
                uVar32 = uVar32 + 0x10;
                puVar2[1] = 0;
                *puVar2 = 0;
                puVar2[3] = 0;
                puVar2[2] = 0;
              } while (uVar31 != 0);
              if (uVar19 == uVar16) goto LAB_001274fc;
            }
          }
          uVar32 = (int)uVar19 + iVar18 * iVar28;
          lVar20 = uVar16 - uVar19;
          do {
            *(undefined2 *)((long)pvVar15 + (ulong)uVar32 * 2) = 0;
            lVar20 = lVar20 + -1;
            uVar32 = uVar32 + 1;
          } while (lVar20 != 0);
        }
LAB_001274fc:
        *(undefined4 *)(lVar27 + lVar24 * 4) = 0;
        uVar32 = *(uint *)(param_1 + 0x18);
        if (uVar30 < uVar32) {
          uVar22 = uVar30 - 1;
          if (uVar22 != 0) {
            uVar16 = (ulong)uVar22;
            iVar18 = *(int *)(param_1 + 0x1c) * iVar28;
            if (uVar22 < 0x10) {
LAB_00127528:
              uVar19 = 0;
              uVar38 = 0;
              uVar21 = 0;
            }
            else {
              uVar31 = uVar16 - 1;
              uVar21 = (uVar32 + iVar18) - 2;
              uVar38 = 0;
              uVar19 = 0;
              if (((uVar21 < (uint)uVar31) || (uVar31 >> 0x20 != 0)) ||
                 ((uVar17 = iVar29 + iVar18 + iVar6, uVar17 < (uint)uVar31 ||
                  ((((void *)((long)pvVar15 + (ulong)uVar21 * 2) < (void *)(uVar31 * 2) ||
                    (CARRY8(uVar31,uVar31))) ||
                   ((void *)((long)pvVar15 + (ulong)uVar17 * 2) < (void *)(uVar31 * 2))))))) {
                uVar21 = 0;
              }
              else {
                uVar31 = (ulong)((uVar32 + iVar18) - 2);
                uVar19 = (ulong)(uint)(iVar29 + iVar18 + iVar6);
                if (((long)pvVar15 + (uVar31 - uVar16) * 2 + 2 < (long)pvVar15 + uVar19 * 2 + 2) &&
                   ((long)pvVar15 + (uVar19 - uVar16) * 2 + 2 < (long)pvVar15 + uVar31 * 2 + 2))
                goto LAB_00127528;
                iVar5 = *(int *)(param_1 + 0x1c) * iVar28;
                uVar19 = uVar16 & 0xfffffff0;
                uVar21 = (uint)uVar19;
                uVar38 = -uVar21;
                uVar17 = iVar29 + iVar5 + iVar6;
                uVar31 = uVar19;
                uVar33 = (uVar32 + iVar5) - 2;
                do {
                  uVar37 = (ulong)uVar17;
                  uVar40 = *(undefined8 *)((long)pvVar15 + (ulong)uVar17 * 2 + -0xe);
                  uVar42 = *(undefined8 *)((long)pvVar15 + (ulong)uVar17 * 2 + -0x16);
                  uVar41 = *(undefined8 *)((long)pvVar15 + (ulong)uVar17 * 2 + -0x1e);
                  uVar31 = uVar31 - 0x10;
                  uVar17 = uVar17 - 0x10;
                  *(undefined8 *)((long)pvVar15 + (ulong)uVar33 * 2 + -6) =
                       *(undefined8 *)((long)pvVar15 + uVar37 * 2 + -6);
                  *(undefined8 *)((long)pvVar15 + (ulong)uVar33 * 2 + -0xe) = uVar40;
                  *(undefined8 *)((long)pvVar15 + (ulong)uVar33 * 2 + -0x16) = uVar42;
                  *(undefined8 *)((long)pvVar15 + (ulong)uVar33 * 2 + -0x1e) = uVar41;
                  uVar33 = uVar33 - 0x10;
                } while (uVar31 != 0);
                if (uVar19 == uVar16) goto LAB_00127770;
              }
            }
            lVar20 = uVar16 - uVar19;
            do {
              iVar6 = (uVar30 - 2) + uVar38;
              iVar5 = (uVar32 - 2) + uVar38;
              uVar38 = ~uVar21;
              uVar21 = uVar21 + 1;
              lVar20 = lVar20 + -1;
              *(undefined2 *)((long)pvVar15 + (ulong)(uint)(iVar5 + iVar18) * 2) =
                   *(undefined2 *)((long)pvVar15 + (ulong)(uint)(iVar6 + iVar18) * 2);
            } while (lVar20 != 0);
          }
LAB_00127770:
          if (uVar22 < uVar32 - 1) {
            iVar6 = *(int *)(param_1 + 0x1c);
            uVar16 = (ulong)uVar22;
            uVar19 = (ulong)(uVar32 - 1);
            uVar31 = uVar19 - uVar16;
            if (((0xf < uVar31) &&
                ((uint)(~uVar16 + uVar19) <= (uVar32 + iVar6 * iVar28 + -2) - uVar22)) &&
               (~uVar16 + uVar19 >> 0x20 == 0)) {
              uVar23 = uVar31 & 0xfffffffffffffff0;
              uVar16 = uVar23 + uVar16;
              uVar37 = uVar23;
              uVar22 = (uVar32 + iVar6 * iVar28 + -2) - uVar22;
              do {
                uVar37 = uVar37 - 0x10;
                *(undefined8 *)((long)pvVar15 + (ulong)uVar22 * 2 + -6) = 0;
                *(undefined8 *)((long)pvVar15 + (ulong)uVar22 * 2 + -0xe) = 0;
                *(undefined8 *)((long)pvVar15 + (ulong)uVar22 * 2 + -0x16) = 0;
                *(undefined8 *)((long)pvVar15 + (ulong)uVar22 * 2 + -0x1e) = 0;
                uVar22 = uVar22 - 0x10;
              } while (uVar37 != 0);
              if (uVar31 == uVar23) goto LAB_00127814;
            }
            uVar22 = (uVar32 + iVar6 * iVar28 + -2) - (int)uVar16;
            lVar20 = uVar19 - uVar16;
            do {
              *(undefined2 *)((long)pvVar15 + (ulong)uVar22 * 2) = 0;
              lVar20 = lVar20 + -1;
              uVar22 = uVar22 - 1;
            } while (lVar20 != 0);
          }
LAB_00127814:
          *(uint *)(*(long *)(param_1 + 0x40) + lVar24 * 4) =
               *(int *)(*(long *)(param_1 + 0x40) + lVar24 * 4) + (uVar32 - uVar30 >> 1);
        }
        else {
          uVar32 = uVar30 - uVar32 >> 1;
          *(uint *)(lVar27 + lVar24 * 4) = uVar32;
          if ((uVar32 - 1) + *(int *)(param_1 + 0x18) != 0) {
            iVar6 = *(int *)(param_1 + 0x1c);
            uVar30 = (uVar32 - 1) + *(int *)(param_1 + 0x18);
            uVar19 = (ulong)uVar30;
            uVar16 = uVar19;
            if (uVar30 < 2) {
              uVar16 = 1;
            }
            if (uVar16 < 0x10) {
LAB_00127568:
              uVar37 = 0;
            }
            else {
              uVar31 = uVar19;
              if (uVar19 < 2) {
                uVar31 = 1;
              }
              uVar30 = iVar6 * iVar28;
              uVar22 = (uint)(uVar31 - 1);
              uVar37 = 0;
              if (((!CARRY4(uVar30,uVar22)) && (uVar31 - 1 >> 0x20 == 0)) &&
                 (!CARRY4(uVar32 + uVar30,uVar22))) {
                uVar31 = uVar19;
                if (uVar19 < 2) {
                  uVar31 = 1;
                }
                if (((void *)((long)pvVar15 + (ulong)uVar30 * 2) <
                     (void *)((long)pvVar15 + (uVar31 + (uVar32 + uVar30)) * 2)) &&
                   ((void *)((long)pvVar15 + (ulong)(uVar32 + uVar30) * 2) <
                    (void *)((long)pvVar15 + (uVar31 + uVar30) * 2))) goto LAB_00127568;
                uVar37 = uVar16 & 0xfffffff0;
                uVar30 = iVar6 * iVar28;
                uVar31 = uVar37;
                do {
                  puVar2 = (undefined8 *)((long)pvVar15 + (ulong)(uVar32 + uVar30) * 2);
                  uVar40 = *puVar2;
                  uVar42 = puVar2[3];
                  uVar41 = puVar2[2];
                  puVar3 = (undefined8 *)((long)pvVar15 + (ulong)uVar30 * 2);
                  uVar31 = uVar31 - 0x10;
                  uVar30 = uVar30 + 0x10;
                  puVar3[1] = puVar2[1];
                  *puVar3 = uVar40;
                  puVar3[3] = uVar42;
                  puVar3[2] = uVar41;
                } while (uVar31 != 0);
                if (uVar16 == uVar37) goto LAB_0012782c;
              }
            }
            do {
              iVar18 = (int)uVar37;
              uVar37 = uVar37 + 1;
              *(undefined2 *)((long)pvVar15 + (ulong)(uint)(iVar6 * iVar28 + iVar18) * 2) =
                   *(undefined2 *)((long)pvVar15 + (ulong)(uVar32 + iVar6 * iVar28 + iVar18) * 2);
            } while (uVar37 < uVar19);
          }
        }
LAB_0012782c:
        lVar24 = lVar24 + -1;
        iVar26 = iVar26 + 1;
        iVar11 = iVar11 - uVar36;
        iVar35 = iVar35 - uVar36;
        if ((int)lVar24 < 0) {
          return;
        }
      } while( true );
    }
    iVar35 = uVar32 + *(int *)(param_1 + 0x20) + -1;
    *(int *)(param_1 + 0x1c) = iVar35;
    pvVar15 = realloc(pvVar15,(long)(iVar35 * *(int *)(param_1 + 0x14) * 2));
    *(void **)(param_1 + 0x58) = pvVar15;
    uVar32 = *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x14);
  }
  if (uVar32 != 0) {
    memset(pvVar15,0,(ulong)uVar32 << 1);
  }
  return;
}

