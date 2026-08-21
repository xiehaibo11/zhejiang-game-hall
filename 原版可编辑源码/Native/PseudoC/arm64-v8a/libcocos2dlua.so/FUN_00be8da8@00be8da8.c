
void * FUN_00be8da8(BIO *param_1,ASN1_ITEM *param_2)

{
  BIO_METHOD *type;
  BIO *b;
  BIO *in;
  void *pvVar1;
  
  type = BIO_f_base64();
  b = BIO_new(type);
  if (b == (BIO *)0x0) {
    ERR_put_error(0xd,0xd1,0x41,"crypto/asn1/asn_mime.c",0x89);
    pvVar1 = (void *)0x0;
  }
  else {
    in = BIO_push(b,param_1);
    pvVar1 = ASN1_item_d2i_bio(param_2,in,(void *)0x0);
    if (pvVar1 == (void *)0x0) {
      ERR_put_error(0xd,0xd1,0x6e,"crypto/asn1/asn_mime.c",0x8f);
    }
    BIO_ctrl(in,0xb,0,(void *)0x0);
    BIO_pop(in);
    BIO_free(b);
  }
  return pvVar1;
}

