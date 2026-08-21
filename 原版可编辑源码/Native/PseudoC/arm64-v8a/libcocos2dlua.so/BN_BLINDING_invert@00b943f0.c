
int BN_BLINDING_invert(BIGNUM *n,BN_BLINDING *b,BN_CTX *ctx)

{
  int iVar1;
  
  if (*(BIGNUM **)(b + 8) != (BIGNUM *)0x0) {
    iVar1 = BN_mod_mul(n,n,*(BIGNUM **)(b + 8),*(BIGNUM **)(b + 0x18),ctx);
    return iVar1;
  }
  ERR_put_error(3,0x65,0x6b,"crypto/bn/bn_blind.c",0xae);
  return 0;
}

