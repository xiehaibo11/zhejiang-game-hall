
int DH_generate_parameters_ex(DH *dh,int prime_len,int generator,BN_GENCB *cb)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong w;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)&(dh->ex_data).dummy + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00be3bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(dh,prime_len,generator,cb);
    return iVar1;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    ERR_put_error(5,0x6a,3,"crypto/dh/dh_gen.c",0x79);
    return 0;
  }
  BN_CTX_start(ctx);
  a = BN_CTX_get(ctx);
  a_00 = BN_CTX_get(ctx);
  if ((a != (BIGNUM *)0x0) && (a_00 != (BIGNUM *)0x0)) {
    if (dh->p == (BIGNUM *)0x0) {
      pBVar2 = BN_new();
      dh->p = pBVar2;
      if (pBVar2 == (BIGNUM *)0x0) goto LAB_00be3c60;
    }
    if (dh->g == (BIGNUM *)0x0) {
      pBVar2 = BN_new();
      dh->g = pBVar2;
      if (pBVar2 == (BIGNUM *)0x0) goto LAB_00be3c60;
    }
    if (generator < 2) {
      ERR_put_error(5,0x6a,0x65,"crypto/dh/dh_gen.c",0x51);
    }
    else if (generator == 5) {
      iVar1 = BN_set_word(a,10);
      if ((iVar1 != 0) && (iVar1 = BN_set_word(a_00,3), iVar1 != 0)) {
        w = 5;
        goto LAB_00be3d54;
      }
    }
    else if (generator == 2) {
      iVar1 = BN_set_word(a,0x18);
      if ((iVar1 != 0) && (iVar1 = BN_set_word(a_00,0xb), iVar1 != 0)) {
        w = 2;
LAB_00be3d54:
        iVar1 = BN_generate_prime_ex(dh->p,prime_len,1,a,a_00,cb);
        if (((iVar1 != 0) && (iVar1 = BN_GENCB_call(cb,3,0), iVar1 != 0)) &&
           (iVar1 = BN_set_word(dh->g,w), iVar1 != 0)) {
          iVar1 = 1;
          goto LAB_00be3c80;
        }
      }
    }
    else {
      iVar1 = BN_set_word(a,2);
      if ((iVar1 != 0) && (iVar1 = BN_set_word(a_00,1), iVar1 != 0)) {
        w = (ulong)generator;
        goto LAB_00be3d54;
      }
    }
  }
LAB_00be3c60:
  ERR_put_error(5,0x6a,3,"crypto/dh/dh_gen.c",0x79);
  iVar1 = 0;
LAB_00be3c80:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return iVar1;
}

