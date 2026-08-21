
void FUN_00de1478(long param_1,char *param_2,size_t param_3)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  void *__dest;
  char *pcVar4;
  char cVar5;
  ulong uVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar1 = *(ushort *)(param_1 + 0x74);
  lVar13 = *(long *)(*(long *)(param_1 + 0x350) + 8);
  __dest = _TIFFmalloc(param_3);
  if (__dest == (void *)0x0) {
    return;
  }
  uVar1 = uVar1 >> 3;
  uVar3 = (ulong)uVar1;
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (long)param_3 / (long)uVar3;
  }
  if (lVar13 < (long)param_3) {
    uVar6 = lVar13 - 4;
    if (uVar6 == 0) {
      cVar5 = *param_2;
      lVar13 = param_3 + 4;
      pcVar4 = param_2 + 7;
      do {
        cVar5 = pcVar4[-3] + cVar5;
        lVar13 = lVar13 + -4;
        pcVar4[-2] = pcVar4[-2] + pcVar4[-6];
        pcVar4[-3] = cVar5;
        pcVar4[-1] = pcVar4[-1] + pcVar4[-5];
        *pcVar4 = *pcVar4 + pcVar4[-4];
        pcVar4 = pcVar4 + 4;
      } while (8 < lVar13);
    }
    else {
      uVar8 = uVar6 & 0xfffffffffffffff0;
      sVar7 = param_3;
      pcVar4 = param_2;
      do {
        switch(lVar13) {
        case 0:
          break;
        default:
          if (4 < lVar13) {
            pcVar10 = pcVar4;
            uVar9 = uVar6;
            if ((uVar6 < 0x10) || (uVar8 == 0)) {
LAB_00de15b8:
              lVar11 = uVar9 + 1;
              do {
                lVar11 = lVar11 + -1;
                pcVar10[lVar13] = pcVar10[lVar13] + *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (1 < lVar11);
            }
            else {
              pcVar10 = pcVar4 + uVar8;
              uVar9 = uVar8;
              pcVar12 = pcVar4;
              do {
                uVar15 = *(undefined8 *)(pcVar12 + 8);
                uVar14 = *(undefined8 *)pcVar12;
                uVar17 = *(undefined8 *)(pcVar12 + lVar13 + 8);
                uVar16 = *(undefined8 *)(pcVar12 + lVar13);
                uVar9 = uVar9 - 0x10;
                *(ulong *)(pcVar12 + lVar13 + 8) =
                     CONCAT17((char)((ulong)uVar17 >> 0x38) + (char)((ulong)uVar15 >> 0x38),
                              CONCAT16((char)((ulong)uVar17 >> 0x30) + (char)((ulong)uVar15 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar17 >> 0x28) +
                                                 (char)((ulong)uVar15 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar17 >> 0x20) +
                                                          (char)((ulong)uVar15 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar17 >> 0x18) +
                                                                   (char)((ulong)uVar15 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar17 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar15 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar17 >> 8) + (char)((ulong)uVar15 >> 8),
                                                  (char)uVar17 + (char)uVar15)))))));
                *(ulong *)(pcVar12 + lVar13) =
                     CONCAT17((char)((ulong)uVar16 >> 0x38) + (char)((ulong)uVar14 >> 0x38),
                              CONCAT16((char)((ulong)uVar16 >> 0x30) + (char)((ulong)uVar14 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar16 >> 0x28) +
                                                 (char)((ulong)uVar14 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar16 >> 0x20) +
                                                          (char)((ulong)uVar14 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar16 >> 0x18) +
                                                                   (char)((ulong)uVar14 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar16 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar14 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar16 >> 8) + (char)((ulong)uVar14 >> 8),
                                                  (char)uVar16 + (char)uVar14)))))));
                pcVar12 = pcVar12 + 0x10;
              } while (uVar9 != 0);
              uVar9 = uVar6 - uVar8;
              if (uVar6 != uVar8) goto LAB_00de15b8;
            }
            pcVar4 = pcVar4 + uVar6;
          }
          pcVar4[lVar13] = pcVar4[lVar13] + *pcVar4;
          pcVar4 = pcVar4 + 1;
        case 3:
          pcVar4[lVar13] = pcVar4[lVar13] + *pcVar4;
          pcVar4 = pcVar4 + 1;
        case 2:
          pcVar4[lVar13] = pcVar4[lVar13] + *pcVar4;
          pcVar4 = pcVar4 + 1;
        case 1:
          pcVar4[lVar13] = pcVar4[lVar13] + *pcVar4;
          pcVar4 = pcVar4 + 1;
        }
        sVar7 = sVar7 - lVar13;
      } while (lVar13 < (long)sVar7);
    }
  }
  _TIFFmemcpy(__dest,param_2,param_3);
  if ((0 < lVar2) && (uVar1 != 0)) {
    lVar13 = 0;
    do {
      uVar6 = 0;
      uVar8 = uVar3 + 0xffffffff;
      do {
        uVar9 = uVar8 & 0xffffffff;
        uVar8 = uVar8 - 1;
        param_2[uVar6] = *(char *)((long)__dest + lVar13 + lVar2 * uVar9);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
      lVar13 = lVar13 + 1;
      param_2 = param_2 + uVar3;
    } while (lVar13 != lVar2);
  }
  _TIFFfree(__dest);
  return;
}

