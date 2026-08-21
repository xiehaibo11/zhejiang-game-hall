
undefined4 FUN_00b55de4(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  undefined4 uVar2;
  RSA *key;
  int local_24;
  uchar *puStack_18;
  
  iVar1 = X509_PUBKEY_get0_param
                    ((ASN1_OBJECT **)0x0,&puStack_18,&local_24,(X509_ALGOR **)0x0,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    key = d2i_RSAPublicKey((RSA **)0x0,&puStack_18,(long)local_24);
    if (key == (RSA *)0x0) {
      ERR_put_error(4,0x8b,4,"crypto/rsa/rsa_ameth.c",0x33);
      uVar2 = 0;
    }
    else {
      EVP_PKEY_assign(param_1,6,key);
      uVar2 = 1;
    }
  }
  return uVar2;
}

