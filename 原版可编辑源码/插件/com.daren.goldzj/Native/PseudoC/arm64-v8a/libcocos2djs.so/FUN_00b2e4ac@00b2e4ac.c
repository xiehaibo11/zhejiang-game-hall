
ulong FUN_00b2e4ac(long param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  EVP_MD *pEVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  pEVar10 = (EVP_MD *)*puVar5;
  if (((pEVar10 == (EVP_MD *)0x0) || (lVar12 = puVar5[1], lVar12 == 0)) ||
     (lVar11 = puVar5[0x83], lVar11 == 0)) {
    ERR_put_error(0x34,0x65,0x65,"crypto/kdf/tls1_prf.c",0x7e);
    return 0;
  }
  uVar13 = puVar5[2];
  uVar9 = *param_3;
  puVar5 = puVar5 + 3;
  iVar2 = EVP_MD_type(pEVar10);
  if (iVar2 != 0x72) {
    iVar2 = FUN_00b2e8e8(pEVar10,lVar12,uVar13,puVar5,lVar11,param_2,uVar9);
    return (ulong)(iVar2 != 0);
  }
  pEVar10 = EVP_md5();
  lVar1 = (uVar13 >> 1) + (uVar13 & 1);
  uVar3 = FUN_00b2e8e8(pEVar10,lVar12,lVar1,puVar5,lVar11,param_2,uVar9);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  pvVar4 = CRYPTO_malloc((int)uVar9,"crypto/kdf/tls1_prf.c",0xf8);
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
  pEVar10 = EVP_sha1();
  iVar2 = FUN_00b2e8e8(pEVar10,lVar12 + (uVar13 >> 1),lVar1,puVar5,lVar11,pvVar4,uVar9);
  if (iVar2 == 0) {
    CRYPTO_clear_free(pvVar4,uVar9,"crypto/kdf/tls1_prf.c",0xfd);
    return 0;
  }
  if (uVar9 == 0) goto LAB_00b2e5c4;
  if (uVar9 < 0x20) {
LAB_00b2e59c:
    uVar13 = 0;
  }
  else {
    uVar13 = uVar9 & 0xffffffffffffffe0;
    if (uVar13 != 0) {
      if ((param_2 < (long)pvVar4 + uVar9) && (pvVar4 < (void *)(param_2 + uVar9)))
      goto LAB_00b2e59c;
      puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
      puVar8 = (undefined8 *)(param_2 + 0x10);
      uVar3 = uVar13;
      do {
        uVar15 = puVar5[-1];
        uVar14 = puVar5[-2];
        uVar17 = puVar5[1];
        uVar16 = *puVar5;
        uVar19 = puVar8[-1];
        uVar18 = puVar8[-2];
        uVar21 = puVar8[1];
        uVar20 = *puVar8;
        puVar5 = puVar5 + 4;
        uVar3 = uVar3 - 0x20;
        puVar8[-1] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                              CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                 (byte)((ulong)uVar15 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                          (byte)((ulong)uVar15 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                   (byte)((ulong)uVar15 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar19 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar15 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar15)))))));
        puVar8[-2] = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                              CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                 (byte)((ulong)uVar14 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                          (byte)((ulong)uVar14 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                                   (byte)((ulong)uVar14 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar18 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar14 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar14)))))));
        puVar8[1] = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                             CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                               (byte)((ulong)uVar17 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                        (byte)((ulong)uVar17 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                 (byte)((ulong)uVar17 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar21 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar17 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar17)))))));
        *puVar8 = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                           CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                             (byte)((ulong)uVar16 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                      (byte)((ulong)uVar16 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                               (byte)((ulong)uVar16 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar20 >> 0x10
                                                                              ) ^ (byte)((ulong)
                                                  uVar16 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                           (byte)((ulong)uVar16 >> 8),
                                                           (byte)uVar20 ^ (byte)uVar16)))))));
        puVar8 = puVar8 + 4;
      } while (uVar3 != 0);
      if (uVar9 == uVar13) goto LAB_00b2e5c4;
    }
  }
  lVar12 = uVar9 - uVar13;
  pbVar6 = (byte *)((long)pvVar4 + uVar13);
  pbVar7 = (byte *)(param_2 + uVar13);
  do {
    lVar12 = lVar12 + -1;
    *pbVar7 = *pbVar7 ^ *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while (lVar12 != 0);
LAB_00b2e5c4:
  CRYPTO_clear_free(pvVar4,uVar9,"crypto/kdf/tls1_prf.c",0x102);
  return 1;
}

