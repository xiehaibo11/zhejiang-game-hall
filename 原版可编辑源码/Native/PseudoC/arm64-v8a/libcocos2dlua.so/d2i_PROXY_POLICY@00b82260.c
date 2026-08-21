
PROXY_POLICY * d2i_PROXY_POLICY(PROXY_POLICY **a,uchar **in,long len)

{
  PROXY_POLICY *pPVar1;
  
                    /* try { // try from 00b82264 to 00c82267 has its CatchHandler @ 00b82538 */
  pPVar1 = (PROXY_POLICY *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,(ASN1_ITEM *)PROXY_POLICY_it);
  return pPVar1;
}

