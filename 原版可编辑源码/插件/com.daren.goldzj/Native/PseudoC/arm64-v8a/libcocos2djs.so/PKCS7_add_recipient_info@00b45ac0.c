
int PKCS7_add_recipient_info(PKCS7 *p7,PKCS7_RECIP_INFO *ri)

{
  int iVar1;
  stack_st_PKCS7_RECIP_INFO **ppsVar2;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (iVar1 == 0x17) {
    ppsVar2 = (stack_st_PKCS7_RECIP_INFO **)&((p7->d).data)->data;
  }
  else {
    if (iVar1 != 0x18) {
      ERR_put_error(0x21,0x66,0x71,"crypto/pkcs7/pk7_lib.c",0x1c6);
      return 0;
    }
    ppsVar2 = &((p7->d).signed_and_enveloped)->recipientinfo;
  }
  iVar1 = OPENSSL_sk_push(*ppsVar2,ri);
  return (uint)(iVar1 != 0);
}

