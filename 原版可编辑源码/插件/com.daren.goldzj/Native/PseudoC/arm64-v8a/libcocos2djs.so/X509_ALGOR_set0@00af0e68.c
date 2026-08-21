
int X509_ALGOR_set0(X509_ALGOR *alg,ASN1_OBJECT *aobj,int ptype,void *pval)

{
  int iVar1;
  ASN1_TYPE *pAVar2;
  
  iVar1 = 0;
  if (alg != (X509_ALGOR *)0x0) {
    if ((ptype != -1) && (alg->parameter == (ASN1_TYPE *)0x0)) {
                    /* try { // try from 00af0e9c to 00bf0ea3 has its CatchHandler @ 00af0ed4 */
      pAVar2 = ASN1_TYPE_new();
      alg->parameter = pAVar2;
                    /* try { // try from 00af0ea4 to 00bf0ea7 has its CatchHandler @ 00af0860 */
      if (pAVar2 == (ASN1_TYPE *)0x0) {
        return 0;
      }
    }
                    /* try { // try from 00af0ea8 to 00bf0eaf has its CatchHandler @ 00af0ed0 */
    ASN1_OBJECT_free(alg->algorithm);
                    /* try { // try from 00af0eb0 to 00bf0eb7 has its CatchHandler @ 00af0ec0 */
    alg->algorithm = aobj;
    if (ptype != 0) {
                    /* try { // try from 00af0ebc to 00bf0ebf has its CatchHandler @ 00af0ef0 */
                    /* catch() { ... } // from try @ 00af0eb0 with catch @ 00af0ec0
                       try { // try from 00af0ec0 to 00bf0fb7 has its CatchHandler @ 00af0860 */
      if (ptype == -1) {
                    /* catch() { ... } // from try @ 00af0e9c with catch @ 00af0ed4 */
        ASN1_TYPE_free(alg->parameter);
                    /* catch() { ... } // from try @ 00af0e58 with catch @ 00af0ed8 */
        alg->parameter = (ASN1_TYPE *)0x0;
      }
      else {
        ASN1_TYPE_set(alg->parameter,ptype,pval);
                    /* catch() { ... } // from try @ 00af0ea8 with catch @ 00af0ed0 */
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}

