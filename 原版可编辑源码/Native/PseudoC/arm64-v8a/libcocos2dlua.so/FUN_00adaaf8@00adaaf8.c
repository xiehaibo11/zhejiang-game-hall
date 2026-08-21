
undefined8 FUN_00adaaf8(undefined8 *param_1,EVP_PKEY *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  EVP_PKEY *to;
  RSA *r;
  undefined8 uVar4;
  long *plVar5;
  
  iVar1 = ssl_cert_type(0);
  if (iVar1 < 0) {
    iVar1 = 0xf7;
    iVar2 = 0x7e;
LAB_00adabd4:
    ERR_put_error(0x14,0xc1,iVar1,"ssl/ssl_rsa.c",iVar2);
    uVar4 = 0;
  }
  else {
    plVar5 = param_1 + (long)iVar1 * 5 + 4;
    if (*plVar5 != 0) {
      to = (EVP_PKEY *)X509_get0_pubkey();
      if (to == (EVP_PKEY *)0x0) {
        iVar1 = 0x41;
        iVar2 = 0x86;
        goto LAB_00adabd4;
      }
      EVP_PKEY_copy_parameters(to,param_2);
      ERR_clear_error();
      iVar2 = EVP_PKEY_id(param_2);
      if (iVar2 == 6) {
        r = (RSA *)EVP_PKEY_get0_RSA(param_2);
        uVar3 = RSA_flags(r);
        if ((uVar3 & 1) != 0) goto LAB_00adab74;
      }
      iVar2 = X509_check_private_key((X509 *)*plVar5,param_2);
      if (iVar2 == 0) {
        X509_free((X509 *)*plVar5);
        *plVar5 = 0;
        return 0;
      }
    }
LAB_00adab74:
    EVP_PKEY_free((EVP_PKEY *)param_1[(long)iVar1 * 5 + 5]);
    EVP_PKEY_up_ref(param_2);
    uVar4 = 1;
    param_1[(long)iVar1 * 5 + 5] = param_2;
    *param_1 = plVar5;
  }
  return uVar4;
}

