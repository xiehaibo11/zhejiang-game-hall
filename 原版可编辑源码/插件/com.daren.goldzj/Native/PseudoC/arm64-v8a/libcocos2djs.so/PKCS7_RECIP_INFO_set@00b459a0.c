
int PKCS7_RECIP_INFO_set(PKCS7_RECIP_INFO *p7i,X509 *x509)

{
  int iVar1;
  X509_NAME *name;
  ASN1_INTEGER *a;
  ASN1_STRING *pAVar2;
  long lVar3;
  int line;
  code *pcVar4;
  PKCS7_ISSUER_AND_SERIAL *xn;
  
  iVar1 = ASN1_INTEGER_set(p7i->version,0);
  if (iVar1 != 0) {
    xn = p7i->issuer_and_serial;
    name = X509_get_issuer_name(x509);
    iVar1 = X509_NAME_set(&xn->issuer,name);
    if (iVar1 != 0) {
      ASN1_INTEGER_free(p7i->issuer_and_serial->serial);
      a = X509_get_serialNumber(x509);
      pAVar2 = ASN1_INTEGER_dup(a);
      p7i->issuer_and_serial->serial = pAVar2;
      if (pAVar2 != (ASN1_STRING *)0x0) {
        lVar3 = X509_get0_pubkey(x509);
        if (((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) ||
           (pcVar4 = *(code **)(*(long *)(lVar3 + 0x10) + 0xb0), pcVar4 == (code *)0x0)) {
          iVar1 = 0x96;
          line = 0x1e2;
        }
        else {
          iVar1 = (*pcVar4)(lVar3,2,0,p7i);
          if (iVar1 == -2) {
            iVar1 = 0x96;
            line = 0x1e9;
          }
          else {
            if (0 < iVar1) {
              X509_up_ref(x509);
              p7i->cert = x509;
              return 1;
            }
            iVar1 = 0x95;
            line = 0x1ee;
          }
        }
        ERR_put_error(0x21,0x82,iVar1,"crypto/pkcs7/pk7_lib.c",line);
      }
    }
  }
  return 0;
}

