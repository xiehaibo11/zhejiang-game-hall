
void FUN_00e1436c(long param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  short sVar6;
  long lVar7;
  short *psVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_1 == 0) {
    return;
  }
  uVar9 = (ulong)*(short *)(param_1 + 0x60);
  sVar2 = *(short *)(param_1 + 0x1a);
  sVar3 = *(short *)(param_1 + 0x62) + sVar2;
  sVar6 = *(short *)(param_1 + 0x18) + *(short *)(param_1 + 0x60);
  uVar1 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x98);
  *(short *)(param_1 + 0x1a) = sVar3;
  *(short *)(param_1 + 0x18) = sVar6;
  *(uint *)(param_1 + 0x50) = uVar1;
  if ((long)uVar9 < 1) goto LAB_00e14418;
  lVar7 = *(long *)(param_1 + 0x78);
  uVar4 = uVar9 & 0xffffffff;
  if (uVar4 < 0x10) {
    lVar10 = 0;
LAB_00e143f4:
    lVar5 = uVar4 - lVar10;
    psVar8 = (short *)(lVar7 + lVar10 * 2);
    do {
      lVar5 = lVar5 + -1;
      *psVar8 = *psVar8 + sVar2;
      psVar8 = psVar8 + 1;
    } while (lVar5 != 0);
  }
  else {
    lVar10 = uVar4 - (uVar9 & 0xf);
    puVar11 = (undefined8 *)(lVar7 + 0x10);
    lVar5 = lVar10;
    do {
      uVar13 = puVar11[-1];
      uVar12 = puVar11[-2];
      uVar15 = puVar11[1];
      uVar14 = *puVar11;
      lVar5 = lVar5 + -0x10;
      puVar11[-1] = CONCAT26((short)((ulong)uVar13 >> 0x30) + sVar2,
                             CONCAT24((short)((ulong)uVar13 >> 0x20) + sVar2,
                                      CONCAT22((short)((ulong)uVar13 >> 0x10) + sVar2,
                                               (short)uVar13 + sVar2)));
      puVar11[-2] = CONCAT26((short)((ulong)uVar12 >> 0x30) + sVar2,
                             CONCAT24((short)((ulong)uVar12 >> 0x20) + sVar2,
                                      CONCAT22((short)((ulong)uVar12 >> 0x10) + sVar2,
                                               (short)uVar12 + sVar2)));
      puVar11[1] = CONCAT26((short)((ulong)uVar15 >> 0x30) + sVar2,
                            CONCAT24((short)((ulong)uVar15 >> 0x20) + sVar2,
                                     CONCAT22((short)((ulong)uVar15 >> 0x10) + sVar2,
                                              (short)uVar15 + sVar2)));
      *puVar11 = CONCAT26((short)((ulong)uVar14 >> 0x30) + sVar2,
                          CONCAT24((short)((ulong)uVar14 >> 0x20) + sVar2,
                                   CONCAT22((short)((ulong)uVar14 >> 0x10) + sVar2,
                                            (short)uVar14 + sVar2)));
      puVar11 = puVar11 + 4;
    } while (lVar5 != 0);
    if ((uVar9 & 0xf) != 0) goto LAB_00e143f4;
  }
  sVar3 = *(short *)(param_1 + 0x1a);
  sVar6 = *(short *)(param_1 + 0x18);
LAB_00e14418:
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x20) + (long)sVar3 * 0x10;
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x28) + (long)sVar3;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x30) + (long)sVar6 * 2;
  if (*(char *)(param_1 + 0x14) != '\0') {
    lVar7 = (long)sVar3 * 0x10;
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x40) + lVar7;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x48) + lVar7;
  }
  *(ulong *)(param_1 + 0xa0) = *(long *)(param_1 + 0x58) + (ulong)uVar1 * 0x30;
  return;
}

