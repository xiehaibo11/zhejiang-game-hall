
ASN1_NULL * d2i_ASN1_NULL(ASN1_NULL **a,uchar **in,long len)

{
  ASN1_VALUE *pAVar1;
  
                    /* try { // try from 00af0938 to 00bf093f has its CatchHandler @ 00af0f08 */
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,(ASN1_ITEM *)ASN1_NULL_it);
  return (ASN1_NULL *)pAVar1;
}

