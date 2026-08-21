
void NCONF_free_data(CONF *conf)

{
  if (conf != (CONF *)0x0) {
                    /* catch() { ... } // from try @ 00b01204 with catch @ 00b012a0 */
                    /* WARNING: Could not recover jumptable at 0x00b012a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*conf->meth->destroy_data)(conf);
    return;
  }
  return;
}

