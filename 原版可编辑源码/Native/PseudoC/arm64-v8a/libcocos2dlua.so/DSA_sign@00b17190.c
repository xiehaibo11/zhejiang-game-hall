
int DSA_sign(int type,uchar *dgst,int dlen,uchar *sig,uint *siglen,DSA *dsa)

{
  uint uVar1;
  DSA_SIG *val;
  uchar *local_38;
  
  local_38 = sig;
  RAND_seed(dgst,dlen);
  val = DSA_do_sign(dgst,dlen,dsa);
  if (val == (DSA_SIG *)0x0) {
    *siglen = 0;
  }
  else {
    uVar1 = ASN1_item_i2d((ASN1_VALUE *)val,&local_38,(ASN1_ITEM *)&DAT_016af8b8);
    *siglen = uVar1;
    BN_clear_free(val->r);
    BN_clear_free(val->s);
    CRYPTO_free(val);
  }
  return (int)(val != (DSA_SIG *)0x0);
}

