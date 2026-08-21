
EVP_PKEY * EVP_PKCS82PKEY(PKCS8_PRIV_KEY_INFO *p8)

{
  int iVar1;
  EVP_PKEY *pkey;
  int line;
  char acStack_78 [80];
  ASN1_OBJECT *local_28;
  
  iVar1 = PKCS8_pkey_get0(&local_28,(uchar **)0x0,(int *)0x0,(X509_ALGOR **)0x0,p8);
  if (iVar1 != 0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_put_error(6,0x6f,0x41,"crypto/evp/evp_pkey.c",0x1f);
      return (EVP_PKEY *)0x0;
    }
    iVar1 = OBJ_obj2nid(local_28);
    iVar1 = EVP_PKEY_set_type(pkey,iVar1);
    if (iVar1 == 0) {
      ERR_put_error(6,0x6f,0x76,"crypto/evp/evp_pkey.c",0x24);
      i2t_ASN1_OBJECT(acStack_78,0x50,local_28);
      ERR_add_error_data(2,"TYPE=",acStack_78);
    }
    else {
      if (*(code **)(pkey->ameth + 0x40) == (code *)0x0) {
        iVar1 = 0x90;
        line = 0x30;
      }
      else {
        iVar1 = (**(code **)(pkey->ameth + 0x40))(pkey,p8);
        if (iVar1 != 0) {
          return pkey;
        }
        iVar1 = 0x91;
        line = 0x2c;
      }
      ERR_put_error(6,0x6f,iVar1,"crypto/evp/evp_pkey.c",line);
    }
    EVP_PKEY_free(pkey);
  }
  return (EVP_PKEY *)0x0;
}

