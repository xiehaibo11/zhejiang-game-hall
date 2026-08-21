
int BN_MONT_CTX_set(BN_MONT_CTX *mont,BIGNUM *mod,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *ret;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  ulong uVar4;
  uint uVar5;
  ulong local_68;
  undefined8 uStack_60;
  BIGNUM local_58;
  
  iVar1 = BN_is_zero(mod);
  if (iVar1 != 0) {
    return 0;
  }
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  if (ret != (BIGNUM *)0x0) {
    pBVar2 = BN_copy(&mont->N,mod);
    if (pBVar2 != (BIGNUM *)0x0) {
      pBVar2 = &mont->RR;
      (mont->N).neg = 0;
      bn_init(&local_58);
      local_58.d = &local_68;
      local_58.dmax = 2;
      local_58.neg = 0;
                    /* catch() { ... } // from try @ 00b0b700 with catch @ 00b0b7d0 */
      iVar1 = BN_num_bits(mod);
      uVar5 = iVar1 + 0x7e;
      if (-1 < (int)(iVar1 + 0x3fU)) {
        uVar5 = iVar1 + 0x3fU;
      }
      mont->ri = uVar5 & 0xffffffc0;
      BN_set_word(pBVar2,0);
      iVar1 = BN_set_bit(pBVar2,0x40);
      if (iVar1 != 0) {
        local_68 = *mod->d;
        uStack_60 = 0;
        local_58.top = (int)(local_68 != 0);
        pBVar3 = BN_mod_inverse(ret,pBVar2,&local_58,ctx);
        if ((pBVar3 != (BIGNUM *)0x0) && (iVar1 = BN_lshift(ret,ret,0x40), iVar1 != 0)) {
          iVar1 = BN_is_zero(ret);
          if (iVar1 == 0) {
            iVar1 = BN_sub_word(ret,1);
          }
          else {
            iVar1 = BN_set_word(ret,0xffffffffffffffff);
          }
          if ((iVar1 != 0) && (iVar1 = BN_div(ret,(BIGNUM *)0x0,ret,&local_58,ctx), iVar1 != 0)) {
            if (ret->top < 1) {
              uVar4 = 0;
            }
            else {
              uVar4 = *ret->d;
            }
            mont->n0[0] = uVar4;
            mont->n0[1] = 0;
            BN_set_word(pBVar2,0);
            iVar1 = BN_set_bit(pBVar2,mont->ri << 1);
            if (iVar1 != 0) {
              iVar1 = BN_div((BIGNUM *)0x0,pBVar2,pBVar2,&mont->N,ctx);
              uVar5 = (uint)(iVar1 != 0);
              goto LAB_00b0b900;
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_00b0b900:
  BN_CTX_end(ctx);
  return uVar5;
}

