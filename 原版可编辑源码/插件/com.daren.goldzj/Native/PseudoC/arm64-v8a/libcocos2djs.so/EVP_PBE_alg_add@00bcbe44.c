
int EVP_PBE_alg_add(int nid,EVP_CIPHER *cipher,EVP_MD *md,undefined1 *keygen)

{
  int iVar1;
  int iVar2;
  undefined4 *ptr;
  
  if (cipher == (EVP_CIPHER *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = EVP_CIPHER_nid(cipher);
  }
  if (md == (EVP_MD *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = EVP_MD_type(md);
  }
  if (((DAT_01d3b410 != 0) || (DAT_01d3b410 = OPENSSL_sk_new(&LAB_00bcbe18), DAT_01d3b410 != 0)) &&
     (ptr = CRYPTO_malloc(0x18,"crypto/evp/evp_pbe.c",0xa7), ptr != (undefined4 *)0x0)) {
    *ptr = 0;
    ptr[1] = nid;
    ptr[2] = iVar1;
    ptr[3] = iVar2;
    *(undefined1 **)(ptr + 4) = keygen;
    iVar1 = OPENSSL_sk_push(DAT_01d3b410,ptr);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_free(ptr);
  }
  ERR_put_error(6,0xa0,0x41,"crypto/evp/evp_pbe.c",0xb7);
  return 0;
}

