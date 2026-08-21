
int X509_get_pubkey_parameters(EVP_PKEY *pkey,stack_st_X509 *chain)

{
  int iVar1;
  int iVar2;
  EVP_PKEY *pkey_00;
  EVP_PKEY *to;
  
  if ((pkey == (EVP_PKEY *)0x0) || (iVar1 = EVP_PKEY_missing_parameters(pkey), iVar1 != 0)) {
    iVar1 = OPENSSL_sk_num(chain);
    if (iVar1 < 1) {
      iVar1 = 0x6b;
      iVar2 = 0x780;
LAB_00b6e2e0:
      ERR_put_error(0xb,0x6e,iVar1,"crypto/x509/x509_vfy.c",iVar2);
      return 0;
    }
    iVar1 = 0;
    do {
      OPENSSL_sk_value(chain,iVar1);
      pkey_00 = (EVP_PKEY *)X509_get0_pubkey();
      if (pkey_00 == (EVP_PKEY *)0x0) {
        iVar1 = 0x6c;
        iVar2 = 0x778;
        goto LAB_00b6e2e0;
      }
      iVar2 = EVP_PKEY_missing_parameters(pkey_00);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(chain);
    } while (iVar1 < iVar2);
    if (0 < iVar1) {
      iVar1 = iVar1 + 1;
      do {
        OPENSSL_sk_value(chain,iVar1 + -2);
        to = (EVP_PKEY *)X509_get0_pubkey();
        EVP_PKEY_copy_parameters(to,pkey_00);
        iVar1 = iVar1 + -1;
      } while (1 < iVar1);
    }
    if (pkey != (EVP_PKEY *)0x0) {
      EVP_PKEY_copy_parameters(pkey,pkey_00);
    }
  }
  return 1;
}

