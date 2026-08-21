
undefined4 CTLOG_STORE_load_file(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *arg;
  CONF *conf;
  char *list;
  undefined4 uVar2;
  
  arg = (undefined8 *)CRYPTO_zalloc(0x18,"crypto/ct/ct_log.c",0x3b);
  if (arg == (undefined8 *)0x0) {
    ERR_put_error(0x32,0x7a,0x41,"crypto/ct/ct_log.c",0x3e);
  }
  *arg = param_1;
  conf = NCONF_new((CONF_METHOD *)0x0);
  arg[1] = conf;
  if (conf != (CONF *)0x0) {
    iVar1 = NCONF_load(conf,param_2,(long *)0x0);
    if (iVar1 < 1) {
      iVar1 = 0xcf;
    }
    else {
      list = NCONF_get_string((CONF *)arg[1],(char *)0x0,"enabled_logs");
      if (list == (char *)0x0) {
        iVar1 = 0xd5;
      }
      else {
        iVar1 = CONF_parse_list(list,0x2c,1,(list_cb *)&LAB_00b11930,arg);
        if ((iVar1 != 0) && (arg[2] == 0)) {
          uVar2 = 1;
          goto LAB_00b118f8;
        }
        iVar1 = 0xdb;
      }
    }
    ERR_put_error(0x32,0x7b,0x6d,"crypto/ct/ct_log.c",iVar1);
  }
  uVar2 = 0;
LAB_00b118f8:
  NCONF_free((CONF *)arg[1]);
  CRYPTO_free(arg);
  return uVar2;
}

