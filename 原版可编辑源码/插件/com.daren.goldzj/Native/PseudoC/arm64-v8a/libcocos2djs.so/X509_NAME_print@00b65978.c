
int X509_NAME_print(BIO *bp,X509_NAME *name,int obase)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *ptr;
  byte *data;
  byte *pbVar4;
  byte *pbVar5;
  
                    /* try { // try from 00b65988 to 00c65a73 has its CatchHandler @ 00b65988
                       catch() { ... } // from try @ 00b65988 with catch @ 00b65988
                       catch() { ... } // from try @ 00b65a88 with catch @ 00b65988
                       catch() { ... } // from try @ 00b65adc with catch @ 00b65988 */
  ptr = X509_NAME_oneline(name,(char *)0x0,0);
  iVar3 = 0;
  if (ptr != (char *)0x0) {
    if (*ptr != '\0') {
      data = (byte *)(ptr + 1);
      pbVar4 = (byte *)(ptr + 2);
      do {
        pbVar5 = pbVar4 + -1;
        bVar1 = *pbVar5;
        if (bVar1 == 0) {
LAB_00b659f8:
          iVar3 = (int)pbVar5 - (int)data;
          iVar2 = BIO_write(bp,data,iVar3);
          if (iVar2 != iVar3) {
LAB_00b65a88:
                    /* try { // try from 00b65a88 to 00c65ad3 has its CatchHandler @ 00b65988 */
            ERR_put_error(0xb,0x75,7,"crypto/x509/x_name.c",0x227);
            CRYPTO_free(ptr);
            return 0;
          }
          if (*pbVar5 == 0) break;
          iVar3 = BIO_write(bp,", ",2);
          if (iVar3 != 2) goto LAB_00b65a88;
          bVar1 = *pbVar5;
          data = pbVar4;
LAB_00b65a38:
          if (bVar1 == 0) break;
        }
        else {
          if (bVar1 != 0x2f) goto LAB_00b65a38;
          if ((*pbVar4 - 0x41 < 0x1a) &&
             ((pbVar4[1] == 0x3d || ((pbVar4[1] - 0x41 < 0x1a && (pbVar4[2] == 0x3d))))))
          goto LAB_00b659f8;
        }
        pbVar4 = pbVar4 + 1;
      } while( true );
    }
    CRYPTO_free(ptr);
    iVar3 = 1;
  }
  return iVar3;
}

