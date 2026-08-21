
undefined8 CRYPTO_gcm128_aad(long param_1,byte *param_2,ulong param_3)

{
  code *pcVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return 0xfffffffe;
  }
  uVar9 = *(ulong *)(param_1 + 0x30) + param_3;
  if (0x2000000000000000 < uVar9) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x30),param_3)) {
    return 0xffffffff;
  }
  uVar4 = *(uint *)(param_1 + 0x174);
  pcVar1 = *(code **)(param_1 + 0x160);
  pcVar2 = *(code **)(param_1 + 0x168);
  *(ulong *)(param_1 + 0x30) = uVar9;
  if (uVar4 != 0) {
    if (param_3 == 0) {
LAB_00b3487c:
      *(uint *)(param_1 + 0x174) = uVar4;
      return 0;
    }
    pbVar5 = param_2;
    do {
      uVar9 = (ulong)uVar4;
      param_2 = pbVar5 + 1;
      param_3 = param_3 - 1;
      uVar4 = uVar4 + 1 & 0xf;
      *(byte *)(param_1 + 0x40 + uVar9) = *(byte *)(param_1 + 0x40 + uVar9) ^ *pbVar5;
      if (param_3 == 0) break;
      pbVar5 = param_2;
    } while (uVar4 != 0);
    if (uVar4 != 0) goto LAB_00b3487c;
    (*pcVar1)(param_1 + 0x40,param_1 + 0x60);
  }
  uVar9 = param_3 & 0xfffffffffffffff0;
  if (uVar9 != 0) {
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_2,uVar9);
    param_2 = param_2 + uVar9;
    param_3 = param_3 - uVar9;
  }
  if (param_3 == 0) goto LAB_00b34914;
  if (param_3 < 0x20) {
LAB_00b348e8:
    uVar9 = 0;
  }
  else {
    uVar9 = param_3 & 0xffffffffffffffe0;
    if (uVar9 != 0) {
      if (((byte *)(param_1 + 0x40U) < param_2 + param_3) &&
         (param_2 < (byte *)(param_1 + 0x40U) + param_3)) goto LAB_00b348e8;
      pbVar5 = param_2 + 0x10;
      puVar7 = (undefined8 *)(param_1 + 0x50);
      uVar8 = uVar9;
      do {
        uVar11 = *(undefined8 *)(pbVar5 + -8);
        uVar10 = *(undefined8 *)(pbVar5 + -0x10);
        uVar13 = *(undefined8 *)(pbVar5 + 8);
        uVar12 = *(undefined8 *)pbVar5;
        uVar15 = puVar7[-1];
        uVar14 = puVar7[-2];
        uVar17 = puVar7[1];
        uVar16 = *puVar7;
        pbVar5 = pbVar5 + 0x20;
        uVar8 = uVar8 - 0x20;
        puVar7[-1] = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                              CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                 (byte)((ulong)uVar11 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                          (byte)((ulong)uVar11 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                                   (byte)((ulong)uVar11 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar15 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar11 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar15 ^ (byte)uVar11)))))));
        puVar7[-2] = CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)((ulong)uVar10 >> 0x38),
                              CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)((ulong)uVar10 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar14 >> 0x28) ^
                                                 (byte)((ulong)uVar10 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                                          (byte)((ulong)uVar10 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                                   (byte)((ulong)uVar10 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar14 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar10 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar14 >> 8) ^ (byte)((ulong)uVar10 >> 8),
                                                  (byte)uVar14 ^ (byte)uVar10)))))));
        puVar7[1] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                             CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                               (byte)((ulong)uVar13 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                        (byte)((ulong)uVar13 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                 (byte)((ulong)uVar13 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar17 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar13 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar13)))))));
        *puVar7 = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38),
                           CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)uVar12 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                             (byte)((ulong)uVar12 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                      (byte)((ulong)uVar12 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                               (byte)((ulong)uVar12 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar16 >> 0x10
                                                                              ) ^ (byte)((ulong)
                                                  uVar12 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar16 >> 8) ^
                                                           (byte)((ulong)uVar12 >> 8),
                                                           (byte)uVar16 ^ (byte)uVar12)))))));
        puVar7 = puVar7 + 4;
      } while (uVar8 != 0);
      if (param_3 == uVar9) goto LAB_00b34914;
    }
  }
  lVar3 = param_3 - uVar9;
  pbVar5 = param_2 + uVar9;
  pbVar6 = (byte *)(param_1 + uVar9 + 0x40);
  do {
    lVar3 = lVar3 + -1;
    *pbVar6 = *pbVar6 ^ *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  } while (lVar3 != 0);
LAB_00b34914:
  *(int *)(param_1 + 0x174) = (int)param_3;
  return 0;
}

