
undefined4
FUN_00b18088(long param_1,BN_CTX *param_2,undefined8 *param_3,BIGNUM *param_4,long param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  BIGNUM *rnd;
  BN_CTX *ctx;
  BN_MONT_CTX *pBVar3;
  BIGNUM *pBVar4;
  code *pcVar5;
  undefined4 uVar6;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    ERR_put_error(10,0x6b,0x65,"crypto/dsa/dsa_ossl.c",0x8e);
    return 0;
  }
  rnd = BN_new();
  if (rnd == (BIGNUM *)0x0) {
    ctx = (BN_CTX *)0x0;
  }
  else {
    ctx = param_2;
    if ((param_2 != (BN_CTX *)0x0) || (ctx = BN_CTX_new(), ctx != (BN_CTX *)0x0)) {
      if (param_5 == 0) {
        do {
          iVar1 = BN_rand_range(rnd,*(BIGNUM **)(param_1 + 0x18));
          if (iVar1 == 0) goto LAB_00b18214;
          iVar1 = BN_is_zero(rnd);
        } while (iVar1 != 0);
      }
      else {
        do {
          iVar1 = BN_generate_dsa_nonce
                            (rnd,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),
                             param_5,(long)param_6,ctx);
          if (iVar1 == 0) goto LAB_00b18214;
          iVar1 = BN_is_zero(rnd);
        } while (iVar1 != 0);
      }
      BN_set_flags(rnd,4);
      if ((((*(byte *)(param_1 + 0x38) & 1) == 0) ||
          (pBVar3 = BN_MONT_CTX_set_locked
                              ((BN_MONT_CTX **)(param_1 + 0x40),(int)*(undefined8 *)(param_1 + 0x68)
                               ,*(BIGNUM **)(param_1 + 0x10),ctx), pBVar3 != (BN_MONT_CTX *)0x0)) &&
         (iVar1 = BN_add(rnd,rnd,*(BIGNUM **)(param_1 + 0x18)), iVar1 != 0)) {
        iVar1 = BN_num_bits(rnd);
        iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 0x18));
        if ((iVar2 < iVar1) || (iVar1 = BN_add(rnd,rnd,*(BIGNUM **)(param_1 + 0x18)), iVar1 != 0)) {
          pcVar5 = *(code **)(*(long *)(param_1 + 0x58) + 0x28);
          if (pcVar5 == (code *)0x0) {
            iVar1 = BN_mod_exp_mont(param_4,*(BIGNUM **)(param_1 + 0x20),rnd,
                                    *(BIGNUM **)(param_1 + 0x10),ctx,
                                    *(BN_MONT_CTX **)(param_1 + 0x40));
          }
          else {
            iVar1 = (*pcVar5)(param_1,param_4,*(BIGNUM **)(param_1 + 0x20),rnd,
                              *(BIGNUM **)(param_1 + 0x10),ctx);
          }
          if (((iVar1 != 0) &&
              (iVar1 = BN_div((BIGNUM *)0x0,param_4,param_4,*(BIGNUM **)(param_1 + 0x18),ctx),
              iVar1 != 0)) &&
             (pBVar4 = BN_mod_inverse((BIGNUM *)0x0,rnd,*(BIGNUM **)(param_1 + 0x18),ctx),
             pBVar4 != (BIGNUM *)0x0)) {
            BN_clear_free((BIGNUM *)*param_3);
            *param_3 = pBVar4;
            uVar6 = 1;
            goto joined_r0x00b18238;
          }
        }
      }
    }
  }
LAB_00b18214:
  ERR_put_error(10,0x6b,3,"crypto/dsa/dsa_ossl.c",0xd8);
  uVar6 = 0;
joined_r0x00b18238:
  if (ctx != param_2) {
    BN_CTX_free(ctx);
  }
  BN_clear_free(rnd);
  return uVar6;
}

