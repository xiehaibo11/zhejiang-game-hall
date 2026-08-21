
int BN_BLINDING_convert(BIGNUM *n,BN_BLINDING *b,BN_CTX *ctx)

{
  int iVar1;
  uint uVar2;
  BIGNUM *b_00;
  
  b_00 = *(BIGNUM **)b;
  if ((b_00 == (BIGNUM *)0x0) || (*(long *)(b + 8) == 0)) {
    ERR_put_error(3,100,0x6b,"crypto/bn/bn_blind.c",0x89);
    uVar2 = 0;
  }
  else {
    if (*(int *)(b + 0x28) == -1) {
      *(undefined4 *)(b + 0x28) = 0;
    }
    else {
      iVar1 = BN_BLINDING_update(b,ctx);
      if (iVar1 == 0) {
        return 0;
      }
      b_00 = *(BIGNUM **)b;
    }
    iVar1 = BN_mod_mul(n,n,b_00,*(BIGNUM **)(b + 0x18),ctx);
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}

