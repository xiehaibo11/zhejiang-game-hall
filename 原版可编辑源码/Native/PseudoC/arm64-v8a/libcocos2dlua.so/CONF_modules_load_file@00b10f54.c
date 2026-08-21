
int CONF_modules_load_file(char *filename,char *appname,ulong flags)

{
  int iVar1;
  CONF *conf;
  char *file;
  ulong uVar2;
  
  conf = NCONF_new((CONF_METHOD *)0x0);
  if (conf == (CONF *)0x0) {
    file = (char *)0x0;
    iVar1 = 0;
joined_r0x00b11004:
    if (filename != (char *)0x0) goto LAB_00b11024;
  }
  else {
    file = filename;
    if ((filename != (char *)0x0) || (file = CONF_get1_default_config_file(), file != (char *)0x0))
    {
      iVar1 = NCONF_load(conf,file,(long *)0x0);
      if (iVar1 < 1) {
        if ((((uint)flags >> 4 & 1) == 0) ||
           (uVar2 = ERR_peek_last_error(), (uVar2 & 0xfff) != 0x72)) {
          iVar1 = 0;
        }
        else {
          ERR_clear_error();
          iVar1 = 1;
        }
      }
      else {
        iVar1 = CONF_modules_load(conf,appname,flags);
      }
      goto joined_r0x00b11004;
    }
    iVar1 = 0;
  }
  CRYPTO_free(file);
LAB_00b11024:
  NCONF_free(conf);
  return iVar1;
}

