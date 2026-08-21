
undefined4
dsa_builtin_paramgen2
          (long param_1,long param_2,ulong param_3,EVP_MD *param_4,void *param_5,size_t param_6,
          int param_7,void *param_8,int *param_9,ulong *param_10,BN_GENCB *param_11)

{
  bool bVar1;
  byte *__s;
  byte *s;
  uchar uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  EVP_MD_CTX *ctx;
  BN_CTX *ctx_00;
  BN_MONT_CTX *mont;
  BIGNUM *pBVar11;
  BIGNUM *r;
  BIGNUM *pBVar12;
  BIGNUM *a;
  BIGNUM *rem;
  BIGNUM *r_00;
  BIGNUM *pBVar13;
  BIGNUM *r_01;
  long lVar14;
  long lVar15;
  int iVar16;
  int len;
  int b;
  uint uVar17;
  ulong uVar18;
  undefined4 uVar19;
  size_t __n;
  BIGNUM *local_f8;
  void *local_c0;
  uchar *local_b0;
  byte local_a0 [64];
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    ctx_00 = (BN_CTX *)0x0;
    mont = (BN_MONT_CTX *)0x0;
    local_b0 = (uchar *)0x0;
    local_c0 = (void *)0x0;
    uVar19 = 0xffffffff;
    goto LAB_00b9a410;
  }
  if (param_4 == (EVP_MD *)0x0) {
    if (param_3 == 0xe0) {
      param_4 = EVP_sha224();
    }
    else if (param_3 == 0xa0) {
      param_4 = EVP_sha1();
    }
    else {
      param_4 = EVP_sha256();
    }
  }
  iVar5 = EVP_MD_size(param_4);
  if (((*(long *)(param_1 + 0x10) == 0) || (-1 < param_7)) || (*(long *)(param_1 + 0x18) == 0)) {
    __n = (long)iVar5;
    if (param_6 != 0) {
      __n = param_6;
    }
    local_b0 = CRYPTO_malloc((int)__n,"crypto/dsa/dsa_gen.c",0x150);
    local_c0 = param_8;
    if (param_8 == (void *)0x0) {
      local_c0 = CRYPTO_malloc((int)__n,"crypto/dsa/dsa_gen.c",0x155);
    }
    ctx_00 = (BN_CTX *)0x0;
    uVar19 = 0xffffffff;
    if ((local_b0 == (uchar *)0x0) || (local_c0 == (void *)0x0)) {
      mont = (BN_MONT_CTX *)0x0;
      goto LAB_00b9a410;
    }
    if (param_5 != (void *)0x0) {
      memcpy(local_b0,param_5,__n);
    }
  }
  else {
    local_c0 = (void *)0x0;
    local_b0 = (uchar *)0x0;
    __n = param_6;
  }
  ctx_00 = BN_CTX_new();
  if ((ctx_00 == (BN_CTX *)0x0) || (mont = BN_MONT_CTX_new(), mont == (BN_MONT_CTX *)0x0)) {
    mont = (BN_MONT_CTX *)0x0;
  }
  else {
    BN_CTX_start(ctx_00);
    pBVar11 = BN_CTX_get(ctx_00);
    r = BN_CTX_get(ctx_00);
    pBVar12 = BN_CTX_get(ctx_00);
    a = BN_CTX_get(ctx_00);
    rem = BN_CTX_get(ctx_00);
    r_00 = BN_CTX_get(ctx_00);
    if (r_00 != (BIGNUM *)0x0) {
      r_01 = *(BIGNUM **)(param_1 + 0x10);
      if ((r_01 == (BIGNUM *)0x0) ||
         (local_f8 = *(BIGNUM **)(param_1 + 0x18), local_f8 == (BIGNUM *)0x0)) {
        r_01 = BN_CTX_get(ctx_00);
        local_f8 = BN_CTX_get(ctx_00);
        pBVar13 = BN_value_one();
        iVar6 = (int)(param_2 - 1U);
        iVar7 = BN_lshift(r_00,pBVar13,iVar6);
        if (iVar7 != 0) {
          iVar3 = iVar5 * 8;
          __s = local_a0 + iVar5;
          len = (int)(param_3 >> 3);
          iVar16 = (int)__n + -1;
          lVar15 = (long)(((param_3 >> 3) << 0x20) + -0x100000000) >> 0x20;
          b = 0;
          s = __s + -(long)len;
          if (iVar5 <= len) {
            s = local_a0;
          }
          iVar4 = 0;
          if ((long)iVar3 != 0) {
            iVar4 = (int)((param_2 - 1U) / (ulong)(long)iVar3);
          }
          do {
            if (param_5 == (void *)0x0) {
              while( true ) {
                iVar7 = BN_GENCB_call(param_11,0,b);
                if (iVar7 == 0) goto LAB_00b9a404;
                iVar7 = RAND_bytes(local_b0,(int)__n);
                if (iVar7 < 1) {
                  uVar19 = 0xffffffff;
                  goto LAB_00b9a410;
                }
                iVar7 = EVP_Digest(local_b0,__n,local_a0,(uint *)0x0,param_4,(ENGINE *)0x0);
                if (iVar7 == 0) goto LAB_00b9a404;
                if (iVar5 < len) {
                  memset(__s,0,(long)(len - iVar5));
                }
                *s = *s | 0x80;
                s[lVar15] = s[lVar15] | 1;
                pBVar13 = BN_bin2bn(s,len,local_f8);
                if (pBVar13 == (BIGNUM *)0x0) goto LAB_00b9a404;
                iVar7 = BN_is_prime_fasttest_ex(local_f8,0x32,ctx_00,0,param_11);
                if (0 < iVar7) break;
                b = b + 1;
                if (iVar7 != 0) goto LAB_00b9a324;
              }
            }
            else {
              while( true ) {
                iVar7 = BN_GENCB_call(param_11,0,b);
                if ((iVar7 == 0) ||
                   (iVar7 = EVP_Digest(local_b0,__n,local_a0,(uint *)0x0,param_4,(ENGINE *)0x0),
                   iVar7 == 0)) goto LAB_00b9a404;
                if (iVar5 < len) {
                  memset(__s,0,(long)(len - iVar5));
                }
                *s = *s | 0x80;
                s[lVar15] = s[lVar15] | 1;
                pBVar13 = BN_bin2bn(s,len,local_f8);
                if (pBVar13 == (BIGNUM *)0x0) goto LAB_00b9a404;
                iVar7 = BN_is_prime_fasttest_ex
                                  (local_f8,0x32,ctx_00,(uint)(param_5 != (void *)0x0),param_11);
                if (0 < iVar7) break;
                if (iVar7 == 0 && param_5 != (void *)0x0) {
                  ERR_put_error(10,0x7e,0x71,"crypto/dsa/dsa_gen.c",0x1a4);
                  uVar19 = 0;
                  goto LAB_00b9a410;
                }
                b = b + 1;
                if (iVar7 != 0) goto LAB_00b9a324;
              }
            }
            b = b + 1;
            if (param_8 != (void *)0x0) {
              memcpy(param_8,local_b0,__n);
            }
            iVar7 = BN_GENCB_call(param_11,2,0);
            if ((iVar7 == 0) || (iVar7 = BN_GENCB_call(param_11,3,0), iVar7 == 0))
            goto LAB_00b9a404;
            iVar7 = 0;
            do {
              if ((iVar7 != 0) && (iVar8 = BN_GENCB_call(param_11,0,iVar7), iVar8 == 0))
              goto LAB_00b9a404;
              BN_set_word(pBVar12,0);
              if (-1 < iVar4) {
                if (iVar16 < 0) {
                  iVar9 = 0;
                  iVar8 = -1;
                  do {
                    iVar10 = EVP_Digest(local_b0,__n,local_a0,(uint *)0x0,param_4,(ENGINE *)0x0);
                    if ((((iVar10 == 0) ||
                         (pBVar13 = BN_bin2bn(local_a0,iVar5,pBVar11), pBVar13 == (BIGNUM *)0x0)) ||
                        (iVar10 = BN_lshift(pBVar11,pBVar11,iVar9), iVar10 == 0)) ||
                       (iVar10 = BN_add(pBVar12,pBVar12,pBVar11), iVar10 == 0)) goto LAB_00b9a284;
                    iVar8 = iVar8 + 1;
                    iVar9 = iVar9 + iVar3;
                  } while (iVar8 < iVar4);
                }
                else {
                  lVar14 = (long)iVar16;
                  iVar8 = 0;
LAB_00b99ef4:
                  do {
                    uVar2 = local_b0[lVar14];
                    local_b0[lVar14] = uVar2 + '\x01';
                    if ((uchar)(uVar2 + '\x01') == '\0') {
                      bVar1 = 0 < lVar14;
                      lVar14 = lVar14 + -1;
                      if (bVar1) goto LAB_00b99ef4;
                    }
                    iVar9 = EVP_Digest(local_b0,__n,local_a0,(uint *)0x0,param_4,(ENGINE *)0x0);
                    if (((iVar9 == 0) ||
                        (pBVar13 = BN_bin2bn(local_a0,iVar5,pBVar11), pBVar13 == (BIGNUM *)0x0)) ||
                       ((iVar9 = BN_lshift(pBVar11,pBVar11,iVar8 * iVar3), iVar9 == 0 ||
                        (iVar9 = BN_add(pBVar12,pBVar12,pBVar11), iVar9 == 0)))) goto LAB_00b9a284;
                    bVar1 = iVar8 < iVar4;
                    lVar14 = (long)iVar16;
                    iVar8 = iVar8 + 1;
                  } while (bVar1);
                }
              }
              iVar8 = BN_mask_bits(pBVar12,iVar6);
              if (((iVar8 == 0) || (pBVar13 = BN_copy(a,pBVar12), pBVar13 == (BIGNUM *)0x0)) ||
                 ((iVar8 = BN_add(a,a,r_00), iVar8 == 0 ||
                  ((iVar8 = BN_lshift1(pBVar11,local_f8), iVar8 == 0 ||
                   (iVar8 = BN_div((BIGNUM *)0x0,rem,a,pBVar11,ctx_00), iVar8 == 0))))))
              goto LAB_00b9a404;
              pBVar13 = BN_value_one();
              iVar8 = BN_sub(pBVar11,rem,pBVar13);
              if ((iVar8 == 0) || (iVar8 = BN_sub(r_01,a,pBVar11), iVar8 == 0)) goto LAB_00b9a404;
              iVar8 = BN_cmp(r_01,r_00);
              if (-1 < iVar8) {
                iVar8 = BN_is_prime_fasttest_ex(r_01,0x32,ctx_00,1,param_11);
                if (0 < iVar8) {
                  iVar6 = BN_GENCB_call(param_11,2,1);
                  if (iVar6 == 0) goto LAB_00b9a404;
                  goto LAB_00b99b90;
                }
                if (iVar8 != 0) goto LAB_00b9a404;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)param_2 << 2);
          } while (param_5 == (void *)0x0);
          ERR_put_error(10,0x7e,0x70,"crypto/dsa/dsa_gen.c",0x1fd);
          uVar19 = 0;
          goto LAB_00b9a410;
        }
      }
      else {
        if (-1 < param_7) {
          memcpy(local_c0,local_b0,__n);
        }
        iVar7 = 0;
LAB_00b99b90:
        pBVar12 = BN_value_one();
        iVar6 = BN_sub(r_00,r_01,pBVar12);
        if ((iVar6 != 0) && (iVar6 = BN_div(pBVar11,(BIGNUM *)0x0,r_00,local_f8,ctx_00), iVar6 != 0)
           ) {
          if (param_7 < 0) {
            uVar18 = 2;
            iVar6 = BN_set_word(r_00,2);
            if (iVar6 == 0) goto LAB_00b9a404;
          }
          else {
            uVar18 = 1;
          }
          iVar6 = BN_MONT_CTX_set(mont,r_01,ctx_00);
          if (iVar6 != 0) {
            if (param_7 < 0) {
              iVar5 = BN_mod_exp_mont(r,r_00,pBVar11,r_01,ctx_00,mont);
              if (iVar5 == 0) goto LAB_00b9a404;
              do {
                iVar5 = BN_is_one(r);
                if (iVar5 == 0) goto LAB_00b9a350;
                if (param_7 < 0) {
                  pBVar12 = BN_value_one();
                  iVar5 = BN_add(r_00,r_00,pBVar12);
                  if (iVar5 == 0) goto LAB_00b9a404;
                }
                uVar18 = (ulong)((int)uVar18 + 1);
                iVar5 = BN_mod_exp_mont(r,r_00,pBVar11,r_01,ctx_00,mont);
              } while (iVar5 != 0);
            }
            else {
              do {
                local_a0[1] = (byte)(uVar18 >> 8);
                local_a0[0] = (byte)param_7;
                uVar17 = (uint)uVar18;
                local_a0[2] = (byte)uVar18;
                iVar6 = EVP_DigestInit_ex(ctx,param_4,(ENGINE *)0x0);
                if ((((iVar6 == 0) || (iVar6 = EVP_DigestUpdate(ctx,local_c0,__n), iVar6 == 0)) ||
                    (iVar6 = EVP_DigestUpdate(ctx,&DAT_018c6237,4), iVar6 == 0)) ||
                   (iVar6 = EVP_DigestUpdate(ctx,local_a0,3), iVar6 == 0)) goto LAB_00b9a404;
                iVar6 = EVP_DigestFinal_ex(ctx,local_a0,(uint *)0x0);
                if (iVar6 == 0) goto LAB_00b9a284;
                pBVar12 = BN_bin2bn(local_a0,iVar5,r_00);
                if ((pBVar12 == (BIGNUM *)0x0) ||
                   (iVar6 = BN_mod_exp_mont(r,r_00,pBVar11,r_01,ctx_00,mont), iVar6 == 0))
                goto LAB_00b9a404;
                iVar6 = BN_is_one(r);
                if (iVar6 == 0) goto LAB_00b9a350;
                if (param_7 < 0) {
                  pBVar12 = BN_value_one();
                  iVar6 = BN_add(r_00,r_00,pBVar12);
                  if (iVar6 == 0) goto LAB_00b9a404;
                }
                uVar18 = (ulong)(uVar17 + 1);
              } while (uVar17 < 0xffff);
            }
LAB_00b9a324:
            uVar19 = 0xffffffff;
            goto LAB_00b9a410;
          }
        }
      }
    }
  }
  goto LAB_00b9a404;
