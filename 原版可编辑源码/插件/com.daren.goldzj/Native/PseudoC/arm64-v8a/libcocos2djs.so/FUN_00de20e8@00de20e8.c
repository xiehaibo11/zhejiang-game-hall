
void FUN_00de20e8(long param_1,void *param_2,size_t param_3)

{
  undefined1 *puVar1;
  ushort uVar2;
  ulong uVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  char *pcVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar2 = *(ushort *)(param_1 + 0x74);
  lVar13 = *(long *)(*(long *)(param_1 + 0x350) + 8);
  __dest = _TIFFmalloc(param_3);
  if (__dest != (void *)0x0) {
    uVar2 = uVar2 >> 3;
    uVar3 = (ulong)uVar2;
    lVar5 = 0;
    if (uVar2 != 0) {
      lVar5 = (long)param_3 / (long)uVar3;
    }
    _TIFFmemcpy(__dest,param_2,param_3);
    if ((0 < lVar5) && (uVar2 != 0)) {
      lVar4 = 0;
      pvVar7 = __dest;
      do {
        uVar8 = 0;
        uVar9 = uVar3 + 0xffffffff;
        do {
          puVar1 = (undefined1 *)((long)pvVar7 + uVar8);
          uVar10 = uVar9 & 0xffffffff;
          uVar8 = uVar8 + 1;
          uVar9 = uVar9 - 1;
          *(undefined1 *)((long)param_2 + lVar4 + lVar5 * uVar10) = *puVar1;
        } while (uVar8 < uVar3);
        lVar4 = lVar4 + 1;
        pvVar7 = (void *)((long)pvVar7 + uVar3);
      } while (lVar4 != lVar5);
    }
    _TIFFfree(__dest);
    if (lVar13 < (long)param_3) {
      uVar3 = lVar13 - 4;
      lVar5 = param_3 - 1;
      if (uVar3 == 0) {
        do {
          pcVar6 = (char *)((long)param_2 + (lVar5 - lVar13));
          lVar4 = lVar5 + 1;
          lVar5 = lVar5 + -4;
          pcVar6[4] = pcVar6[4] - *pcVar6;
          pcVar6[3] = pcVar6[3] - pcVar6[-1];
          pcVar6[2] = pcVar6[2] - pcVar6[-2];
          pcVar6[1] = pcVar6[1] - pcVar6[-3];
        } while (8 < lVar4);
      }
      else if (lVar13 == 3) {
        do {
          pcVar6 = (char *)((long)param_2 + lVar5 + -3);
          lVar13 = lVar5 + 1;
          lVar5 = lVar5 + -3;
          pcVar6[3] = pcVar6[3] - *pcVar6;
          pcVar6[2] = pcVar6[2] - pcVar6[-1];
          pcVar6[1] = pcVar6[1] - pcVar6[-2];
        } while (6 < lVar13);
      }
      else {
        uVar8 = uVar3 & 0xf;
        pcVar6 = (char *)((long)param_2 + (lVar5 - lVar13));
        do {
          if (lVar13 != 0) {
            if (lVar13 != 1) {
              if (lVar13 != 2) {
                if (4 < lVar13) {
                  pcVar11 = pcVar6;
                  uVar9 = uVar3;
                  if ((uVar3 < 0x10) || (uVar3 == uVar8)) {
LAB_00de22e8:
                    lVar5 = uVar9 + 1;
                    do {
                      lVar5 = lVar5 + -1;
                      pcVar11[lVar13] = pcVar11[lVar13] - *pcVar11;
                      pcVar11 = pcVar11 + -1;
                    } while (1 < lVar5);
                  }
                  else {
                    pcVar11 = pcVar6 + (4 - lVar13) + uVar8;
                    pcVar12 = pcVar6 + -0xf;
                    lVar5 = uVar8 + 4;
                    do {
                      uVar15 = *(undefined8 *)(pcVar12 + 8);
                      uVar14 = *(undefined8 *)pcVar12;
                      uVar17 = *(undefined8 *)(pcVar12 + lVar13 + 8);
                      uVar16 = *(undefined8 *)(pcVar12 + lVar13);
                      lVar5 = lVar5 + 0x10;
                      *(ulong *)(pcVar12 + lVar13 + 8) =
                           CONCAT17((char)((ulong)uVar17 >> 0x38) - (char)((ulong)uVar15 >> 0x38),
                                    CONCAT16((char)((ulong)uVar17 >> 0x30) -
                                             (char)((ulong)uVar15 >> 0x30),
                                             CONCAT15((char)((ulong)uVar17 >> 0x28) -
                                                      (char)((ulong)uVar15 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar17 >> 0x20) -
                                                               (char)((ulong)uVar15 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar17 >> 0x18
                                                                              ) - (char)((ulong)
                                                  uVar15 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar17 >> 0x10) -
                                                           (char)((ulong)uVar15 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar17 >> 8) -
                                                                    (char)((ulong)uVar15 >> 8),
                                                                    (char)uVar17 - (char)uVar15)))))
                                            ));
                      *(ulong *)(pcVar12 + lVar13) =
                           CONCAT17((char)((ulong)uVar16 >> 0x38) - (char)((ulong)uVar14 >> 0x38),
                                    CONCAT16((char)((ulong)uVar16 >> 0x30) -
                                             (char)((ulong)uVar14 >> 0x30),
                                             CONCAT15((char)((ulong)uVar16 >> 0x28) -
                                                      (char)((ulong)uVar14 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar16 >> 0x20) -
                                                               (char)((ulong)uVar14 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar16 >> 0x18
                                                                              ) - (char)((ulong)
                                                  uVar14 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar16 >> 0x10) -
                                                           (char)((ulong)uVar14 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar16 >> 8) -
                                                                    (char)((ulong)uVar14 >> 8),
                                                                    (char)uVar16 - (char)uVar14)))))
                                            ));
                      pcVar12 = pcVar12 + -0x10;
                    } while (lVar13 != lVar5);
                    uVar9 = uVar8;
                    if (uVar8 != 0) goto LAB_00de22e8;
                  }
                  pcVar6 = pcVar6 + (4 - lVar13);
                }
                pcVar6[lVar13] = pcVar6[lVar13] - *pcVar6;
                pcVar11 = pcVar6 + -1;
                pcVar11[lVar13] = pcVar11[lVar13] - *pcVar11;
                pcVar6 = pcVar6 + -2;
              }
              pcVar6[lVar13] = pcVar6[lVar13] - *pcVar6;
              pcVar6 = pcVar6 + -1;
            }
            pcVar6[lVar13] = pcVar6[lVar13] - *pcVar6;
            pcVar6 = pcVar6 + -1;
          }
          param_3 = param_3 - lVar13;
        } while (lVar13 < (long)param_3);
      }
    }
  }
  return;
}

