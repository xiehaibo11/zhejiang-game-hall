
undefined8 CRYPTO_ccm128_encrypt(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  ulong *puVar2;
  long lVar3;
  byte *pbVar4;
  ulong *puVar5;
  uint uVar6;
  code *pcVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_70;
  ulong uStack_68;
  
  bVar8 = *param_1;
  pcVar7 = *(code **)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar8 >> 6 & 1) == 0) {
    (*pcVar7)(param_1,param_1 + 0x10,uVar10);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar6 = bVar8 & 7;
  uVar11 = 0;
  *param_1 = (byte)uVar6;
  uVar13 = (ulong)(uVar6 ^ 0xf);
  if ((bVar8 & 7) != 0) {
    do {
      bVar9 = param_1[uVar13];
      param_1[uVar13] = 0;
      uVar13 = uVar13 + 1;
      uVar11 = (uVar11 | bVar9) << 8;
    } while (uVar13 < 0xf);
  }
  bVar9 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar11 | bVar9) == param_4) {
    uVar13 = *(long *)(param_1 + 0x20) + (param_4 + 0xf >> 3 | 1);
    *(ulong *)(param_1 + 0x20) = uVar13;
    if (uVar13 < 0x2000000000000001) {
      uVar13 = param_4 - 0x10;
      if (0xf < param_4) {
        uVar11 = uVar13 & 0xfffffffffffffff0;
        lVar3 = uVar11 + 0x10;
        puVar5 = (ulong *)((long)param_3 + lVar3);
        puVar14 = param_2;
        do {
          *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ *puVar14;
          *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ puVar14[1];
          (*pcVar7)(param_1 + 0x10,param_1 + 0x10,uVar10);
          (*pcVar7)(param_1,&local_70,uVar10);
          lVar12 = 0xf;
          do {
            bVar9 = param_1[lVar12];
            param_1[lVar12] = bVar9 + 1;
            if (lVar12 == 8) break;
            lVar12 = lVar12 + -1;
          } while ((byte)(bVar9 + 1) == 0);
          param_4 = param_4 - 0x10;
          *param_3 = *puVar14 ^ local_70;
          puVar2 = puVar14 + 1;
          puVar14 = puVar14 + 2;
          param_3[1] = *puVar2 ^ uStack_68;
          param_3 = param_3 + 2;
        } while (0xf < param_4);
        param_2 = (ulong *)((long)param_2 + lVar3);
        param_4 = uVar13 - uVar11;
        param_3 = puVar5;
      }
      if (param_4 != 0) {
        pbVar4 = param_1 + 0x10;
        uVar13 = 0;
        uVar11 = 1;
        do {
          pbVar4[uVar13] = pbVar4[uVar13] ^ *(byte *)((long)param_2 + uVar13);
          bVar1 = uVar11 < param_4;
          uVar13 = uVar11;
          uVar11 = (ulong)((int)uVar11 + 1);
        } while (bVar1);
        (*pcVar7)(pbVar4,pbVar4,uVar10);
        (*pcVar7)(param_1,&local_70,uVar10);
        uVar13 = 0;
        uVar11 = 1;
        do {
          *(byte *)((long)param_3 + uVar13) =
               *(byte *)((long)param_2 + uVar13) ^ *(byte *)((long)&local_70 + uVar13);
          bVar1 = uVar11 < param_4;
          uVar13 = uVar11;
          uVar11 = (ulong)((int)uVar11 + 1);
        } while (bVar1);
      }
      memset(param_1 + (uVar6 ^ 0xf),0,(ulong)(uVar6 + 1));
      (*pcVar7)(param_1,&local_70,uVar10);
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      uVar15 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = 0;
      *param_1 = bVar8;
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
                                                                 CONCAT11((byte)((ulong)uVar16 >> 8)
                                                                          ^ (byte)(uStack_68 >> 8),
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
                                                                 CONCAT11((byte)((ulong)uVar15 >> 8)
                                                                          ^ (byte)(local_70 >> 8),
                                                                          (byte)uVar15 ^
                                                                          (byte)local_70)))))));
    }
    else {
      uVar10 = 0xfffffffe;
    }
  }
  else {
    uVar10 = 0xffffffff;
  }
  return uVar10;
}

