
void CMS_SignerInfo_set1_signer_cert(CMS_SignerInfo *si,X509 *signer)

{
  EVP_PKEY *pEVar1;
  
  if (signer != (X509 *)0x0) {
                    /* catch() { ... } // from try @ 00ba0714 with catch @ 00ba0ae4 */
    X509_up_ref(signer);
                    /* catch() { ... } // from try @ 00ba0750 with catch @ 00ba0ae8
                       catch() { ... } // from try @ 00ba078c with catch @ 00ba0ae8 */
                    /* catch() { ... } // from try @ 00ba0128 with catch @ 00ba0aec
                       catch() { ... } // from try @ 00ba0180 with catch @ 00ba0aec
                       catch() { ... } // from try @ 00ba03f8 with catch @ 00ba0aec
                       catch() { ... } // from try @ 00ba0684 with catch @ 00ba0aec */
    EVP_PKEY_free(*(EVP_PKEY **)(si + 0x40));
    pEVar1 = X509_get_pubkey(signer);
    *(EVP_PKEY **)(si + 0x40) = pEVar1;
  }
  X509_free(*(X509 **)(si + 0x38));
  *(X509 **)(si + 0x38) = signer;
  return;
}

