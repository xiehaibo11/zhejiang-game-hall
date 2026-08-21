
int EVP_BytesToKey(EVP_CIPHER *type,EVP_MD *md,uchar *salt,uchar *data,int datal,int count,
                  uchar *key,uchar *iv)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  EVP_MD_CTX *ctx;
  uint uVar5;
  ulong uVar6;
  uchar *puVar7;
  int local_a8;
  uint local_a4;
  uchar local_a0 [64];
  
  local_a4 = 0;
  iVar1 = EVP_CIPHER_key_length(type);
  iVar2 = EVP_CIPHER_iv_length(type);
  if (0x40 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: nkey <= EVP_MAX_KEY_LENGTH","crypto/evp/evp_key.c",0x56);
  }
  if (0x10 < iVar2) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: niv <= EVP_MAX_IV_LENGTH","crypto/evp/evp_key.c",0x57);
  }
  if (data != (uchar *)0x0) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (ctx == (EVP_MD_CTX *)0x0) {
LAB_00bcb9fc:
      iVar1 = 0;
    }
    else {
      iVar3 = 0;
      if (salt == (uchar *)0x0) {
LAB_00bcb8b8:
        do {
          iVar4 = EVP_DigestInit_ex(ctx,md,(ENGINE *)0x0);
          if (((iVar4 == 0) ||
              (((iVar3 != 0 && (iVar4 = EVP_DigestUpdate(ctx,local_a0,(ulong)local_a4), iVar4 == 0))
               || (iVar4 = EVP_DigestUpdate(ctx,data,(long)datal), iVar4 == 0)))) ||
             (iVar4 = EVP_DigestFinal_ex(ctx,local_a0,&local_a4), iVar4 == 0)) goto LAB_00bcb9fc;
          if (1 < (uint)count) {
            uVar5 = 1;
            do {
              iVar4 = EVP_DigestInit_ex(ctx,md,(ENGINE *)0x0);
              if (((iVar4 == 0) ||
                  (iVar4 = EVP_DigestUpdate(ctx,local_a0,(ulong)local_a4), iVar4 == 0)) ||
                 (iVar4 = EVP_DigestFinal_ex(ctx,local_a0,&local_a4), iVar4 == 0))
              goto LAB_00bcb9fc;
              uVar5 = uVar5 + 1;
            } while (uVar5 < (uint)count);
          }
          if (iVar1 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            puVar7 = key;
            do {
              key = puVar7;
              if (uVar6 == local_a4) break;
              if (puVar7 != (uchar *)0x0) {
                key = puVar7 + 1;
                *puVar7 = local_a0[uVar6];
              }
              iVar1 = iVar1 + -1;
              uVar6 = uVar6 + 1;
              puVar7 = key;
            } while (iVar1 != 0);
          }
          iVar3 = iVar3 + 1;
          if (iVar2 != 0) {
            uVar5 = (uint)uVar6;
            puVar7 = iv;
            while (iv = puVar7, uVar5 != local_a4) {
              if (puVar7 != (uchar *)0x0) {
                iv = puVar7 + 1;
                *puVar7 = local_a0[uVar6 & 0xffffffff];
              }
              iVar2 = iVar2 + -1;
              if (iVar2 == 0) {
                iVar2 = 0;
                if (iVar1 != 0) goto LAB_00bcb8b8;
                goto LAB_00bcb9ec;
              }
              uVar5 = (int)uVar6 + 1;
              uVar6 = (ulong)uVar5;
              puVar7 = iv;
            }
          }
        } while (iVar2 != 0 || iVar1 != 0);
      }
      else {
        local_a8 = 0;
        do {
          iVar3 = EVP_DigestInit_ex(ctx,md,(ENGINE *)0x0);
          if (((iVar3 == 0) ||
              ((local_a8 != 0 &&
               (iVar3 = EVP_DigestUpdate(ctx,local_a0,(ulong)local_a4), iVar3 == 0)))) ||
             ((iVar3 = EVP_DigestUpdate(ctx,data,(long)datal), iVar3 == 0 ||
              ((iVar3 = EVP_DigestUpdate(ctx,salt,8), iVar3 == 0 ||
               (iVar3 = EVP_DigestFinal_ex(ctx,local_a0,&local_a4), iVar3 == 0))))))
          goto LAB_00bcb9fc;
          if (1 < (uint)count) {
            uVar5 = 1;
            do {
              iVar3 = EVP_DigestInit_ex(ctx,md,(ENGINE *)0x0);
              if (((iVar3 == 0) ||
                  (iVar3 = EVP_DigestUpdate(ctx,local_a0,(ulong)local_a4), iVar3 == 0)) ||
                 (iVar3 = EVP_DigestFinal_ex(ctx,local_a0,&local_a4), iVar3 == 0))
              goto LAB_00bcb9fc;
              uVar5 = uVar5 + 1;
            } while (uVar5 < (uint)count);
          }
          if (iVar1 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            puVar7 = key;
            do {
              key = puVar7;
              if (uVar6 == local_a4) break;
              if (puVar7 != (uchar *)0x0) {
                key = puVar7 + 1;
                *puVar7 = local_a0[uVar6];
              }
              iVar1 = iVar1 + -1;
              uVar6 = uVar6 + 1;
              puVar7 = key;
            } while (iVar1 != 0);
          }
          local_a8 = local_a8 + 1;
          if (iVar2 != 0) {
            uVar5 = (uint)uVar6;
            puVar7 = iv;
            while (iv = puVar7, uVar5 != local_a4) {
              if (puVar7 != (uchar *)0x0) {
                iv = puVar7 + 1;
                *puVar7 = local_a0[uVar6 & 0xffffffff];
              }
              iVar2 = iVar2 + -1;
              if (iVar2 == 0) {
                iVar2 = 0;
                break;
              }
              uVar5 = (int)uVar6 + 1;
              uVar6 = (ulong)uVar5;
              puVar7 = iv;
            }
          }
        } while (iVar2 != 0 || iVar1 != 0);
      }
LAB_00bcb9ec:
      iVar1 = EVP_CIPHER_key_length(type);
    }
    EVP_MD_CTX_free(ctx);
    OPENSSL_cleanse(local_a0,0x40);
  }
  return iVar1;
}

