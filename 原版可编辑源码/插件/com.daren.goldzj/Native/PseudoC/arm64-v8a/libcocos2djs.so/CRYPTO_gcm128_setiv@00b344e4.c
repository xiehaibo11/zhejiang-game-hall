
void CRYPTO_gcm128_setiv(byte *param_1,byte *param_2,ulong param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined8 uVar8;
  long lVar9;
  byte bVar10;
  ulong uVar11;
  byte bVar12;
  byte *pbVar13;
  byte bVar14;
  byte *pbVar15;
  byte bVar16;
  ulong uVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  uint uVar24;
  code *pcVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  pcVar25 = *(code **)(param_1 + 0x160);
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  if (param_3 == 0xc) {
    uVar24 = 2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar8 = *(undefined8 *)param_2;
    param_1[0xf] = 1;
    *(undefined8 *)param_1 = uVar8;
    goto LAB_00b34768;
  }
  uVar11 = param_3 - 0x10;
  uVar26 = param_3;
  if (0xf < param_3) {
    bVar7 = 0;
    bVar10 = 0;
    bVar12 = 0;
    bVar14 = 0;
    bVar16 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar2 = 0;
    bVar3 = 0;
    bVar4 = 0;
    bVar5 = 0;
    bVar6 = 0;
    pbVar13 = param_2 + (uVar11 & 0xfffffffffffffff0) + 0x10;
    uVar26 = uVar11;
    while( true ) {
      *param_1 = bVar6 ^ *param_2;
      param_1[1] = bVar5 ^ param_2[1];
      param_1[2] = bVar4 ^ param_2[2];
      param_1[3] = bVar3 ^ param_2[3];
      param_1[4] = bVar2 ^ param_2[4];
      param_1[5] = bVar23 ^ param_2[5];
      param_1[6] = bVar22 ^ param_2[6];
      param_1[7] = bVar21 ^ param_2[7];
      param_1[8] = bVar20 ^ param_2[8];
      param_1[9] = bVar19 ^ param_2[9];
      param_1[10] = bVar18 ^ param_2[10];
      param_1[0xb] = bVar16 ^ param_2[0xb];
      param_1[0xc] = bVar14 ^ param_2[0xc];
      param_1[0xd] = bVar12 ^ param_2[0xd];
      param_1[0xe] = bVar10 ^ param_2[0xe];
      param_1[0xf] = bVar7 ^ param_2[0xf];
      (*pcVar25)(param_1,param_1 + 0x60);
      bVar1 = uVar26 < 0x10;
      uVar26 = uVar26 - 0x10;
      if (bVar1) break;
      bVar6 = *param_1;
      bVar5 = param_1[1];
      bVar4 = param_1[2];
      bVar3 = param_1[3];
      bVar2 = param_1[4];
      bVar23 = param_1[5];
      bVar22 = param_1[6];
      bVar21 = param_1[7];
      bVar20 = param_1[8];
      bVar19 = param_1[9];
      bVar18 = param_1[10];
      bVar16 = param_1[0xb];
      bVar14 = param_1[0xc];
      bVar12 = param_1[0xd];
      bVar10 = param_1[0xe];
      bVar7 = param_1[0xf];
      param_2 = param_2 + 0x10;
    }
    uVar26 = uVar11 - (uVar11 & 0xfffffffffffffff0);
    param_2 = pbVar13;
  }
  if (uVar26 != 0) {
    if (uVar26 < 0x20) {
LAB_00b346f0:
      uVar11 = 0;
LAB_00b346f4:
      lVar9 = uVar26 - uVar11;
      pbVar13 = param_2 + uVar11;
      pbVar15 = param_1 + uVar11;
      do {
        lVar9 = lVar9 + -1;
        *pbVar15 = *pbVar15 ^ *pbVar13;
        pbVar13 = pbVar13 + 1;
        pbVar15 = pbVar15 + 1;
      } while (lVar9 != 0);
    }
    else {
      uVar11 = uVar26 & 0xffffffffffffffe0;
      if (uVar11 == 0) goto LAB_00b346f4;
      if ((param_1 < param_2 + uVar26) && (param_2 < param_1 + uVar26)) goto LAB_00b346f0;
      pbVar13 = param_2 + 0x10;
      pbVar15 = param_1 + 0x10;
      uVar17 = uVar11;
      do {
        uVar27 = *(undefined8 *)(pbVar13 + -8);
        uVar8 = *(undefined8 *)(pbVar13 + -0x10);
        uVar29 = *(undefined8 *)(pbVar13 + 8);
        uVar28 = *(undefined8 *)pbVar13;
        uVar31 = *(undefined8 *)(pbVar15 + -8);
        uVar30 = *(undefined8 *)(pbVar15 + -0x10);
        uVar33 = *(undefined8 *)(pbVar15 + 8);
        uVar32 = *(undefined8 *)pbVar15;
        pbVar13 = pbVar13 + 0x20;
        uVar17 = uVar17 - 0x20;
        *(ulong *)(pbVar15 + -8) =
             CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                      CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((ulong)uVar27 >> 0x30),
                               CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                        (byte)((ulong)uVar27 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                 (byte)((ulong)uVar27 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                          (byte)((ulong)uVar27 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                   (byte)((ulong)uVar27 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar31 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar27 >>
                                                                                  8),(byte)uVar31 ^
                                                                                     (byte)uVar27)))
                                                ))));
        *(ulong *)(pbVar15 + -0x10) =
             CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38),
                      CONCAT16((byte)((ulong)uVar30 >> 0x30) ^ (byte)((ulong)uVar8 >> 0x30),
                               CONCAT15((byte)((ulong)uVar30 >> 0x28) ^ (byte)((ulong)uVar8 >> 0x28)
                                        ,CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                  (byte)((ulong)uVar8 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                           (byte)((ulong)uVar8 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar30 >> 0x10) ^
                                                                    (byte)((ulong)uVar8 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar30 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar8 >>
                                                                                   8),(byte)uVar30 ^
                                                                                      (byte)uVar8)))
                                                 ))));
        *(ulong *)(pbVar15 + 8) =
             CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                      CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uVar29 >> 0x30),
                               CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                        (byte)((ulong)uVar29 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                 (byte)((ulong)uVar29 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                          (byte)((ulong)uVar29 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                                   (byte)((ulong)uVar29 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar33 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar29 >>
                                                                                  8),(byte)uVar33 ^
                                                                                     (byte)uVar29)))
                                                ))));
        *(ulong *)pbVar15 =
             CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38),
                      CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar28 >> 0x30),
                               CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                        (byte)((ulong)uVar28 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                 (byte)((ulong)uVar28 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                          (byte)((ulong)uVar28 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                   (byte)((ulong)uVar28 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar32 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar28 >>
                                                                                  8),(byte)uVar32 ^
                                                                                     (byte)uVar28)))
                                                ))));
        pbVar15 = pbVar15 + 0x20;
      } while (uVar17 != 0);
      if (uVar26 != uVar11) goto LAB_00b346f4;
    }
    (*pcVar25)(param_1,param_1 + 0x60);
  }
  uVar11 = (param_3 << 3 & 0xff00ff00ff00ff00) >> 8 | (param_3 << 3 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) ^ (uVar11 >> 0x20 | uVar11 << 0x20);
  (*pcVar25)(param_1,param_1 + 0x60);
  uVar24 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8
  ;
  uVar24 = (uVar24 >> 0x10 | uVar24 << 0x10) + 1;
LAB_00b34768:
  (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x180));
  uVar24 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0xc) = uVar24 >> 0x10 | uVar24 << 0x10;
  return;
}

