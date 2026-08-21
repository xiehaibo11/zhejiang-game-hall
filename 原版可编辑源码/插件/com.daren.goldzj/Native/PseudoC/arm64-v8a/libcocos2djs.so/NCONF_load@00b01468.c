
int NCONF_load(CONF *conf,char *file,long *eline)

{
  int iVar1;
  
  if (conf != (CONF *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b01474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*conf->meth->load)(conf,file,eline);
    return iVar1;
  }
                    /* try { // try from 00b0147c to 00c0152f has its CatchHandler @ 00b0147c
                       catch() { ... } // from try @ 00b0147c with catch @ 00b0147c
                       catch() { ... } // from try @ 00b01540 with catch @ 00b0147c */
  ERR_put_error(0xe,0x71,0x69,"crypto/conf/conf_lib.c",0xd4);
  return 0;
}

