
undefined4 FUN_00b16370(EVP_PKEY *param_1,X509_PUBKEY *param_2)

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
  X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_40,&local_48,local_50);
  if ((local_40 == -1) || (local_40 == 5)) {
    r = DSA_new();
    if (r != (DSA *)0x0) {
LAB_00b16424:
      ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&puStack_28,(long)local_3c);
      if (ai == (ASN1_INTEGER *)0x0) {
        iVar1 = 0x68;
        iVar3 = 0x39;
      }
      else {
        pBVar2 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
        r->g = pBVar2;
        if (pBVar2 != (BIGNUM *)0x0) {
          ASN1_INTEGER_free(ai);
          EVP_PKEY_assign(param_1,0x74,r);
          return 1;
        }
        iVar1 = 0x6c;
        iVar3 = 0x3e;
      }
      ERR_put_error(10,0x75,iVar1,"crypto/dsa/dsa_ameth.c",iVar3);
      goto LAB_00b164f4;
    }
    iVar1 = 0x41;
    iVar3 = 0x30;
  }
  else {
    if (local_40 != 0x10) {
      ERR_put_error(10,0x75,0x69,"crypto/dsa/dsa_ameth.c",0x34);
      ai = (ASN1_STRING *)0x0;
      r = (DSA *)0x0;
      goto LAB_00b164f4;
    }
    local_38 = *(uchar **)(local_48 + 2);
    r = d2i_DSAparams((DSA **)0x0,&local_38,(long)*local_48);
    if (r != (DSA *)0x0) goto LAB_00b16424;
    iVar1 = 0x68;
    iVar3 = 0x2a;
  }
  ERR_put_error(10,0x75,iVar1,"crypto/dsa/dsa_ameth.c",iVar3);
  ai = (ASN1_STRING *)0x0;
LAB_00b164f4:
  ASN1_INTEGER_free(ai);
  DSA_free(r);
  return 0;
}

