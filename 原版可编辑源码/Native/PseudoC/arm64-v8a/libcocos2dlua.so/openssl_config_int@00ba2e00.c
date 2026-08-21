
char * openssl_config_int(char *param_1)

{
  uint uVar1;
  
  if ((DAT_017850e0 & 1) == 0) {
                    /* try { // try from 00ba2e1c to 00ca2e23 has its CatchHandler @ 00ba2f04 */
    OPENSSL_load_builtin_modules();
    ENGINE_load_builtin_engines();
                    /* try { // try from 00ba2e24 to 00ca2f33 has its CatchHandler @ 00ba2c0c */
    ERR_clear_error();
    uVar1 = CONF_modules_load_file((char *)0x0,param_1,0x30);
    param_1 = (char *)(ulong)uVar1;
    DAT_017850e0 = 1;
  }
  return param_1;
}

