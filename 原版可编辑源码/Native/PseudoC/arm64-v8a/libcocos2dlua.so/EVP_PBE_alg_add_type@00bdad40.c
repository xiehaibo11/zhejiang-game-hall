
int EVP_PBE_alg_add_type(int pbe_type,int pbe_nid,int cipher_nid,int md_nid,undefined1 *keygen)

{
  int iVar1;
  int *ptr;
  
  if (((DAT_01785190 != 0) || (DAT_01785190 = OPENSSL_sk_new(&LAB_00bdae18), DAT_01785190 != 0)) &&
     (ptr = CRYPTO_malloc(0x18,"crypto/evp/evp_pbe.c",0xa7), ptr != (int *)0x0)) {
    *ptr = pbe_type;
    ptr[1] = pbe_nid;
    ptr[2] = cipher_nid;
    ptr[3] = md_nid;
    *(undefined1 **)(ptr + 4) = keygen;
    iVar1 = OPENSSL_sk_push(DAT_01785190,ptr);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_free(ptr);
  }
  ERR_put_error(6,0xa0,0x41,"crypto/evp/evp_pbe.c",0xb7);
  return 0;
}

