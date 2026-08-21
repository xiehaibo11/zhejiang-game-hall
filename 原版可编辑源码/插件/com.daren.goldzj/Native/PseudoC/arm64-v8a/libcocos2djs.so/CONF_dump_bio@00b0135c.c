
int CONF_dump_bio(lhash_st_CONF_VALUE *conf,BIO *out)

{
  int iVar1;
  CONF local_48;
  
  if (DAT_01d39098 == (CONF_METHOD *)0x0) {
    DAT_01d39098 = NCONF_default();
  }
                    /* try { // try from 00b01394 to 00c0139b has its CatchHandler @ 00b0142c */
  (*DAT_01d39098->init)(&local_48);
  local_48.data = conf;
  iVar1 = (*(local_48.meth)->dump)(&local_48,out);
                    /* try { // try from 00b013c0 to 00c013c7 has its CatchHandler @ 00b01430 */
  return iVar1;
}

