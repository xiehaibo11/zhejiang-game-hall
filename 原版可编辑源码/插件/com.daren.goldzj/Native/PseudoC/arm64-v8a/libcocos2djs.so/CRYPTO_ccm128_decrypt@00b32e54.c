
undefined8 CRYPTO_ccm128_decrypt(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  ulong *puVar4;
  uint uVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_70;
  ulong uStack_68;
  
  bVar7 = *param_1;
  pcVar6 = *(code **)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar7 >> 6 & 1) == 0) {
    (*pcVar6)(param_1,param_1 + 0x10,uVar9);
  }
  uVar5 = bVar7 & 7;
  uVar10 = 0;
  *param_1 = (byte)uVar5;
  uVar12 = (ulong)(uVar5 ^ 0xf);
  if ((bVar7 & 7) != 0) {
    do {
      bVar8 = param_1[uVar12];
      param_1[uVar12] = 0;
      uVar12 = uVar12 + 1;
      uVar10 = (uVar10 | bVar8) << 8;
    } while (uVar12 < 0xf);
  }
  bVar8 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar10 | bVar8) == param_4) {
    uVar12 = param_4 - 0x10;
    if (0xf < param_4) {
      uVar10 = uVar12 & 0xfffffffffffffff0;
      lVar2 = uVar10 + 0x10;
      puVar4 = (ulong *)((long)param_3 + lVar2);
      puVar14 = param_2;
      do {
        (*pcVar6)(param_1,&local_70,uVar9);
        lVar11 = 0xf;
        do {
          bVar8 = param_1[lVar11];
          param_1[lVar11] = bVar8 + 1;
          if (lVar11 == 8) break;
          lVar11 = lVar11 + -1;
        } while ((byte)(bVar8 + 1) == 0);
        uVar13 = *puVar14;
        *param_3 = uVar13 ^ local_70;
        *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ uVar13 ^ local_70;
        uVar13 = puVar14[1];
        param_3[1] = uVar13 ^ uStack_68;
        *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ uVar13 ^ uStack_68;
        (*pcVar6)(param_1 + 0x10,param_1 + 0x10,uVar9);
        param_4 = param_4 - 0x10;
        puVar14 = puVar14 + 2;
        param_3 = param_3 + 2;
      } while (0xf < param_4);
      param_2 = (ulong *)((long)param_2 + lVar2);
      param_4 = uVar12 - uVar10;
      param_3 = puVar4;
    }
    if (param_4 != 0) {
      (*pcVar6)(param_1,&local_70,uVar9);
      pbVar3 = param_1 + 0x10;
      uVar12 = 0;
      uVar10 = 1;
      do {
        bVar8 = *(byte *)((long)param_2 + uVar12) ^ *(byte *)((long)&local_70 + uVar12);
        *(byte *)((long)param_3 + uVar12) = bVar8;
        pbVar3[uVar12] = pbVar3[uVar12] ^ bVar8;
        bVar1 = uVar10 < param_4;
        uVar12 = uVar10;
        uVar10 = (ulong)((int)uVar10 + 1);
      } while (bVar1);
      (*pcVar6)(pbVar3,pbVar3,uVar9);
    }
    memset(param_1 + (uVar5 ^ 0xf),0,(ulong)(uVar5 + 1));
    (*pcVar6)(param_1,&local_70,uVar9);
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    uVar15 = *(undefined8 *)(param_1 + 0x10);
    uVar9 = 0;
    *param_1 = bVar7;
    *(ulong *)(param_1 + 0x18) =
         CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)(uStack_68 >> 0x38),
                  CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)(uStack_68 >> 0x30),
                           CONCAT15((byte)((ulong)uVar16 >> 0x28) ^ (byte)(uStack_68 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                             (byte)(uStack_68 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                      (byte)(uStack_68 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar16 >> 0x10) ^
                                                               (byte)(uStack_68 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar16 >> 8) ^
                                                                        (byte)(uStack_68 >> 8),
                                                                        (byte)uVar16 ^
                                                                        (byte)uStack_68)))))));
    *(ulong *)(param_1 + 0x10) =
         CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(local_70 >> 0x38),
                  CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)(local_70 >> 0x30),
                           CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)(local_70 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                             (byte)(local_70 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                      (byte)(local_70 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                               (byte)(local_70 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar15 >> 8) ^
                                                                        (byte)(local_70 >> 8),
                                                                        (byte)uVar15 ^
                                                                        (byte)local_70)))))));
  }
  else {
    uVar9 = 0xffffffff;
  }
  return uVar9;
}

