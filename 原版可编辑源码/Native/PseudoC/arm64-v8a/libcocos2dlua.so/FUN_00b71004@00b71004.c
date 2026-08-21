
undefined8 FUN_00b71004(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ASN1_OBJECT *pAVar4;
  long unaff_x19;
  long unaff_x20;
  
  OPENSSL_sk_pop_free();
  if (unaff_x20 == 0) {
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
  }
  else {
    lVar3 = OPENSSL_sk_new_null();
    *(long *)(unaff_x19 + 0x30) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = OPENSSL_sk_num();
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        pAVar4 = (ASN1_OBJECT *)OPENSSL_sk_value();
        pAVar4 = OBJ_dup(pAVar4);
        if (pAVar4 == (ASN1_OBJECT *)0x0) {
          return 0;
        }
        iVar2 = OPENSSL_sk_push(*(undefined8 *)(unaff_x19 + 0x30),pAVar4);
        if (iVar2 == 0) {
          ASN1_OBJECT_free(pAVar4);
          return 0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num();
      } while (iVar1 < iVar2);
    }
    *(ulong *)(unaff_x19 + 0x18) = *(ulong *)(unaff_x19 + 0x18) | 0x80;
  }
  return 1;
}

