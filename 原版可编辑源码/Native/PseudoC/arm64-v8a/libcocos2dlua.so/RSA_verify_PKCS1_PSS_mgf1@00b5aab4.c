
int RSA_verify_PKCS1_PSS_mgf1
              (RSA *rsa,uchar *mHash,EVP_MD *Hash,EVP_MD *mgf1Hash,uchar *EM,int sLen)

{
  long lVar1;
  uint uVar2;
  EVP_MD *dgst;
  ulong uVar3;
  int num;
  int iVar4;
  int iVar5;
  int iVar6;
  EVP_MD_CTX *ctx;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *mask;
  long lVar11;
  size_t cnt;
  ulong len;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uchar auStack_a0 [64];
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    dgst = Hash;
    if (mgf1Hash != (EVP_MD *)0x0) {
      dgst = mgf1Hash;
    }
    iVar4 = EVP_MD_size(Hash);
    if (-1 < iVar4) {
      iVar6 = iVar4;
      if (((sLen == -1) || (iVar6 = sLen, sLen == -2)) || (-3 < sLen)) {
        iVar5 = BN_num_bits(rsa->n);
        uVar2 = iVar5 + 7U & 7;
        iVar5 = RSA_size(rsa);
        if ((0xff << (ulong)uVar2 & (uint)*EM) == 0) {
          iVar5 = iVar5 - (uint)(uVar2 == 0);
          if (uVar2 == 0) {
            EM = EM + 1;
          }
          if (iVar5 < iVar4 + iVar6 + 2) {
            iVar4 = 0x6d;
            iVar6 = 0x50;
          }
          else {
            if (EM[(long)iVar5 + -1] == 0xbc) {
              iVar5 = iVar5 - iVar4;
              num = iVar5 + -1;
              len = (ulong)num;
              mask = CRYPTO_malloc(num,"crypto/rsa/rsa_pss.c",0x59);
              if (mask == (byte *)0x0) {
                iVar4 = 0x41;
                iVar6 = 0x5b;
LAB_00b5ade8:
                ERR_put_error(4,0x7e,iVar4,"crypto/rsa/rsa_pss.c",iVar6);
              }
              else {
                cnt = (size_t)iVar4;
                iVar4 = PKCS1_MGF1(mask,len,EM + len,cnt,dgst);
                if (-1 < iVar4) {
                  if (1 < iVar5) {
                    uVar3 = len;
                    if ((long)len < 2) {
                      uVar3 = 1;
                    }
                    if (uVar3 < 0x20) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = uVar3 & 0x7fffffffffffffe0;
                      if (uVar7 != 0) {
                        uVar10 = len;
                        if ((long)len < 2) {
                          uVar10 = 1;
                        }
                        if ((mask < EM + uVar10) && (EM < mask + uVar10)) {
                          uVar7 = 0;
                        }
                        else {
                          pbVar8 = EM + 0x10;
                          pbVar9 = mask + 0x10;
                          uVar10 = uVar7;
                          do {
                            uVar14 = *(undefined8 *)(pbVar8 + -8);
                            uVar13 = *(undefined8 *)(pbVar8 + -0x10);
                            uVar16 = *(undefined8 *)(pbVar8 + 8);
                            uVar15 = *(undefined8 *)pbVar8;
                            uVar18 = *(undefined8 *)(pbVar9 + -8);
                            uVar17 = *(undefined8 *)(pbVar9 + -0x10);
                            uVar20 = *(undefined8 *)(pbVar9 + 8);
                            uVar19 = *(undefined8 *)pbVar9;
                            pbVar8 = pbVar8 + 0x20;
                            uVar10 = uVar10 - 0x20;
                            *(ulong *)(pbVar9 + -8) =
                                 CONCAT17((byte)((ulong)uVar18 >> 0x38) ^
                                          (byte)((ulong)uVar14 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                                   (byte)((ulong)uVar14 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                            (byte)((ulong)uVar14 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                                     (byte)((ulong)uVar14 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar18
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar14
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar18 >> 0x10) ^ (byte)((ulong)uVar14 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar18 >> 8) ^
                                                           (byte)((ulong)uVar14 >> 8),
                                                           (byte)uVar18 ^ (byte)uVar14)))))));
                            *(ulong *)(pbVar9 + -0x10) =
                                 CONCAT17((byte)((ulong)uVar17 >> 0x38) ^
                                          (byte)((ulong)uVar13 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                                   (byte)((ulong)uVar13 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                            (byte)((ulong)uVar13 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                                     (byte)((ulong)uVar13 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar17
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar13
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar17 >> 0x10) ^ (byte)((ulong)uVar13 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar17 >> 8) ^
                                                           (byte)((ulong)uVar13 >> 8),
                                                           (byte)uVar17 ^ (byte)uVar13)))))));
                            *(ulong *)(pbVar9 + 8) =
                                 CONCAT17((byte)((ulong)uVar20 >> 0x38) ^
                                          (byte)((ulong)uVar16 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                                   (byte)((ulong)uVar16 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                            (byte)((ulong)uVar16 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                                     (byte)((ulong)uVar16 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar20
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar16
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar20 >> 0x10) ^ (byte)((ulong)uVar16 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                           (byte)((ulong)uVar16 >> 8),
                                                           (byte)uVar20 ^ (byte)uVar16)))))));
                            *(ulong *)pbVar9 =
                                 CONCAT17((byte)((ulong)uVar19 >> 0x38) ^
                                          (byte)((ulong)uVar15 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar19 >> 0x30) ^
                                                   (byte)((ulong)uVar15 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                            (byte)((ulong)uVar15 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                                     (byte)((ulong)uVar15 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar19
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar15
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar19 >> 0x10) ^ (byte)((ulong)uVar15 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar19 >> 8) ^
                                                           (byte)((ulong)uVar15 >> 8),
                                                           (byte)uVar19 ^ (byte)uVar15)))))));
                            pbVar9 = pbVar9 + 0x20;
                          } while (uVar10 != 0);
                          if (uVar3 == uVar7) goto LAB_00b5ad54;
                        }
                      }
                    }
                    do {
                      mask[uVar7] = mask[uVar7] ^ EM[uVar7];
                      uVar7 = uVar7 + 1;
                    } while ((long)uVar7 < (long)len);
                  }
