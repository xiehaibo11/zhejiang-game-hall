
undefined4 FUN_00b06464(long param_1)

{
  bool bVar1;
  int iVar2;
  BN_CTX *ctx;
  BIGNUM *pBVar3;
  long lVar4;
  BIGNUM *rnd;
  undefined4 uVar5;
  BIGNUM *a;
  BN_MONT_CTX *pBVar6;
  
                    /* try { // try from 00b06474 to 00c0647b has its CatchHandler @ 00b06800 */
                    /* try { // try from 00b0647c to 00c0648f has its CatchHandler @ 00b05eb8 */
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    a = (BIGNUM *)0x0;
                    /* try { // try from 00b064a4 to 00c0664f has its CatchHandler @ 00b05eb8 */
    rnd = (BIGNUM *)0x0;
  }
  else {
    rnd = *(BIGNUM **)(param_1 + 0x28);
    if (rnd == (BIGNUM *)0x0) {
      rnd = (BIGNUM *)BN_secure_new();
      if (rnd == (BIGNUM *)0x0) {
        a = (BIGNUM *)0x0;
        goto LAB_00b065c4;
      }
      bVar1 = true;
      a = *(BIGNUM **)(param_1 + 0x20);
    }
    else {
                    /* try { // try from 00b06490 to 00c06497 has its CatchHandler @ 00b06800 */
      bVar1 = false;
      a = *(BIGNUM **)(param_1 + 0x20);
                    /* try { // try from 00b06498 to 00c064a3 has its CatchHandler @ 00b067f4 */
    }
    if ((a != (BIGNUM *)0x0) || (a = BN_new(), a != (BIGNUM *)0x0)) {
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        pBVar6 = (BN_MONT_CTX *)0x0;
      }
      else {
        pBVar6 = BN_MONT_CTX_set_locked
                           ((BN_MONT_CTX **)(param_1 + 0x38),(int)*(undefined8 *)(param_1 + 0x88),
                            *(BIGNUM **)(param_1 + 8),ctx);
        if (pBVar6 == (BN_MONT_CTX *)0x0) goto LAB_00b065c4;
      }
      if (bVar1) {
        pBVar3 = *(BIGNUM **)(param_1 + 0x40);
        if (pBVar3 == (BIGNUM *)0x0) {
          lVar4 = *(long *)(param_1 + 0x18);
          if (lVar4 == 0) {
            iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
            lVar4 = (long)(iVar2 + -1);
          }
          iVar2 = BN_rand(rnd,(int)lVar4,0,0);
          if (iVar2 != 0) goto LAB_00b06564;
        }
        else {
          while (iVar2 = BN_rand_range(rnd,pBVar3), iVar2 != 0) {
            iVar2 = BN_is_zero(rnd);
            if ((iVar2 == 0) && (iVar2 = BN_is_one(rnd), iVar2 == 0)) goto LAB_00b06564;
            pBVar3 = *(BIGNUM **)(param_1 + 0x40);
          }
        }
      }
      else {
LAB_00b06564:
        pBVar3 = BN_new();
        if (pBVar3 != (BIGNUM *)0x0) {
          BN_with_flags(pBVar3,rnd,4);
          iVar2 = (**(code **)(*(long *)(param_1 + 0x78) + 0x18))
                            (param_1,a,*(undefined8 *)(param_1 + 0x10),pBVar3,
                             *(undefined8 *)(param_1 + 8),ctx,pBVar6);
          BN_free(pBVar3);
          if (iVar2 != 0) {
            *(BIGNUM **)(param_1 + 0x20) = a;
            *(BIGNUM **)(param_1 + 0x28) = rnd;
            uVar5 = 1;
            goto LAB_00b065f8;
          }
        }
      }
    }
  }
LAB_00b065c4:
  ERR_put_error(5,0x67,3,"crypto/dh/dh_key.c",0x86);
  if (a != *(BIGNUM **)(param_1 + 0x20)) {
    BN_free(a);
  }
  uVar5 = 0;
LAB_00b065f8:
  if (rnd != *(BIGNUM **)(param_1 + 0x28)) {
    BN_free(rnd);
  }
  BN_CTX_free(ctx);
  return uVar5;
}

