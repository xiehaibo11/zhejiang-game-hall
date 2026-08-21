
int EVP_CIPHER_get_asn1_iv(EVP_CIPHER_CTX *c,ASN1_TYPE *type)

{
  uint max_len;
  uint uVar1;
  
  if (type != (ASN1_TYPE *)0x0) {
    max_len = c->cipher->iv_len;
    if (0x10 < max_len) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: l <= sizeof(c->iv)","crypto/evp/evp_lib.c",0x52);
    }
    uVar1 = ASN1_TYPE_get_octetstring(type,c->oiv,max_len);
    if (uVar1 != max_len) {
      return -1;
    }
    if (0 < (int)max_len) {
      memcpy(c->iv,c->oiv,(ulong)max_len);
      return max_len;
    }
  }
  return 0;
}

