
void _CONF_free_data(CONF *conf)

{
  if ((conf != (CONF *)0x0) && (conf->data != (lhash_st_CONF_VALUE *)0x0)) {
    OPENSSL_LH_set_down_load(conf->data,0);
    OPENSSL_LH_doall_arg(conf->data,&LAB_00ba1c78,conf->data);
    OPENSSL_LH_doall(conf->data,&LAB_00ba1c94);
                    /* try { // try from 00ba1c5c to 00ca1c6f has its CatchHandler @ 00ba1ee4 */
    OPENSSL_LH_free(conf->data);
    return;
  }
                    /* try { // try from 00ba1c74 to 00ca1c77 has its CatchHandler @ 00ba1e70 */
  return;
}

