
void CONF_set_nconf(CONF *conf,lhash_st_CONF_VALUE *hash)

{
  if (DAT_01782e18 == (CONF_METHOD *)0x0) {
    DAT_01782e18 = NCONF_default();
  }
  (*DAT_01782e18->init)(conf);
  conf->data = hash;
  return;
}

