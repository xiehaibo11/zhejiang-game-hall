
int RSA_padding_add_PKCS1_PSS_mgf1
              (RSA *rsa,uchar *EM,uchar *mHash,EVP_MD *Hash,EVP_MD *mgf1Hash,int sLen)

{
  uint uVar1;
  EVP_MD *dgst;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *buf;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  byte *mask;
  EVP_MD_CTX *ctx;
  uint num;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  dgst = Hash;
  if (mgf1Hash != (EVP_MD *)0x0) {
    dgst = mgf1Hash;
  }
  uVar2 = EVP_MD_size(Hash);
  if ((int)uVar2 < 0) {
LAB_00b5afb8:
    buf = (byte *)0x0;
  }
  else {
    num = uVar2;
    if (sLen != -1) {
      if (sLen == -2) {
        num = 0xfffffffe;
        goto LAB_00b5af44;
      }
      num = sLen;
      if (-3 < sLen) goto LAB_00b5af44;
      iVar3 = 0x88;
      iVar4 = 0xa8;
LAB_00b5afb4:
      ERR_put_error(4,0x98,iVar3,"crypto/rsa/rsa_pss.c",iVar4);
      goto LAB_00b5afb8;
    }
LAB_00b5af44:
    iVar3 = BN_num_bits(rsa->n);
    uVar1 = iVar3 + 7U & 7;
    iVar3 = RSA_size(rsa);
    if (uVar1 == 0) {
      mask = EM + 1;
      *EM = '\0';
      iVar3 = iVar3 + -1;
      if (num == 0xfffffffe) goto LAB_00b5af6c;
LAB_00b5af8c:
      if (iVar3 < (int)(uVar2 + num + 2)) {
        iVar3 = 0x6e;
        iVar4 = 0xb6;
        goto LAB_00b5afb4;
      }
    }
    else {
      mask = EM;
      if (num != 0xfffffffe) goto LAB_00b5af8c;
LAB_00b5af6c:
      num = (-2 - uVar2) + iVar3;
    }
    if ((int)num < 1) {
      buf = (byte *)0x0;
LAB_00b5b008:
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (((ctx != (EVP_MD_CTX *)0x0) &&
          (iVar4 = EVP_DigestInit_ex(ctx,Hash,(ENGINE *)0x0), iVar4 != 0)) &&
         (iVar4 = EVP_DigestUpdate(ctx,&DAT_013ed9d8,8), iVar4 != 0)) {
        iVar4 = EVP_DigestUpdate(ctx,mHash,(long)(int)uVar2);
        if ((iVar4 != 0) &&
           ((num == 0 || (iVar4 = EVP_DigestUpdate(ctx,buf,(long)(int)num), iVar4 != 0)))) {
          iVar4 = EVP_DigestFinal_ex(ctx,mask + (int)(iVar3 + ~uVar2),(uint *)0x0);
          if ((iVar4 != 0) &&
             (iVar4 = PKCS1_MGF1(mask,(long)(int)(iVar3 + ~uVar2),mask + (int)(iVar3 + ~uVar2),
                                 (long)(int)uVar2,dgst), iVar4 == 0)) {
            lVar9 = (long)(int)(((-2 - uVar2) + iVar3) - num);
            pbVar5 = mask + lVar9;
            *pbVar5 = *pbVar5 ^ 1;
            if (0 < (int)num) {
              uVar6 = (ulong)num;
              if (num < 0x20) {
LAB_00b5b188:
                lVar7 = 0;
              }
              else {
                lVar7 = uVar6 - (num & 0x1f);
                if (lVar7 != 0) {
                  if ((mask + lVar9 + 1 < buf + uVar6) && (buf < mask + lVar9 + uVar6 + 1))
                  goto LAB_00b5b188;
                  pbVar5 = pbVar5 + lVar7;
                  pbVar8 = mask + lVar9 + 0x11;
                  pbVar10 = buf + 0x10;
                  lVar9 = lVar7;
                  do {
                    uVar12 = *(undefined8 *)(pbVar10 + -8);
                    uVar11 = *(undefined8 *)(pbVar10 + -0x10);
                    uVar14 = *(undefined8 *)(pbVar10 + 8);
                    uVar13 = *(undefined8 *)pbVar10;
                    uVar16 = *(undefined8 *)(pbVar8 + -8);
                    uVar15 = *(undefined8 *)(pbVar8 + -0x10);
                    uVar18 = *(undefined8 *)(pbVar8 + 8);
                    uVar17 = *(undefined8 *)pbVar8;
                    lVar9 = lVar9 + -0x20;
                    pbVar10 = pbVar10 + 0x20;
                    *(ulong *)(pbVar8 + -8) =
                         CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar16 >> 0x30) ^
                                           (byte)((ulong)uVar12 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                    (byte)((ulong)uVar12 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                             (byte)((ulong)uVar12 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar16 >> 0x18)
                                                                      ^ (byte)((ulong)uVar12 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar16
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar12
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar16 >> 8) ^ (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar12)))))));
                    *(ulong *)(pbVar8 + -0x10) =
                         CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar15 >> 0x30) ^
                                           (byte)((ulong)uVar11 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                    (byte)((ulong)uVar11 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                             (byte)((ulong)uVar11 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar15 >> 0x18)
                                                                      ^ (byte)((ulong)uVar11 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar15
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar11
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar15 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar15 ^ (byte)uVar11)))))));
                    *(ulong *)(pbVar8 + 8) =
                         CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                           (byte)((ulong)uVar14 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                    (byte)((ulong)uVar14 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                             (byte)((ulong)uVar14 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar18 >> 0x18)
                                                                      ^ (byte)((ulong)uVar14 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar18
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar14
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar18 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar14)))))));
                    *(ulong *)pbVar8 =
                         CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                           (byte)((ulong)uVar13 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                    (byte)((ulong)uVar13 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                             (byte)((ulong)uVar13 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar17 >> 0x18)
                                                                      ^ (byte)((ulong)uVar13 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar17
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar13
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar17 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar13)))))));
                    pbVar8 = pbVar8 + 0x20;
                  } while (lVar9 != 0);
                  if ((num & 0x1f) == 0) goto LAB_00b5b1b0;
                }
              }
              lVar9 = uVar6 - lVar7;
              pbVar8 = buf + lVar7;
              do {
                pbVar5 = pbVar5 + 1;
                lVar9 = lVar9 + -1;
                *pbVar5 = *pbVar5 ^ *pbVar8;
                pbVar8 = pbVar8 + 1;
              } while (lVar9 != 0);
            }
LAB_00b5b1b0:
            if (uVar1 != 0) {
              *mask = (byte)(0xff >> (ulong)(8 - uVar1 & 0x1f)) & *mask;
            }
            iVar4 = 1;
            mask[(long)iVar3 + -1] = 0xbc;
            goto LAB_00b5b0b8;
          }
        }
      }
      iVar4 = 0;
      goto LAB_00b5b0b8;
    }
    buf = CRYPTO_malloc(num,"crypto/rsa/rsa_pss.c",0xba);
    if (buf == (byte *)0x0) {
      ERR_put_error(4,0x98,0x41,"crypto/rsa/rsa_pss.c",0xbd);
    }
    else {
      iVar4 = RAND_bytes(buf,num);
      if (0 < iVar4) goto LAB_00b5b008;
    }
  }
  iVar4 = 0;
  ctx = (EVP_MD_CTX *)0x0;
LAB_00b5b0b8:
  EVP_MD_CTX_free(ctx);
  CRYPTO_free(buf);
  return iVar4;
}

