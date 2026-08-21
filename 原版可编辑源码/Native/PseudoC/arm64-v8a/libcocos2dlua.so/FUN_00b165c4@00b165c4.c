
bool FUN_00b165c4(void)

{
  int iVar1;
  ASN1_OBJECT *aobj;
  ASN1_STRING *unaff_x19;
  X509_PUBKEY *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  uchar *in_stack_00000008;
  
  aobj = OBJ_nid2obj(0x74);
  iVar1 = X509_PUBKEY_set0_param(unaff_x20,aobj,unaff_w22,unaff_x19,in_stack_00000008,unaff_w21);
  if (iVar1 == 0) {
    CRYPTO_free(in_stack_00000008);
    ASN1_STRING_free(unaff_x19);
  }
  return iVar1 != 0;
}

