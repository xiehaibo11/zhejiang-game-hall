
int BN_RECP_CTX_set(BN_RECP_CTX *recp,BIGNUM *rdiv,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  pBVar2 = BN_copy(&recp->N,rdiv);
  if (pBVar2 != (BIGNUM *)0x0) {
    BN_set_word(&recp->Nr,0);
    iVar1 = BN_num_bits(rdiv);
    recp->num_bits = iVar1;
    recp->shift = 0;
  }
  return (int)(pBVar2 != (BIGNUM *)0x0);
}

