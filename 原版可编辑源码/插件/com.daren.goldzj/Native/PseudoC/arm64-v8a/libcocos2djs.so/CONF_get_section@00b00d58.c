
stack_st_CONF_VALUE * CONF_get_section(lhash_st_CONF_VALUE *conf,char *section)

{
  stack_st_CONF_VALUE *psVar1;
  CONF CStack_48;
  
  psVar1 = (stack_st_CONF_VALUE *)0x0;
  if (conf != (lhash_st_CONF_VALUE *)0x0) {
    if (DAT_01d39098 == (CONF_METHOD *)0x0) {
      DAT_01d39098 = NCONF_default();
    }
    (*DAT_01d39098->init)(&CStack_48);
    CStack_48.data = conf;
    if (section == (char *)0x0) {
                    /* catch() { ... } // from try @ 00b00d0c with catch @ 00b00dbc */
      ERR_put_error(0xe,0x6c,0x6b,"crypto/conf/conf_lib.c",0xfc);
      psVar1 = (stack_st_CONF_VALUE *)0x0;
    }
    else {
      psVar1 = _CONF_get_section_values(&CStack_48,section);
    }
  }
                    /* try { // try from 00b00dd8 to 00c00fdb has its CatchHandler @ 00b00dd8
                       catch() { ... } // from try @ 00b00dd8 with catch @ 00b00dd8
                       catch() { ... } // from try @ 00b01010 with catch @ 00b00dd8 */
  return psVar1;
}

