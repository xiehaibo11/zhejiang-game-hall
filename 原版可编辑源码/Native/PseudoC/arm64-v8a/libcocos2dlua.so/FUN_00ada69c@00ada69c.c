
undefined8 FUN_00ada69c(undefined8 *param_1,X509 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  EVP_PKEY *to;
  RSA *r;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
                    /* try { // try from 00ada6b0 to 00bda6bb has its CatchHandler @ 00ada738 */
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
                    /* try { // try from 00ada6ec to 00bda6f3 has its CatchHandler @ 00ada724 */
        iVar2 = EC_KEY_can_sign();
        if (iVar2 == 0) {
          iVar1 = 0x13e;
          iVar2 = 0x149;
          goto LAB_00ada7c4;
        }
      }
                    /* try { // try from 00ada6f4 to 00bda717 has its CatchHandler @ 00ada568 */
      puVar5 = param_1 + (long)iVar1 * 5 + 5;
      puVar4 = param_1 + (long)iVar1 * 5 + 4;
      if ((EVP_PKEY *)*puVar5 != (EVP_PKEY *)0x0) {
        EVP_PKEY_copy_parameters(to,(EVP_PKEY *)*puVar5);
        ERR_clear_error();
                    /* try { // try from 00ada718 to 00bda71f has its CatchHandler @ 00ada720 */
        iVar1 = EVP_PKEY_id((EVP_PKEY *)*puVar5);
                    /* catch() { ... } // from try @ 00ada684 with catch @ 00ada720
                       catch() { ... } // from try @ 00ada718 with catch @ 00ada720
                       try { // try from 00ada720 to 00bda773 has its CatchHandler @ 00ada568 */
        if (iVar1 == 6) {
                    /* catch() { ... } // from try @ 00ada6ec with catch @ 00ada724 */
          r = (RSA *)EVP_PKEY_get0_RSA(*puVar5);
          uVar3 = RSA_flags(r);
          if ((uVar3 & 1) != 0) goto LAB_00ada754;
        }
                    /* catch() { ... } // from try @ 00ada6b0 with catch @ 00ada738 */
        iVar1 = X509_check_private_key(param_2,(EVP_PKEY *)*puVar5);
        if (iVar1 == 0) {
          EVP_PKEY_free((EVP_PKEY *)*puVar5);
          *puVar5 = 0;
          ERR_clear_error();
        }
      }
LAB_00ada754:
                    /* catch() { ... } // from try @ 00ada5b8 with catch @ 00ada758 */
      X509_free((X509 *)*puVar4);
      X509_up_ref(param_2);
      *puVar4 = param_2;
      *param_1 = puVar4;
      return 1;
    }
    iVar1 = 0xf7;
    iVar2 = 0x144;
  }
LAB_00ada7c4:
  ERR_put_error(0x14,0xbf,iVar1,"ssl/ssl_rsa.c",iVar2);
  return 0;
}

