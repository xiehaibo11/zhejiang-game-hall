
stack_st_CONF_VALUE * NCONF_get_section(CONF *conf,char *section)

{
  stack_st_CONF_VALUE *psVar1;
  int reason;
  int line;
  
  if (conf == (CONF *)0x0) {
    reason = 0x69;
    line = 0xf7;
  }
  else {
    if (section != (char *)0x0) {
      psVar1 = _CONF_get_section_values(conf,section);
      return psVar1;
    }
    reason = 0x6b;
    line = 0xfc;
  }
  ERR_put_error(0xe,0x6c,reason,"crypto/conf/conf_lib.c",line);
  return (stack_st_CONF_VALUE *)0x0;
}

