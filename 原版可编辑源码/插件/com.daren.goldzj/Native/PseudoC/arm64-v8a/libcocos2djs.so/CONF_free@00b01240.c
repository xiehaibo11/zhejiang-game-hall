
void CONF_free(lhash_st_CONF_VALUE *conf)

{
  CONF local_38;
  
                    /* try { // try from 00b01244 to 00c0124b has its CatchHandler @ 00b012c0 */
                    /* try { // try from 00b0124c to 00c012ff has its CatchHandler @ 00b011c0 */
  if (DAT_01d39098 == (CONF_METHOD *)0x0) {
    DAT_01d39098 = NCONF_default();
  }
  (*DAT_01d39098->init)(&local_38);
  local_38.data = conf;
  (*(local_38.meth)->destroy_data)(&local_38);
  return;
}

