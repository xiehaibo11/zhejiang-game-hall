
int EC_GROUP_get_order(EC_GROUP *group,BIGNUM *order,BN_CTX *ctx)

{
  int iVar1;
  uint uVar2;
  BIGNUM *pBVar3;
  
  if (*(BIGNUM **)(group + 0x10) == (BIGNUM *)0x0) {
    uVar2 = 0;
  }
  else {
    pBVar3 = BN_copy(order,*(BIGNUM **)(group + 0x10));
    uVar2 = 0;
    if (pBVar3 != (BIGNUM *)0x0) {
      iVar1 = BN_is_zero(order);
      uVar2 = (uint)(iVar1 == 0);
    }
  }
  return uVar2;
}

