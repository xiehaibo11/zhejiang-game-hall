
lhash_st_CONF_VALUE * CONF_load_fp(lhash_st_CONF_VALUE *conf,FILE *fp,long *eline)

{
  int iVar1;
  BIO *bp;
  lhash_st_CONF_VALUE *plVar2;
  CONF local_48;
  
  bp = BIO_new_fp(fp,0);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0xe,0x67,7,"crypto/conf/conf_lib.c",0x49);
    plVar2 = (lhash_st_CONF_VALUE *)0x0;
  }
  else {
    if (DAT_01d39098 == (CONF_METHOD *)0x0) {
      DAT_01d39098 = NCONF_default();
    }
    (*DAT_01d39098->init)(&local_48);
    local_48.data = conf;
    iVar1 = (*(local_48.meth)->load_bio)(&local_48,bp,eline);
                    /* try { // try from 00b00cc8 to 00c00d0b has its CatchHandler @ 00b00cc8
                       catch() { ... } // from try @ 00b00cc8 with catch @ 00b00cc8
                       catch() { ... } // from try @ 00b00d30 with catch @ 00b00cc8 */
    plVar2 = (lhash_st_CONF_VALUE *)0x0;
    if (iVar1 != 0) {
      plVar2 = local_48.data;
    }
    BIO_free(bp);
  }
                    /* try { // try from 00b00d0c to 00c00d2f has its CatchHandler @ 00b00dbc */
  return plVar2;
}

