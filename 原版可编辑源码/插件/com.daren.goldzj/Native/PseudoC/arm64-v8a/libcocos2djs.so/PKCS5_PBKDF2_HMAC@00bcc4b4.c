
int PKCS5_PBKDF2_HMAC(char *pass,int passlen,uchar *salt,int saltlen,int iter,EVP_MD *digest,
                     int keylen,uchar *out)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  HMAC_CTX *ctx;
  size_t sVar5;
  HMAC_CTX *dctx;
  ulong uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong __n;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uchar local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  byte local_a0 [16];
  undefined8 auStack_90 [6];
  
  uVar2 = EVP_MD_size(digest);
  if (-1 < (int)uVar2) {
    ctx = (HMAC_CTX *)HMAC_CTX_new();
    if (ctx == (HMAC_CTX *)0x0) {
      return 0;
    }
    if (pass == (char *)0x0) {
      passlen = 0;
    }
    else if (passlen == -1) {
      sVar5 = strlen(pass);
      passlen = (int)sVar5;
    }
    iVar3 = HMAC_Init_ex(ctx,pass,passlen,digest,(ENGINE *)0x0);
    if ((iVar3 != 0) && (dctx = (HMAC_CTX *)HMAC_CTX_new(), dctx != (HMAC_CTX *)0x0)) {
      if (keylen != 0) {
        lVar9 = 1;
        do {
          uVar1 = uVar2;
          if (keylen <= (int)uVar2) {
            uVar1 = keylen;
          }
          local_a4 = (uchar)((ulong)lVar9 >> 0x18);
          local_a3 = (undefined1)((ulong)lVar9 >> 0x10);
          local_a2 = (undefined1)((ulong)lVar9 >> 8);
          local_a1 = (undefined1)lVar9;
          iVar3 = HMAC_CTX_copy(dctx,ctx);
          if ((((iVar3 == 0) || (iVar3 = HMAC_Update(dctx,salt,(long)saltlen), iVar3 == 0)) ||
              (iVar3 = HMAC_Update(dctx,&local_a4,4), iVar3 == 0)) ||
             (iVar3 = HMAC_Final(dctx,local_a0,(uint *)0x0), iVar3 == 0)) {
LAB_00bcc7dc:
            HMAC_CTX_free(dctx);
            goto LAB_00bcc7e4;
          }
          HMAC_CTX_reset(dctx);
          __n = (ulong)(int)uVar1;
          memcpy(out,local_a0,__n);
          if (1 < iter) {
            if ((int)uVar1 < 1) {
              iVar3 = 1;
              do {
                iVar4 = HMAC_CTX_copy(dctx,ctx);
                if (((iVar4 == 0) ||
                    (iVar4 = HMAC_Update(dctx,local_a0,(long)(int)uVar2), iVar4 == 0)) ||
                   (iVar4 = HMAC_Final(dctx,local_a0,(uint *)0x0), iVar4 == 0)) goto LAB_00bcc7dc;
                HMAC_CTX_reset(dctx);
                iVar3 = iVar3 + 1;
              } while (iVar3 < iter);
            }
            else {
              uVar10 = __n & 0xffffffffffffffe0;
              iVar3 = 1;
              do {
                iVar4 = HMAC_CTX_copy(dctx,ctx);
                if (((iVar4 == 0) ||
                    (iVar4 = HMAC_Update(dctx,local_a0,(long)(int)uVar2), iVar4 == 0)) ||
                   (iVar4 = HMAC_Final(dctx,local_a0,(uint *)0x0), iVar4 == 0)) goto LAB_00bcc7dc;
                HMAC_CTX_reset(dctx);
                uVar6 = uVar10;
                pbVar7 = out + 0x10;
                puVar8 = auStack_90;
                if ((uVar1 < 0x20 || uVar10 == 0) || out < local_a0 + __n && local_a0 < out + __n) {
                  uVar6 = 0;
LAB_00bcc728:
                  do {
                    out[uVar6] = out[uVar6] ^ local_a0[uVar6];
                    uVar6 = uVar6 + 1;
                  } while ((long)uVar6 < (long)__n);
                }
                else {
                  do {
                    uVar12 = puVar8[-1];
                    uVar11 = puVar8[-2];
                    uVar14 = puVar8[1];
                    uVar13 = *puVar8;
                    uVar16 = *(undefined8 *)(pbVar7 + -8);
                    uVar15 = *(undefined8 *)(pbVar7 + -0x10);
                    uVar18 = *(undefined8 *)(pbVar7 + 8);
                    uVar17 = *(undefined8 *)pbVar7;
                    uVar6 = uVar6 - 0x20;
                    *(ulong *)(pbVar7 + -8) =
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
                    *(ulong *)(pbVar7 + -0x10) =
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
                    *(ulong *)(pbVar7 + 8) =
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
                    *(ulong *)pbVar7 =
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
                    pbVar7 = pbVar7 + 0x20;
                    puVar8 = puVar8 + 4;
                  } while (uVar6 != 0);
                  uVar6 = uVar10;
                  if (uVar10 != __n) goto LAB_00bcc728;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < iter);
            }
          }
          out = out + __n;
          keylen = keylen - uVar1;
          lVar9 = lVar9 + 1;
        } while (keylen != 0);
      }
      HMAC_CTX_free(dctx);
      HMAC_CTX_free(ctx);
      return 1;
    }
LAB_00bcc7e4:
    HMAC_CTX_free(ctx);
  }
  return 0;
}

