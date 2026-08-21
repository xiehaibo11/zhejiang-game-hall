
char * openssl_config_int(char *param_1)

{
  uint uVar1;
  
  if ((DAT_01d3b360 & 1) == 0) {
    OPENSSL_load_builtin_modules();
    ENGINE_load_builtin_engines();
    ERR_clear_error();
    uVar1 = CONF_modules_load_file((char *)0x0,param_1,0x30);
    param_1 = (char *)(ulong)uVar1;
    DAT_01d3b360 = 1;
  }
  return param_1;
}

