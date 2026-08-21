
stack_st_CONF_VALUE * _CONF_get_section_values(CONF *conf,char *section)

{
  long lVar1;
  stack_st_CONF_VALUE *psVar2;
  char *local_28;
  undefined8 uStack_20;
  
  if ((conf != (CONF *)0x0) && (section != (char *)0x0)) {
    uStack_20 = 0;
    local_28 = section;
    lVar1 = OPENSSL_LH_retrieve(conf->data,&local_28);
    psVar2 = (stack_st_CONF_VALUE *)0x0;
    if (lVar1 != 0) {
      psVar2 = *(stack_st_CONF_VALUE **)(lVar1 + 0x10);
    }
    return psVar2;
  }
  return (stack_st_CONF_VALUE *)0x0;
}

