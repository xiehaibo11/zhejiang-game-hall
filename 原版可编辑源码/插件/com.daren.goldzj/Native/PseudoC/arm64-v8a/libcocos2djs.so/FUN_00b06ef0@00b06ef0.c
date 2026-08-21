
undefined4 FUN_00b06ef0(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  DSA *r;
  BIGNUM *pBVar2;
  int iVar3;
  ASN1_INTEGER *ai;
  X509_ALGOR *local_50;
  int *local_48;
  int local_40;
  int local_3c;
  uchar *local_38;
  uchar *puStack_28;
  
  iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&puStack_28,&local_3c,&local_50,param_2);
  if (iVar1 == 0) {
    return 0;
  }
                    /* try { // try from 00b06f30 to 00c06f33 has its CatchHandler @ 00b07044 */
  X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_40,&local_48,local_50);
                    /* try { // try from 00b06f4c to 00c06f53 has its CatchHandler @ 00b07060 */
  if ((local_40 == -1) || (local_40 == 5)) {
                    /* try { // try from 00b06f98 to 00c06fb7 has its CatchHandler @ 00b0704c */
    r = DSA_new();
    if (r != (DSA *)0x0) {
LAB_00b06fa4:
      ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&puStack_28,(long)local_3c);
      if (ai == (ASN1_INTEGER *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b07004 with catch @ 00b07040
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b06f30 with catch @ 00b07044
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b06f98 with catch @ 00b0704c
                        */
        iVar1 = 0x68;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b06f54 with catch @ 00b07050
                        */
        iVar3 = 0x39;
      }
      else {
        pBVar2 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
        r->g = pBVar2;
        if (pBVar2 != (BIGNUM *)0x0) {
                    /* try { // try from 00b06fd4 to 00c06fe7 has its CatchHandler @ 00b07064 */
          ASN1_INTEGER_free(ai);
          EVP_PKEY_assign(param_1,0x74,r);
          return 1;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b06f4c with catch @ 00b07060
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b06f8c with catch @ 00b07064
                       catch(type#1 @ 00000000) { ... } // from try @ 00b06fd4 with catch @ 00b07064
                        */
        iVar1 = 0x6c;
        iVar3 = 0x3e;
      }
      ERR_put_error(10,0x75,iVar1,"crypto/dsa/dsa_ameth.c",iVar3);
      goto LAB_00b07074;
    }
    iVar1 = 0x41;
    iVar3 = 0x30;
  }
  else {
                    /* try { // try from 00b06f54 to 00c06f63 has its CatchHandler @ 00b07050 */
    if (local_40 != 0x10) {
                    /* try { // try from 00b07004 to 00c07007 has its CatchHandler @ 00b07040 */
                    /* try { // try from 00b07008 to 00c07083 has its CatchHandler @ 00b06ee0 */
      ERR_put_error(10,0x75,0x69,"crypto/dsa/dsa_ameth.c",0x34);
      ai = (ASN1_STRING *)0x0;
      r = (DSA *)0x0;
      goto LAB_00b07074;
    }
    local_38 = *(uchar **)(local_48 + 2);
    r = d2i_DSAparams((DSA **)0x0,&local_38,(long)*local_48);
    if (r != (DSA *)0x0) goto LAB_00b06fa4;
                    /* try { // try from 00b06f8c to 00c06f97 has its CatchHandler @ 00b07064 */
    iVar1 = 0x68;
    iVar3 = 0x2a;
  }
  ERR_put_error(10,0x75,iVar1,"crypto/dsa/dsa_ameth.c",iVar3);
  ai = (ASN1_STRING *)0x0;
LAB_00b07074:
  ASN1_INTEGER_free(ai);
  DSA_free(r);
                    /* try { // try from 00b07084 to 00c07087 has its CatchHandler @ 00b07090 */
                    /* try { // try from 00b07088 to 00c07093 has its CatchHandler @ 00b06ee0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b07084 with catch @ 00b07090
                        */
                    /* try { // try from 00b07094 to 00c07097 has its CatchHandler @ 00b070a0 */
                    /* try { // try from 00b07098 to 00c070a3 has its CatchHandler @ 00b06ee0 */
  return 0;
}

