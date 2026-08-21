
int DSA_sign(int type,uchar *dgst,int dlen,uchar *sig,uint *siglen,DSA *dsa)

{
  uint uVar1;
  DSA_SIG *val;
  uchar *local_38;
  
  local_38 = sig;
                    /* try { // try from 00b07d1c to 00c07d23 has its CatchHandler @ 00b07d6c */
                    /* try { // try from 00b07d24 to 00c07d67 has its CatchHandler @ 00b07c88 */
  RAND_seed(dgst,dlen);
  val = DSA_do_sign(dgst,dlen,dsa);
  if (val == (DSA_SIG *)0x0) {
    *siglen = 0;
  }
  else {
                    /* try { // try from 00b07d68 to 00c07d6b has its CatchHandler @ 00b07d6c */
                    /* catch() { ... } // from try @ 00b07d1c with catch @ 00b07d6c
                       catch() { ... } // from try @ 00b07d68 with catch @ 00b07d6c
                       try { // try from 00b07d6c to 00c07d7f has its CatchHandler @ 00b07c88 */
    uVar1 = ASN1_item_i2d((ASN1_VALUE *)val,&local_38,(ASN1_ITEM *)&DAT_01c74968);
    *siglen = uVar1;
    BN_clear_free(val->r);
    BN_clear_free(val->s);
    CRYPTO_free(val);
  }
  return (int)(val != (DSA_SIG *)0x0);
}