LAB_00b9a284:
  uVar19 = 0xffffffff;
  goto LAB_00b9a410;
LAB_00b9a350:
  iVar5 = BN_GENCB_call(param_11,3,1);
  if (iVar5 != 0) {
    if (r_01 != *(BIGNUM **)(param_1 + 0x10)) {
      BN_free(*(BIGNUM **)(param_1 + 0x10));
      pBVar11 = BN_dup(r_01);
      *(BIGNUM **)(param_1 + 0x10) = pBVar11;
    }
    if (local_f8 != *(BIGNUM **)(param_1 + 0x18)) {
      BN_free(*(BIGNUM **)(param_1 + 0x18));
      pBVar11 = BN_dup(local_f8);
      *(BIGNUM **)(param_1 + 0x18) = pBVar11;
    }
    BN_free(*(BIGNUM **)(param_1 + 0x20));
    pBVar11 = BN_dup(r);
    *(BIGNUM **)(param_1 + 0x20) = pBVar11;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar19 = 0xffffffff;
      if ((pBVar11 != (BIGNUM *)0x0) && (*(long *)(param_1 + 0x18) != 0)) {
        if (param_9 != (int *)0x0) {
          *param_9 = iVar7;
        }
        if (param_10 != (ulong *)0x0) {
          *param_10 = uVar18;
        }
        uVar19 = 1;
      }
      goto LAB_00b9a410;
    }
  }
LAB_00b9a404:
  uVar19 = 0xffffffff;
LAB_00b9a410:
  CRYPTO_free(local_b0);
  if (local_c0 != param_8) {
    CRYPTO_free(local_c0);
  }
  if (ctx_00 != (BN_CTX *)0x0) {
    BN_CTX_end(ctx_00);
  }
  BN_CTX_free(ctx_00);
  BN_MONT_CTX_free(mont);
  EVP_MD_CTX_free(ctx);
  return uVar19;
}

