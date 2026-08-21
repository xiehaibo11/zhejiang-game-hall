
undefined8 CRYPTO_ocb128_aad(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar11;
  byte bVar18;
  byte bVar19;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 uVar20;
  byte bVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  ulong uStack_48;
  
  uVar6 = param_1[0xc];
  uVar1 = uVar6 + (param_3 >> 4);
  while( true ) {
    uVar6 = uVar6 + 1;
    if (uVar1 < uVar6) {
      uVar6 = param_3 & 0xf;
      if (uVar6 != 0) {
        uVar20 = param_1[0x11];
        uVar11 = param_1[0x10];
        uVar29 = param_1[8];
        uVar28 = param_1[7];
        bVar10 = (byte)uVar28 ^ (byte)uVar11;
        bVar12 = (byte)((ulong)uVar28 >> 8) ^ (byte)((ulong)uVar11 >> 8);
        bVar13 = (byte)((ulong)uVar28 >> 0x10) ^ (byte)((ulong)uVar11 >> 0x10);
        bVar14 = (byte)((ulong)uVar28 >> 0x18) ^ (byte)((ulong)uVar11 >> 0x18);
        bVar15 = (byte)((ulong)uVar28 >> 0x20) ^ (byte)((ulong)uVar11 >> 0x20);
        bVar16 = (byte)((ulong)uVar28 >> 0x28) ^ (byte)((ulong)uVar11 >> 0x28);
        bVar17 = (byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30);
        bVar18 = (byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38);
        bVar19 = (byte)uVar29 ^ (byte)uVar20;
        bVar21 = (byte)((ulong)uVar29 >> 8) ^ (byte)((ulong)uVar20 >> 8);
        bVar22 = (byte)((ulong)uVar29 >> 0x10) ^ (byte)((ulong)uVar20 >> 0x10);
        bVar23 = (byte)((ulong)uVar29 >> 0x18) ^ (byte)((ulong)uVar20 >> 0x18);
        bVar24 = (byte)((ulong)uVar29 >> 0x20) ^ (byte)((ulong)uVar20 >> 0x20);
        bVar25 = (byte)((ulong)uVar29 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28);
        bVar26 = (byte)((ulong)uVar29 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30);
        bVar27 = (byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38);
        param_1[0x11] =
             CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,CONCAT13(bVar23,
                                                  CONCAT12(bVar22,CONCAT11(bVar21,bVar19)))))));
        param_1[0x10] =
             CONCAT17(bVar18,CONCAT16(bVar17,CONCAT15(bVar16,CONCAT14(bVar15,CONCAT13(bVar14,
                                                  CONCAT12(bVar13,CONCAT11(bVar12,bVar10)))))));
        memset((undefined1 *)((long)&local_50 + uVar6),0,0x10 - uVar6);
        memcpy(&local_50,(void *)(param_2 + (param_3 & 0xfffffffffffffff0)),uVar6);
        *(undefined1 *)((long)&local_50 + uVar6) = 0x80;
        local_60 = CONCAT17((byte)(local_50 >> 0x38) ^ bVar18,
                            CONCAT16((byte)(local_50 >> 0x30) ^ bVar17,
                                     CONCAT15((byte)(local_50 >> 0x28) ^ bVar16,
                                              CONCAT14((byte)(local_50 >> 0x20) ^ bVar15,
                                                       CONCAT13((byte)(local_50 >> 0x18) ^ bVar14,
                                                                CONCAT12((byte)(local_50 >> 0x10) ^
                                                                         bVar13,CONCAT11((byte)(
                                                  local_50 >> 8) ^ bVar12,(byte)local_50 ^ bVar10)))
                                                  ))));
        uStack_58 = CONCAT17((byte)(uStack_48 >> 0x38) ^ bVar27,
                             CONCAT16((byte)(uStack_48 >> 0x30) ^ bVar26,
                                      CONCAT15((byte)(uStack_48 >> 0x28) ^ bVar25,
                                               CONCAT14((byte)(uStack_48 >> 0x20) ^ bVar24,
                                                        CONCAT13((byte)(uStack_48 >> 0x18) ^ bVar23,
                                                                 CONCAT12((byte)(uStack_48 >> 0x10)
                                                                          ^ bVar22,CONCAT11((byte)(
                                                  uStack_48 >> 8) ^ bVar21,(byte)uStack_48 ^ bVar19)
                                                  ))))));
        (*(code *)*param_1)(&local_60,&local_50,param_1[2]);
        uVar20 = param_1[0x13];
        uVar11 = param_1[0x12];
        param_1[0x13] =
             CONCAT17((byte)(uStack_48 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                      CONCAT16((byte)(uStack_48 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                               CONCAT15((byte)(uStack_48 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28),
                                        CONCAT14((byte)(uStack_48 >> 0x20) ^
                                                 (byte)((ulong)uVar20 >> 0x20),
                                                 CONCAT13((byte)(uStack_48 >> 0x18) ^
                                                          (byte)((ulong)uVar20 >> 0x18),
                                                          CONCAT12((byte)(uStack_48 >> 0x10) ^
                                                                   (byte)((ulong)uVar20 >> 0x10),
                                                                   CONCAT11((byte)(uStack_48 >> 8) ^
                                                                            (byte)((ulong)uVar20 >>
                                                                                  8),(byte)uStack_48
                                                                                     ^ (byte)uVar20)
                                                                  ))))));
        param_1[0x12] =
             CONCAT17((byte)(local_50 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                      CONCAT16((byte)(local_50 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30),
                               CONCAT15((byte)(local_50 >> 0x28) ^ (byte)((ulong)uVar11 >> 0x28),
                                        CONCAT14((byte)(local_50 >> 0x20) ^
                                                 (byte)((ulong)uVar11 >> 0x20),
                                                 CONCAT13((byte)(local_50 >> 0x18) ^
                                                          (byte)((ulong)uVar11 >> 0x18),
                                                          CONCAT12((byte)(local_50 >> 0x10) ^
                                                                   (byte)((ulong)uVar11 >> 0x10),
                                                                   CONCAT11((byte)(local_50 >> 8) ^
                                                                            (byte)((ulong)uVar11 >>
                                                                                  8),(byte)local_50
                                                                                     ^ (byte)uVar11)
                                                                  ))))));
      }
      param_1[0xc] = uVar1;
      return 1;
    }
    if ((uVar6 & 1) == 0) {
      iVar5 = 0;
      uVar8 = uVar6;
      do {
        uVar8 = uVar8 >> 1;
        iVar5 = iVar5 + 1;
      } while ((uVar8 & 1) == 0);
    }
    else {
      iVar5 = 0;
    }
    puVar4 = (ulong *)FUN_00b360b8(param_1,iVar5);
    if (puVar4 == (ulong *)0x0) break;
    uVar7 = *puVar4;
    uVar8 = param_1[0x10];
    uVar3 = param_1[0x11];
    param_1[0x10] = uVar7 ^ uVar8;
    uVar9 = puVar4[1];
    lVar2 = param_2 + (uVar6 - param_1[0xc]) * 0x10;
    param_1[0x11] = uVar9 ^ uVar3;
    local_50 = *(ulong *)(lVar2 + -0x10) ^ uVar7 ^ uVar8;
    uStack_48 = *(ulong *)(lVar2 + -8) ^ uVar9 ^ uVar3;
    (*(code *)*param_1)(&local_50,&local_60,param_1[2]);
    uVar20 = param_1[0x13];
    uVar11 = param_1[0x12];
    param_1[0x13] =
         CONCAT17((byte)((ulong)uStack_58 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                  CONCAT16((byte)((ulong)uStack_58 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                           CONCAT15((byte)((ulong)uStack_58 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28)
                                    ,CONCAT14((byte)((ulong)uStack_58 >> 0x20) ^
                                              (byte)((ulong)uVar20 >> 0x20),
                                              CONCAT13((byte)((ulong)uStack_58 >> 0x18) ^
                                                       (byte)((ulong)uVar20 >> 0x18),
                                                       CONCAT12((byte)((ulong)uStack_58 >> 0x10) ^
                                                                (byte)((ulong)uVar20 >> 0x10),
                                                                CONCAT11((byte)((ulong)uStack_58 >>
                                                                               8) ^
                                                                         (byte)((ulong)uVar20 >> 8),
                                                                         (byte)uStack_58 ^
                                                                         (byte)uVar20)))))));
    param_1[0x12] =
         CONCAT17((byte)((ulong)local_60 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                  CONCAT16((byte)((ulong)local_60 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30),
                           CONCAT15((byte)((ulong)local_60 >> 0x28) ^ (byte)((ulong)uVar11 >> 0x28),
                                    CONCAT14((byte)((ulong)local_60 >> 0x20) ^
                                             (byte)((ulong)uVar11 >> 0x20),
                                             CONCAT13((byte)((ulong)local_60 >> 0x18) ^
                                                      (byte)((ulong)uVar11 >> 0x18),
                                                      CONCAT12((byte)((ulong)local_60 >> 0x10) ^
                                                               (byte)((ulong)uVar11 >> 0x10),
                                                               CONCAT11((byte)((ulong)local_60 >> 8)
                                                                        ^ (byte)((ulong)uVar11 >> 8)
                                                                        ,(byte)local_60 ^
                                                                         (byte)uVar11)))))));
  }
  return 0;
}

