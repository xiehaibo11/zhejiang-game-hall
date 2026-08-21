
undefined8 ssl_cert_type(undefined8 param_1,EVP_PKEY *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == (EVP_PKEY *)0x0) &&
     (param_2 = (EVP_PKEY *)X509_get0_pubkey(), param_2 == (EVP_PKEY *)0x0)) {
    return 0xffffffff;
  }
  iVar1 = EVP_PKEY_id(param_2);
  uVar2 = 0xffffffff;
  if (iVar1 < 0x32b) {
    if (iVar1 == 6) {
      return 0;
    }
    if (iVar1 == 0x74) {
      return 2;
    }
    if (iVar1 == 0x198) {
      return 3;
    }
  }
  else {
    if (iVar1 == 0x32b) {
      return 4;
    }
    if (iVar1 == 0x3d3) {
      uVar2 = 5;
    }
    else if (iVar1 == 0x3d4) {
      return 6;
    }
  }
  return uVar2;
}

