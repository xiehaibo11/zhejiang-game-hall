
PKCS7_RECIP_INFO * PKCS7_add_recipient(PKCS7 *p7,X509 *x509)

{
  int iVar1;
  PKCS7_RECIP_INFO *p7i;
  stack_st_PKCS7_RECIP_INFO **ppsVar2;
  
  p7i = PKCS7_RECIP_INFO_new();
  if ((p7i != (PKCS7_RECIP_INFO *)0x0) && (iVar1 = PKCS7_RECIP_INFO_set(p7i,x509), iVar1 != 0)) {
    iVar1 = OBJ_obj2nid(p7->type);
    if (iVar1 == 0x17) {
      ppsVar2 = (stack_st_PKCS7_RECIP_INFO **)&((p7->d).data)->data;
    }
    else {
      if (iVar1 != 0x18) {
        ERR_put_error(0x21,0x66,0x71,"crypto/pkcs7/pk7_lib.c",0x1c6);
        goto LAB_00b45980;
      }
      ppsVar2 = &((p7->d).signed_and_enveloped)->recipientinfo;
    }
    iVar1 = OPENSSL_sk_push(*ppsVar2,p7i);
    if (iVar1 != 0) {
      return p7i;
    }
  }
LAB_00b45980:
  PKCS7_RECIP_INFO_free(p7i);
  return (PKCS7_RECIP_INFO *)0x0;
}

