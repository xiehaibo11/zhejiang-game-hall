
int EC_KEY_print(BIO *bp,EC_KEY *key,int off)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  pBVar2 = EC_KEY_get0_private_key(key);
  iVar1 = FUN_00b19d98(bp,key,off,pBVar2 == (BIGNUM *)0x0);
  return iVar1;
}

