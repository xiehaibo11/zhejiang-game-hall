
void X509_ALGOR_get0(ASN1_OBJECT **paobj,int *pptype,void **ppval,X509_ALGOR *algor)

{
  ASN1_TYPE *pAVar1;
  
                    /* catch() { ... } // from try @ 00af098c with catch @ 00af0ef0
                       catch() { ... } // from try @ 00af0ebc with catch @ 00af0ef0 */
  if (paobj != (ASN1_OBJECT **)0x0) {
    *paobj = algor->algorithm;
  }
  if (pptype != (int *)0x0) {
    pAVar1 = algor->parameter;
    if (pAVar1 == (ASN1_TYPE *)0x0) {
      *pptype = -1;
                    /* catch() { ... } // from try @ 00af0cb4 with catch @ 00af0f28 */
      return;
    }
                    /* catch() { ... } // from try @ 00af0938 with catch @ 00af0f08 */
    *pptype = pAVar1->type;
    if (ppval != (void **)0x0) {
      *ppval = (void *)pAVar1->value;
    }
  }
  return;
}

