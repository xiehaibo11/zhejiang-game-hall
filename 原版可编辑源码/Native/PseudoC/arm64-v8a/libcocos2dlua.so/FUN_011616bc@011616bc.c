
void FUN_011616bc(uint param_1,undefined8 param_2,int param_3,int param_4,int param_5,long param_6)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar1 = (long)param_3;
  param_5 = param_5 + param_4;
  pcVar2 = (char *)(param_6 + (long)param_4 * (long)param_3);
  if (param_4 == 0) {
    if (1 < (int)param_1) {
      cVar4 = *pcVar2;
      uVar7 = (ulong)(param_1 - 1);
      pcVar6 = pcVar2;
      do {
        pcVar6 = pcVar6 + 1;
        uVar7 = uVar7 - 1;
        cVar4 = *pcVar6 + cVar4;
        *pcVar6 = cVar4;
      } while (uVar7 != 0);
    }
    pcVar6 = pcVar2 + lVar1;
    param_4 = 1;
    pcVar3 = pcVar2;
    if (param_5 < 2) {
      return;
    }
  }
  else {
    pcVar3 = pcVar2 + -(long)param_3;
    pcVar6 = pcVar2;
    if (param_5 <= param_4) {
      return;
    }
  }
  if (0 < (int)param_1) {
    uVar7 = (ulong)param_1;
    lVar5 = 0;
    uVar8 = uVar7 - (param_1 & 0xf);
    pcVar9 = pcVar6;
    pcVar2 = pcVar3;
    do {
      uVar11 = 0;
      if ((param_1 < 0x10) || (uVar8 == 0)) {
LAB_01161768:
        do {
          pcVar9[uVar11] = pcVar2[uVar11] + pcVar9[uVar11];
          uVar11 = uVar11 + 1;
        } while (uVar7 != uVar11);
      }
      else {
        lVar10 = lVar5 * lVar1;
        if ((pcVar6 + lVar10 < pcVar3 + lVar10 + uVar7) &&
           (pcVar3 + lVar10 < pcVar6 + lVar10 + uVar7)) {
          uVar11 = 0;
          goto LAB_01161768;
        }
        uVar11 = 0;
        do {
          uVar13 = *(undefined8 *)(pcVar9 + uVar11 + 8);
          uVar12 = *(undefined8 *)(pcVar9 + uVar11);
          uVar15 = *(undefined8 *)(pcVar2 + uVar11 + 8);
          uVar14 = *(undefined8 *)(pcVar2 + uVar11);
          *(ulong *)(pcVar9 + uVar11 + 8) =
               CONCAT17((char)((ulong)uVar15 >> 0x38) + (char)((ulong)uVar13 >> 0x38),
                        CONCAT16((char)((ulong)uVar15 >> 0x30) + (char)((ulong)uVar13 >> 0x30),
                                 CONCAT15((char)((ulong)uVar15 >> 0x28) +
                                          (char)((ulong)uVar13 >> 0x28),
                                          CONCAT14((char)((ulong)uVar15 >> 0x20) +
                                                   (char)((ulong)uVar13 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar15 >> 0x18) +
                                                            (char)((ulong)uVar13 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar15 >> 0x10) +
                                                                     (char)((ulong)uVar13 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar15
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar13
                                                                                    >> 8),
                                                                              (char)uVar15 +
                                                                              (char)uVar13)))))));
          *(ulong *)(pcVar9 + uVar11) =
               CONCAT17((char)((ulong)uVar14 >> 0x38) + (char)((ulong)uVar12 >> 0x38),
                        CONCAT16((char)((ulong)uVar14 >> 0x30) + (char)((ulong)uVar12 >> 0x30),
                                 CONCAT15((char)((ulong)uVar14 >> 0x28) +
                                          (char)((ulong)uVar12 >> 0x28),
                                          CONCAT14((char)((ulong)uVar14 >> 0x20) +
                                                   (char)((ulong)uVar12 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar14 >> 0x18) +
                                                            (char)((ulong)uVar12 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar14 >> 0x10) +
                                                                     (char)((ulong)uVar12 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar14
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar12
                                                                                    >> 8),
                                                                              (char)uVar14 +
                                                                              (char)uVar12)))))));
          uVar11 = uVar11 + 0x10;
        } while (uVar8 != uVar11);
        uVar11 = uVar8;
        if ((param_1 & 0xf) != 0) goto LAB_01161768;
      }
      param_4 = param_4 + 1;
      pcVar2 = pcVar2 + lVar1;
      pcVar9 = pcVar9 + lVar1;
      lVar5 = lVar5 + 1;
    } while (param_4 < param_5);
  }
  return;
}

