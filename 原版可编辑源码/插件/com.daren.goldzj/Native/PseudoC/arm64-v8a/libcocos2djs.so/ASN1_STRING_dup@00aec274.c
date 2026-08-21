
ASN1_STRING * ASN1_STRING_dup(ASN1_STRING *a)

{
  int iVar1;
  ASN1_STRING *dst;
  uint uVar2;
  
                    /* catch() { ... } // from try @ 00aec0ec with catch @ 00aec27c */
  if (a != (ASN1_STRING *)0x0) {
    dst = (ASN1_STRING *)CRYPTO_zalloc(0x18,"crypto/asn1/asn1_lib.c",0x135);
    if (dst == (ASN1_STRING *)0x0) {
      ERR_put_error(0xd,0x82,0x41,"crypto/asn1/asn1_lib.c",0x137);
      return (ASN1_STRING *)0x0;
    }
    dst->type = 4;
    iVar1 = ASN1_STRING_copy(dst,a);
    if (iVar1 != 0) {
      return dst;
    }
    uVar2 = (uint)dst->flags;
    if ((uVar2 >> 4 & 1) == 0) {
      CRYPTO_free(dst->data);
    }
    if ((uVar2 >> 7 & 1) == 0) {
      CRYPTO_free(dst);
    }
  }
  return (ASN1_STRING *)0x0;
}

