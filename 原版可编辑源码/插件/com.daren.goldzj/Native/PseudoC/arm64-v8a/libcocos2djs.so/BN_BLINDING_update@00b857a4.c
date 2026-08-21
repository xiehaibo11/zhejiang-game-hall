
int BN_BLINDING_update(BN_BLINDING *b,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BN_BLINDING *pBVar4;
  
  pBVar3 = *(BIGNUM **)b;
  if ((pBVar3 == (BIGNUM *)0x0) || (*(long *)(b + 8) == 0)) {
    ERR_put_error(3,0x67,0x6b,"crypto/bn/bn_blind.c",99);
    iVar2 = 0;
    goto LAB_00b85890;
  }
  pBVar4 = b + 0x28;
  if (*(int *)pBVar4 == -1) {
    *(int *)pBVar4 = 1;
LAB_00b85850:
    if (((byte)b[0x30] & 1) == 0) {
      iVar1 = BN_mod_mul(pBVar3,pBVar3,pBVar3,*(BIGNUM **)(b + 0x18),ctx);
      iVar2 = 0;
      if (iVar1 == 0) goto LAB_00b85890;
      pBVar3 = *(BIGNUM **)(b + 8);
      iVar1 = BN_mod_mul(pBVar3,pBVar3,pBVar3,*(BIGNUM **)(b + 0x18),ctx);
      iVar2 = 0;
      if (iVar1 == 0) goto LAB_00b85890;
    }
  }
  else {
    iVar2 = *(int *)pBVar4 + 1;
    *(int *)pBVar4 = iVar2;
    if (((iVar2 != 0x20) || (*(long *)(b + 0x10) == 0)) || (((byte)b[0x30] >> 1 & 1) != 0))
    goto LAB_00b85850;
    pBVar4 = BN_BLINDING_create_param
                       (b,(BIGNUM *)0x0,(BIGNUM *)0x0,ctx,(bn_mod_exp *)0x0,(BN_MONT_CTX *)0x0);
    if (pBVar4 == (BN_BLINDING *)0x0) {
      iVar2 = 0;
      goto LAB_00b85890;
    }
  }
  iVar2 = 1;
LAB_00b85890:
  if (*(int *)(b + 0x28) == 0x20) {
    *(int *)(b + 0x28) = 0;
  }
  return iVar2;
}

