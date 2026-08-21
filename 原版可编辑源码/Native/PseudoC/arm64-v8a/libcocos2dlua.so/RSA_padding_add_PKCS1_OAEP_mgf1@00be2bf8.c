
undefined4
RSA_padding_add_PKCS1_OAEP_mgf1
          (undefined1 *param_1,int param_2,void *param_3,uint param_4,void *param_5,int param_6,
          EVP_MD *param_7,EVP_MD *param_8)

{
  uchar *md;
  EVP_MD *dgst;
  uint num;
  uint num_00;
  int iVar1;
  int iVar2;
  uchar *mask;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  uchar *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte local_a0 [8];
  undefined8 auStack_98 [7];
  
  iVar2 = param_2 + -1;
  if (param_7 == (EVP_MD *)0x0) {
    param_7 = EVP_sha1();
  }
  dgst = param_7;
  if (param_8 != (EVP_MD *)0x0) {
    dgst = param_8;
  }
  num_00 = EVP_MD_size(param_7);
  if ((int)(iVar2 + num_00 * -2) <= (int)param_4) {
    iVar2 = 0x6e;
    iVar1 = 0x3c;
LAB_00be2e34:
    ERR_put_error(4,0x9a,iVar2,"crypto/rsa/rsa_oaep.c",iVar1);
    return 0;
  }
  if (param_2 <= (int)(num_00 * 2 | 1)) {
    iVar2 = 0x78;
    iVar1 = 0x42;
    goto LAB_00be2e34;
  }
  lVar11 = (long)(int)num_00;
  *param_1 = 0;
  md = param_1 + lVar11 + 1;
  iVar1 = EVP_Digest(param_5,(long)param_6,md,(uint *)0x0,param_7,(ENGINE *)0x0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (iVar2 - param_4) + -1;
  memset(md + lVar11,0,(long)(int)(iVar1 + num_00 * -2));
  md[(int)(iVar1 - num_00)] = '\x01';
  memcpy(md + (((long)iVar2 - (long)(int)param_4) - lVar11),param_3,(ulong)param_4);
  iVar1 = RAND_bytes(param_1 + 1,num_00);
  if (iVar1 < 1) {
    return 0;
  }
  num = iVar2 - num_00;
  mask = CRYPTO_malloc(num,"crypto/rsa/rsa_oaep.c",0x57);
  if (mask == (uchar *)0x0) {
    iVar2 = 0x41;
    iVar1 = 0x59;
    goto LAB_00be2e34;
  }
  iVar2 = PKCS1_MGF1(mask,(long)(int)num,param_1 + 1,lVar11,dgst);
  if (iVar2 < 0) {
    return 0;
  }
  if (0 < (int)num) {
    uVar3 = (ulong)num;
    if (num < 0x20) {
LAB_00be2d98:
      lVar5 = 0;
    }
    else {
      lVar5 = uVar3 - (num & 0x1f);
      if (lVar5 != 0) {
        if ((md < mask + uVar3) && (mask < param_1 + lVar11 + uVar3 + 1)) goto LAB_00be2d98;
        puVar9 = mask + 0x10;
        puVar8 = (undefined8 *)(param_1 + lVar11 + 0x11);
        lVar4 = lVar5;
        do {
          uVar13 = *(undefined8 *)(puVar9 + -8);
          uVar12 = *(undefined8 *)(puVar9 + -0x10);
          uVar15 = *(undefined8 *)(puVar9 + 8);
          uVar14 = *(undefined8 *)puVar9;
          uVar17 = puVar8[-1];
          uVar16 = puVar8[-2];
          uVar19 = puVar8[1];
          uVar18 = *puVar8;
          puVar9 = puVar9 + 0x20;
          lVar4 = lVar4 + -0x20;
          puVar8[-1] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                                CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                         (byte)((ulong)uVar13 >> 0x30),
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
          puVar8[-2] = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38),
                                CONCAT16((byte)((ulong)uVar16 >> 0x30) ^
                                         (byte)((ulong)uVar12 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                  (byte)((ulong)uVar12 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                           (byte)((ulong)uVar12 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                    (byte)((ulong)uVar12 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar16 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar12 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar12)))))));
          puVar8[1] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                               CONCAT16((byte)((ulong)uVar19 >> 0x30) ^
                                        (byte)((ulong)uVar15 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
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
          *puVar8 = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                             CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
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
          puVar8 = puVar8 + 4;
        } while (lVar4 != 0);
        if ((num & 0x1f) == 0) goto LAB_00be2dc8;
      }
    }
    pbVar7 = param_1 + lVar5 + lVar11;
    lVar4 = uVar3 - lVar5;
    pbVar6 = mask + lVar5;
    do {
      pbVar7 = pbVar7 + 1;
      lVar4 = lVar4 + -1;
      *pbVar7 = *pbVar7 ^ *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (lVar4 != 0);
  }
LAB_00be2dc8:
  iVar2 = PKCS1_MGF1(local_a0,lVar11,md,(long)(int)num,dgst);
  if (iVar2 < 0) {
    return 0;
  }
  if (0 < (int)num_00) {
    if (num_00 < 0x20) {
      lVar11 = 0;
    }
    else {
      lVar11 = (ulong)num_00 - (ulong)(num_00 & 0x1f);
      if (lVar11 != 0) {
        puVar8 = auStack_98 + 1;
        puVar10 = (undefined8 *)(param_1 + 0x11);
        lVar5 = lVar11;
        do {
          uVar13 = puVar8[-1];
          uVar12 = puVar8[-2];
          uVar15 = puVar8[1];
          uVar14 = *puVar8;
          uVar17 = puVar10[-1];
          uVar16 = puVar10[-2];
          uVar19 = puVar10[1];
          uVar18 = *puVar10;
          puVar8 = puVar8 + 4;
          lVar5 = lVar5 + -0x20;
          puVar10[-1] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                          (byte)((ulong)uVar13 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                   (byte)((ulong)uVar13 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                            (byte)((ulong)uVar13 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                     (byte)((ulong)uVar13 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar17
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar13
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar17 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar13)))))));
          puVar10[-2] = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar16 >> 0x30) ^
                                          (byte)((ulong)uVar12 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                   (byte)((ulong)uVar12 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                            (byte)((ulong)uVar12 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                     (byte)((ulong)uVar12 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar16
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar12
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar16 >> 8) ^ (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar12)))))));
          puVar10[1] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                                CONCAT16((byte)((ulong)uVar19 >> 0x30) ^
                                         (byte)((ulong)uVar15 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
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
          *puVar10 = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
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
          puVar10 = puVar10 + 4;
        } while (lVar5 != 0);
        if ((num_00 & 0x1f) == 0) goto LAB_00be2ee8;
      }
    }
    pbVar7 = param_1 + lVar11;
    lVar5 = (ulong)num_00 - lVar11;
    pbVar6 = local_a0 + lVar11;
    do {
      pbVar7 = pbVar7 + 1;
      lVar5 = lVar5 + -1;
      *pbVar7 = *pbVar7 ^ *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (lVar5 != 0);
  }
LAB_00be2ee8:
  CRYPTO_free(mask);
  return 1;
}

