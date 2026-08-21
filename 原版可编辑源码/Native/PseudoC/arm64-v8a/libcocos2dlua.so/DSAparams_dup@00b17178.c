
DSA * DSAparams_dup(DSA *x)

{
  DSA *pDVar1;
  
  pDVar1 = ASN1_item_dup((ASN1_ITEM *)&DAT_016af928,x);
  return pDVar1;
}

