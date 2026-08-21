
undefined8
CRYPTO_ccm128_encrypt_ccm64(byte *param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte local_70 [16];
  
  bVar5 = *param_1;
  pcVar4 = *(code **)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar5 >> 6 & 1) == 0) {
    (*pcVar4)(param_1,param_1 + 0x10,uVar11);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar3 = bVar5 & 7;
  uVar7 = 0;
  *param_1 = (byte)uVar3;
  uVar10 = (ulong)(uVar3 ^ 0xf);
  if ((bVar5 & 7) != 0) {
    do {
      bVar6 = param_1[uVar10];
      param_1[uVar10] = 0;
      uVar10 = uVar10 + 1;
      uVar7 = (uVar7 | bVar6) << 8;
    } while (uVar10 < 0xf);
  }
  bVar6 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar7 | bVar6) != param_4) {
    return 0xffffffff;
  }
  uVar10 = *(long *)(param_1 + 0x20) + (param_4 + 0xf >> 3 | 1);
  *(ulong *)(param_1 + 0x20) = uVar10;
  if (0x2000000000000000 < uVar10) {
    return 0xfffffffe;
  }
  uVar10 = param_4 >> 4;
  if (uVar10 != 0) {
    (*param_5)(param_2,param_3,uVar10,uVar11,param_1,param_1 + 0x10);
    uVar7 = param_4 & 0xfffffffffffffff0;
    param_4 = param_4 - uVar7;
    if (param_4 == 0) goto LAB_00b33258;
    uVar8 = 0;
    param_2 = param_2 + uVar7;
    param_3 = param_3 + uVar7;
    lVar9 = 0xf;
    do {
      uVar7 = uVar8 + (uVar10 & 0xff) + (ulong)param_1[lVar9];
      param_1[lVar9] = (byte)uVar7;
      if (lVar9 == 8) break;
      uVar8 = uVar7 >> 8;
      uVar7 = uVar7 | uVar10;
      uVar10 = uVar10 >> 8;
      lVar9 = lVar9 + -1;
    } while (uVar7 >> 8 != 0);
  }
  if (param_4 != 0) {
    pbVar2 = param_1 + 0x10;
    uVar10 = 0;
    uVar7 = 1;
    do {
      pbVar2[uVar10] = pbVar2[uVar10] ^ *(byte *)(param_2 + uVar10);
      bVar1 = uVar7 < param_4;
      uVar10 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar1);
    (*pcVar4)(pbVar2,pbVar2,uVar11);
    (*pcVar4)(param_1,local_70,uVar11);
    uVar10 = 0;
    uVar7 = 1;
    do {
      *(byte *)(param_3 + uVar10) = *(byte *)(param_2 + uVar10) ^ local_70[uVar10];
      bVar1 = uVar7 < param_4;
      uVar10 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar1);
  }
LAB_00b33258:
  memset(param_1 + (uVar3 ^ 0xf),0,(ulong)(uVar3 + 1));
  (*pcVar4)(param_1,local_70,uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  *param_1 = bVar5;
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar12 >> 0x38) ^ SUB81(local_70._8_8_,7),
                CONCAT16((byte)((ulong)uVar12 >> 0x30) ^ SUB81(local_70._8_8_,6),
                         CONCAT15((byte)((ulong)uVar12 >> 0x28) ^ SUB81(local_70._8_8_,5),
                                  CONCAT14((byte)((ulong)uVar12 >> 0x20) ^ SUB81(local_70._8_8_,4),
                                           CONCAT13((byte)((ulong)uVar12 >> 0x18) ^
                                                    SUB81(local_70._8_8_,3),
                                                    CONCAT12((byte)((ulong)uVar12 >> 0x10) ^
                                                             SUB81(local_70._8_8_,2),
                                                             CONCAT11((byte)((ulong)uVar12 >> 8) ^
                                                                      SUB81(local_70._8_8_,1),
                                                                      (byte)uVar12 ^
                                                                      (byte)local_70._8_8_)))))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar11 >> 0x38) ^ SUB81(local_70._0_8_,7),
                CONCAT16((byte)((ulong)uVar11 >> 0x30) ^ SUB81(local_70._0_8_,6),
                         CONCAT15((byte)((ulong)uVar11 >> 0x28) ^ SUB81(local_70._0_8_,5),
                                  CONCAT14((byte)((ulong)uVar11 >> 0x20) ^ SUB81(local_70._0_8_,4),
                                           CONCAT13((byte)((ulong)uVar11 >> 0x18) ^
                                                    SUB81(local_70._0_8_,3),
                                                    CONCAT12((byte)((ulong)uVar11 >> 0x10) ^
                                                             SUB81(local_70._0_8_,2),
                                                             CONCAT11((byte)((ulong)uVar11 >> 8) ^
                                                                      SUB81(local_70._0_8_,1),
                                                                      (byte)uVar11 ^
                                                                      (byte)local_70._0_8_)))))));
  return 0;
}

