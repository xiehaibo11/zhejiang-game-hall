
int CRYPTO_ocb128_finish(undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar3;
  byte bVar10;
  byte bVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar12;
  byte bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar12 = param_1[0x15];
  uVar3 = param_1[0x14];
  uVar21 = param_1[0x17];
  uVar20 = param_1[0x16];
  bVar2 = (byte)uVar3 ^ (byte)uVar20;
  bVar4 = (byte)((ulong)uVar3 >> 8) ^ (byte)((ulong)uVar20 >> 8);
  bVar5 = (byte)((ulong)uVar3 >> 0x10) ^ (byte)((ulong)uVar20 >> 0x10);
  bVar6 = (byte)((ulong)uVar3 >> 0x18) ^ (byte)((ulong)uVar20 >> 0x18);
  bVar7 = (byte)((ulong)uVar3 >> 0x20) ^ (byte)((ulong)uVar20 >> 0x20);
  bVar8 = (byte)((ulong)uVar3 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28);
  bVar9 = (byte)((ulong)uVar3 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30);
  bVar10 = (byte)((ulong)uVar3 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38);
  local_40 = CONCAT17(bVar10,CONCAT16(bVar9,CONCAT15(bVar8,CONCAT14(bVar7,CONCAT13(bVar6,CONCAT12(
                                                  bVar5,CONCAT11(bVar4,bVar2)))))));
  bVar11 = (byte)uVar12 ^ (byte)uVar21;
  bVar13 = (byte)((ulong)uVar12 >> 8) ^ (byte)((ulong)uVar21 >> 8);
  bVar14 = (byte)((ulong)uVar12 >> 0x10) ^ (byte)((ulong)uVar21 >> 0x10);
  bVar15 = (byte)((ulong)uVar12 >> 0x18) ^ (byte)((ulong)uVar21 >> 0x18);
  bVar16 = (byte)((ulong)uVar12 >> 0x20) ^ (byte)((ulong)uVar21 >> 0x20);
  bVar17 = (byte)((ulong)uVar12 >> 0x28) ^ (byte)((ulong)uVar21 >> 0x28);
  bVar18 = (byte)((ulong)uVar12 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30);
  bVar19 = (byte)((ulong)uVar12 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38);
  uStack_38 = CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,CONCAT13(bVar15,
                                                  CONCAT12(bVar14,CONCAT11(bVar13,bVar11)))))));
  uVar12 = param_1[10];
  uVar3 = param_1[9];
  local_50 = CONCAT17((byte)((ulong)uVar3 >> 0x38) ^ bVar10,
                      CONCAT16((byte)((ulong)uVar3 >> 0x30) ^ bVar9,
                               CONCAT15((byte)((ulong)uVar3 >> 0x28) ^ bVar8,
                                        CONCAT14((byte)((ulong)uVar3 >> 0x20) ^ bVar7,
                                                 CONCAT13((byte)((ulong)uVar3 >> 0x18) ^ bVar6,
                                                          CONCAT12((byte)((ulong)uVar3 >> 0x10) ^
                                                                   bVar5,CONCAT11((byte)((ulong)
                                                  uVar3 >> 8) ^ bVar4,(byte)uVar3 ^ bVar2)))))));
  uStack_48 = CONCAT17((byte)((ulong)uVar12 >> 0x38) ^ bVar19,
                       CONCAT16((byte)((ulong)uVar12 >> 0x30) ^ bVar18,
                                CONCAT15((byte)((ulong)uVar12 >> 0x28) ^ bVar17,
                                         CONCAT14((byte)((ulong)uVar12 >> 0x20) ^ bVar16,
                                                  CONCAT13((byte)((ulong)uVar12 >> 0x18) ^ bVar15,
                                                           CONCAT12((byte)((ulong)uVar12 >> 0x10) ^
                                                                    bVar14,CONCAT11((byte)((ulong)
                                                  uVar12 >> 8) ^ bVar13,(byte)uVar12 ^ bVar11)))))))
  ;
  (*(code *)*param_1)(&local_50,&local_40,param_1[2]);
  uVar12 = param_1[0x13];
  uVar3 = param_1[0x12];
  iVar1 = -1;
  param_1[0xf] = CONCAT17((byte)((ulong)uVar12 >> 0x38) ^ (byte)((ulong)uStack_38 >> 0x38),
                          CONCAT16((byte)((ulong)uVar12 >> 0x30) ^ (byte)((ulong)uStack_38 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar12 >> 0x28) ^
                                            (byte)((ulong)uStack_38 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar12 >> 0x20) ^
                                                     (byte)((ulong)uStack_38 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar12 >> 0x18) ^
                                                              (byte)((ulong)uStack_38 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar12 >> 0x10)
                                                                       ^ (byte)((ulong)uStack_38 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar12
                                                                                      >> 8) ^
                                                                                (byte)((ulong)
                                                  uStack_38 >> 8),(byte)uVar12 ^ (byte)uStack_38))))
                                           )));
  param_1[0xe] = CONCAT17((byte)((ulong)uVar3 >> 0x38) ^ (byte)((ulong)local_40 >> 0x38),
                          CONCAT16((byte)((ulong)uVar3 >> 0x30) ^ (byte)((ulong)local_40 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar3 >> 0x28) ^
                                            (byte)((ulong)local_40 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar3 >> 0x20) ^
                                                     (byte)((ulong)local_40 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar3 >> 0x18) ^
                                                              (byte)((ulong)local_40 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar3 >> 0x10)
                                                                       ^ (byte)((ulong)local_40 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar3
                                                                                      >> 8) ^
                                                                                (byte)((ulong)
                                                  local_40 >> 8),(byte)uVar3 ^ (byte)local_40)))))))
  ;
  if ((param_2 != (void *)0x0) && (param_3 - 1 < 0x10)) {
    iVar1 = CRYPTO_memcmp(param_1 + 0xe,param_2,param_3);
  }
  return iVar1;
}

