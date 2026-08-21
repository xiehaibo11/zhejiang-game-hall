
int PKCS12_key_gen_uni(uchar *pass,int passlen,uchar *salt,int saltlen,int id,int iter,int n,
                      uchar *out,EVP_MD *md_type)

{
  int num;
  int iVar1;
  uint num_00;
  int iVar2;
  int iVar3;
  int iVar4;
  EVP_MD_CTX *ctx;
  size_t cnt;
  BIGNUM *pBVar5;
  uchar *s;
  int iVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  uchar *md;
  void *d;
  uchar *local_c8;
  int local_bc;
  BIGNUM *local_80;
  uchar *local_78;
  BIGNUM *local_70;
  void *local_68;
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    md = (uchar *)0x0;
    d = (void *)0x0;
    local_68 = (void *)0x0;
    local_78 = (uchar *)0x0;
    local_70 = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
  }
  else {
    num_00 = EVP_MD_block_size(md_type);
    iVar2 = EVP_MD_size(md_type);
    md = (uchar *)0x0;
    if ((int)num_00 < 1) {
      d = (void *)0x0;
      local_68 = (void *)0x0;
      local_78 = (uchar *)0x0;
      local_70 = (BIGNUM *)0x0;
      local_80 = (BIGNUM *)0x0;
    }
    else {
      d = (void *)0x0;
      local_80 = (BIGNUM *)0x0;
      local_68 = (void *)0x0;
      local_78 = (uchar *)0x0;
      local_70 = (BIGNUM *)0x0;
      if (-1 < iVar2) {
        cnt = (size_t)(int)num_00;
        local_68 = CRYPTO_malloc(num_00,"crypto/pkcs12/p12_key.c",0x6b);
        md = CRYPTO_malloc(iVar2,"crypto/pkcs12/p12_key.c",0x6c);
        local_78 = CRYPTO_malloc(num_00 + 1,"crypto/pkcs12/p12_key.c",0x6d);
        iVar4 = saltlen + num_00 + -1;
        iVar3 = 0;
        if (num_00 != 0) {
          iVar3 = iVar4 / (int)num_00;
        }
        iVar3 = iVar3 * num_00;
        if (passlen == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = 0;
          if (num_00 != 0) {
            iVar6 = (int)(passlen + num_00 + -1) / (int)num_00;
          }
          iVar6 = iVar6 * num_00;
        }
        num = iVar6 + iVar3;
        d = CRYPTO_malloc(num,"crypto/pkcs12/p12_key.c",0x74);
        local_70 = BN_new();
        local_80 = BN_new();
        if (((((local_68 != (void *)0x0) && (md != (uchar *)0x0)) && (local_78 != (uchar *)0x0)) &&
            ((d != (void *)0x0 && (local_70 != (BIGNUM *)0x0)))) && (local_80 != (BIGNUM *)0x0)) {
          if (0 < (int)num_00) {
            memset(local_68,id,(ulong)(num_00 - 1) + 1);
          }
          pvVar8 = d;
          if (0 < iVar3) {
            lVar7 = 0;
            do {
              iVar1 = 0;
              if (saltlen != 0) {
                iVar1 = (int)lVar7 / saltlen;
              }
              *(uchar *)((long)d + lVar7) = salt[(int)lVar7 - iVar1 * saltlen];
              lVar7 = lVar7 + 1;
            } while (iVar3 != (int)lVar7);
            pvVar8 = (void *)((long)d + (ulong)((num_00 + saltlen + -2) - (iVar4 - iVar3)) + 1);
          }
          if (0 < iVar6) {
            lVar7 = 0;
            do {
              iVar3 = 0;
              if (passlen != 0) {
                iVar3 = (int)lVar7 / passlen;
              }
              *(uchar *)((long)pvVar8 + lVar7) = pass[(int)lVar7 - iVar3 * passlen];
              lVar7 = lVar7 + 1;
            } while (iVar6 != (int)lVar7);
          }
          iVar3 = EVP_DigestInit_ex(ctx,md_type,(ENGINE *)0x0);
          if (iVar3 != 0) {
            local_c8 = out;
            local_bc = n;
            while (((iVar3 = EVP_DigestUpdate(ctx,local_68,cnt), iVar3 != 0 &&
                    (iVar3 = EVP_DigestUpdate(ctx,d,(long)num), iVar3 != 0)) &&
                   (iVar3 = EVP_DigestFinal_ex(ctx,md,(uint *)0x0), iVar3 != 0))) {
              if (1 < iter) {
                iVar3 = 1;
                do {
                  iVar4 = EVP_DigestInit_ex(ctx,md_type,(ENGINE *)0x0);
                  if (((iVar4 == 0) || (iVar4 = EVP_DigestUpdate(ctx,md,(long)iVar2), iVar4 == 0))
                     || (iVar4 = EVP_DigestFinal_ex(ctx,md,(uint *)0x0), iVar4 == 0))
                  goto LAB_00b4f79c;
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iter);
              }
              iVar3 = local_bc;
              if (iVar2 <= local_bc) {
                iVar3 = iVar2;
              }
              memcpy(local_c8,md,(long)iVar3);
              if (local_bc - iVar2 == 0 || local_bc < iVar2) {
                iVar2 = 1;
                goto LAB_00b4f7c4;
              }
              if (0 < (int)num_00) {
                uVar9 = 0;
                do {
                  iVar3 = 0;
                  if (iVar2 != 0) {
                    iVar3 = (int)uVar9 / iVar2;
                  }
                  local_78[uVar9] = md[(int)uVar9 - iVar3 * iVar2];
                  uVar9 = uVar9 + 1;
                } while (num_00 != uVar9);
              }
              pBVar5 = BN_bin2bn(local_78,num_00,local_80);
              if ((pBVar5 == (BIGNUM *)0x0) || (iVar3 = BN_add_word(local_80,1), iVar3 == 0)) break;
              if (0 < num) {
                lVar7 = 0;
                do {
                  s = (uchar *)((long)d + lVar7);
                  pBVar5 = BN_bin2bn(s,num_00,local_70);
                  if (((pBVar5 == (BIGNUM *)0x0) ||
                      (iVar3 = BN_add(local_70,local_70,local_80), iVar3 == 0)) ||
                     (iVar3 = BN_bn2bin(local_70,local_78), iVar3 == 0)) goto LAB_00b4f79c;
                  iVar4 = BN_num_bits(local_70);
                  iVar3 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar3 = iVar4 + 7;
                  }
                  iVar3 = iVar3 >> 3;
                  if ((int)num_00 < iVar3) {
                    iVar3 = BN_bn2bin(local_70,local_78);
                    if (iVar3 == 0) goto LAB_00b4f79c;
                    memcpy(s,local_78 + 1,cnt);
                  }
                  else {
                    if (num_00 - iVar3 != 0 && iVar3 <= (int)num_00) {
                      memset(s,0,(long)(int)(num_00 - iVar3));
                      s = (uchar *)((long)d + (lVar7 - iVar3) + cnt);
                    }
                    iVar3 = BN_bn2bin(local_70,s);
                    if (iVar3 == 0) goto LAB_00b4f79c;
                  }
                  lVar7 = lVar7 + cnt;
                } while (lVar7 < num);
              }
              local_c8 = local_c8 + iVar2;
              iVar3 = EVP_DigestInit_ex(ctx,md_type,(ENGINE *)0x0);
              local_bc = local_bc - iVar2;
              if (iVar3 == 0) break;
            }
          }
        }
      }
    }
  }
LAB_00b4f79c:
  ERR_put_error(0x23,0x6f,0x41,"crypto/pkcs12/p12_key.c",0xb9);
  iVar2 = 0;
LAB_00b4f7c4:
  CRYPTO_free(md);
  CRYPTO_free(local_78);
  CRYPTO_free(local_68);
  CRYPTO_free(d);
  BN_free(local_70);
  BN_free(local_80);
  EVP_MD_CTX_free(ctx);
  return iVar2;
}

