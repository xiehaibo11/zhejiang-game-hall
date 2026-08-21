
undefined8 FUN_00b75a64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  undefined8 uVar2;
  int line;
  
  pkey = EVP_PKEY_new();
  if (pkey == (EVP_PKEY *)0x0) {
    ERR_put_error(0xb,0x94,0x41,"crypto/x509/x_pubkey.c",0x6c);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)*param_2);
    iVar1 = EVP_PKEY_set_type(pkey,iVar1);
    if (iVar1 == 0) {
      iVar1 = 0x6f;
      line = 0x71;
    }
    else if (*(code **)(pkey->ameth + 0x20) == (code *)0x0) {
      iVar1 = 0x7c;
      line = 0x80;
    }
    else {
      iVar1 = (**(code **)(pkey->ameth + 0x20))(pkey,param_2);
      if (iVar1 != 0) {
        *param_1 = pkey;
        return 1;
      }
      iVar1 = 0x7d;
      line = 0x7c;
    }
    ERR_put_error(0xb,0x94,iVar1,"crypto/x509/x_pubkey.c",line);
    EVP_PKEY_free(pkey);
    uVar2 = 0;
  }
  return uVar2;
}

