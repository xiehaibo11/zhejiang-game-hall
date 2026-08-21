
bool X509v3_asid_add_inherit(long *param_1,int param_2)

{
  bool bVar1;
  ASN1_VALUE *pAVar2;
  ASN1_NULL *pAVar3;
  
  bVar1 = false;
  if (param_1 != (long *)0x0) {
    if (param_2 == 1) {
      param_1 = param_1 + 1;
    }
    else if (param_2 != 0) {
      return false;
    }
    if ((int *)*param_1 == (int *)0x0) {
      pAVar2 = ASN1_item_new((ASN1_ITEM *)ASIdentifierChoice_it);
      *param_1 = (long)pAVar2;
      bVar1 = false;
      if (pAVar2 != (ASN1_VALUE *)0x0) {
        if (*(long *)(pAVar2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: (*choice)->u.inherit == NULL","crypto/x509v3/v3_asid.c",
                      0xaa);
        }
        pAVar3 = ASN1_NULL_new();
        *(ASN1_NULL **)(*param_1 + 8) = pAVar3;
        bVar1 = false;
        if (pAVar3 != (ASN1_NULL *)0x0) {
          bVar1 = true;
          *(undefined4 *)*param_1 = 0;
        }
      }
    }
    else {
      bVar1 = *(int *)*param_1 == 0;
    }
  }
  return bVar1;
}

