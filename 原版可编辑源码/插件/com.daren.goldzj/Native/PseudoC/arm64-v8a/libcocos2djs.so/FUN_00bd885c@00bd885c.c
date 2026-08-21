
int FUN_00bd885c(BIO *param_1,ASN1_VALUE *param_2,BIO *param_3,int param_4,ASN1_ITEM *param_5)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *b;
  BIO *out;
  
  type = BIO_f_base64();
  b = BIO_new(type);
  if (b == (BIO *)0x0) {
    ERR_put_error(0xd,0xd2,0x41,"crypto/asn1/asn_mime.c",0x69);
    iVar1 = 0;
  }
  else {
    out = BIO_push(b,param_1);
    iVar1 = i2d_ASN1_bio_stream(out,param_2,param_3,param_4,param_5);
    BIO_ctrl(out,0xb,0,(void *)0x0);
    BIO_pop(out);
    BIO_free(b);
  }
  return iVar1;
}

