
int BN_BLINDING_invert_ex(BIGNUM *n,BIGNUM *r,BN_BLINDING *b,BN_CTX *param_4)

{
  int iVar1;
  
  if ((r == (BIGNUM *)0x0) && (r = *(BIGNUM **)(b + 8), r == (BIGNUM *)0x0)) {
    ERR_put_error(3,0x65,0x6b,"crypto/bn/bn_blind.c",0xae);
    return 0;
  }
  iVar1 = BN_mod_mul(n,n,r,*(BIGNUM **)(b + 0x18),param_4);
  return iVar1;
}

