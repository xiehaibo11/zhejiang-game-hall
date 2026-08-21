
int i2d_X509_AUX(X509 *a,uchar **pp)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  uchar *local_38;
  
  if (pp == (uchar **)0x0) {
    puVar3 = (uchar *)0x0;
LAB_00b76534:
    iVar2 = ASN1_item_i2d((ASN1_VALUE *)a,pp,(ASN1_ITEM *)X509_it);
    iVar1 = iVar2;
    if ((a != (X509 *)0x0) && (0 < iVar2)) {
      iVar1 = i2d_X509_CERT_AUX((X509_CERT_AUX *)a[1].akid,pp);
      if (iVar1 < 0) {
        if (puVar3 != (uchar *)0x0) {
          *pp = puVar3;
        }
      }
      else {
        iVar1 = iVar1 + iVar2;
      }
    }
    return iVar1;
  }
  puVar3 = *pp;
  if (puVar3 != (uchar *)0x0) goto LAB_00b76534;
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,(uchar **)0x0,(ASN1_ITEM *)X509_it);
                    /* catch() { ... } // from try @ 00b7644c with catch @ 00b764a8 */
  if ((a != (X509 *)0x0) && (0 < iVar1)) {
    iVar2 = i2d_X509_CERT_AUX((X509_CERT_AUX *)a[1].akid,(uchar **)0x0);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar1 = iVar2 + iVar1;
  }
  if (iVar1 < 1) {
    return iVar1;
  }
  puVar3 = CRYPTO_malloc(iVar1,"crypto/x509/x_x509.c",0xc1);
  *pp = puVar3;
  if (puVar3 == (uchar *)0x0) {
    return -1;
  }
  local_38 = puVar3;
  iVar2 = ASN1_item_i2d((ASN1_VALUE *)a,&local_38,(ASN1_ITEM *)X509_it);
  iVar1 = iVar2;
  if ((a != (X509 *)0x0) && (0 < iVar2)) {
    iVar1 = i2d_X509_CERT_AUX((X509_CERT_AUX *)a[1].akid,&local_38);
    if (iVar1 < 0) goto LAB_00b765a4;
    iVar1 = iVar1 + iVar2;
  }
  puVar3 = local_38;
  if (0 < iVar1) {
    return iVar1;
  }
LAB_00b765a4:
  local_38 = puVar3;
  CRYPTO_free(*pp);
  *pp = (uchar *)0x0;
  return iVar1;
}

