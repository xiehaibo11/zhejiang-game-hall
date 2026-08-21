
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_OBJECT * ASN1_OBJECT_new(void)

{
  ASN1_OBJECT *pAVar1;
  
  pAVar1 = (ASN1_OBJECT *)CRYPTO_zalloc(0x28,"crypto/asn1/a_object.c",0x146);
  if (pAVar1 != (ASN1_OBJECT *)0x0) {
    pAVar1->flags = 1;
    return pAVar1;
  }
  ERR_put_error(0xd,0x7b,0x41,"crypto/asn1/a_object.c",0x148);
  return (ASN1_OBJECT *)0x0;
}

