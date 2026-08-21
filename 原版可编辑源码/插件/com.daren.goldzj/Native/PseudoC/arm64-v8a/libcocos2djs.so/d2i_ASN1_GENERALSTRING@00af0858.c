
ASN1_GENERALSTRING * d2i_ASN1_GENERALSTRING(ASN1_GENERALSTRING **a,uchar **in,long len)

{
  ASN1_GENERALSTRING *pAVar1;
  
                    /* catch() { ... } // from try @ 00af0994 with catch @ 00af0860
                       catch() { ... } // from try @ 00af0d24 with catch @ 00af0860
                       catch() { ... } // from try @ 00af0ea4 with catch @ 00af0860
                       catch() { ... } // from try @ 00af0ec0 with catch @ 00af0860 */
  pAVar1 = (ASN1_GENERALSTRING *)
           ASN1_item_d2i((ASN1_VALUE **)a,in,len,(ASN1_ITEM *)ASN1_GENERALSTRING_it);
  return pAVar1;
}

