
int EC_KEY_set_private_key(EC_KEY *key,BIGNUM *prv)

{
  int iVar1;
  uint uVar2;
  BIGNUM *pBVar3;
  long lVar4;
  code *pcVar5;
  
  if ((*(long **)(key + 0x18) == (long *)0x0) || (lVar4 = **(long **)(key + 0x18), lVar4 == 0)) {
    uVar2 = 0;
  }
  else {
    pcVar5 = *(code **)(lVar4 + 0x148);
    if (((pcVar5 == (code *)0x0) || (iVar1 = (*pcVar5)(key,prv), uVar2 = 0, iVar1 != 0)) &&
       ((*(code **)(*(long *)key + 0x30) == (code *)0x0 ||
        (iVar1 = (**(code **)(*(long *)key + 0x30))(key,prv), uVar2 = 0, iVar1 != 0)))) {
      BN_clear_free(*(BIGNUM **)(key + 0x28));
      pBVar3 = BN_dup(prv);
      *(BIGNUM **)(key + 0x28) = pBVar3;
      uVar2 = (uint)(pBVar3 != (BIGNUM *)0x0);
    }
  }
  return uVar2;
}

