
int X509_sign_ctx(X509 *x,EVP_MD_CTX *ctx)

{
  int iVar1;
  
                    /* try { // try from 00b73750 to 00c73757 has its CatchHandler @ 00b738d8 */
                    /* try { // try from 00b73758 to 00c738ef has its CatchHandler @ 00b73094 */
  *(undefined4 *)&x->crldp = 1;
  iVar1 = ASN1_item_sign_ctx((ASN1_ITEM *)X509_CINF_it,(X509_ALGOR *)&x->name,
                             (X509_ALGOR *)&x->altname,(ASN1_BIT_STRING *)&x->rfc3779_addr,x,ctx);
  return iVar1;
}

