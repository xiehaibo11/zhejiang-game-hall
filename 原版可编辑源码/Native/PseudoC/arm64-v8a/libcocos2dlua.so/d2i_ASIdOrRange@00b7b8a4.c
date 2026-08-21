
ASIdOrRange * d2i_ASIdOrRange(ASIdOrRange **a,uchar **in,long len)

{
  ASIdOrRange *pAVar1;
  
                    /* try { // try from 00b7b8a4 to 00c7b8ab has its CatchHandler @ 00b7be80 */
  pAVar1 = (ASIdOrRange *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,(ASN1_ITEM *)ASIdOrRange_it);
  return pAVar1;
}

