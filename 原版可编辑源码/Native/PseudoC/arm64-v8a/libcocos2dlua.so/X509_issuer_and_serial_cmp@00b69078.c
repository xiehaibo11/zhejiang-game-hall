
int X509_issuer_and_serial_cmp(X509 *a,X509 *b)

{
  int iVar1;
  X509_NAME *a_00;
  X509_NAME *a_01;
  
  iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER *)&a->sig_alg,(ASN1_INTEGER *)&b->sig_alg);
  if (iVar1 == 0) {
    a_00 = *(X509_NAME **)&(a->ex_data).dummy;
    a_01 = *(X509_NAME **)&(b->ex_data).dummy;
    if ((((a_00->canon_enc == (uchar *)0x0) || (a_00->modified != 0)) &&
        (iVar1 = i2d_X509_NAME(a_00,(uchar **)0x0), iVar1 < 0)) ||
       (((a_01->canon_enc == (uchar *)0x0 || (a_01->modified != 0)) &&
        (iVar1 = i2d_X509_NAME(a_01,(uchar **)0x0), iVar1 < 0)))) {
      iVar1 = -2;
    }
    else {
      iVar1 = a_00->canon_enclen - a_01->canon_enclen;
      if (iVar1 == 0) {
        iVar1 = memcmp(a_00->canon_enc,a_01->canon_enc,(long)a_00->canon_enclen);
        return iVar1;
      }
    }
  }
  return iVar1;
}

