
ECDSA_SIG *
ossl_ecdsa_sign_sig(uchar *param_1,int param_2,BIGNUM *param_3,BIGNUM *param_4,EC_KEY *param_5)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *pEVar3;
  BIGNUM *a;
  ECDSA_SIG *sig;
  BIGNUM *pBVar4;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *ret;
  BIGNUM *a_00;
  BIGNUM *pBVar5;
  int iVar6;
  BIGNUM *local_68;
  
  local_68 = (BIGNUM *)0x0;
  pEVar3 = EC_KEY_get0_group(param_5);
  a = EC_KEY_get0_private_key(param_5);
  if ((pEVar3 == (EC_GROUP *)0x0) || (a == (BIGNUM *)0x0)) {
    iVar1 = 0x43;
    iVar6 = 0xd2;
LAB_00b2186c:
    ERR_put_error(0x10,0xf9,iVar1,"crypto/ec/ecdsa_ossl.c",iVar6);
    return (ECDSA_SIG *)0x0;
  }
  iVar1 = EC_KEY_can_sign(param_5);
  if (iVar1 == 0) {
    iVar1 = 0x9f;
    iVar6 = 0xd7;
    goto LAB_00b2186c;
  }
  sig = ECDSA_SIG_new();
  if (sig == (ECDSA_SIG *)0x0) {
    ERR_put_error(0x10,0xf9,0x41,"crypto/ec/ecdsa_ossl.c",0xdd);
    return (ECDSA_SIG *)0x0;
  }
  pBVar4 = BN_new();
  sig->r = pBVar4;
  pBVar4 = BN_new();
  sig->s = pBVar4;
  if ((pBVar4 == (BIGNUM *)0x0) || (sig->r == (BIGNUM *)0x0)) {
    ERR_put_error(0x10,0xf9,0x41,"crypto/ec/ecdsa_ossl.c",0xe3);
    ret = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    ctx = (BN_CTX *)0x0;
    pBVar5 = (BIGNUM *)0x0;
    goto LAB_00b218f0;
  }
  ctx = BN_CTX_new();
  if ((ctx == (BN_CTX *)0x0) || (r = BN_new(), r == (BIGNUM *)0x0)) {
    r = (BIGNUM *)0x0;
LAB_00b218cc:
    ERR_put_error(0x10,0xf9,0x41,"crypto/ec/ecdsa_ossl.c",0xea);
    ret = (BIGNUM *)0x0;
    pBVar5 = (BIGNUM *)0x0;
  }
  else {
    ret = BN_new();
    if (ret == (BIGNUM *)0x0) goto LAB_00b218cc;
    a_00 = (BIGNUM *)EC_GROUP_get0_order(pEVar3);
    if (a_00 == (BIGNUM *)0x0) {
      iVar1 = 0x10;
      iVar6 = 0xf0;
LAB_00b21ac8:
      ERR_put_error(0x10,0xf9,iVar1,"crypto/ec/ecdsa_ossl.c",iVar6);
      pBVar5 = (BIGNUM *)0x0;
    }
    else {
      uVar2 = BN_num_bits(a_00);
      if ((int)uVar2 < param_2 * 8) {
        param_2 = uVar2 + 0xe;
        if (-1 < (int)(uVar2 + 7)) {
          param_2 = uVar2 + 7;
        }
        param_2 = param_2 >> 3;
      }
      pBVar5 = BN_bin2bn(param_1,param_2,ret);
      if (pBVar5 == (BIGNUM *)0x0) {
        iVar1 = 3;
        iVar6 = 0xfa;
        goto LAB_00b21ac8;
      }
      if (((int)uVar2 < param_2 * 8) && (iVar1 = BN_rshift(ret,ret,8 - (uVar2 & 7)), iVar1 == 0)) {
        iVar1 = 3;
        iVar6 = 0xff;
        goto LAB_00b21ac8;
      }
      if ((param_3 == (BIGNUM *)0x0) || (param_4 == (BIGNUM *)0x0)) {
        do {
          iVar1 = FUN_00b2116c(param_5,ctx,&local_68,sig,param_1,param_2);
          pBVar5 = local_68;
          if (iVar1 == 0) {
            ERR_put_error(0x10,0xf9,0x2a,"crypto/ec/ecdsa_ossl.c",0x105);
            pBVar5 = local_68;
            goto LAB_00b218f0;
          }
          iVar1 = BN_mod_mul(r,a,sig->r,a_00,ctx);
          if (iVar1 == 0) goto LAB_00b21b58;
          iVar1 = BN_mod_add_quick(pBVar4,r,ret,a_00);
          if (iVar1 == 0) goto LAB_00b21b80;
          iVar1 = BN_mod_mul(pBVar4,pBVar4,pBVar5,a_00,ctx);
          if (iVar1 == 0) goto LAB_00b21ba8;
          iVar1 = BN_is_zero(pBVar4);
          if (iVar1 == 0) goto LAB_00b218fc;
        } while (param_3 == (BIGNUM *)0x0 || param_4 == (BIGNUM *)0x0);
LAB_00b21a10:
        ERR_put_error(0x10,0xf9,0x9d,"crypto/ec/ecdsa_ossl.c",0x123);
      }
      else {
        if (param_3 == (BIGNUM *)0x0 || param_4 == (BIGNUM *)0x0) {
          do {
            pBVar5 = BN_copy(sig->r,param_4);
            if (pBVar5 == (BIGNUM *)0x0) goto LAB_00b21adc;
            iVar1 = BN_mod_mul(r,a,sig->r,a_00,ctx);
            if (iVar1 == 0) {
              pBVar5 = (BIGNUM *)0x0;
              goto LAB_00b21b58;
            }
            iVar1 = BN_mod_add_quick(pBVar4,r,ret,a_00);
            if (iVar1 == 0) goto LAB_00b21b7c;
            iVar1 = BN_mod_mul(pBVar4,pBVar4,param_3,a_00,ctx);
            if (iVar1 == 0) goto LAB_00b21ba4;
            iVar1 = BN_is_zero(pBVar4);
          } while (iVar1 != 0);
          pBVar5 = (BIGNUM *)0x0;
          goto LAB_00b218fc;
        }
        pBVar5 = BN_copy(sig->r,param_4);
        if (pBVar5 == (BIGNUM *)0x0) {
LAB_00b21adc:
          ERR_put_error(0x10,0xf9,0x41,"crypto/ec/ecdsa_ossl.c",0x10c);
          pBVar5 = (BIGNUM *)0x0;
        }
        else {
          iVar1 = BN_mod_mul(r,a,sig->r,a_00,ctx);
          if (iVar1 == 0) {
            pBVar5 = (BIGNUM *)0x0;
LAB_00b21b58:
            ERR_put_error(0x10,0xf9,3,"crypto/ec/ecdsa_ossl.c",0x112);
          }
          else {
            iVar1 = BN_mod_add_quick(pBVar4,r,ret,a_00);
            if (iVar1 == 0) {
LAB_00b21b7c:
              pBVar5 = (BIGNUM *)0x0;
LAB_00b21b80:
              ERR_put_error(0x10,0xf9,3,"crypto/ec/ecdsa_ossl.c",0x116);
            }
            else {
              iVar1 = BN_mod_mul(pBVar4,pBVar4,param_3,a_00,ctx);
              if (iVar1 != 0) {
                iVar1 = BN_is_zero(pBVar4);
                pBVar5 = (BIGNUM *)0x0;
                if (iVar1 == 0) goto LAB_00b218fc;
                goto LAB_00b21a10;
              }
LAB_00b21ba4:
              pBVar5 = (BIGNUM *)0x0;
LAB_00b21ba8:
              ERR_put_error(0x10,0xf9,3,"crypto/ec/ecdsa_ossl.c",0x11a);
            }
          }
        }
      }
    }
  }
LAB_00b218f0:
  ECDSA_SIG_free(sig);
  sig = (ECDSA_SIG *)0x0;
LAB_00b218fc:
  BN_CTX_free(ctx);
  BN_clear_free(ret);
  BN_clear_free(r);
  BN_clear_free(pBVar5);
  return sig;
}

