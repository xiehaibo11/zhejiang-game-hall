
stack_st_PKCS7_SIGNER_INFO * PKCS7_get_signer_info(PKCS7 *p7)

{
  int iVar1;
  stack_st_PKCS7_SIGNER_INFO *psVar2;
  
  psVar2 = (stack_st_PKCS7_SIGNER_INFO *)0x0;
  if (p7 != (PKCS7 *)0x0) {
    if (((p7->d).ptr == (char *)0x0) ||
       ((iVar1 = OBJ_obj2nid(p7->type), iVar1 != 0x16 &&
        (iVar1 = OBJ_obj2nid(p7->type), iVar1 != 0x18)))) {
      psVar2 = (stack_st_PKCS7_SIGNER_INFO *)0x0;
    }
    else {
      psVar2 = ((p7->d).sign)->signer_info;
    }
  }
  return psVar2;
}

