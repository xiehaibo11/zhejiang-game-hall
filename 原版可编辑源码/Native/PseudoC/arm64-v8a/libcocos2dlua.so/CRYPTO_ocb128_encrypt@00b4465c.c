
undefined8 CRYPTO_ocb128_encrypt(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  byte *__src;
  ulong uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte abStack_80 [16];
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong uStack_58;
  
  uVar7 = param_1[0xd];
  uVar12 = param_4 >> 4;
  uVar1 = uVar7 + uVar12;
  if ((uVar12 == 0) || (param_1[4] == 0)) {
    while (uVar7 = uVar7 + 1, uVar7 <= uVar1) {
      if ((uVar7 & 1) == 0) {
        iVar6 = 0;
        uVar12 = uVar7;
        do {
          uVar12 = uVar12 >> 1;
          iVar6 = iVar6 + 1;
        } while ((uVar12 & 1) == 0);
      }
      else {
        iVar6 = 0;
      }
      puVar3 = (ulong *)FUN_00b44538(param_1,iVar6);
      if (puVar3 == (ulong *)0x0) {
        return 0;
      }
      uVar8 = *puVar3;
      uVar12 = param_1[0x14];
      uVar2 = param_1[0x15];
      param_1[0x14] = uVar8 ^ uVar12;
      uVar11 = puVar3[1];
      param_1[0x15] = uVar11 ^ uVar2;
      lVar5 = param_2 + (uVar7 - param_1[0xd]) * 0x10;
      local_60 = *(ulong *)(lVar5 + -0x10) ^ uVar8 ^ uVar12;
      uStack_58 = *(ulong *)(lVar5 + -8) ^ uVar11 ^ uVar2;
      param_1[0x16] = *(ulong *)(lVar5 + -0x10) ^ param_1[0x16];
      param_1[0x17] = *(ulong *)(lVar5 + -8) ^ param_1[0x17];
      (*(code *)*param_1)(&local_60,&local_70,param_1[2]);
      lVar5 = param_3 + (uVar7 - param_1[0xd]) * 0x10;
      *(ulong *)(lVar5 + -0x10) = local_70 ^ param_1[0x14];
      *(ulong *)(lVar5 + -8) = local_68 ^ param_1[0x15];
    }
  }
  else {
    lVar5 = -1;
    uVar7 = uVar1;
    do {
      uVar7 = uVar7 >> 1;
      lVar5 = lVar5 + 1;
    } while (uVar7 != 0);
    lVar5 = FUN_00b44538(param_1,lVar5);
    if (lVar5 == 0) {
      return 0;
    }
    (*(code *)param_1[4])
              (param_2,param_3,uVar12,param_1[2],param_1[0xd] + 1,param_1 + 0x14,param_1[0xb],
               param_1 + 0x16);
  }
  if ((param_4 & 0xf) != 0) {
    uVar12 = param_4 & 0xf;
    puVar4 = param_1 + 0x14;
    uVar15 = param_1[0x15];
    uVar14 = *puVar4;
    uVar17 = param_1[8];
    uVar16 = param_1[7];
    param_1[0x15] =
         CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                  CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                           CONCAT15((byte)((ulong)uVar17 >> 0x28) ^ (byte)((ulong)uVar15 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                             (byte)((ulong)uVar15 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                      (byte)((ulong)uVar15 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar17 >> 0x10) ^
                                                               (byte)((ulong)uVar15 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar17 >> 8) ^
                                                                        (byte)((ulong)uVar15 >> 8),
                                                                        (byte)uVar17 ^ (byte)uVar15)
                                                              ))))));
    *puVar4 = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                       CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                         (byte)((ulong)uVar14 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                  (byte)((ulong)uVar14 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                           (byte)((ulong)uVar14 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar16 >> 0x10) ^
                                                                    (byte)((ulong)uVar14 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar16 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar14 >>
                                                                                   8),(byte)uVar16 ^
                                                                                      (byte)uVar14))
                                                          )))));
    (*(code *)*param_1)(puVar4,abStack_80,param_1[2]);
    __src = (byte *)(param_2 + (param_4 & 0xfffffffffffffff0));
    pbVar9 = (byte *)(param_3 + (param_4 & 0xfffffffffffffff0));
    pbVar10 = __src;
    uVar7 = uVar12;
    pbVar13 = abStack_80;
    do {
      uVar7 = uVar7 - 1;
      *pbVar9 = *pbVar13 ^ *pbVar10;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
      pbVar13 = pbVar13 + 1;
    } while (uVar7 != 0);
    memset((undefined1 *)((long)&local_60 + uVar12),0,0x10 - uVar12);
    memcpy(&local_60,__src,uVar12);
    *(undefined1 *)((long)&local_60 + uVar12) = 0x80;
    uVar15 = param_1[0x17];
    uVar14 = param_1[0x16];
    param_1[0x17] =
         CONCAT17((byte)(uStack_58 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                  CONCAT16((byte)(uStack_58 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                           CONCAT15((byte)(uStack_58 >> 0x28) ^ (byte)((ulong)uVar15 >> 0x28),
                                    CONCAT14((byte)(uStack_58 >> 0x20) ^
                                             (byte)((ulong)uVar15 >> 0x20),
                                             CONCAT13((byte)(uStack_58 >> 0x18) ^
                                                      (byte)((ulong)uVar15 >> 0x18),
                                                      CONCAT12((byte)(uStack_58 >> 0x10) ^
                                                               (byte)((ulong)uVar15 >> 0x10),
                                                               CONCAT11((byte)(uStack_58 >> 8) ^
                                                                        (byte)((ulong)uVar15 >> 8),
                                                                        (byte)uStack_58 ^
                                                                        (byte)uVar15)))))));
    param_1[0x16] =
         CONCAT17((byte)(local_60 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                  CONCAT16((byte)(local_60 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                           CONCAT15((byte)(local_60 >> 0x28) ^ (byte)((ulong)uVar14 >> 0x28),
                                    CONCAT14((byte)(local_60 >> 0x20) ^
                                             (byte)((ulong)uVar14 >> 0x20),
                                             CONCAT13((byte)(local_60 >> 0x18) ^
                                                      (byte)((ulong)uVar14 >> 0x18),
                                                      CONCAT12((byte)(local_60 >> 0x10) ^
                                                               (byte)((ulong)uVar14 >> 0x10),
                                                               CONCAT11((byte)(local_60 >> 8) ^
                                                                        (byte)((ulong)uVar14 >> 8),
                                                                        (byte)local_60 ^
                                                                        (byte)uVar14)))))));
  }
  param_1[0xd] = uVar1;
  return 1;
}

