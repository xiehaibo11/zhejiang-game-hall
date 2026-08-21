
ASN1_VALUE * FUN_00b6897c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ASN1_VALUE *pAVar3;
  void *__s1;
  ASN1_VALUE *pAVar4;
  ASN1_STRING *str;
  size_t __n;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  
  local_34 = (undefined1)((ulong)param_2 >> 8);
  local_33 = (undefined1)param_2;
  if (param_3 == (undefined4 *)0x0) {
    __n = 2;
  }
  else {
    __n = 3;
    local_32 = (undefined1)*param_3;
  }
  iVar1 = OPENSSL_sk_num(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      pAVar3 = (ASN1_VALUE *)OPENSSL_sk_value(param_1,iVar1);
      __s1 = *(void **)(*(int **)pAVar3 + 2);
      if (__s1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: f->addressFamily->data != NULL","crypto/x509v3/v3_addr.c",499
                   );
      }
      if ((**(int **)pAVar3 == (int)__n) && (iVar2 = memcmp(__s1,&local_34,__n), iVar2 == 0)) {
        return pAVar3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(param_1);
    } while (iVar1 < iVar2);
  }
  pAVar3 = ASN1_item_new((ASN1_ITEM *)IPAddressFamily_it);
                    /* try { // try from 00b68a28 to 00c68a3f has its CatchHandler @ 00b68a5c */
  if (pAVar3 != (ASN1_VALUE *)0x0) {
    if (*(long *)(pAVar3 + 8) == 0) {
      pAVar4 = ASN1_item_new((ASN1_ITEM *)IPAddressChoice_it);
                    /* try { // try from 00b68a40 to 00c68a57 has its CatchHandler @ 00b68748 */
      *(ASN1_VALUE **)(pAVar3 + 8) = pAVar4;
      if (pAVar4 == (ASN1_VALUE *)0x0) goto LAB_00b68a7c;
    }
    str = *(ASN1_STRING **)pAVar3;
    if (str == (ASN1_STRING *)0x0) {
      str = ASN1_OCTET_STRING_new();
      *(ASN1_STRING **)pAVar3 = str;
                    /* try { // try from 00b68a58 to 00c68a5b has its CatchHandler @ 00b68a6c */
      if (str == (ASN1_OCTET_STRING *)0x0) goto LAB_00b68a7c;
    }
                    /* catch() { ... } // from try @ 00b68a28 with catch @ 00b68a5c
                       try { // try from 00b68a5c to 00c68adb has its CatchHandler @ 00b68748 */
    iVar1 = ASN1_OCTET_STRING_set(str,&local_34,(int)__n);
                    /* catch() { ... } // from try @ 00b688ec with catch @ 00b68a6c
                       catch() { ... } // from try @ 00b68a58 with catch @ 00b68a6c */
    if ((iVar1 != 0) && (iVar1 = OPENSSL_sk_push(param_1,pAVar3), iVar1 != 0)) {
      return pAVar3;
    }
  }
LAB_00b68a7c:
  ASN1_item_free(pAVar3,(ASN1_ITEM *)IPAddressFamily_it);
  return (ASN1_VALUE *)0x0;
}

