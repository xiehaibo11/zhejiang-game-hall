
int NCONF_load_bio(CONF *conf,BIO *bp,long *eline)

{
  int iVar1;
  
  if (conf != (CONF *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b00d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*conf->meth->load_bio)(conf,bp,eline);
    return iVar1;
  }
                    /* try { // try from 00b00d30 to 00c00dd7 has its CatchHandler @ 00b00cc8 */
  ERR_put_error(0xe,0x6e,0x69,"crypto/conf/conf_lib.c",0xed);
  return 0;
}

