
undefined8 CRYPTO_ocb128_tag(undefined8 *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar11;
  byte bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 - 1 < 0x10) {
    uVar11 = param_1[0x15];
    uVar1 = param_1[0x14];
    uVar20 = param_1[0x17];
    uVar19 = param_1[0x16];
    bVar2 = (byte)uVar1 ^ (byte)uVar19;
    bVar3 = (byte)((ulong)uVar1 >> 8) ^ (byte)((ulong)uVar19 >> 8);
    bVar4 = (byte)((ulong)uVar1 >> 0x10) ^ (byte)((ulong)uVar19 >> 0x10);
    bVar5 = (byte)((ulong)uVar1 >> 0x18) ^ (byte)((ulong)uVar19 >> 0x18);
    bVar6 = (byte)((ulong)uVar1 >> 0x20) ^ (byte)((ulong)uVar19 >> 0x20);
    bVar7 = (byte)((ulong)uVar1 >> 0x28) ^ (byte)((ulong)uVar19 >> 0x28);
    bVar8 = (byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30);
    bVar9 = (byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38);
    local_40 = CONCAT17(bVar9,CONCAT16(bVar8,CONCAT15(bVar7,CONCAT14(bVar6,CONCAT13(bVar5,CONCAT12(
                                                  bVar4,CONCAT11(bVar3,bVar2)))))));
    bVar10 = (byte)uVar11 ^ (byte)uVar20;
    bVar12 = (byte)((ulong)uVar11 >> 8) ^ (byte)((ulong)uVar20 >> 8);
    bVar13 = (byte)((ulong)uVar11 >> 0x10) ^ (byte)((ulong)uVar20 >> 0x10);
    bVar14 = (byte)((ulong)uVar11 >> 0x18) ^ (byte)((ulong)uVar20 >> 0x18);
    bVar15 = (byte)((ulong)uVar11 >> 0x20) ^ (byte)((ulong)uVar20 >> 0x20);
    bVar16 = (byte)((ulong)uVar11 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28);
    bVar17 = (byte)((ulong)uVar11 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30);
    bVar18 = (byte)((ulong)uVar11 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38);
    uStack_38 = CONCAT17(bVar18,CONCAT16(bVar17,CONCAT15(bVar16,CONCAT14(bVar15,CONCAT13(bVar14,
                                                  CONCAT12(bVar13,CONCAT11(bVar12,bVar10)))))));
    uVar11 = param_1[10];
    uVar1 = param_1[9];
    local_50 = CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ bVar9,
                        CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ bVar8,
                                 CONCAT15((byte)((ulong)uVar1 >> 0x28) ^ bVar7,
                                          CONCAT14((byte)((ulong)uVar1 >> 0x20) ^ bVar6,
                                                   CONCAT13((byte)((ulong)uVar1 >> 0x18) ^ bVar5,
                                                            CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                                     bVar4,CONCAT11((byte)((ulong)
                                                  uVar1 >> 8) ^ bVar3,(byte)uVar1 ^ bVar2)))))));
    uStack_48 = CONCAT17((byte)((ulong)uVar11 >> 0x38) ^ bVar18,
                         CONCAT16((byte)((ulong)uVar11 >> 0x30) ^ bVar17,
                                  CONCAT15((byte)((ulong)uVar11 >> 0x28) ^ bVar16,
                                           CONCAT14((byte)((ulong)uVar11 >> 0x20) ^ bVar15,
                                                    CONCAT13((byte)((ulong)uVar11 >> 0x18) ^ bVar14,
                                                             CONCAT12((byte)((ulong)uVar11 >> 0x10)
                                                                      ^ bVar13,CONCAT11((byte)((
                                                  ulong)uVar11 >> 8) ^ bVar12,(byte)uVar11 ^ bVar10)
                                                  ))))));
    (*(code *)*param_1)(&local_50,&local_40,param_1[2]);
    uVar11 = param_1[0x13];
    uVar1 = param_1[0x12];
    param_1[0xf] = CONCAT17((byte)((ulong)uVar11 >> 0x38) ^ (byte)((ulong)uStack_38 >> 0x38),
                            CONCAT16((byte)((ulong)uVar11 >> 0x30) ^
                                     (byte)((ulong)uStack_38 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar11 >> 0x28) ^
                                              (byte)((ulong)uStack_38 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar11 >> 0x20) ^
                                                       (byte)((ulong)uStack_38 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar11 >> 0x18) ^
                                                                (byte)((ulong)uStack_38 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar11 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uStack_38 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar11 >> 8) ^ (byte)((ulong)uStack_38 >> 8),
                                                  (byte)uVar11 ^ (byte)uStack_38)))))));
    param_1[0xe] = CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)local_40 >> 0x38),
                            CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)local_40 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar1 >> 0x28) ^
                                              (byte)((ulong)local_40 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                                       (byte)((ulong)local_40 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                                (byte)((ulong)local_40 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar1 >> 0x10
                                                                               ) ^ (byte)((ulong)
                                                  local_40 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar1 >> 8) ^
                                                           (byte)((ulong)local_40 >> 8),
                                                           (byte)uVar1 ^ (byte)local_40)))))));
    memcpy(param_2,param_1 + 0xe,param_3);
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

