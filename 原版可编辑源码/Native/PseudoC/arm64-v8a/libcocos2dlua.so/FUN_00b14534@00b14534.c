
undefined4 FUN_00b14534(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  DH *dh;
  ASN1_INTEGER *ai;
  BIGNUM *pBVar2;
  int line;
  X509_ALGOR *local_50;
  int *local_48;
  int local_40;
  int local_3c;
  uchar *local_38;
  uchar *puStack_28;
  
  iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&puStack_28,&local_3c,&local_50,param_2);
  if (iVar1 != 0) {
    X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_40,&local_48,local_50);
    if (local_40 == 0x10) {
      local_38 = *(uchar **)(local_48 + 2);
      if (param_1->ameth == (EVP_PKEY_ASN1_METHOD *)dhx_asn1_meth) {
        dh = (DH *)d2i_DHxparams(0);
      }
      else {
        dh = d2i_DHparams((DH **)0x0,&local_38,(long)*local_48);
      }
      if (dh == (DH *)0x0) {
        ERR_put_error(5,0x6c,0x68,"crypto/dh/dh_ameth.c",0x47);
        ai = (ASN1_STRING *)0x0;
      }
      else {
        ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&puStack_28,(long)local_3c);
        if (ai == (ASN1_INTEGER *)0x0) {
          iVar1 = 0x68;
          line = 0x4c;
        }
        else {
          pBVar2 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
          dh->pub_key = pBVar2;
          if (pBVar2 != (BIGNUM *)0x0) {
            ASN1_INTEGER_free(ai);
            EVP_PKEY_assign(param_1,*(int *)param_1->ameth,dh);
            return 1;
          }
          iVar1 = 0x6d;
          line = 0x52;
        }
        ERR_put_error(5,0x6c,iVar1,"crypto/dh/dh_ameth.c",line);
      }
    }
    else {
      ERR_put_error(5,0x6c,0x69,"crypto/dh/dh_ameth.c",0x3e);
      ai = (ASN1_STRING *)0x0;
      dh = (DH *)0x0;
    }
    ASN1_INTEGER_free(ai);
    DH_free(dh);
  }
  return 0;
}

