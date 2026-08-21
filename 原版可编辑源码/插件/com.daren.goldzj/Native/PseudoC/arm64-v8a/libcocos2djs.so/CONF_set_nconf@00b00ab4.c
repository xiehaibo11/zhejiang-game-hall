
void CONF_set_nconf(CONF *conf,lhash_st_CONF_VALUE *hash)

{
  if (DAT_01d39098 == (CONF_METHOD *)0x0) {
    DAT_01d39098 = NCONF_default();
  }
  (*DAT_01d39098->init)(conf);
  conf->data = hash;
  return;
}

