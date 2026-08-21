
ASN1_OCTET_STRING * SXNET_get_id_ulong(SXNET *sx,ulong lzone)

{
  int iVar1;
  int iVar2;
  ASN1_INTEGER *a;
  undefined8 *puVar3;
  ASN1_OCTET_STRING *pAVar4;
  
  a = ASN1_INTEGER_new();
  if ((a == (ASN1_INTEGER *)0x0) || (iVar1 = ASN1_INTEGER_set(a,lzone), iVar1 == 0)) {
    ERR_put_error(0x22,0x81,0x41,"crypto/x509v3/v3_sxnet.c",0xcf);
    ASN1_INTEGER_free(a);
    pAVar4 = (ASN1_OCTET_STRING *)0x0;
  }
  else {
    iVar1 = OPENSSL_sk_num(sx->ids);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(sx->ids,iVar1);
        iVar2 = ASN1_INTEGER_cmp((ASN1_INTEGER *)*puVar3,a);
        if (iVar2 == 0) {
          pAVar4 = (ASN1_OCTET_STRING *)puVar3[1];
          goto LAB_00b84f5c;
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(sx->ids);
      } while (iVar1 < iVar2);
    }
    pAVar4 = (ASN1_OCTET_STRING *)0x0;
LAB_00b84f5c:
    ASN1_INTEGER_free(a);
  }
  return pAVar4;
}

