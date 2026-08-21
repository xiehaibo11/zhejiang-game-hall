
undefined8 FUN_00acb7e8(undefined8 *param_1,X509 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  EVP_PKEY *to;
  RSA *r;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  to = (EVP_PKEY *)X509_get0_pubkey(param_2);
  if (to == (EVP_PKEY *)0x0) {
    iVar1 = 0x10c;
    iVar2 = 0x13e;
  }
  else {
    iVar1 = ssl_cert_type(param_2,to);
    if (-1 < iVar1) {
      if (iVar1 == 3) {
        EVP_PKEY_get0_EC_KEY(to);
        iVar2 = EC_KEY_can_sign();
        if (iVar2 == 0) {
          iVar1 = 0x13e;
          iVar2 = 0x149;
          goto LAB_00acb910;
        }
      }
      puVar5 = param_1 + (long)iVar1 * 5 + 5;
      puVar4 = param_1 + (long)iVar1 * 5 + 4;
      if ((EVP_PKEY *)*puVar5 != (EVP_PKEY *)0x0) {
        EVP_PKEY_copy_parameters(to,(EVP_PKEY *)*puVar5);
        ERR_clear_error();
        iVar1 = EVP_PKEY_id((EVP_PKEY *)*puVar5);
        if (iVar1 == 6) {
          r = (RSA *)EVP_PKEY_get0_RSA(*puVar5);
          uVar3 = RSA_flags(r);
          if ((uVar3 & 1) != 0) goto LAB_00acb8a0;
        }
        iVar1 = X509_check_private_key(param_2,(EVP_PKEY *)*puVar5);
                    /* try { // try from 00acb88c to 00bcb893 has its CatchHandler @ 00acb8ac */
        if (iVar1 == 0) {
                    /* try { // try from 00acb894 to 00bcb8c3 has its CatchHandler @ 00acb758 */
          EVP_PKEY_free((EVP_PKEY *)*puVar5);
          *puVar5 = 0;
          ERR_clear_error();
        }
      }
LAB_00acb8a0:
      X509_free((X509 *)*puVar4);
                    /* catch() { ... } // from try @ 00acb88c with catch @ 00acb8ac */
      X509_up_ref(param_2);
      *puVar4 = param_2;
      *param_1 = puVar4;
      return 1;
    }
    iVar1 = 0xf7;
    iVar2 = 0x144;
  }
LAB_00acb910:
  ERR_put_error(0x14,0xbf,iVar1,"ssl/ssl_rsa.c",iVar2);
  return 0;
}

