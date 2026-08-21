
int BN_BLINDING_convert_ex(BIGNUM *n,BIGNUM *r,BN_BLINDING *b,BN_CTX *param_4)

{
  int iVar1;
  uint uVar2;
  BIGNUM *pBVar3;
  uint uVar4;
  
  if ((*(long *)b != 0) && (*(long *)(b + 8) != 0)) {
    if (*(int *)(b + 0x28) == -1) {
      *(undefined4 *)(b + 0x28) = 0;
    }
    else {
      iVar1 = BN_BLINDING_update(b,param_4);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if (r == (BIGNUM *)0x0) {
      uVar4 = 1;
    }
    else {
      pBVar3 = BN_copy(r,*(BIGNUM **)(b + 8));
      uVar4 = (uint)(pBVar3 != (BIGNUM *)0x0);
    }
    iVar1 = BN_mod_mul(n,n,*(BIGNUM **)b,*(BIGNUM **)(b + 0x18),param_4);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = uVar4;
    }
    return uVar2;
  }
  ERR_put_error(3,100,0x6b,"crypto/bn/bn_blind.c",0x89);
  return 0;
}