LAB_00b5ad54:
                  if (uVar2 != 0) {
                    *mask = (byte)(0xff >> (ulong)(8 - uVar2 & 0x1f)) & *mask;
                  }
                  lVar11 = 0;
                  lVar12 = 0;
                  do {
                    pbVar8 = mask + lVar12;
                    lVar1 = lVar12 + 1;
                    lVar11 = lVar11 + 0x100000000;
                    if (iVar5 + -2 <= lVar12) break;
                    lVar12 = lVar1;
                  } while (*pbVar8 == 0);
                  if (*pbVar8 == 1) {
                    iVar4 = (int)lVar1;
                    if ((iVar6 < 0) || (num - iVar6 == iVar4)) {
                      iVar6 = EVP_DigestInit_ex(ctx,Hash,(ENGINE *)0x0);
                      if ((((iVar6 == 0) ||
                           ((iVar6 = EVP_DigestUpdate(ctx,&DAT_013ed9d8,8), iVar6 == 0 ||
                            (iVar6 = EVP_DigestUpdate(ctx,mHash,cnt), iVar6 == 0)))) ||
                          ((num != iVar4 &&
                           (iVar4 = EVP_DigestUpdate(ctx,mask + (lVar11 >> 0x20),(long)(num - iVar4)
                                                    ), iVar4 == 0)))) ||
                         (iVar4 = EVP_DigestFinal_ex(ctx,auStack_a0,(uint *)0x0), iVar4 == 0))
                      goto LAB_00b5adec;
                      iVar4 = memcmp(auStack_a0,EM + len,cnt);
                      if (iVar4 == 0) {
                        iVar4 = 1;
                        goto LAB_00b5ac74;
                      }
                      iVar4 = 0x68;
                      iVar6 = 0x78;
                    }
                    else {
                      iVar4 = 0x88;
                      iVar6 = 0x6a;
                    }
                  }
                  else {
                    iVar4 = 0x87;
                    iVar6 = 0x66;
                  }
                  goto LAB_00b5ade8;
                }
              }
LAB_00b5adec:
              iVar4 = 0;
              goto LAB_00b5ac74;
            }
            iVar4 = 0x86;
            iVar6 = 0x54;
          }
        }
        else {
          iVar4 = 0x85;
          iVar6 = 0x48;
        }
      }
      else {
        iVar4 = 0x88;
        iVar6 = 0x41;
      }
      ERR_put_error(4,0x7e,iVar4,"crypto/rsa/rsa_pss.c",iVar6);
    }
  }
  iVar4 = 0;
  mask = (byte *)0x0;
LAB_00b5ac74:
  CRYPTO_free(mask);
  EVP_MD_CTX_free(ctx);
  return iVar4;
}

