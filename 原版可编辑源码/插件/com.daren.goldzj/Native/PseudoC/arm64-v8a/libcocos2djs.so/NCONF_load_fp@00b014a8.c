
int NCONF_load_fp(CONF *conf,FILE *fp,long *eline)

{
  int iVar1;
  BIO *bp;
  
  bp = BIO_new_fp(fp,0);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0xe,0x72,7,"crypto/conf/conf_lib.c",0xe1);
    iVar1 = 0;
  }
  else {
    if (conf == (CONF *)0x0) {
                    /* try { // try from 00b01530 to 00c0153f has its CatchHandler @ 00b01544 */
      ERR_put_error(0xe,0x6e,0x69,"crypto/conf/conf_lib.c",0xed);
      iVar1 = 0;
    }
    else {
      iVar1 = (*conf->meth->load_bio)(conf,bp,eline);
    }
                    /* try { // try from 00b01540 to 00c0155f has its CatchHandler @ 00b0147c */
    BIO_free(bp);
  }
                    /* catch() { ... } // from try @ 00b01530 with catch @ 00b01544 */
  return iVar1;
}

