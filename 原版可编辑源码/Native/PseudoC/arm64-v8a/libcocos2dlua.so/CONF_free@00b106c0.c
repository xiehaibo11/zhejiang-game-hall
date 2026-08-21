
void CONF_free(lhash_st_CONF_VALUE *conf)

{
  CONF local_38;
  
  if (DAT_01782e18 == (CONF_METHOD *)0x0) {
    DAT_01782e18 = NCONF_default();
  }
  (*DAT_01782e18->init)(&local_38);
  local_38.data = conf;
  (*(local_38.meth)->destroy_data)(&local_38);
  return;
}

