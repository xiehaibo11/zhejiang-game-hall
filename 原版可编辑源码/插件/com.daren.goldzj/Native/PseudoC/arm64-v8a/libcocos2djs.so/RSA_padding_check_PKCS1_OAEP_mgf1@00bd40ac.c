
int RSA_padding_check_PKCS1_OAEP_mgf1
              (void *param_1,int param_2,void *param_3,int param_4,int param_5,void *param_6,
              int param_7,EVP_MD *param_8,EVP_MD *param_9)

{
  uint uVar1;
  uint uVar2;
  EVP_MD *dgst;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong seedlen;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int iVar18;
  byte *pbVar19;
  byte *mask;
  size_t len;
  byte *__s;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uchar auStack_e0 [64];
  byte local_a0 [8];
  undefined8 auStack_98 [7];
  
  if (param_8 == (EVP_MD *)0x0) {
    param_8 = EVP_sha1();
  }
  dgst = param_8;
  if (param_9 != (EVP_MD *)0x0) {
    dgst = param_9;
  }
  uVar5 = EVP_MD_size(param_8);
  if (param_2 < 1) {
    return -1;
  }
  if (param_4 < 1) {
    return -1;
  }
  if ((param_5 < param_4) || (param_5 < (int)(uVar5 * 2 + 2))) {
    mask = (byte *)0x0;
    __s = (byte *)0x0;
LAB_00bd4144:
    ERR_put_error(4,0x99,0x79,"crypto/rsa/rsa_oaep.c",0xec);
  }
  else {
    iVar18 = (param_5 - uVar5) + -1;
    seedlen = (ulong)iVar18;
    mask = CRYPTO_malloc(iVar18,"crypto/rsa/rsa_oaep.c",0x99);
    __s = CRYPTO_malloc(param_5,"crypto/rsa/rsa_oaep.c",0x9a);
    if ((mask == (byte *)0x0) || (__s == (byte *)0x0)) {
      ERR_put_error(4,0x99,0x41,"crypto/rsa/rsa_oaep.c",0x9c);
      iVar18 = -1;
      goto LAB_00bd4164;
    }
    memset(__s,0,(long)param_5);
    memcpy(__s + ((long)param_5 - (long)param_4),param_3,(long)param_4);
    pbVar19 = __s + 1;
    bVar3 = *__s;
    len = (size_t)(int)uVar5;
    iVar6 = PKCS1_MGF1(local_a0,len,pbVar19 + len,seedlen,dgst);
    if (iVar6 == 0) {
      if (0 < (int)uVar5) {
        uVar8 = (ulong)uVar5;
        if (uVar5 < 0x20) {
LAB_00bd42d8:
          lVar12 = 0;
        }
        else {
          lVar12 = uVar8 - (uVar5 & 0x1f);
          if (lVar12 != 0) {
            if ((local_a0 < __s + uVar8 + 1) && (pbVar19 < local_a0 + uVar8)) goto LAB_00bd42d8;
            pbVar14 = __s + 0x11;
            puVar16 = auStack_98 + 1;
            lVar9 = lVar12;
            do {
              uVar21 = *(undefined8 *)(pbVar14 + -8);
              uVar20 = *(undefined8 *)(pbVar14 + -0x10);
              uVar23 = *(undefined8 *)(pbVar14 + 8);
              uVar22 = *(undefined8 *)pbVar14;
              uVar25 = puVar16[-1];
              uVar24 = puVar16[-2];
              uVar27 = puVar16[1];
              uVar26 = *puVar16;
              pbVar14 = pbVar14 + 0x20;
              lVar9 = lVar9 + -0x20;
              puVar16[-1] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                              (byte)((ulong)uVar21 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                       (byte)((ulong)uVar21 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                                (byte)((ulong)uVar21 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar25 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar21 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar25 >> 0x10) ^ (byte)((ulong)uVar21 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar25 >> 8) ^
                                                           (byte)((ulong)uVar21 >> 8),
                                                           (byte)uVar25 ^ (byte)uVar21)))))));
              puVar16[-2] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                              (byte)((ulong)uVar20 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                       (byte)((ulong)uVar20 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                                (byte)((ulong)uVar20 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar24 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar20 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar24 >> 0x10) ^ (byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar24 >> 8) ^
                                                           (byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar24 ^ (byte)uVar20)))))));
              puVar16[1] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                             (byte)((ulong)uVar23 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                      (byte)((ulong)uVar23 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                               (byte)((ulong)uVar23 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar27 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar23 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                           (byte)((ulong)uVar23 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar27 >> 8) ^
                                                                    (byte)((ulong)uVar23 >> 8),
                                                                    (byte)uVar27 ^ (byte)uVar23)))))
                                            ));
              *puVar16 = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                           (byte)((ulong)uVar22 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                    (byte)((ulong)uVar22 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                             (byte)((ulong)uVar22 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar26 >> 0x18)
                                                                      ^ (byte)((ulong)uVar22 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar26
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar22
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar26 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar22)))))));
              puVar16 = puVar16 + 4;
            } while (lVar9 != 0);
            if ((uVar5 & 0x1f) == 0) goto LAB_00bd4308;
          }
        }
        pbVar14 = __s + lVar12;
        lVar9 = uVar8 - lVar12;
        pbVar15 = local_a0 + lVar12;
        do {
          pbVar14 = pbVar14 + 1;
          lVar9 = lVar9 + -1;
          *pbVar15 = *pbVar15 ^ *pbVar14;
          pbVar15 = pbVar15 + 1;
        } while (lVar9 != 0);
      }
