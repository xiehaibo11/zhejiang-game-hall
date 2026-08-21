
int i2d_ASN1_bio_stream(BIO *out,ASN1_VALUE *val,BIO *in,int flags,ASN1_ITEM *it)

{
  BIO *out_00;
  BIO *pBVar1;
  
  if (((uint)flags >> 0xc & 1) == 0) {
    ASN1_item_i2d_bio(it,out,val);
  }
  else {
    out_00 = BIO_new_NDEF(out,val,it);
    if (out_00 == (BIO *)0x0) {
      ERR_put_error(0xd,0xd3,0x41,"crypto/asn1/asn_mime.c",0x4b);
      return 0;
    }
    SMIME_crlf_copy(in,out_00,flags);
    BIO_ctrl(out_00,0xb,0,(void *)0x0);
    do {
      pBVar1 = BIO_pop(out_00);
      BIO_free(out_00);
      out_00 = pBVar1;
    } while (pBVar1 != out);
  }
  return 1;
}

