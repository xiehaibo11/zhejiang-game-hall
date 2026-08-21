
int RSA_generate_key_ex(RSA *rsa,int bits,BIGNUM *e,BN_GENCB *cb)

{
  int iVar1;
  int iVar2;
  BN_CTX *ctx;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *r;
  BIGNUM *pBVar5;
  int iVar6;
  _func_1628 *UNRECOVERED_JUMPTABLE;
  int b;
  BIGNUM *pBVar7;
  
  UNRECOVERED_JUMPTABLE = rsa->meth->rsa_keygen;
  if (UNRECOVERED_JUMPTABLE != (_func_1628 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bd3680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(rsa,bits,e,cb);
    return iVar1;
  }
  ctx = BN_CTX_new();
  if (ctx != (BN_CTX *)0x0) {
    BN_CTX_start(ctx);
    pBVar3 = BN_CTX_get(ctx);
    pBVar4 = BN_CTX_get(ctx);
    r = BN_CTX_get(ctx);
    pBVar5 = BN_CTX_get(ctx);
    if (pBVar5 != (BIGNUM *)0x0) {
      iVar1 = bits + 2;
      if (-1 < bits + 1) {
        iVar1 = bits + 1;
      }
      if (rsa->n == (BIGNUM *)0x0) {
        pBVar5 = BN_new();
        rsa->n = pBVar5;
        if (pBVar5 == (BIGNUM *)0x0) goto LAB_00bd3aa0;
      }
      if (rsa->d == (BIGNUM *)0x0) {
        pBVar5 = (BIGNUM *)BN_secure_new();
        rsa->d = pBVar5;
        if (pBVar5 == (BIGNUM *)0x0) goto LAB_00bd3aa0;
      }
      if (rsa->e == (BIGNUM *)0x0) {
        pBVar5 = BN_new();
        rsa->e = pBVar5;
        if (pBVar5 == (BIGNUM *)0x0) goto LAB_00bd3aa0;
      }
      if (rsa->p == (BIGNUM *)0x0) {
        pBVar5 = (BIGNUM *)BN_secure_new();
        rsa->p = pBVar5;
        if (pBVar5 == (BIGNUM *)0x0) goto LAB_00bd3aa0;
      }
      if (rsa->q == (BIGNUM *)0x0) {
        pBVar5 = (BIGNUM *)BN_secure_new();
        rsa->q = pBVar5;
        if (pBVar5 == (BIGNUM *)0x0) goto LAB_00bd3aa0;
      }
      if (rsa->dmp1 == (BIGNUM *)0x0) {
        pBVar5 = (BIGNUM *)BN_secure_new();
        rsa->dmp1 = pBVar5;
        if (pBVar5 == (BIGNUM *)0x0) goto LAB_00bd3aa0;
      }
      if (rsa->dmq1 == (BIGNUM *)0x0) {
        pBVar5 = (BIGNUM *)BN_secure_new();
        rsa->dmq1 = pBVar5;
        if (pBVar5 == (BIGNUM *)0x0) goto LAB_00bd3aa0;
      }
      if (rsa->iqmp == (BIGNUM *)0x0) {
        pBVar5 = (BIGNUM *)BN_secure_new();
        rsa->iqmp = pBVar5;
        if (pBVar5 == (BIGNUM *)0x0) goto LAB_00bd3aa0;
      }
      iVar6 = bits - (iVar1 >> 1);
      BN_copy(rsa->e,e);
      b = 0;
      do {
        iVar2 = BN_generate_prime_ex(rsa->p,iVar1 >> 1,0,(BIGNUM *)0x0,(BIGNUM *)0x0,cb);
        if (iVar2 == 0) break;
        pBVar7 = rsa->p;
        pBVar5 = BN_value_one();
        iVar2 = BN_sub(r,pBVar7,pBVar5);
        if ((iVar2 == 0) || (iVar2 = BN_gcd(pBVar4,r,rsa->e,ctx), iVar2 == 0)) break;
        iVar2 = BN_is_one(pBVar4);
        if (iVar2 != 0) {
          iVar1 = BN_GENCB_call(cb,3,0);
          if (iVar1 != 0) goto LAB_00bd3824;
          break;
        }
        iVar2 = BN_GENCB_call(cb,2,b);
        b = b + 1;
      } while (iVar2 != 0);
    }
  }
LAB_00bd3aa0:
  iVar1 = 3;
  iVar6 = 0xbe;
LAB_00bd3ab8:
  ERR_put_error(4,0x81,iVar1,"crypto/rsa/rsa_gen.c",iVar6);
  iVar1 = 0;
  if (ctx != (BN_CTX *)0x0) {
LAB_00bd3ac4:
    BN_CTX_end(ctx);
  }
LAB_00bd3acc:
  BN_CTX_free(ctx);
  return iVar1;
LAB_00bd3824:
  iVar1 = BN_generate_prime_ex(rsa->q,iVar6,0,(BIGNUM *)0x0,(BIGNUM *)0x0,cb);
  if (iVar1 == 0) goto LAB_00bd3aa0;
  iVar1 = BN_cmp(rsa->p,rsa->q);
  if (iVar1 == 0) {
    iVar1 = BN_generate_prime_ex(rsa->q,iVar6,0,(BIGNUM *)0x0,(BIGNUM *)0x0,cb);
    if (iVar1 == 0) goto LAB_00bd3aa0;
    iVar1 = BN_cmp(rsa->p,rsa->q);
    if (iVar1 == 0) {
      iVar1 = BN_generate_prime_ex(rsa->q,iVar6,0,(BIGNUM *)0x0,(BIGNUM *)0x0,cb);
      if (iVar1 == 0) goto LAB_00bd3aa0;
      iVar1 = BN_cmp(rsa->p,rsa->q);
      if (iVar1 == 0) {
        iVar1 = 0x78;
        iVar6 = 0x6c;
        goto LAB_00bd3ab8;
      }
    }
  }
  pBVar7 = rsa->q;
  pBVar5 = BN_value_one();
  iVar1 = BN_sub(r,pBVar7,pBVar5);
  if ((iVar1 == 0) || (iVar1 = BN_gcd(pBVar4,r,rsa->e,ctx), iVar1 == 0)) goto LAB_00bd3aa0;
  iVar1 = BN_is_one(pBVar4);
  if (iVar1 != 0) {
    iVar1 = BN_GENCB_call(cb,3,1);
    if (iVar1 != 0) {
      iVar1 = BN_cmp(rsa->p,rsa->q);
      if (iVar1 < 0) {
        pBVar7 = rsa->p;
        pBVar5 = rsa->q;
        rsa->p = pBVar5;
        rsa->q = pBVar7;
      }
      else {
        pBVar5 = rsa->p;
        pBVar7 = rsa->q;
      }
      iVar1 = BN_mul(rsa->n,pBVar5,pBVar7,ctx);
      if (iVar1 != 0) {
        pBVar7 = rsa->p;
        pBVar5 = BN_value_one();
        iVar1 = BN_sub(pBVar4,pBVar7,pBVar5);
        if (iVar1 != 0) {
          pBVar7 = rsa->q;
          pBVar5 = BN_value_one();
          iVar1 = BN_sub(r,pBVar7,pBVar5);
          if (((iVar1 != 0) && (iVar1 = BN_mul(pBVar3,pBVar4,r,ctx), iVar1 != 0)) &&
             (pBVar5 = BN_new(), pBVar5 != (BIGNUM *)0x0)) {
            BN_with_flags(pBVar5,pBVar3,4);
            pBVar3 = BN_mod_inverse(rsa->d,rsa->e,pBVar5,ctx);
            BN_free(pBVar5);
            if ((pBVar3 != (BIGNUM *)0x0) && (pBVar3 = BN_new(), pBVar3 != (BIGNUM *)0x0)) {
              BN_with_flags(pBVar3,rsa->d,4);
              iVar1 = BN_div((BIGNUM *)0x0,rsa->dmp1,pBVar3,pBVar4,ctx);
              if ((iVar1 == 0) || (iVar1 = BN_div((BIGNUM *)0x0,rsa->dmq1,pBVar3,r,ctx), iVar1 == 0)
                 ) {
                BN_free(pBVar3);
              }
              else {
                BN_free(pBVar3);
                pBVar3 = BN_new();
                if (pBVar3 != (BIGNUM *)0x0) {
                  BN_with_flags(pBVar3,rsa->p,4);
                  pBVar4 = BN_mod_inverse(rsa->iqmp,rsa->q,pBVar3,ctx);
                  BN_free(pBVar3);
                  if (pBVar4 != (BIGNUM *)0x0) {
                    iVar1 = 1;
                    if (ctx == (BN_CTX *)0x0) goto LAB_00bd3acc;
                    goto LAB_00bd3ac4;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_00bd3aa0;
  }
  iVar1 = BN_GENCB_call(cb,2,b);
  b = b + 1;
  if (iVar1 == 0) goto LAB_00bd3aa0;
  goto LAB_00bd3824;
}

