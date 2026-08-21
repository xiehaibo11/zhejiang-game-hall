
int NCONF_dump_bio(CONF *conf,BIO *out)

{
  int iVar1;
  
                    /* try { // try from 00b013c8 to 00c01443 has its CatchHandler @ 00b01300 */
  if (conf != (CONF *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b013d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*conf->meth->dump)(conf,out);
    return iVar1;
  }
  ERR_put_error(0xe,0x69,0x69,"crypto/conf/conf_lib.c",0x141);
  return 0;
}