LAB_00bd4308:
      iVar6 = PKCS1_MGF1(mask,seedlen,local_a0,len,dgst);
      if (iVar6 == 0) {
        if (1 < (int)(param_5 - uVar5)) {
          uVar8 = seedlen;
          if ((long)seedlen < 2) {
            uVar8 = 1;
          }
          if (uVar8 < 0x20) {
LAB_00bd4374:
            uVar10 = 0;
          }
          else {
            uVar10 = uVar8 & 0x7fffffffffffffe0;
            if (uVar10 != 0) {
              uVar17 = seedlen;
              if ((long)seedlen < 2) {
                uVar17 = 1;
              }
              if ((mask < __s + uVar17 + len + 1) && (pbVar19 + len < mask + uVar17))
              goto LAB_00bd4374;
              pbVar19 = __s + len + 0x11;
              pbVar14 = mask + 0x10;
              uVar17 = uVar10;
              do {
                uVar21 = *(undefined8 *)(pbVar19 + -8);
                uVar20 = *(undefined8 *)(pbVar19 + -0x10);
                uVar23 = *(undefined8 *)(pbVar19 + 8);
                uVar22 = *(undefined8 *)pbVar19;
                uVar25 = *(undefined8 *)(pbVar14 + -8);
                uVar24 = *(undefined8 *)(pbVar14 + -0x10);
                uVar27 = *(undefined8 *)(pbVar14 + 8);
                uVar26 = *(undefined8 *)pbVar14;
                pbVar19 = pbVar19 + 0x20;
                uVar17 = uVar17 - 0x20;
                *(ulong *)(pbVar14 + -8) =
                     CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                              CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                 (byte)((ulong)uVar21 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                          (byte)((ulong)uVar21 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                                   (byte)((ulong)uVar21 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar25 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar21 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar25 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar25 ^ (byte)uVar21)))))));
                *(ulong *)(pbVar14 + -0x10) =
                     CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                              CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                 (byte)((ulong)uVar20 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                          (byte)((ulong)uVar20 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                                   (byte)((ulong)uVar20 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar24 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar20 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) ^ (byte)((ulong)uVar20 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar20)))))));
                *(ulong *)(pbVar14 + 8) =
                     CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                              CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                 (byte)((ulong)uVar23 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                          (byte)((ulong)uVar23 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                   (byte)((ulong)uVar23 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar27 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar23 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar23)))))));
                *(ulong *)pbVar14 =
                     CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                              CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ (byte)((ulong)uVar22 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                 (byte)((ulong)uVar22 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                          (byte)((ulong)uVar22 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                                   (byte)((ulong)uVar22 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar26 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar22 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar26 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar22)))))));
                pbVar14 = pbVar14 + 0x20;
              } while (uVar17 != 0);
              if (uVar8 == uVar10) goto LAB_00bd439c;
            }
          }
          do {
            mask[uVar10] = mask[uVar10] ^ __s[uVar10 + len + 1];
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)seedlen);
        }
LAB_00bd439c:
        iVar6 = EVP_Digest(param_6,(long)param_7,auStack_e0,(uint *)0x0,param_8,(ENGINE *)0x0);
        if (iVar6 != 0) {
          uVar7 = CRYPTO_memcmp(mask,auStack_e0,len);
          uVar7 = (int)(bVar3 - 1 & (uVar7 ^ 0xffffffff) & uVar7 - 1) >> 0x1f;
          uVar11 = 0;
          if ((int)uVar5 < iVar18) {
            uVar13 = 0;
            lVar12 = seedlen - len;
            pbVar19 = mask + len;
            do {
              uVar2 = uVar5 & (uVar11 ^ 0xffffffff);
              lVar12 = lVar12 + -1;
              uVar5 = uVar5 + 1;
              uVar1 = (int)((*pbVar19 ^ 1) - 1) >> 0x1f;
              uVar4 = uVar11 | uVar1 ^ 0xffffffff;
              uVar11 = uVar1 | uVar11;
              uVar13 = uVar4 & uVar13 | uVar2 & uVar1;
              uVar7 = (uVar11 | (int)(*pbVar19 - 1) >> 0x1f) & uVar7;
              pbVar19 = pbVar19 + 1;
            } while (lVar12 != 0);
            if ((uVar11 & uVar7) != 0) {
              iVar18 = iVar18 - (uVar13 + 1);
              if (iVar18 <= param_2) {
                memcpy(param_1,mask + (int)(uVar13 + 1),(long)iVar18);
                goto LAB_00bd4164;
              }
              ERR_put_error(4,0x99,0x6d,"crypto/rsa/rsa_oaep.c",0xdf);
            }
          }
          goto LAB_00bd4144;
        }
      }
    }
  }
  iVar18 = -1;
LAB_00bd4164:
  CRYPTO_free(mask);
  CRYPTO_free(__s);
  return iVar18;
}

