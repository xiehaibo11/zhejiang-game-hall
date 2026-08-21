
int ASN1_item_i2d_fp(ASN1_ITEM *it,FILE *out,void *x)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0xd,0xc1,7,"crypto/asn1/a_i2d_fp.c",0x4a);
    iVar1 = 0;
  }
  else {
    BIO_ctrl(bp,0x6a,0,out);
                    /* try { // try from 00b8a7d8 to 00c8a7eb has its CatchHandler @ 00b8aa68 */
    iVar1 = ASN1_item_i2d_bio(it,bp,x);
                    /* try { // try from 00b8a7ec to 00c8a83b has its CatchHandler @ 00b8a6a0 */
    BIO_free(bp);
  }
  return iVar1;
}

